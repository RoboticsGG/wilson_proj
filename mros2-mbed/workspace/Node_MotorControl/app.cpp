#include "mros2.h"
#include "mros2-platform.h"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int16.hpp"
#include <string>
#include <iostream>
#include "mbed.h"

using namespace std;

DigitalIn signalPinA(PF_13);
DigitalIn signalPinB(PF_14);

PwmOut MortorRPWM(PE_11);
PwmOut MortorLPWM(PD_15);

DigitalOut MortorEN(PE_13);

int encoderInA = 0;
int encoderInB = 0;

string Direction = "ST";

void parseDirection(const string& direction, int& speed, string& movement) {
    size_t commaPos = direction.find(',');
    if (commaPos != string::npos) {
        speed = stoi(direction.substr(0, commaPos)); 
        movement = direction.substr(commaPos + 1);    
    }
}

void userCallback(std_msgs::msg::String *msg){
    msg_received = msg->data;
    MROS2_INFO("sub msg: '%s'", msg_received.c_str());
    Direction = msg->data;
}

int main(){
    signalPinA.mode(PullUp);
    signalPinB.mode(PullUp); 
    MortorEN.write(1);

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
    mros2::Publisher inclination = node.create_publisher<std_msgs::msg::String>("topic_roverinclination", 10);
    mros2::Publisher movefeedback = node.create_publisher<std_msgs::msg::String>("topic_movefeedback", 10);
    mros2::Subscriber rovercontrol = node.create_subscription<std_msgs::msg::String>("pub_rovercontrol", 10, userCallback);

    osDelay(100);
    MROS2_INFO("ready to pub/sub message\r\n---");

    int speed = 0;
    string movement = "";

    while(1){
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
        movefeedback.data(msg_movefeed);

        osDelay(500);
    }

    mros2::spin();
    return 0;
}