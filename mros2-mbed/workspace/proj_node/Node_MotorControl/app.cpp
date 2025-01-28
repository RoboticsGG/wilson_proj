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

#include "mbed.h"
#include "mros2.h"
#include "mros2-platform.h"
#include "std_msgs/msg/u_int16.hpp"
#include "rovercon_msgs/msg/subrocon.hpp"
#include "rovercon_msgs/msg/mainrocon.hpp"

void userCallback(rovercon_msgs::msg::main_rocon *msg)
{
  MROS2_INFO("subscribed msg main_rocon: fdr_msg=%d, ro_ctrl_msg=%.2f, spd_msg=%d, bdr_msg=%d",
             msg->mainrocon_msg.fdr_msg, msg->mainrocon_msg.ro_ctrl_msg, msg->mainrocon_msg.spd_msg, msg->mainrocon_msg.bdr_msg);
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
  MROS2_INFO("app name: sub_uint16");

  mros2::init(0, NULL);
  MROS2_DEBUG("mROS 2 initialization is completed");

  mros2::Node node = mros2::Node::create_node("mros2_node");
  mros2::Subscriber sub = node.create_subscription<rovercon_msgs::msg::main_rocon>("pub_rocon_angle", 10, userCallback);
  osDelay(1000);
  MROS2_INFO("ready to pub/sub message\r\n---");

  mros2::spin();
  return 0;
}