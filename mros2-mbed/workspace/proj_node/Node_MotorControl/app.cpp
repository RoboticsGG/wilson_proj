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

void splitData(std::string cmData);
void frontControl(std::string frontDirection, uint8_t diff_degree);
void motorControl(int period_PWM, float dutycycle_PWM, std::string backDirection);
void parseCommandData(const std::string& cmData, const char*& outFrontDir, uint8_t& outFrontAng, uint8_t& outDutyCycle, const char*& outBackDir);

DigitalIn signalPinR(PF_12);
DigitalIn signalPinL(PF_14);

PwmOut DirectPWM(PA_6);
PwmOut MortorRPWM(PE_11);
PwmOut MortorLPWM(PD_15);

DigitalOut MortorFWEN(PE_13);
DigitalOut MortorBWEN(PF_13);

uint8_t encoderInA = 0;
uint8_t encoderInB = 0;
float duty = 0.00f;

std::string frontDirection = "fw";
uint8_t servo_center = 100;
uint8_t frontDegree = 0;
uint8_t period_PWM = 20;
uint8_t dutycycle_PWM = 0;
float percent_dutycycle = 0.00f;

std::string backDirection = "fw";
uint8_t EN_A = 0;
uint8_t EN_B = 0;

// std::string commandTemp = "";

void userCallback(std_msgs::msg::String *msg)
{
  //MROS2_INFO("subscribed msg: '%s'", msg->data.c_str());
  std::string commandReceived = msg->data.c_str();

  const char* parsedFrontDir = "fw";
  uint8_t parsedFrontAng = 0;

  uint8_t parsedDutyCycle = 0;
  const char* parsedBackDir = "fw";

  parseCommandData(commandReceived, parsedFrontDir, parsedFrontAng, parsedDutyCycle, parsedBackDir);

  if ((frontDirection != parsedFrontDir) || (frontDegree != parsedFrontAng)) {
    frontDirection = parsedFrontDir;
    frontDegree = parsedFrontAng;
    frontControl(frontDirection, frontDegree);
  } 

  if ((dutycycle_PWM != parsedDutyCycle) || (backDirection != parsedBackDir)) {
    dutycycle_PWM = parsedDutyCycle;
    backDirection = parsedBackDir;
    motorControl(period_PWM, dutycycle_PWM, backDirection);
  }
}

void parseCommandData(const std::string& cmData, const char*& outFrontDir, uint8_t& outFrontAng, uint8_t& outDutyCycle, const char*& outBackDir)
{
    std::stringstream ss(cmData);
    std::string token;

    outFrontDir = "fw";
    outFrontAng = 0;
    outDutyCycle = 0;
    outBackDir = "fw";

    if (std::getline(ss, token, ',')) {
        outFrontDir = token.c_str();  
    }
    if (std::getline(ss, token, ',')) {
        outFrontAng = static_cast<uint8_t>(std::stoi(token));
    }
    if (std::getline(ss, token, ',')) {
        outDutyCycle = static_cast<uint8_t>(std::stoi(token));
    }
    if (std::getline(ss, token, ',')) {
        outBackDir = token.c_str(); 
    }
    //MROS2_INFO("parsed frontDir: '%s', frontAng: '%d', dutyCycle: '%d', backDir: '%s'", outFrontDir, outFrontAng, outDutyCycle, outBackDir);
}

void frontControl(std::string frontDirection, uint8_t diff_degree)
{
  uint8_t degree = 0;
  if (frontDirection == "lf")
  {
    degree = servo_center - diff_degree;
  }
  else if (frontDirection == "ri")
  {
    degree = servo_center + diff_degree;
  }
  else if (frontDirection == "fw")
  {
    degree = servo_center;
  } else {
    degree = servo_center;
  }
  duty = 0.05f + (degree / 180.0f) * (1.00f - 0.05f); //180=left, 90=center, 0=right
  MROS2_INFO("Duty: '%f'", duty);
  DirectPWM.period_ms(20);
  DirectPWM.write(duty);
}

void motorControl(int period_PWM, float dutycycle_PWM, std::string backDirection)
{
  percent_dutycycle = dutycycle_PWM/100;
  signalPinR.mode(PullUp);
  signalPinL.mode(PullUp);

  if(backDirection == "fw"){
    EN_A = 1;
    EN_B = 0;
  } 
  else if (backDirection == "bw"){
    EN_A = 0;
    EN_B = 1;
  } else {
    EN_A = 0;
    EN_B = 0;
  }

  MortorFWEN.write(EN_A);
  MortorBWEN.write(EN_B);
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
  mros2::Subscriber sub = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 5, userCallback);

  osDelay(1000);
  MROS2_INFO("ready to pub/sub message\r\n---");

  mros2::spin();
  return 0;
}