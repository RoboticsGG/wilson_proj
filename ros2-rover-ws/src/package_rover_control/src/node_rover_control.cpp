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
            "topic_speedlimit", 10,
            std::bind(&Node_Rovercontrol::topic_speedlimit_callback, this, std::placeholders::_1)
        );

        topic_destination_subscription_ = this->create_subscription<std_msgs::msg::UInt16MultiArray>(
            "topic_destination", 5,
            std::bind(&Node_Rovercontrol::topic_destination_callback, this, std::placeholders::_1)
        );

        topic_test_subscription_ = this->create_subscription<std_msgs::msg::String>(
            "to_linux", 9,
            std::bind(&Node_Rovercontrol::testsub_callback, this, std::placeholders::_1)
        );

        //topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::Int32>("pub_rovercontrol", 10);
        topic_motorcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_rovercontrol", 8);
        topic_testcontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_testcontrol", 2);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(10),  // Set interval to 1 second
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );

        //RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_speedlimit_callback(const std_msgs::msg::String::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_mutex_);
        if (speedlimit_message_ != msg->data){
            speedlimit_message_ = msg->data;
            //RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", speedlimit_message_.c_str());
        }
        // message_updated_ = true;
        // auto pub_testcon = std_msgs::msg::String();
        // pub_testcon.data = speedlimit_message_;
        // topic_testcontrol_publisher_->publish(pub_testcon);
        // RCLCPP_INFO(this->get_logger(), "Published to pub_testcontrol: '%s'", pub_testcon.data.c_str());

        // auto result_msg = std_msgs::msg::String();
        // result_msg.data = speedlimit_message_;
        // RCLCPP_INFO(this->get_logger(), "Published Rovercontrol result: '%s'", speedlimit_message_.c_str());
        // topic_motorcontrol_publisher_->publish(result_msg);
    }

    void topic_destination_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr msg){
    //void topic_destination_callback(const std_msgs::msg::Int16MultiArray::SharedPtr msg){
        std::lock_guard<std::mutex> lock(data_mutex_);
        if (msg->data.size()==2) {
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1]){
                 destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                //RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %d, b = %d", destination_a_, destination_b_);
            }
           
        } else {
            //RCLCPP_WARN(this->get_logger(), "Invalid destination data. Expected 2 integers but got %zu.", msg->data.size());
        }
    }

    void timer_callback(){
        std::lock_guard<std::mutex> lock(data_mutex_);

        auto motor_msg = std_msgs::msg::String();
        motor_msg.data = speedlimit_message_;
        topic_motorcontrol_publisher_->publish(motor_msg);
        //RCLCPP_INFO(this->get_logger(), "Published to pub_rovercontrol: '%s'", motor_msg.data.c_str());

        auto test_msg = std_msgs::msg::String();
        std::stringstream ss;
        ss << "Destination: a=" << destination_a_ << ", b=" << destination_b_;
        test_msg.data = ss.str();
        topic_testcontrol_publisher_->publish(test_msg);
        //RCLCPP_INFO(this->get_logger(), "Published to pub_testcontrol: '%s'", test_msg.data.c_str());
    }

    void testsub_callback(const std_msgs::msg::String::SharedPtr msg){
        auto test_message_ = std_msgs::msg::String();
        test_message_ = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received on test: '%s'", test_message_.c_str());
    }

    // void timer_callback(){
        // auto result_msg = std_msgs::msg::String();
        // result_msg.data = speedlimit_message_;
        // RCLCPP_INFO(this->get_logger(), "Published Rovercontrol result: '%s'", speedlimit_message_.c_str());
        // topic_motorcontrol_publisher_->publish(result_msg);
        // if (message_updated_){
        //     try {
        //         // std::vector<int> values = parse_speedlimit_message(speedlimit_message_); //ตัวอย่าง string stream
        //         //Motors_Rovercontrol motor_controller;
        //         //int result = motor_controller.test(values[0], values[1]); //Example call function

        //         //auto result_msg = std_msgs::msg::Int32();
        //         auto result_msg = std_msgs::msg::String();
        //         result_msg.data = speedlimit_message_;
        //         topic_motorcontrol_publisher_->publish(result_msg);

        //         RCLCPP_INFO(this->get_logger(), "Published Rovercontrol result: '%s'", speedlimit_message_.c_str());
        //     } catch(const std::exception& e) {
        //         RCLCPP_INFO(this->get_logger(), "Waiting for updated messages on topic_speedlimit...");
        //         // std::cerr << e.what() << '\n';
        //     }
        //     message_updated_ = false; ////////pub เฉพาะตอนค่าเปลี่ยน
        // } else {
        //     RCLCPP_INFO(this->get_logger(), "Waiting for updated messages on topic_speedlimit...");
        // }
    // }


    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_speedlimit_subscription_;
    rclcpp::Subscription<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_subscription_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_test_subscription_;
    //rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr topic_motorcontrol_publisher_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_motorcontrol_publisher_;
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
