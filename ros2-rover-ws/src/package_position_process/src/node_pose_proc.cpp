#include <rclcpp/rclcpp.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <msgs_ifaces/msg/gnss_data.hpp>
#include <action_ifaces/srv/des_data.hpp>
#include <cmath>

class PoseProcessor : public rclcpp::Node {
public:
    using DesData = service_ifaces::action::DesData;  
    using GoalHandleDesData = rclcpp_action::ClientGoalHandle<DesData>;

    PoseProcessor() : Node("pose_processor"), des_lat_(0.0), des_long_(0.0) {
        cur_pose_sub_ = this->create_subscription<msgs_ifaces::msg::GnssData>(
            "gnss_data", 10,
            std::bind(&PoseProcessor::topic_cur_callback, this, std::placeholders::_1)
        );

        des_client_ = rclcpp_action::create_client<DesData>(this, "des_data"); 

        timer_ = this->create_wall_timer(
            std::chrono::seconds(5), 
            std::bind(&PoseProcessor::processData, this)
        );

        RCLCPP_INFO(this->get_logger(), "PoseProcessor Node Initialized.");
    }

private:
    rclcpp::Subscription<msgs_ifaces::msg::GnssData>::SharedPtr cur_pose_sub_;
    rclcpp_action::Client<DesData>::SharedPtr des_client_;
    rclcpp::Publisher<msgs_ifaces::msg::GnssData>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    msgs_ifaces::msg::GnssData cur_pose_msg_;

    float des_lat_;
    float des_long_;

    void topic_cur_callback(const msgs_ifaces::msg::GnssData::SharedPtr msg) {
        cur_pose_msg_.date = msg->date;
        cur_pose_msg_.time = msg->time;
        cur_pose_msg_.num_satellites = msg->num_satellites;
        cur_pose_msg_.fix = msg->fix;
        cur_pose_msg_.latitude = msg->latitude;
        cur_pose_msg_.longitude = msg->longitude;

        RCLCPP_INFO(this->get_logger(), "Received GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%f, Lon=%f",
                    cur_pose_msg_.date.c_str(), cur_pose_msg_.time.c_str(), cur_pose_msg_.num_satellites, cur_pose_msg_.fix, cur_pose_msg_.latitude, cur_pose_msg_.longitude);

        
    }

    double haversine_distance(double lat1, double lon1, double lat2, double lon2) {
        double R = 6371.0; // Earth radius in km
        double phi1 = lat1 * M_PI / 180; // φ, λ in radians
        double phi2 = lat2 * M_PI / 180;
        double delta_phi = (lat2 - lat1) * M_PI / 180;
        double delta_lambda = (lon2 - lon1) * M_PI / 180;

        double a = sin(delta_phi/2) * sin(delta_phi/2) +
                cos(phi1) * cos(phi2) * sin(delta_lambda/2) * sin(delta_lambda/2);
        double c = 2 * atan2(sqrt(a), sqrt(1-a));

        return R * c; // in km
    }

    void processData() {
        if (des_lat_ == 0.0 && des_long_ == 0.0) {
            RCLCPP_WARN(this->get_logger(), "Destination not set. Waiting for data.");
            return;
        }
        if (cur_pose_msg_.latitude == 0.0 && cur_pose_msg_.longitude == 0.0) {
            RCLCPP_WARN(this->get_logger(), "Current position not set. Waiting for data.");
            return;
        }
        double distance = haversine_distance(cur_pose_msg_.latitude, cur_pose_msg_.longitude, des_lat_, des_long_);
        RCLCPP_INFO(this->get_logger(), "Calculated Distance: %.2f km", distance);

        auto feedback_msg = std::make_shared<DesData::Feedback>();
        feedback_msg->distance = distance;

        if (distance < 0.5) {
            // Destination reached
            auto result_msg = std::make_shared<DesData::Result>();
            result_msg->result_fser = "Destination reached.";
            RCLCPP_INFO(this->get_logger(), "Distance below 0.5 km, destination reached.");
            auto goal_handle = des_client_->get_goal_handle();
            des_client_->async_send_goal(goal_handle->get_goal_id(), result_msg);
        } else {
            // Send feedback to the action server
            if (des_client_->wait_for_action_server(std::chrono::seconds(1))) {
                auto send_goal_options = rclcpp_action::Client<DesData>::SendGoalOptions();
                send_goal_options.feedback_callback = [this](GoalHandleDesData::SharedPtr,
                                                             const std::shared_ptr<const DesData::Feedback> feedback) {
                    RCLCPP_INFO(this->get_logger(), "Distance: %.2f km", feedback->distance);
                };
                des_client_->async_send_goal(feedback_msg, send_goal_options);
            }
        }
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}