#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int16_multi_array.hpp> 

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command"), speedlimit_(30), des_a_(0), des_b_(0) {
    // : Node("node_command"), speedlimit_(30), des_a_(0), des_b_(0), frontDirection_(90), period_PWM_(20), dutycycle_PWM_(50), backDirection_("FW") {

        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit", 9);
        topic_destination_publisher_ = this->create_publisher<std_msgs::msg::UInt16MultiArray>("topic_destination", 8);
        // topic_rovercontrol_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_rovercontrol", 9);

        this->declare_parameter<uint8_t>("speedlimit", speedlimit_);
        this->declare_parameter<int>("des_a", des_a_);
        this->declare_parameter<int>("des_b", des_b_);

        // this->declare_parameter<uint8_t>("frontDirection", frontDirection_);
        // this->declare_parameter<uint8_t>("period_PWM", period_PWM_);
        // this->declare_parameter<uint8_t>("dutycycle_PWM", dutycycle_PWM_);
        // this->declare_parameter<std::string>("backDirection", backDirection_);

        //publish_parameters();

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
            } else if (param.get_name() == "des_a" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
                des_a_ = param.as_int();
            } else if (param.get_name() == "des_b" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
                des_b_ = param.as_int();
            // } else if (param.get_name() == "frontDirection" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
            //     frontDirection_ = static_cast<uint8_t>(param.as_int());
            // } else if (param.get_name() == "period_PWM" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
            //     period_PWM_ = static_cast<uint8_t>(param.as_int());
            // } else if (param.get_name() == "dutycycle_PWM" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
            //     dutycycle_PWM_ = static_cast<uint8_t>(param.as_int());
            // } else if (param.get_name() == "backDirection" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
            //     backDirection_ = param.as_string();
            // }
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

        // Pub topic_destination
        auto destination_message = std_msgs::msg::UInt16MultiArray();
        destination_message.data = {static_cast<uint16_t>(des_a_),static_cast<uint16_t>(des_b_)};
        //destination_message.data = {des_a_, des_b_};
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_destination: [%d, %d]", des_a_, des_b_);
        topic_destination_publisher_->publish(destination_message);

        //demo_pub_control_rover
        // auto control_message = std_msgs::msg::String();
        // control_message.data = std::to_string(frontDirection_) + "," + std::to_string(period_PWM_) + "," + std::to_string(dutycycle_PWM_) + "," + backDirection_;
        // RCLCPP_INFO(this->get_logger(), "Publisher to topic_rovercontrol '%s'", control_message.data.c_str());
        // topic_rovercontrol_publisher_->publish(control_message);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::Publisher<std_msgs::msg::UInt16MultiArray>::SharedPtr topic_destination_publisher_;
    // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_rovercontrol_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    uint8_t speedlimit_;
    int des_a_;
    int des_b_;

    //demo_control_rover
    // uint8_t frontDirection_;
    // uint8_t period_PWM_;
    // uint8_t dutycycle_PWM_;
    // std::string backDirection_;

    // Parameter change callback handle
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}