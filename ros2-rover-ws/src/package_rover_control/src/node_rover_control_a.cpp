#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp>
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
        topic_speedlimit_subscription_ = this->create_subscription<std_msgs::msg::String>(
            "topic_speedlimit_t", 10,
            std::bind(&Node_Rovercontrol::topic_speedlimit_callback, this, std::placeholders::_1)
        );

        topic_destination_subscription_ = this->create_subscription<std_msgs::msg::UInt16MultiArray>(
            "topic_destination", 10,
            std::bind(&Node_Rovercontrol::topic_destination_callback, this, std::placeholders::_1)
        );

        topic_direction_subscription_ = this->create_subscription<std_msgs::msg::String>(
            "topic_direction", 10,
            std::bind(&Node_Rovercontrol::topic_direction_callback, this, std::placeholders::_1)
        );
   
        topic_rovercontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("pub_rovercontrol", 10);

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2), 
            std::bind(&Node_Rovercontrol::timer_callback, this)
        );
        RCLCPP_INFO(this->get_logger(), "Version : A");
        RCLCPP_INFO(this->get_logger(), "Node_Rovercontrol initialized and listening...");
    }

private:
    void topic_direction_callback(const std_msgs::msg::String::SharedPtr msg){
        std::lock_guard<std::mutex> lock(data_lock_);
        if (rovercontrol_message_ != msg->data){
            rovercontrol_message_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_direction: '%s'", rovercontrol_message_.c_str());
        }
    }

    void topic_speedlimit_callback(const std_msgs::msg::String::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
        if (speedlimit_message_ != msg->data){
            speedlimit_message_ = msg->data;
            RCLCPP_INFO(this->get_logger(), "Received on topic_speedlimit: '%s'", speedlimit_message_.c_str());
        }
    }

    void topic_destination_callback(const std_msgs::msg::UInt16MultiArray::SharedPtr msg){
        if (msg->data.size()==2) {
            std::lock_guard<std::mutex> lock(data_lock_);
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1]){
                 destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                //RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %d, b = %d", destination_a_, destination_b_);
            }
        } 
    }



    void timer_callback(){
        std::lock_guard<std::mutex> lock(data_lock_);
        auto rovercon_msg = std_msgs::msg::String();
        rovercon_msg.data = rovercontrol_message_ + "," + speedlimit_message_ + "," + back_direction_message_;
        topic_rovercontrol_publisher_->publish(rovercon_msg);
        RCLCPP_INFO(this->get_logger(), "Published to pub_rovercontrol: '%s'", rovercon_msg.data.c_str());
    }


    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_speedlimit_subscription_;
    rclcpp::Subscription<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_subscription_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr topic_direction_subscription_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_rovercontrol_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    std::string rovercontrol_message_ = "fw,0";
    std::string speedlimit_message_ = "0";
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