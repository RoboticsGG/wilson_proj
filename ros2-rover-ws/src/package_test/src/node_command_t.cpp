#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp> 

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command"), speedlimit_(30), des_a_(0), des_b_(0) {
    // : Node("node_command"), speedlimit_(30), des_a_(0), des_b_(0), frontDirection_(90), period_PWM_(20), dutycycle_PWM_(50), backDirection_("FW") {

        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit_t", 9);
        topic_destination_publisher_ = this->create_publisher<std_msgs::msg::UInt16MultiArray>("topic_destination", 8);

        this->declare_parameter<uint8_t>("speedlimit", speedlimit_);
        this->declare_parameter<int>("des_a", des_a_);
        this->declare_parameter<int>("des_b", des_b_);

        parameter_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&Node_Command::on_parameter_change, this, std::placeholders::_1)
        );

        timer_ = this->create_wall_timer(
            std::chrono::seconds(2), 
            std::bind(&Node_Command::publish_parameters, this)
        );

        RCLCPP_INFO(this->get_logger(), "Version : A");
    }

private:
    rcl_interfaces::msg::SetParametersResult on_parameter_change(
        const std::vector<rclcpp::Parameter> &parameters) {
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;

        for (const auto &param : parameters) {
            if (param.get_name() == "speedlimit"){
                speedlimit_ = static_cast<uint8_t>(param.as_int());
            }
        }

        publish_parameters();
        return result;
    }

    void publish_parameters() {
        // Pub topic_speedlimit
        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speedlimit_);
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);

    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::Publisher<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    uint8_t speedlimit_;
    int des_a_;
    int des_b_;

    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}