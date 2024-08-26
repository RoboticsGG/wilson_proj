#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class TextReceiverNode : public rclcpp::Node
{
public:
  TextReceiverNode()
  : Node("text_receiver_node")
  {
    auto qos = rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default)).best_effort();
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "to_linux", qos, std::bind(&TextReceiverNode::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TextReceiverNode>());
  rclcpp::shutdown();
  return 0;
}
