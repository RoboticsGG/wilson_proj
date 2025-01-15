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
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

void splitData(std::string cmData);
void frontControl(std::string frontDirection, int diff_degree);
void motorControl(int period_PWM, float dutycycle_PWM, std::string backDirection);

DigitalIn signalPinR(PF_12);
DigitalIn signalPinL(PF_14);

PwmOut DirectPWM(PA_6);
PwmOut MortorRPWM(PE_11);
PwmOut MortorLPWM(PD_15);

DigitalOut MortorFWEN(PE_13);
DigitalOut MortorBWEN(PF_13);

int encoderInA = 0;
int encoderInB = 0;
float duty = 0.00;

std::string frontDirection = "forward";
int frontDegree = 0;
int period_PWM = 0;
int dutycycle_PWM = 0;
float percent_dutycycle = 0.00;
std::string backDirection = "forward";

// std::string commandTemp = "";

void userCallback(std_msgs::msg::String *msg)
{
  //static int count = 0;
  static uint8_t count = 0;
  count ++;
  MROS2_INFO("subscribed msg: '%s'", msg->data.c_str());
  std::string commandReceived = msg->data.c_str();
  
  // if (commandReceived != commandTemp){
  //   splitData(commandReceived);
  //   MROS2_INFO("Update control");
  // }
  
  MROS2_INFO("Count: %s", std::to_string(count).c_str());
}

void splitData(std::string cmData)
{
  commandTemp = cmData;
  std::stringstream ss(cmData);
  std::string token;

  if(std::getline(ss, token, ',')){
    frontDirection = token;
  }
  if(std::getline(ss, token, ',')){
    frontDegree = std::stoi(token);
  }
  if(std::getline(ss, token, ',')){
    period_PWM = std::stoi(token);
  }
  if(std::getline(ss, token, ',')){
    dutycycle_PWM = std::stoi(token);
  }
  if(std::getline(ss, token, ',')){
    backDirection = token;
  }

  frontControl(frontDirection, frontDegree);
  motorControl(period_PWM, dutycycle_PWM, backDirection);
}

void frontControl(std::string frontDirection, int diff_degree)
{
  int degree = 0;
  if (frontDirection == "left")
  {
    degree = 100 - diff_degree;
  }
  else if (frontDirection == "right")
  {
    degree = 100 + diff_degree;
  }
  else if (frontDirection == "forward")
  {
    degree = 100;
  } else {
    degree = 100;
  }
  duty = 0.05f + (degree / 180.0f) * (0.10f - 0.05f); //180=left, 90=center, 0=right
  DirectPWM.period_ms(20);
  DirectPWM.write(duty);
}

void motorControl(int period_PWM, float dutycycle_PWM, std::string backDirection)
{
  percent_dutycycle = dutycycle_PWM/100;
  signalPinR.mode(PullUp);
  signalPinL.mode(PullUp);

  MortorFWEN.write(0);
  MortorBWEN.write(0);

  // MortorRPWM.period_us(20);
  // MortorRPWM.write(0.00f);
  // MortorLPWM.period_us(20);
  // MortorLPWM.write(0.00f);

  if(backDirection == "forward"){
    MortorFWEN.write(1);
    MortorBWEN.write(0);
  } 
  else if (backDirection == "backward"){
    MortorFWEN.write(0);
    MortorBWEN.write(1);
  } else {
    MortorFWEN.write(0);
    MortorBWEN.write(0);
  }

  MortorRPWM.period_us(period_PWM);
  MortorRPWM.write(percent_dutycycle);
  MortorLPWM.period_us(period_PWM);
  MortorLPWM.write(percent_dutycycle);
  
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

  // auto count = 0;
  // while (1)
  // {
  //   auto msg = std_msgs::msg::String();
  //   msg.data = "Hello from " + std::string(MROS2_PLATFORM_NAME) + " onto " + quote(TARGET_NAME) + ": " + std::to_string(count++);
  //   MROS2_INFO("publishing msg: '%s'", msg.data.c_str());
  //   pub.publish(msg);
  //   osDelay(1000);
  // }

  mros2::spin();
  return 0;
}