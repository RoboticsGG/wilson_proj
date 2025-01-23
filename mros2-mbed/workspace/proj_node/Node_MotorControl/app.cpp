/* mros2 example
 * Copyright (c) 2022 mROS-base
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mros2.h"
#include "mros2-platform.h"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int16.hpp"
#include "std_msgs/msg/float32.hpp"
#include <cstdlib>

// void testCallback(std_msgs::msg::String *msg);
// void rocon_FdirectCallback(std_msgs::msg::UInt16 *msg);
// void rocon_angleCallback(std_msgs::msg::Float32 *msg);
// void rocon_speedCallback(std_msgs::msg::UInt16 *msg);
// void rocon_BdirectCallback(std_msgs::msg::UInt16 *msg);

void testCallback(std_msgs::msg::String *msg)
{
  MROS2_INFO("subscribed msg: '%s'\r\n", msg->data.c_str());
}

// void rocon_FdirectCallback(std_msgs::msg::UInt16 *msg) {
//     MROS2_INFO("subscribed Front Direct msg: '%d'\r\n", msg->data);
// }
// void rocon_angleCallback(std_msgs::msg::Float32 *msg) {
//     MROS2_INFO("subscribed Angle msg: '%f'\r\n", msg->data);
// }
// void rocon_speedCallback(std_msgs::msg::UInt16 *msg) {
//     MROS2_INFO("subscribed Speed msg: '%d'\r\n", msg->data);
// }
// void rocon_BdirectCallback(std_msgs::msg::UInt16 *msg) {
//     MROS2_INFO("subscribed Back Direct msg: '%d'\r\n", msg->data);
// }

int main()
{
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
  MROS2_INFO("app name: Sub_From_RPI4_V2");

  mros2::init(0, NULL);
  MROS2_DEBUG("mROS 2 initialization is completed");

  mros2::Node node = mros2::Node::create_node("mros2_node");
  mros2::Subscriber sub = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 10, testCallback);
  //mros2::Subscriber sub_Fdirect = node.create_subscription<std_msgs::msg::UInt16>("pub_rocon_Fdirec", 10, rocon_FdirectCallback);
  //mros2::Subscriber sub_angle = node.create_subscription<std_msgs::msg::Float32>("pub_rocon_angle", 10, rocon_angleCallback);
  //mros2::Subscriber sub_speed = node.create_subscription<std_msgs::msg::UInt16>("pub_rocon_speed", 10, rocon_speedCallback);
  //mros2::Subscriber sub_Bdirect = node.create_subscription<std_msgs::msg::UInt16>("pub_rocon_Bdirec", 10, rocon_BdirectCallback);

  osDelay(1000);
  MROS2_INFO("ready to pub/sub message\r\n---");

  mros2::spin();
  return 0;
}

