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
            "topic_rovercontrol", 9,
            std::bind(&Node_Rovercontrol::topic_speedlimit_callback, this, std::placeholders::_1)
        );

        topic_destination_subscription_ = this->create_subscription<std_msgs::msg::UInt16MultiArray>(
            "topic_destination", 8,
            std::bind(&Node_Rovercontrol::topic_destination_callback, this, std::placeholders::_1)
        );

        //topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::Int32>("pub_rovercontrol", 10);
        topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_rovercontrol", 10);
        topic_testcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_testcontrol", 2);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2),  // Set interval to 1 second
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );
        RCLCPP_INFO(this->get_logger(), "Version : A");
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_speedlimit_callback(const std_msgs::msg::String::SharedPtr msg) {
        if (speedlimit_message_ != msg->data){
            speedlimit_message_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", speedlimit_message_.c_str());
        }
    }

    void topic_destination_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr msg){
    //void topic_destination_callback(const std_msgs::msg::Int16MultiArray::SharedPtr msg){
        if (msg->data.size()==2) {
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1]){
                 destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                //RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %d, b = %d", destination_a_, destination_b_);
            }
           
        } 
    }

    void timer_callback(){
        auto motor_msg = std_msgs::msg::String();
        motor_msg.data = speedlimit_message_;
        topic_motorcontrol_publisher_->publish(motor_msg);
        RCLCPP_INFO(this->get_logger(), "Published to pub_rovercontrol: '%s'", motor_msg.data.c_str());

        // auto test_msg = std_msgs::msg::String();
        // std::stringstream ss;
        // ss << "Destination: a=" << destination_a_ << ", b=" << destination_b_;
        // test_msg.data = ss.str();
        // topic_testcontrol_publisher_->publish(test_msg);
        //RCLCPP_INFO(this->get_logger(), "Published to pub_testcontrol: '%s'", test_msg.data.c_str());
    }

    void testsub_callback(const std_msgs::msg::String::SharedPtr msg){
        auto test_message_ = std_msgs::msg::String();
        test_message_.data = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received on test: '%s'", test_message_.data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_speedlimit_subscription_;
    rclcpp::Subscription<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_subscription_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_motorcontrol_publisher_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_testcontrol_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    std::string speedlimit_message_;
    bool message_updated_;

    int destination_a_ = 0;
    int destination_b_ = 0;

    //std::mutex data_mutex_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}
