#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>

class Node_Command : public rclcpp::Node {
public:
    Node_Command(int speedlimit, std::string test_text, int des_a, int des_b)
    : Node("node_command") {
        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit", 10);
        topic_destination_publisher_ = this->create_publisher<std_msgs::msg::Int32>("topic_destination", 10);

        //Pub_speed
        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speedlimit) + ", "+ test_text;
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);

        //Pub_destination
        auto des_a_message = std_msgs::msg::Int32();
        auto des_b_message = std_msgs::msg::Int32();
        des_a_message.data = des_a;
        des_b_message.data = des_b;
        RCLCPP_INFO(this->get_logger(), "Publishing to B_topic: %d, %d", des_a_message.data, des_b_message.data);
        topic_destination_publisher_->publish(des_a_message);
        topic_destination_publisher_->publish(des_b_message);
    }

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr topic_destination_publisher_;
};

int main(int argc, char *argv[]){
    rclcpp::init(argc, argv);

    if (argc != 5) {
        std::cerr << "Usage: ros2 run <package> <node> <speedlimit> <test_text> <des_a> <des_b>\n";
        return 1;
    }

    int speedlimit = std::stoi(argv[1]);
    std::string test_text = argv[2];
    int des_a = std::stoi(argv[3]);
    int des_b = std::stoi(argv[4]);

    //run node
    rclcpp::spin(std::make_shared<Node_Command>(speedlimit, test_text, des_a, des_b));

    rclcpp::shutdown();
    return 0;
}