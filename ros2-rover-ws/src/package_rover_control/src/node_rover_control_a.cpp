#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <string>
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
    void topic_direct_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg) {
    if (msg->data.size() >= 2) { // Ensure there are at least 2 elements
        std::lock_guard<std::mutex> lock(data_lock_);
        if (msg->data[0] != ro_ctrl_msg1_ || msg->data[1] != ro_ctrl_msg2_) {
            ro_ctrl_msg1_ = msg->data[0];
            ro_ctrl_msg2_ = msg->data[1];
            RCLCPP_INFO(this->get_logger(), "Received on topic_direction: x = %.2f, y = %.2f", ro_ctrl_msg1_, ro_ctrl_msg2_);
        }
    } else {
        RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_direction.");
    }
}

    void topic_spd_callback(const std_msgs::msg::UInt8::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (spd_msg_ != msg->data){
            spd_msg_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%d'", spd_msg_);
        }
    }

    void topic_des_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg){
        if (msg->data.size()>=3) {
            std::lock_guard<std::mutex> lock(data_lock_);
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1] || destination_c_ != msg->data[2]){
                destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                destination_c_ = msg->data[2];
                RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %.2f, b = %.2f, c = %.2f", destination_a_, destination_b_, destination_c_);
            } else {
            RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %.2f, b = %.2f, c = %.2f", destination_a_, destination_b_, destination_c_);
        }} else {
            RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_destination.");
        }
    }




    void timer_callback() {
        RCLCPP_INFO(this->get_logger(), "################################################");
        rover_con_ = {ro_ctrl_msg1_, ro_ctrl_msg2_, spd_msg_};
        rover_con_msg = std_msgs::msg::Float32MultiArray();
        rover_con_msg.data = rover_con_;
        topic_ro_con_pub_->publish(rover_con_msg);
        RCLCPP_INFO(this->get_logger(), "Publishing to pub_rovercontrol: [%.2f, %.2f, %d]", rover_con_[0], rover_con_[1], rover_con_[2]);
        RCLCPP_INFO(this->get_logger(), "------------------------------------------------");
  }


    rclcpp::Subscription<std_msgs::msg::UInt8>::SharedPtr topic_spd_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_des_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr topic_direct_sub_;

    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr topic_ro_con_pub_;

    rclcpp::TimerBase::SharedPtr timer_;

    //std::vector<float> ro_ctrl_msg_;
    float ro_ctrl_msg1_;
    float ro_ctrl_msg2_;
    uint8_t spd_msg_;
    float destination_a_;
    float destination_b_;
    float destination_c_;
    uint8_t back_ctrl_msg_;

    std::vector<float> rover_con_;

    std::mutex data_lock_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Rovercontrol>());
    rclcpp::shutdown();
    return 0;
}