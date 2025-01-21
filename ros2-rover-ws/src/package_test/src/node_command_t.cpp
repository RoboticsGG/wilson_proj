#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp> 
#include <cstdlib>
#include <ctime>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command") {
    // : Node("node_command"), speedlimit_(30), des_a_(0), des_b_(0), frontDirection_(90), period_PWM_(20), dutycycle_PWM_(50), backDirection_("FW") {

        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit_t", 10);
        
        // this->declare_parameter<uint8_t>("speedlimit", speedlimit_);

        // parameter_callback_handle_ = this->add_on_set_parameters_callback(
        //     std::bind(&Node_Command::on_parameter_change, this, std::placeholders::_1)
        // );

        timer_ = this->create_wall_timer(
            std::chrono::seconds(0.25), 
            std::bind(&Node_Command::publish_parameters, this)
        );

        RCLCPP_INFO(this->get_logger(), "Version : A");
    }

private:
    uint8_t generate_random_speedlimit() {
        return static_cast<uint8_t>(10 + std::rand() % 90); // Generate random number between 10 and 99
    }
    // rcl_interfaces::msg::SetParametersResult on_parameter_change(
    //     const std::vector<rclcpp::Parameter> &parameters) {
    //     rcl_interfaces::msg::SetParametersResult result;
    //     result.successful = true;

    //     for (const auto &param : parameters) {
    //         if (param.get_name() == "speedlimit"){
    //             speedlimit_ = static_cast<uint8_t>(param.as_int());
    //         }
    //     }

    //     publish_parameters();
    //     return result;
    // }

    void publish_parameters() {
        // Pub topic_speedlimit
        speedlimit_ = generate_random_speedlimit();
        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speedlimit_);
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);

    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    uint8_t speedlimit_;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}