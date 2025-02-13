#include <rclcpp/rclcpp.hpp>
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

// class Motors_Rovercontrol {
// public:
//     int test(int a, int b){
//         return a+b; //เขียนประมวลผลค่าเพื่อควบคุม rover เผื่อถ้าบน mbed เขียนยาก
//     }
// };

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
        RCLCPP_INFO(this->get_logger(), "Version : A");
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    rclcpp::Service<service_ifaces::srv::SpdLimit>::SharedPtr spd_service_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_direct_sub_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr topic_cc_rcon_sub_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    //std::vector<float> ro_ctrl_msg_;
    float ro_ctrl_msg1_;
    float ro_ctrl_msg2_;
    uint8_t spd_msg_;
    bool cc_rcon_msg_;

    std::mutex data_lock_;

    void topic_direct_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg) {
    if (msg->data.size() >= 2) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (msg->data[0] != ro_ctrl_msg1_ || msg->data[1] != ro_ctrl_msg2_) {
            ro_ctrl_msg1_ = msg->data[0];
            ro_ctrl_msg2_ = msg->data[1];
            //RCLCPP_INFO(this->get_logger(), "Received on topic_direction: x = %.2f, y = %.2f", ro_ctrl_msg1_, ro_ctrl_msg2_);
        }
    } else {
        RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_direction.");
        }
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
    rclcpp::spin(std::make_shared<Node_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}