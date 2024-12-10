#include "mros2.h"
#include "mros2-platform.h"
#include "std_msgs/msg/string.hpp"

void userCallback(std_msgs::msg::String *msg)
{
  MROS2_INFO("subscribed msg: '%s'", msg->data.c_str());
}

int main()
{
  /* connect to the network */
  if (mros2_platform::network_connect())
  {
    MROS2_ERROR("failed to connect and setup network! aborting,,,");
    return -1;
  }
  else
  {
    MROS2_INFO("successfully connect and setup network\r\n---");
  }

  MROS2_INFO("%s start!", MROS2_PLATFORM_NAME);
  MROS2_INFO("app name: node_motorcontrol");

  mros2::init(0, NULL);
  MROS2_DEBUG("mROS 2 initialization is completed");

  mros2::Node node = mros2::Node::create_node("mros2_node");
  mros2::Subscribe rovercontrol = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 10, userCallback);
  mros2::Publisher inclination = node.create_publisher<std_msgs::msg::String>("topic_roverinclination", 10);
  mros2::Publisher movefeedback = node.create_publisher<std_msgs::msg::String>("topic_movefeedback", 10);
  //mros2::Publisher pub = node.create_publisher<std_msgs::msg::String>("to_linux", 10);
  //mros2::Subscriber sub = node.create_subscription<std_msgs::msg::String>("to_stm", 10, userCallback);

  osDelay(100);
  MROS2_INFO("ready to pub/sub message\r\n---");

  auto count = 0;
  while (1)
  {
    auto msg_movefeed = std_msgs::msg::String();
    msg_movefeed.data = "MoveFeedback test";
    MROS2_INFO("MoveFeedback : '%s'", msg_movefeed.data.c_str());
    movefeedback.publish(msg_movefeed);
    osDelay(500);
    auto msg_incli = std_msgs::msg::String();
    msg_incli.data = "Inclination test";
    MROS2_INFO("Inclination : '%s'", msg_incli.data.c_str());
    inclination.publish(msg_incli);

    // auto msg = std_msgs::msg::String();
    // msg.data = "Hello from " + std::string(MROS2_PLATFORM_NAME) + " onto " + quote(TARGET_NAME) + ": " + std::to_string(count++);
    // MROS2_INFO("publishing msg: '%s'", msg.data.c_str());
    // pub.publish(msg);
    osDelay(1000);
  }

  mros2::spin();
  return 0;
}