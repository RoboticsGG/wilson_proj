#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <cstdlib>
#include <memory>
#include <string>
#include <msgs_mainrocon/msg/main_rocon.hpp>

class DomainBridge : public rclcpp::Node {
public:
    DomainBridge() : Node("domain_bridge") {
        // Set first domain ID (Subscriber)
        setenv("ROS_DOMAIN_ID", "2", 1);
        rclcpp::init(0, nullptr);
        
        // Subscriber in Domain 2
        sub_ = this->create_subscription<msgs_mainrocon::msg::MainRocon>(
            "pub_rovercontrol", 10,
            std::bind(&DomainBridge::message_callback, this, std::placeholders::_1)
        );

        RCLCPP_INFO(this->get_logger(), "Bridge Node started in Domain 2...");
    }

private:
    rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr sub_;
    rclcpp::Publisher<msgs_mainrocon::msg::MainRocon>::SharedPtr pub_;

    void message_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received Data: [%d, %.2f, %d, %d]", 
                    msg->mainrocon_msg.fdr_msg, 
                    msg->mainrocon_msg.ro_ctrl_msg, 
                    msg->mainrocon_msg.spd_msg, 
                    msg->mainrocon_msg.bdr_msg);

        // Switch to Domain 1 (Publisher)
        setenv("ROS_DOMAIN_ID", "1", 1);
        rclcpp::shutdown();  // Shutdown the current ROS 1 instance
        rclcpp::init(0, nullptr);  // Reinitialize ROS 1 in new domain

        auto node = std::make_shared<rclcpp::Node>("domain_bridge_publisher");
        pub_ = node->create_publisher<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol", 10);

        pub_->publish(*msg);
        RCLCPP_INFO(node->get_logger(), "Forwarded to Domain 2");

        rclcpp::spin_some(node);
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto bridge_node = std::make_shared<DomainBridge>();
    rclcpp::spin(bridge_node);
    rclcpp::shutdown();
    return 0;
}
