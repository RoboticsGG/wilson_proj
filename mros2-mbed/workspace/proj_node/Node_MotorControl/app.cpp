#include "mros2.h"
#include "mros2-platform.h"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int16.hpp"

void userCallback(std_msgs::msg::UInt16 *msg){
    MROS2_INFO("sub msg: '%d'", msg->data);
}

int main(){
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

    mros2::Node node = mros2::Node::create_node("mros2_node")
    mros2::Publisher inclination = node.create_publisher<std_msgs::msg::String>("topic_roverinclination", 10);
    mros2::Publisher movefeedback = node.create_publisher<std_msgs::msg::String>("topic_movefeedback", 10);
    mros2::Subscriber rovercontrol = node.create_subscription<std_msgs::msg::UInt16>("pub_rovercontrol", 10, userCallback)

    osDelay(100);
    MROS2_INFO("ready to pub/sub message\r\n---");

    auto count = 0;
    while(1){
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