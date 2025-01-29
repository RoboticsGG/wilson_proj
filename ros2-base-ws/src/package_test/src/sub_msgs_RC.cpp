#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "msgs_rovercon/msg/sub_rocon.hpp"
#include "msgs_mainrocon/msg/main_rocon.hpp"

using std::placeholders::_1;

class Subscriber : public rclcpp::Node
{
public:
  Subscriber() : Node("sub_mainrocon")
  {
    subscriber_ = this->create_subscription<msgs_mainrocon::msg::MainRocon>("pub_rovercontrol", rclcpp::QoS(10).best_effort(), std::bind(&Subscriber::topic_callback, this, _1));
  }

private:
  void topic_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr message) const
  {
    RCLCPP_INFO(this->get_logger(), "Subscribed msg: fdr_msg=%d, ro_ctrl_msg=%.2f, spd_msg=%d, bdr_msg=%d", message->mainrocon_msg.fdr_msg, message->mainrocon_msg.ro_ctrl_msg, message->mainrocon_msg.spd_msg, message->mainrocon_msg.bdr_msg);
  }
  rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr subscriber_;
};


int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Subscriber>());
  rclcpp::shutdown();
  return 0;
}