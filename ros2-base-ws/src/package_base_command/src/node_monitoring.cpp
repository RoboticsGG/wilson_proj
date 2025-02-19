#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float64.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "msgs_ifaces/msg/gnss_data.hpp"
#include "msgs_mainrocon/msg/main_rocon.hpp"
#include "msgs_rovercon/msg/sub_rocon.hpp"

class TopicSubscriber : public rclcpp::Node {
public:
    TopicSubscriber() : Node("topic_subscriber") {
        sub_cc_rcon_ = this->create_subscription<std_msgs::msg::Bool>(
            "/cc_rcon", 10, 
            std::bind(&TopicSubscriber::cc_rcon_callback, this, std::placeholders::_1)
        );
        
        sub_dis_remain_ = this->create_subscription<std_msgs::msg::Float64>(
            "/dis_remain", 10, 
            std::bind(&TopicSubscriber::dis_remain_callback, this, std::placeholders::_1)
        );
        
        sub_gnss_data_ = this->create_subscription<msgs_ifaces::msg::GnssData>(
            "/gnss_data", 10, 
            std::bind(&TopicSubscriber::gnss_data_callback, this, std::placeholders::_1)
        );
        
        sub_pub_despose_ = this->create_subscription<std_msgs::msg::Float64MultiArray>(
            "/pub_despose", 10, 
            std::bind(&TopicSubscriber::pub_despose_callback, this, std::placeholders::_1)
        );
        
        sub_pub_rovercontrol_d2_ = this->create_subscription<msgs_mainrocon::msg::MainRocon>(
            "/pub_rovercontrol_d2", 10, 
            std::bind(&TopicSubscriber::pub_rovercontrol_callback, this, std::placeholders::_1)
        );
    }

private:
    void cc_rcon_callback(const std_msgs::msg::Bool::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received on /cc_rcon: %s", msg->data ? "TRUE" : "FALSE");
    }
    
    void dis_remain_callback(const std_msgs::msg::Float64::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received on /dis_remain: %f", msg->data);
    }
    
    void gnss_data_callback(const msgs_ifaces::msg::GnssData::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received on /gnss_data: date=%s, time=%s, num_satellites=%d, fix=%s, lat=%f, lon=%f", 
                    msg->date.c_str(), msg->time.c_str(), msg->num_satellites, msg->fix ? "TRUE" : "FALSE", msg->latitude, msg->longitude);
    }
    
    void pub_despose_callback(const std_msgs::msg::Float64MultiArray::SharedPtr msg) {
        std::string values = "";
        for (auto val : msg->data) {
            values += std::to_string(val) + " ";
        }
        RCLCPP_INFO(this->get_logger(), "Received on /pub_despose: [%s]", values.c_str());
    }
    
    void pub_rovercontrol_callback(const msgs_mainrocon::msg::MainRocon::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received on /pub_rovercontrol_d2: fdr_msg=%d, ro_ctrl_msg=%f, spd_msg=%d, bdr_msg=%d", 
                    msg->mainrocon_msg.fdr_msg, msg->mainrocon_msg.ro_ctrl_msg, msg->mainrocon_msg.spd_msg, msg->mainrocon_msg.bdr_msg);
    }
    
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr sub_cc_rcon_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr sub_dis_remain_;
    rclcpp::Subscription<msgs_ifaces::msg::GnssData>::SharedPtr sub_gnss_data_;
    rclcpp::Subscription<std_msgs::msg::Float64MultiArray>::SharedPtr sub_pub_despose_;
    rclcpp::Subscription<msgs_mainrocon::msg::MainRocon>::SharedPtr sub_pub_rovercontrol_d2_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TopicSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
