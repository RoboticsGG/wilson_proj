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
#include <sstream>
#include <string>
#include <tuple>

// void frontControl(std::string frontDirection, uint8_t diff_degree);
// void backControl(std::string backDirection);
// void parseCommandData(const std::string& cmData);
// void motorDrive(float duty,uint8_t EN_A,uint8_t EN_B ,uint8_t period_PWM, float percent_dutycycle);
std::tuple<std::string, uint8_t, uint8_t, std::string> parseCommandData(const std::string& cmData);
float frontControl(const std::string& frontDirection, uint8_t diff_degree);
std::tuple<float, uint8_t, uint8_t> backControl(const std::string& backDirection, uint8_t dutycycle_PWM);
void motorDrive(float duty, uint8_t EN_A, uint8_t EN_B, uint8_t period_PWM, float percent_dutycycle);
void print_memory_info();

// DigitalIn signalPinR(PF_12);
// DigitalIn signalPinL(PF_14);

PwmOut DirectPWM(PA_6);
PwmOut MortorRPWM(PE_11);
PwmOut MortorLPWM(PD_15);

DigitalOut MortorFWEN(PE_13);
DigitalOut MortorBWEN(PF_13);

// uint8_t encoderInA = 0;
// uint8_t encoderInB = 0;


uint8_t servo_center = 100;

void userCallback(std_msgs::msg::String *msg) {
    uint8_t period_PWM = 20;
    //print_memory_info();
    MROS2_INFO("subscribed msg: '%s'", msg->data.c_str());
    // std::string commandReceived = msg->data.c_str();
    // auto [frontDirection, frontDegree, dutycycle_PWM, backDirection] = parseCommandData(commandReceived);
    // float dutycy = frontControl(frontDirection, frontDegree);
    // auto [percent_dutycycle, EN_A, EN_B] = backControl(backDirection, dutycycle_PWM);

    motorDrive(0.05, 1, 0, period_PWM, 20);
    //motorDrive(dutycy, EN_A, EN_B, period_PWM, percent_dutycycle);
}

std::tuple<std::string, uint8_t, uint8_t, std::string> parseCommandData(const std::string& cmData) {
    std::string frontDirection = "fw";
    uint8_t frontDegree = 0;
    uint8_t dutycycle_PWM = 0;
    std::string backDirection = "fw";

    std::stringstream ss(cmData);
    std::string token;

    if (std::getline(ss, token, ',')) {
        frontDirection = token;
    }
    if (std::getline(ss, token, ',')) {
        frontDegree = static_cast<uint8_t>(std::stoi(token));
    }
    if (std::getline(ss, token, ',')) {
        dutycycle_PWM = static_cast<uint8_t>(std::stoi(token));
    }
    if (std::getline(ss, token, ',')) {
        backDirection = token;
    }

    return {frontDirection, frontDegree, dutycycle_PWM, backDirection};
}

float frontControl(const std::string& frontDirection, uint8_t diff_degree) {
    uint8_t degree = 0;

    if (frontDirection == "lf") {
        degree = servo_center - diff_degree;
    } else if (frontDirection == "ri") {
        degree = servo_center + diff_degree;
    } else {
        degree = servo_center;
    }

    return 0.05f + (degree / 180.0f) * (0.10f - 0.05f); 
}

std::tuple<float, uint8_t, uint8_t> backControl(const std::string& backDirection, uint8_t dutycycle_PWM) {
    uint8_t EN_A = 0;
    uint8_t EN_B = 0;
    float cal_percent_dutycycle = dutycycle_PWM / 100.0f;

    if (backDirection == "fw") {
        EN_A = 1;
        EN_B = 0;
    } else if (backDirection == "bw") {
        EN_A = 0;
        EN_B = 1;
    } else {
        EN_A = 0;
        EN_B = 0;
    }
    return {cal_percent_dutycycle, EN_A, EN_B};
}

void motorDrive(float duty,uint8_t EN_A,uint8_t EN_B ,uint8_t period_PWM, float percent_dutycycle){
  DirectPWM.period_ms(20);
  DirectPWM.write(duty);
  MortorFWEN.write(EN_A);
  MortorBWEN.write(EN_B);
  MortorRPWM.period_us(period_PWM);
  MortorRPWM.write(percent_dutycycle);
  MortorLPWM.period_us(period_PWM);
  MortorLPWM.write(percent_dutycycle);
}

// void print_memory_info() {
//     // allocate enough room for every thread's stack statistics
//     int cnt = osThreadGetCount();
//     mbed_stats_stack_t *stats = (mbed_stats_stack_t*) malloc(cnt * sizeof(mbed_stats_stack_t));

//     cnt = mbed_stats_stack_get_each(stats, cnt);
//     for (int i = 0; i < cnt; i++) {
//         MROS2_INFO("Thread: 0x%lX, Stack size: %lu / %lu\r\n", stats[i].thread_id, stats[i].max_size, stats[i].reserved_size);
//     }
//     free(stats);

//     // Grab the heap statistics
//     mbed_stats_heap_t heap_stats;
//     mbed_stats_heap_get(&heap_stats);
//     MROS2_INFO("Heap size: %lu / %lu bytes\r\n", heap_stats.current_size, heap_stats.reserved_size);
// }

void print_memory_info() {
    // Print stack statistics for all threads
    int cnt = osThreadGetCount();
    mbed_stats_stack_t* stats = (mbed_stats_stack_t*)malloc(cnt * sizeof(mbed_stats_stack_t));

    cnt = mbed_stats_stack_get_each(stats, cnt);
    for (int i = 0; i < cnt; i++) {
        MROS2_INFO("Thread: 0x%lX, Stack size: %lu / %lu\r\n",
                   stats[i].thread_id, stats[i].max_size, stats[i].reserved_size);
    }
    free(stats);

    // Print heap statistics
    mbed_stats_heap_t heap_stats;
    mbed_stats_heap_get(&heap_stats);
    MROS2_INFO("Heap size: %lu / %lu bytes\r\n", heap_stats.current_size, heap_stats.reserved_size);

    // Current thread stack usage
    mbed_stats_stack_t current_stack;
    mbed_stats_stack_get(&current_stack);
    MROS2_INFO("Current thread stack usage: %lu / %lu\r\n",
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
  //mros2::Publisher pub = node.create_publisher<std_msgs::msg::String>("to_linux", 10);
  mros2::Subscriber sub = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 10, userCallback);

  osDelay(1000);
  MROS2_INFO("ready to pub/sub message\r\n---");

  mros2::spin();
  return 0;
}