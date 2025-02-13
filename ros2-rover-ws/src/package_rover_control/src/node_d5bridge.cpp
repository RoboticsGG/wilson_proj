#include <rclcpp/rclcpp.hpp>
#include <chrono>
#include <memory>
#include <mutex>
#include <msgs_rovercon/msg/sub_rocon.hpp>
#include <msgs_mainrocon/msg/main_rocon.hpp>

class Node_D5Bridge : public rclcpp::Node {
public:
    Node_D5Bridge() : Node("node_d5bridge") {
        topic_rocon_pub_ = this->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol", 10);

        topic_rocon_sub_ = this->create_subscription<msgs_mainrocon::msg::MainRocon>(
            "pub_rovercontrol_d5", 10, 
            std::bind(&Node_D5Bridge::topic_callback, this, std::placeholders::_1)
        );

        timer_ = this->create_wall_timer(
            std::chrono::seconds(0.7), 
            std::bind(&Node_D5Bridge::timer_callback, this)
        );

        RCLCPP_INFO(this->get_logger(), "Node initialized: Listening to 'pub_rovercontrol' and Republishing to 'pub_rovercontrol_way1'");
    }

private:
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_pub_;
    rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr topic_rocon_sub_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    std::mutex data_lock_;
    msgs_mainrocon::msg::MainRocon latest_msg_;  
    bool msg_received_ = false; 


    void topic_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
        latest_msg_ = *msg;  
        msg_received_ = true;

        RCLCPP_INFO(this->get_logger(), "Received from 'pub_rovercontrol_d5': [fdr_msg: %d, ro_ctrl_msg: %.2f, spd_msg: %d, bdr_msg: %d]",
                    msg->mainrocon_msg.fdr_msg, 
                    msg->mainrocon_msg.ro_ctrl_msg, 
                    msg->mainrocon_msg.spd_msg, 
                    msg->mainrocon_msg.bdr_msg);
    }

    void timer_callback() {
        std::lock_guard<std::mutex> lock(data_lock_);
        
        if (msg_received_) {
            topic_rocon_pub_->publish(latest_msg_);
            
            RCLCPP_INFO(this->get_logger(), "Republished to 'pub_rovercontrol': [fdr_msg: %d, ro_ctrl_msg: %.2f, spd_msg: %d, bdr_msg: %d]",
                        latest_msg_.mainrocon_msg.fdr_msg, 
                        latest_msg_.mainrocon_msg.ro_ctrl_msg, 
                        latest_msg_.mainrocon_msg.spd_msg, 
                        latest_msg_.mainrocon_msg.bdr_msg);
        } else {
            RCLCPP_WARN(this->get_logger(), "No message received from 'pub_rovercontrol' yet.");
        }
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_D5Bridge>());
    rclcpp::shutdown();
    return 0;
}
