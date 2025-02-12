#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include "service_ifaces/srv/spd_limit.hpp"
#include "msgs_mainrocon/msg/main_rocon.hpp"
#include "msgs_rovercon/msg/sub_rocon.hpp"
#include <mutex>
#include <thread>

class Node_Rovercontrol : public rclcpp::Node {
public:
    Node_Rovercontrol() : Node("node_rovercontrol") {
        spd_service_ = this->create_service<service_ifaces::srv::SpdLimit>("spd_limit",
            std::bind(&Node_Rovercontrol::handle_spd_request, this, std::placeholders::_1, std::placeholders::_2)
        );

        topic_direct_sub_ = this->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_direction", 10,
            std::bind(&Node_Rovercontrol::topic_direct_callback, this, std::placeholders::_1)
        );

        topic_cc_rcon_sub_ = this->create_subscription<std_msgs::msg::Bool>(
            "cc_rcon", 10,
            std::bind(&Node_Rovercontrol::topic_cc_rcon_callback, this, std::placeholders::_1)
        );

        topic_rocon_pub_ = this->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2), 
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );
    }

private:
    rclcpp::Service<service_ifaces::srv::SpdLimit>::SharedPtr spd_service_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_direct_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr topic_cc_rcon_sub_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    float ro_ctrl_msg1_;
    float ro_ctrl_msg2_;
    uint8_t spd_msg_;
    bool cc_rcon_msg_;
    std::mutex data_lock_;

    void topic_direct_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg) {
        if (msg->data.size() >= 2) {
            std::lock_guard<std::mutex> lock(data_lock_);
            ro_ctrl_msg1_ = msg->data[0];
            ro_ctrl_msg2_ = msg->data[1];
        }
    }

    void topic_cc_rcon_callback(const std_msgs::msg::Bool::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
        cc_rcon_msg_ = msg->data;
    }

    void handle_spd_request(const std::shared_ptr<service_ifaces::srv::SpdLimit::Request> request,
                            std::shared_ptr<service_ifaces::srv::SpdLimit::Response> response) {
        std::lock_guard<std::mutex> lock(data_lock_);
        spd_msg_ = request->rover_spd;
        response->spd_result = "Speed Limit set to " + std::to_string(request->rover_spd);
    }

    void timer_callback() {
        auto subrocon = msgs_rovercon::msg::SubRocon();
        auto mainrocon = msgs_mainrocon::msg::MainRocon();
        {
            std::lock_guard<std::mutex> lock(data_lock_);
            subrocon.fdr_msg = cc_rcon_msg_ ? 2 : static_cast<uint8_t>(ro_ctrl_msg1_);
            subrocon.ro_ctrl_msg = cc_rcon_msg_ ? 0 : ro_ctrl_msg2_;
            subrocon.spd_msg = cc_rcon_msg_ ? 0 : spd_msg_;
            subrocon.bdr_msg = cc_rcon_msg_ ? 0 : 1;
            mainrocon.mainrocon_msg = subrocon;
        }
        topic_rocon_pub_->publish(mainrocon);
    }
};

class NodeBridge : public rclcpp::Node {
public:
    NodeBridge() : Node("node_bridge") {
        rclcpp::NodeOptions options;
        options.arguments({"--ros-args", "--remap", "__ns:=/", "--remap", "__node:=bridge_node"});
        
        subscription_ = this->create_subscription<msgs_mainrocon::msg::MainRocon>(
            "pub_rovercontrol", 10, std::bind(&NodeBridge::topic_callback, this, std::placeholders::_1));

        publisher_ = this->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol_d1", 10);
    }

private:
    void topic_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
        auto new_mainmsg = msgs_mainrocon::msg::MainRocon();
        new_mainmsg.mainrocon_msg = msg->mainrocon_msg;
        publisher_->publish(new_mainmsg);
    }

    rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr subscription_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr publisher_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto node_rovercontrol = std::make_shared<Node_Rovercontrol>();
    auto node_bridge = std::make_shared<NodeBridge>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node_rovercontrol);
    executor.add_node(node_bridge);
    executor.spin();
    rclcpp::shutdown();
    return 0;
}
