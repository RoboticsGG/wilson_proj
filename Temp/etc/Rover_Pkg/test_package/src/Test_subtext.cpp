#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

class Echoreplyer : public rclcpp::Node
{
public:
  // Constructor to initialize the node and create the subscriber
  Echoreplyer() : Node("test_sub_node")
  {
    // Creating a subscriber to the "to_linux" topic with best-effort QoS
    subscriber_ = this->create_subscription<std_msgs::msg::String>(
      "to_linux", 
      rclcpp::QoS(10).best_effort(),  // Best-effort QoS (non-reliable delivery)
      std::bind(&Echoreplyer::topic_callback, this, _1)); // Bind callback function
  }
  
private:
  // Callback for subscriber when a message is received
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    // Logging the subscribed message
    RCLCPP_INFO(this->get_logger(), "Subscribed to to_linux: '%s'", msg->data.c_str());
  }
  
  // Subscriber object to manage the subscription
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char * argv[])
{
  // Initialize the ROS 2 system
  rclcpp::init(argc, argv);

  // Create and spin the node
  rclcpp::spin(std::make_shared<Echoreplyer>());

  // Shutdown ROS 2
  rclcpp::shutdown();

  return 0;
}
