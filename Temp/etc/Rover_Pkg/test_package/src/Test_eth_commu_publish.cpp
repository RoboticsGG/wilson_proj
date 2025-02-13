#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <chrono>

using namespace std::chrono_literals;

class EthernetPublisher : public rclcpp::Node {
public:
    EthernetPublisher() : Node("ethernet_publisher"), count_(0) {
        publisher_ = this->create_publisher<std_msgs::msg::String>("to_ros2", 10);
        timer_ = this->create_wall_timer(
            2000ms, std::bind(&EthernetPublisher::timer_callback, this));
    }

private:
    void timer_callback() {
        auto message = std_msgs::msg::String();
        message.data = "Hello from RpiB!";
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        publisher_->publish(message);
    }
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EthernetPublisher>());
    rclcpp::shutdown();
    return 0;
}
