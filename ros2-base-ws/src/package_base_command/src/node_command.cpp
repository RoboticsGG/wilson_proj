#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>

class Node_Command : public rclcpp::Node {
public:
    Node_Command()
    : Node("node_command"), speedlimit_(30), test_text_("Default"), des_a_(0), des_b_(0) {

        topic_speedlimit_publisher_ = this->create_publisher<std_msgs::msg::String>("topic_speedlimit", 10);
        topic_destination_publisher_ = this->create_publisher<std_msgs::msg::Int32>("topic_destination", 10);

        this->declare_parameter<int>("speedlimit", speedlimit_);
        this->declare_parameter<std::string>("test_text", test_text_);
        this->declare_parameter<int>("des_a", des_a_);
        this->declare_parameter<int>("des_b", des_b_);

        publish_parameters();

        parameter_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&Node_Command::on_parameter_change, this, std::placeholders::_1)
        );
    }

private:
    rcl_interfaces::msg::SetParametersResult on_parameter_change(
        const std::vector<rclcpp::Parameter> &parameters) {
        for (const auto &param : parameters) {
            if (param.get_name() == "speedlimit" && param.as_int() < 0){
                result.successful = false;
                result.reason = "Speed Limit must be non-negative.";
                return result;
            }
            if (param.get_name() == "speedlimit" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
                speedlimit_ = param.as_int();
            } else if (param.get_name() == "test_text" && param.get_type() == rclcpp::ParameterType::PARAMETER_STRING) {
                test_text_ = param.as_string();
            } else if (param.get_name() == "des_a" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
                des_a_ = param.as_int();
            } else if (param.get_name() == "des_b" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER) {
                des_b_ = param.as_int();
            }
        }

        publish_parameters();

        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;
        result.reason = "Parameters updated successfully.";
        return result;
    }

    void publish_parameters() {
        // Pub topic_speedlimit
        auto speed_message = std_msgs::msg::String();
        speed_message.data = std::to_string(speedlimit_) + ", " + test_text_;
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_speedlimit: '%s'", speed_message.data.c_str());
        topic_speedlimit_publisher_->publish(speed_message);

        // Pub topic_destination
        auto destination_message = std_msgs::msg::Int32MultiArray();
        destination_message.data = {des_a_, des_b_};
        topic_destination_publisher_->publish(destination_message);
        // auto des_a_message = std_msgs::msg::Int32();
        // auto des_b_message = std_msgs::msg::Int32();
        // des_a_message.data = des_a_;
        // des_b_message.data = des_b_;
        // RCLCPP_INFO(this->get_logger(), "Publishing to topic_destination: %d, %d", des_a_message.data, des_b_message.data);
        // topic_destination_publisher_->publish(des_a_message);
        // topic_destination_publisher_->publish(des_b_message);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr topic_speedlimit_publisher_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr topic_destination_publisher_;

    int speedlimit_;
    std::string test_text_;
    int des_a_;
    int des_b_;

    // Parameter change callback handle
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node_Command>());
    rclcpp::shutdown();
    return 0;
}



//---------BaseCode--------------------------------------------------------------------------------------------------------------------------
/*
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
        RCLCPP_INFO(this->get_logger(), "Publishing to topic_destination: %d, %d", des_a_message.data, des_b_message.data);
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
*/