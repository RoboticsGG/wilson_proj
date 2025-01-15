#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp>
#include <sstream>
#include <vector>
#include <mutex>

class Motors_Rovercontrol {
public:
    int test(int a, int b){
        return a+b; //เขียนประมวลผลค่าเพื่อควบคุม rover เผื่อถ้าบน mbed เขียนยาก
    }
};

class Node_Rovercontrol : public rclcpp::Node {
public:
    Node_Rovercontrol() : Node("node_rovercontrol") {
        topic_speedlimit_subscription_ = this->create_subscription<std_msgs::msg::String>(
            "topic_speedlimit", 9,
            std::bind(&Node_Rovercontrol::topic_speedlimit_callback, this, std::placeholders::_1)
        );

        topic_destination_subscription_ = this->create_subscription<std_msgs::msg::UInt16MultiArray>(
            "topic_destination", 8,
            std::bind(&Node_Rovercontrol::topic_destination_callback, this, std::placeholders::_1)
        );

        topic_direction_subscription_ = this->create_subscription<std_msgs::msg::String>(
            "topic_direction", 9,
            std::bind(&Node_Rovercontrol::topic_direction_callback, this, std::placeholders::_1)
        );

        // topic_rovercontrol_subscription_ = this->create_subscription<std_msgs::msg::String>(
        //     "topic_rovercontrol", 9,
        //     std::bind(&Node_Rovercontrol::topic_rovercontrol_callback, this, std::placeholders::_1)
        // );

        //topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::Int32>("pub_rovercontrol", 10);
        topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_motorcontrol", 7);
        // topic_testcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_testcontrol", 2);
        topic_rovercontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_rovercontrol", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2),  // Set interval to 1 second
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );
        RCLCPP_INFO(this->get_logger(), "Version : A");
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_direction_callback(const std_msgs::msg::String::SharedPtr msg){
        if (rovercontrol_message_ != msg->data){
            rovercontrol_message_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_direction: '%s'", rovercontrol_message_.c_str());
        }
    }

    void topic_speedlimit_callback(const std_msgs::msg::String::SharedPtr msg) {
        if (speedlimit_message_ != msg->data){
            speedlimit_message_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", speedlimit_message_.c_str());
        }
    }

    void topic_destination_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr msg){
        if (msg->data.size()==2) {
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1]){
                 destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                //RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %d, b = %d", destination_a_, destination_b_);
            }
        } 
    }

    

    // void topic_rovercontrol_callback(const std_msgs::msg::String::SharedPtr msg){
    //     if (rovercontrol_message_ != msg->data){
    //         rovercontrol_message_ = msg->data;
    //         RCLCPP_INFO(this->get_logger(), "Received on topic_rovercontrol_subscription_: '%s'", rovercontrol_message_.c_str());
    //     }
    // }

    void timer_callback(){
        auto rovercon_msg = std_msgs::msg::String();
        //motor_msg.data = speedlimit_message_;
        rovercon_msg.data = rovercontrol_message_ + "," + speedlimit_message_;
        topic_rovercontrol_publisher_->publish(rovercon_msg);
        RCLCPP_INFO(this->get_logger(), "Published to pub_rovercontrol: '%s'", rovercon_msg.data.c_str());
    }

    // void testsub_callback(const std_msgs::msg::String::SharedPtr msg){
    //     auto test_message_ = std_msgs::msg::String();
    //     test_message_.data = msg->data;
    //     RCLCPP_INFO(this->get_logger(), "Received on test: '%s'", test_message_.data.c_str());
    // }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_speedlimit_subscription_;
    rclcpp::Subscription<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_subscription_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_direction_subscription_;
    // rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_rovercontrol_subscription_;

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_motorcontrol_publisher_;
    // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_testcontrol_publisher_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_rovercontrol_publisher_;

    rclcpp::TimerBase::SharedPtr timer_;

    std::string speedlimit_message_ = "0";
    std::string rovercontrol_message_ = "forward,0";
    bool message_updated_;

    int destination_a_ = 0;
    int destination_b_ = 0;

};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}
