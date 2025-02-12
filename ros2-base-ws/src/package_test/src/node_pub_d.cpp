#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <chrono>
#include <memory>
#include <string>

using namespace std::chrono_literals;

class PubNode : public rclcpp::Node {
public:
    PubNode(const std::string& name, int domain_id)
        : Node(name) {
        auto publisher = this->create_publisher<std_msgs::msg::String>("topic_dn", 10);

        auto timer_callback = [publisher, name, domain_id]() {
            auto message = std_msgs::msg::String();
            message.data = "Hello from " + name + " (Domain " + std::to_string(domain_id) + ")";
            RCLCPP_INFO(rclcpp::get_logger(name), "Publishing: '%s'", message.data.c_str());
            publisher->publish(message);
        };

        timer_ = this->create_wall_timer(500ms, timer_callback);
    }

private:
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);  // Initialize ROS 2 only once

    auto node1 = std::make_shared<PubNode>("node1", 1);
    auto node2 = std::make_shared<PubNode>("node2", 2);

    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node1);
    executor.add_node(node2);

    executor.spin();  // Run both nodes in the same process
    rclcpp::shutdown();

    return 0;
}
