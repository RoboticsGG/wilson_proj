#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <string>
#include <sstream>
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
        topic_spd_sub_ = this->create_subscription<std_msgs::msg::UInt8>(
            "topic_speedlimit_t", 10,
            std::bind(&Node_Rovercontrol::topic_spd_callback, this, std::placeholders::_1)
        );

        topic_des_sub_ = this->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_destination", 10,
            std::bind(&Node_Rovercontrol::topic_des_callback, this, std::placeholders::_1)
        );

        topic_direct_sub_ = this->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_direction", 10,
            std::bind(&Node_Rovercontrol::topic_direct_callback, this, std::placeholders::_1)
        );
   
        topic_ro_con_pub_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("pub_rovercontrol", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2), 
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );
        RCLCPP_INFO(this->get_logger(), "Version : A");
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_direct_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg){
        std::lock_guard<std::mutex> lock(data_lock_);
        if (ro_ctrl_msg_ != msg->data){
            ro_ctrl_msg_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_direction: '%s'", ro_ctrl_msg_.c_str());
        }
    }

    void topic_spd_callback(const std_msgs::msg::UInt8::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (spd_msg_ != msg->data){
            spd_msg_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", spd_msg_.c_str());
        }
    }

    void topic_des_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg){
        if (msg->data.size()==2) {
            std::lock_guard<std::mutex> lock(data_lock_);
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1]){
                 destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                //RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %d, b = %d", destination_a_, destination_b_);
            }
        } 
    }




    void timer_callback() {
        // std::stringstream ss;
        // ss << ro_ctrl_msg_ << "," << spd_msg_ << "," << back_direction_message_;
        // std_msgs::msg::String rovercon_msg;
        // rovercon_msg.data = ss.str();
        // topic_ro_con_pub_->publish(rovercon_msg);
        // RCLCPP_INFO(this->get_logger(), "Published to pub_rovercontrol: '%s'", rovercon_msg.data.c_str());
        RCLCPP_INFO(this->get_logger(), "------------------------------------------------");
  }


    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr topic_spd_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_des_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_direct_sub_;

    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr topic_ro_con_pub_;
    
    rclcpp::TimerBase::SharedPtr timer_;

    std::string ro_ctrl_msg_ = "fw,0";
    std::string spd_msg_ = "0";
    std::string back_direction_message_ = "fw";

    int destination_a_ = 0;
    int destination_b_ = 0;

    std::mutex data_lock_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}