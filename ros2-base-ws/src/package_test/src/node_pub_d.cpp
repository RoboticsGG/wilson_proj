#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

using namespace std::chrono_literals;

void publish_message(const std::string& node_name, int domain_id) {
  // Set the domain ID environment variable.
  setenv("ROS_DOMAIN_ID", std::to_string(domain_id).c_str(), 1);

  rclcpp::init(0, nullptr); // Initialize ROS 2 without argc/argv
  auto node = std::make_shared<rclcpp::Node>(node_name);

  auto publisher = node->create_publisher<std_msgs::msg::String>("topic_dn", 10);

  auto timer_callback = [&]() {
    auto message = std_msgs::msg::String();
    message.data = "Hello from " + node_name + " (Domain " + std::to_string(domain_id) + ")";
    RCLCPP_INFO(node->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher->publish(message);
  };

  auto timer = node->create_wall_timer(500ms, timer_callback);

  rclcpp::spin(node); // Spin the node within this function.
  rclcpp::shutdown();
}

int main(int argc, char * argv[]){

  (void)argc;
  (void)argv;  
  // Create and run the nodes in separate threads.
  std::thread node1_thread(publish_message, "node1", 1);
  std::thread node2_thread(publish_message, "node2", 2);

  node1_thread.join();
  node2_thread.join();

  return 0;
}