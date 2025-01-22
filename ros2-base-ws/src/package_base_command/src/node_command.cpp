#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command") {
        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit_t", 10);
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(250), 
            std::bind(&Node_Command::publish_parameters, this)
        );
        RCLCPP_INFO(this->get_logger(), "Node initialized.");
    }

private:
    void publish_parameters() {
        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speedlimit_);
        RCLCPP_INFO(this->get_logger(), "Publishing: %s", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);
    }

    uint8_t speedlimit_ = 50; // Static value for debugging
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}
