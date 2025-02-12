#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <msgs_mainrocon/msg/main_rocon.hpp>
#include <msgs_rovercon/msg/sub_rocon.hpp>

using std::placeholders::_1;

class Subscriber : public rclcpp::Node {
public:
  Subscriber() : Node("mros2_sub") {
    subscription_ = this->create_subscription<msgs_mainrocon::msg::MainRocon>(
      "pub_rovercontrol_d1", 10, std::bind(&Subscriber::topic_callback, this, std::placeholders::_1));

    }
private:
  void topic_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received on /pub_rovercontrol_d1");

    auto new_mainmsg = msgs_mainrocon::msg::MainRocon();
    auto new_msg = msgs_rovercon::msg::SubRocon();

    new_msg.fdr_msg = msg->mainrocon_msg.fdr_msg;
    new_msg.ro_ctrl_msg = msg->mainrocon_msg.ro_ctrl_msg;
    new_msg.spd_msg = msg->mainrocon_msg.spd_msg;
    new_msg.bdr_msg = msg->mainrocon_msg.bdr_msg;

    new_mainmsg.mainrocon_msg = new_msg;

    RCLCPP_INFO(this->get_logger(), "Forwarded message to /pub_rovercontrol_d1: [%d, %.2f, %d, %d]", 
        new_mainmsg.mainrocon_msg.fdr_msg, 
        new_mainmsg.mainrocon_msg.ro_ctrl_msg, 
        new_mainmsg.mainrocon_msg.spd_msg, 
        new_mainmsg.mainrocon_msg.bdr_msg);
    }
    rclcpp::Node::SharedPtr sub_node_;
    rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr subscription_;
};


int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Subscriber>());
  rclcpp::shutdown();
  return 0;
}