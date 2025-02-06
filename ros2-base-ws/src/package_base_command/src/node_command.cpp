#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <ifaces_position/srv/des_data.hpp>
#include <ifaces_position/msg/spd_limit.hpp>
#include <cstdlib>
#include <ctime>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command") {
        

        timer_ = this->create_wall_timer(
            std::chrono::seconds(1), 
            std::bind(&Node_Command::publish_parameters, this)
        );

        RCLCPP_INFO(this->get_logger(), "Version : A");
    }

private:
    uint8_t generate_random_speedlimit() {
        return static_cast<uint8_t>(10 + std::rand() % 50); // Generate random number between 10 and 50
    }

    void publish_parameters() {
        speedlimit_ = generate_random_speedlimit();
        auto spd_lmt_msg = std_msgs::msg::UInt8();
        spd_lmt_msg.data = speedlimit_;
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", std::to_string(spd_lmt_msg.data).c_str());
        topic_spd_pub_->publish(spd_lmt_msg);

        destination_ = {1.0f, 2.0f}; // Example data
        auto des_msg = std_msgs::msg::Float32MultiArray();
        des_msg.data = destination_; 
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_destination: '[1.0, 2.0]'");
        topic_des_pub->publish(des_msg);
    }

    uint8_t speedlimit_;
    std::vector<float> destination_;

    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr topic_spd_pub_;
    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr topic_des_pub;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}