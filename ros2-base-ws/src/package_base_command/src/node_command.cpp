#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <cstdlib>
#include <ctime>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command") {
    

        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::UInt8>("topic_speedlimit_t", 10);
        topic_destination_publisher_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("topic_destination_t", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1), 
            std::bind(&Node_Command::publish_parameters, this)
        );

        RCLCPP_INFO(this->get_logger(), "Version : A");
    }

private:
    uint8_t generate_random_speedlimit() {
        return static_cast<uint8_t>(10 + std::rand() % 90); // Generate random number between 10 and 99
    }

    void publish_parameters() {
        speedlimit_ = generate_random_speedlimit();
        auto speed_message = std_msgs::msg::UInt8();
        speed_message.data = speedlimit_;
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);

    }

    uint8_t speedlimit_;
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}