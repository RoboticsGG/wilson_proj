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
#include "std_msgs/msg/string.hpp"

void print_memory_info();

void userCallback(std_msgs::msg::String *msg) {
    print_memory_info();
    MROS2_INFO("subscribed msg: '%s'\r\n", msg->data.c_str());
}

void print_memory_info() {
    // Print heap statistics
    mbed_stats_heap_t heap_stats;
    mbed_stats_heap_get(&heap_stats);
    MROS2_INFO("Heap size: %lu / %lu bytes\r", heap_stats.current_size, heap_stats.reserved_size);
    // Current thread stack usage
    mbed_stats_stack_t current_stack;
    mbed_stats_stack_get(&current_stack);
    MROS2_INFO("Current thread stack usage: %lu / %lu\r",
               current_stack.max_size, current_stack.reserved_size);
}


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
  MROS2_INFO("app name: Sub_From_RPI4_V1");

  mros2::init(0, NULL);
  MROS2_DEBUG("mROS 2 initialization is completed");

  mros2::Node node = mros2::Node::create_node("mros2_node");
  mros2::Subscriber sub = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 10, userCallback);

  osDelay(1000);
  MROS2_INFO("ready to pub/sub message\r\n---");

  mros2::spin();
  return 0;
}