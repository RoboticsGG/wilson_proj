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
#include <cstdlib>
#include <string>
#include <iostream>

int speed = 0;
string movement = "";
string Direction = "ST";

void userCallback(std_msgs::msg::String *msg){
    MROS2_INFO("subscribed msg: '%s'", msg->data.c_str());
    Direction = msg->data;
}

int main(){
    // signalPinA.mode(PullUp);
    // signalPinB.mode(PullUp); 
    // MortorEN.write(1);

    if (mros2_platform::network_connect()){
        MROS2_ERROR("failed to connect and setup network! aborting...");
        return -1;
    }
    else{
        MROS2_INFO("successfully connect and setup network\r\n---");
    }

    MROS2_INFO("%s start!", MROS2_PLATFORM_NAME);
    MROS2_INFO("app name: NodeMotorControl");

    mros2::init(0, NULL);
    MROS2_DEBUG("mROS2 initialization is completed");

    mros2::Node node = mros2::Node::create_node("mros2_node");
    mros2::Subscriber rovercontrol = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 10, userCallback);
    mros2::Publisher inclination = node.create_publisher<std_msgs::msg::String>("topic_roverinclination", 10);
    mros2::Publisher movefeedback = node.create_publisher<std_msgs::msg::String>("topic_movefeedback", 10);
    

    osDelay(100);
    MROS2_INFO("ready to pub/sub message\r\n---");



    /*while(1){
        parseDirection(Direction, speed, movement);

        if (movement == "FW") {
            MortorRPWM.period_us(50);
            MortorRPWM.write(speed / 100.0f);
            MortorLPWM.period_us(50);
            MortorLPWM.write(0.0f);
        } else if (movement == "BW") {
            MortorRPWM.period_us(50);
            MortorRPWM.write(0.0f);
            MortorLPWM.period_us(50);
            MortorLPWM.write(speed / 100.0f); 
        } else {
            MortorRPWM.period_us(50);
            MortorRPWM.write(0.0f);
            MortorLPWM.period_us(50);
            MortorLPWM.write(0.0f);
        }

        auto msg_incli = std_msgs::msg::String();
        msg_incli.data = "Inclination test";
        MROS2_INFO("Inclination : '%s'", msg_incli.data.c_str());
        inclination.publish(msg_incli);

        auto msg_movefeed = std_msgs::msg::String();
        msg_movefeed.data = "MoveFeedback test";
        MROS2_INFO("MoveFeedback : '%s'", msg_movefeed.data.c_str());
        movefeedback.publish(msg_movefeed);

        osDelay(500);
    }*/

    mros2::spin();
    return 0;
}