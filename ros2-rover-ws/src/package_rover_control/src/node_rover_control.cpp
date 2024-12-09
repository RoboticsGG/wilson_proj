#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp>
#include <sstream>
#include <vector>

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
            "topic_speedlimit", 10,
            std::bind(&Node_Rovercontrol::topic_speedlimit_callback, this, std::placeholders::_1)
        );

        topic_destination_subscription_ = this->create_subscription<std_msgs::msg::UInt16MultiArray>(
            "topic_destination", 10,
            std::bind(&Node_Rovercontrol::topic_destination_callback, this, std::placeholders::_1)
        );

        //topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::Int32>("pub_rovercontrol", 10);
        topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::UInt16>("pub_rovercontrol", 10);
        topic_testcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_testcontrol", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),  // Set interval to 1 second
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );

        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_speedlimit_callback(const std_msgs::msg::String::SharedPtr msg) {
        speedlimit_message_ = msg->data;
        message_updated_ = true;

        RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", speedlimit_message_.c_str());

        auto pub_testcon = std_msgs::msg::String();
        pub_testcon.data = speedlimit_message_;
        topic_testcontrol_publisher_->publish(pub_testcon);

        RCLCPP_INFO(this->get_logger(), "Published to pub_testcontrol: '%s'", pub_testcon.data.c_str());
    }

    void topic_destination_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr msg){
    //void topic_destination_callback(const std_msgs::msg::Int16MultiArray::SharedPtr msg){
        if (msg->data.size()==2) {
            destination_a_ = msg->data[0];
            destination_b_ = msg->data[1];
            RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %d, b = %d", destination_a_, destination_b_);
        } else {
            RCLCPP_WARN(this->get_logger(), "Invalid destination data. Expected 2 integers but got %zu.", msg->data.size());
        }
    }

    void timer_callback(){
        if (message_updated_){
            try {
                // std::vector<int> values = parse_speedlimit_message(speedlimit_message_);
                //Motors_Rovercontrol motor_controller;
                //int result = motor_controller.test(values[0], values[1]); //Example call function

                //auto result_msg = std_msgs::msg::Int32();
                auto result_msg = std_msgs::msg::UInt16();
                result_msg.data = speedlimit_message_;
                topic_motorcontrol_publisher_->publish(result_msg);

                RCLCPP_INFO(this->get_logger(), "Published Rovercontrol result: '%s'", result_msg);
            } catch(const std::exception& e) {
                RCLCPP_INFO(this->get_logger(), "Waiting for updated messages on topic_speedlimit...");
                // std::cerr << e.what() << '\n';
            }
            message_updated_ = false; ////////pub เฉพาะตอนค่าเปลี่ยน
        } else {
            RCLCPP_INFO(this->get_logger(), "Waiting for updated messages on topic_speedlimit...");
        }
    }

    // void timer_callback(){
    //     if (!speedlimit_message_.empty()){
    //         try {
    //             std::vector<int> values = parse_speedlimit_message(speedlimit_message_);
    //             if (values.size() == 2){
    //                 Motors_Rovercontrol motor_controller;
    //                 int result = motor_controller.test(values[0], values[1]); //compute

    //                 auto result_msg = std::make_shared<std_msgs::msg::Int32>();
    //                 result_msg->data = result;

    //                 topic_motorcontrol_publisher_->publish(*result_msg);

    //                 RCLCPP_INFO(this->get_logger(), "Publisher Rovercontrol: '%d'", result);
    //             } else {
    //                 RCLCPP_WARN(this->get_logger(), "Expected two but got: '%s'", speedlimit_message_.c_str());
    //             }
    //         } catch (const std::exception &e){
    //             RCLCPP_WARN(this->get_logger(), "Error processing speed limit message: '%s'", speedlimit_message_.c_str());
    //         }
    //     } else {
    //         RCLCPP_INFO(this->get_logger(), "Waiting for message on topic_speedlimit...");
    //     }
    // }

    // void timer_callback() {
    //     //logging current value of the message
    //     if (!speedlimit_message_.empty()) {
    //         RCLCPP_INFO(this->get_logger(), "Current speed limit: '%s'", speedlimit_message_.c_str());
    //     } else {
    //         RCLCPP_INFO(this->get_logger(), "Waiting for messages on topic_speedlimit...");
    //     }
    // }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // std::vector<int> parse_speedlimit_message(const std::string &message){
    //     std::vector<int> result;
    //     std::stringstream ss(message);
    //     std::string token;

    //     while (std::getline(ss, token, ',')){
    //         try{
    //             result.push_back(std::stoi(token));
    //         } catch (const std::invalid_argument &e){
    //             RCLCPP_WARN(this->get_logger(), "Invalid token in message: '%s'", token.c_str());
    //         }
    //     }

    //     if (result.size() != 2){
    //         throw std::runtime_error("Invalid number of values in message. Expected 2 integers.");
    //     }

    //     return result;
    // }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_speedlimit_subscription_;
    rclcpp::Subscription<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_subscription_;
    
    //rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr topic_motorcontrol_publisher_;
    rclcpp::Publisher<std_msgs::msg::UInt16>::SharedPtr topic_motorcontrol_publisher_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_testcontrol_publisher_;

    rclcpp::TimerBase::SharedPtr timer_;
    std::string speedlimit_message_;
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
