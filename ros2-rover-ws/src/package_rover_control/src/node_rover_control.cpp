#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <string>
#include <mutex>
#include <msgs_rovercon/msg/sub_rocon.hpp>
#include <msgs_mainrocon/msg/main_rocon.hpp>
#include <service_ifaces/srv/spd_limit.hpp>

class Node_Rovercontrol : public rclcpp::Node {
public:
    Node_Rovercontrol() : Node("node_bridge") {
        // Initialize context for subscriber (Domain ID 2)
        rclcpp::InitOptions init_options_sub;
        init_options_sub.set_domain_id(2);
        rclcpp::Context::SharedPtr context_sub = std::make_shared<rclcpp::Context>();
        context_sub->init(0, nullptr, init_options_sub);

        rclcpp::NodeOptions node_options_sub;
        node_options_sub.context(context_sub);
        sub_node_ = std::make_shared<rclcpp::Node>("sub_node", node_options_sub);

        spd_service_ = sub_node_->create_service<service_ifaces::srv::SpdLimit>("spd_limit",
            std::bind(&Node_Rovercontrol::handle_spd_request, this, std::placeholders::_1, std::placeholders::_2)
        );

        topic_direct_sub_ = sub_node_->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_direction", 10,
            std::bind(&Node_Rovercontrol::topic_direct_callback, this, std::placeholders::_1)
        );

        topic_cc_rcon_sub_ = sub_node_->create_subscription<std_msgs::msg::Bool>(
            "cc_rcon", 10,
            std::bind(&Node_Rovercontrol::topic_cc_rcon_callback, this, std::placeholders::_1)
        );



        // Initialize context for publisher (Domain ID 5)
        rclcpp::InitOptions init_options_pub;
        init_options_pub.set_domain_id(5);
        rclcpp::Context::SharedPtr context_pub = std::make_shared<rclcpp::Context>();
        context_pub->init(0, nullptr, init_options_pub);

        rclcpp::NodeOptions node_options_pub;
        node_options_pub.context(context_pub);
        pub_node_ = std::make_shared<rclcpp::Node>("pub_node", node_options_pub);

        topic_rocon_pub_ = pub_node_->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol_d5", 10);
        
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized (Subscriber: Domain 2, Publisher: Domain 1)");
        
        executor_.add_node(sub_node_);
        executor_.add_node(pub_node_);
        executor_thread_ = std::thread([this]() { executor_.spin(); });
    }

    ~Node_Rovercontrol() {
        executor_.cancel();
        if (executor_thread_.joinable())
            executor_thread_.join();
    }

private:
    rclcpp::Node::SharedPtr sub_node_;
    rclcpp::Node::SharedPtr pub_node_;
    rclcpp::Service<service_ifaces::srv::SpdLimit>::SharedPtr spd_service_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_direct_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr topic_cc_rcon_sub_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_pub_;
    rclcpp::executors::MultiThreadedExecutor executor_;
    std::thread executor_thread_;

    float ro_ctrl_msg1_ = 0;
    float ro_ctrl_msg2_ = 0;
    //float objblock_msg_;
    uint8_t spd_msg_ = 0;
    bool cc_rcon_msg_ = true;

    std::mutex data_lock_;

    void topic_direct_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg) {
    if (msg->data.size() >= 2) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (msg->data[0] != ro_ctrl_msg1_ || msg->data[1] != ro_ctrl_msg2_) {
            ro_ctrl_msg1_ = msg->data[0];
            ro_ctrl_msg2_ = msg->data[1];
            //objblock_msg_ = msg->data[2];

            //RCLCPP_INFO(this->get_logger(), "Received on topic_direction: x = %.2f, y = %.2f", ro_ctrl_msg1_, ro_ctrl_msg2_);
        }
        
        } else {
            RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_direction.");
            }
        
        Node_Rovercontrol::timer_callback();
    
    }

    void topic_cc_rcon_callback(const std_msgs::msg::Bool::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (msg->data != cc_rcon_msg_) { 
            cc_rcon_msg_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "cc_rcon updated: %s", msg->data ? "TRUE" : "FALSE");
        }   
    }

    void handle_spd_request(const std::shared_ptr<service_ifaces::srv::SpdLimit::Request> request,
                            std::shared_ptr<service_ifaces::srv::SpdLimit::Response> response) {
        std::lock_guard<std::mutex> lock(data_lock_);
        spd_msg_ = request->rover_spd;
        response->spd_result = "Speed Limit set to " + std::to_string(request->rover_spd);
        RCLCPP_INFO(this->get_logger(), "Speed Limit set to %d", request->rover_spd);
    }


    void timer_callback() {
        auto subrocon = msgs_rovercon::msg::SubRocon();
        auto mainrocon = msgs_mainrocon::msg::MainRocon();
        
        {
            std::lock_guard<std::mutex> lock(data_lock_);

            if (cc_rcon_msg_ == true) {
                subrocon.fdr_msg = 2;
                subrocon.ro_ctrl_msg = 0;
                subrocon.spd_msg = 0;
                subrocon.bdr_msg = 0; // 1 = fw, 2 = bw, 0 = stop.
            } else {
                subrocon.fdr_msg = static_cast<uint8_t>(ro_ctrl_msg1_);
                subrocon.ro_ctrl_msg = ro_ctrl_msg2_;
                subrocon.spd_msg = spd_msg_;
                subrocon.bdr_msg = 1;
            }
            mainrocon.mainrocon_msg = subrocon;
        }

        topic_rocon_pub_->publish(mainrocon);

        
        RCLCPP_INFO(this->get_logger(), "Publishing to pub_rovercontrol: [%d, %.2f, %d, %d]", 
                    mainrocon.mainrocon_msg.fdr_msg, 
                    mainrocon.mainrocon_msg.ro_ctrl_msg, 
                    mainrocon.mainrocon_msg.spd_msg, 
                    mainrocon.mainrocon_msg.bdr_msg);
        RCLCPP_INFO(this->get_logger(), "################################################");
  }

};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Node_Rovercontrol>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}