#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <msgs_ifaces/msg/gnss_data.hpp>
#include <action_ifaces/action/des_data.hpp>
#include <cmath>

class PoseProcessor : public rclcpp::Node {
public:
    using DesData = action_ifaces::action::DesData;
    using GoalHandleDesData = rclcpp_action::ServerGoalHandle<DesData>;

    PoseProcessor() : Node("pose_processor"), des_lat_(0.0), des_long_(0.0) {
        action_server_ = rclcpp_action::create_server<DesData>(
            this, "des_data",
            std::bind(&PoseProcessor::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&PoseProcessor::handle_cancel, this, std::placeholders::_1),
            std::bind(&PoseProcessor::handle_accepted, this, std::placeholders::_1)
        );

        RCLCPP_INFO(this->get_logger(), "PoseProcessor Action Server Initialized.");
    }

private:
    rclcpp_action::Server<DesData>::SharedPtr action_server_;
    float des_lat_;
    float des_long_;

    // Haversine formula to calculate distance between two points in km
    double haversine_distance(double lat1, double lon1, double lat2, double lon2) {
        double R = 6371.0; // Earth radius in km
        double phi1 = lat1 * M_PI / 180; // φ, λ in radians
        double phi2 = lat2 * M_PI / 180;
        double delta_phi = (lat2 - lat1) * M_PI / 180;
        double delta_lambda = (lon2 - lon1) * M_PI / 180;

        double a = sin(delta_phi / 2) * sin(delta_phi / 2) +
                   cos(phi1) * cos(phi2) * sin(delta_lambda / 2) * sin(delta_lambda / 2);
        double c = 2 * atan2(sqrt(a), sqrt(1 - a));

        return R * c; // in km
    }

    rclcpp_action::GoalResponse handle_goal(
        const std::shared_ptr<GoalHandleDesData> goal_handle) {
        
        RCLCPP_INFO(this->get_logger(), "Received goal request to move to (%.6f, %.6f)",
                    goal_handle->get_goal()->des_lat, goal_handle->get_goal()->des_long);

        std::shared_ptr<DesData::Feedback> feedback = std::make_shared<DesData::Feedback>();
        feedback->dis_remain = haversine_distance(0.0, 0.0, goal_handle->get_goal()->des_lat, goal_handle->get_goal()->des_long);

        goal_handle->publish_feedback(feedback);

        while (feedback->dis_remain > 0.5) {
            feedback->dis_remain -= 0.1;

            RCLCPP_INFO(this->get_logger(), "Distance remaining: %.2f km", feedback->dis_remain);

            goal_handle->publish_feedback(feedback);

            rclcpp::sleep_for(std::chrono::seconds(1));
        }

        feedback->dis_remain = 0.0; 
        goal_handle->publish_feedback(feedback);

        auto result = std::make_shared<DesData::Result>();
        result->result_fser = "Destination reached.";

        goal_handle->succeed(result);
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleDesData> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "Goal is being canceled.");
        goal_handle->canceled(std::make_shared<DesData::Result>());
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleDesData> goal_handle) {
        rclcpp::spin_until_future_complete(this->get_node_base_interface(), goal_handle->get_goal()->des_lat);
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}


// #include <rclcpp/rclcpp.hpp>
// #include "rclcpp_action/rclcpp_action.hpp"
// #include <std_msgs/msg/string.hpp>
// #include <std_msgs/msg/float32_multi_array.hpp>
// #include <msgs_ifaces/msg/gnss_data.hpp>
// #include <action_ifaces/action/des_data.hpp>
// #include <cmath>

// class PoseProcessor : public rclcpp::Node {
// public:
//     using DesData = action_ifaces::action::DesData;
//     using GoalHandleDesData = rclcpp_action::ServerGoalHandle<DesData>;

//     PoseProcessor() : Node("pose_processor"), des_lat_(0.0), des_long_(0.0) {
//         action_server_ = rclcpp_action::create_server<DesData>(
//             this, "des_data",
//             std::bind(&PoseProcessor::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
//             std::bind(&PoseProcessor::handle_cancel, this, std::placeholders::_1),
//             std::bind(&PoseProcessor::handle_accepted, this, std::placeholders::_1)
//         );

//         RCLCPP_INFO(this->get_logger(), "PoseProcessor Action Server Initialized.");
//     }

// private:
//     rclcpp_action::Server<DesData>::SharedPtr action_server_;
//     float des_lat_;
//     float des_long_;

//     rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID&, std::shared_ptr<const DesData::Goal> goal) {
//         RCLCPP_INFO(this->get_logger(), "Received new goal: Lat=%.6f, Lon=%.6f", goal->des_lat, goal->des_long);
//         des_lat_ = goal->des_lat;
//         des_long_ = goal->des_long;
//         return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
//     }

//     rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleDesData>) {
//         RCLCPP_WARN(this->get_logger(), "Goal Cancelled!");
//         return rclcpp_action::CancelResponse::ACCEPT;
//     }

//     void handle_accepted(const std::shared_ptr<GoalHandleDesData> goal_handle) {
//         std::thread{std::bind(&PoseProcessor::execute, this, goal_handle)}.detach();
//     }

//     void execute(const std::shared_ptr<GoalHandleDesData> goal_handle) {
//         auto feedback = std::make_shared<DesData::Feedback>();

//         while (true) {
//             float distance = 0.3; 
//             feedback->dis_remain = distance;
//             goal_handle->publish_feedback(feedback);
//             RCLCPP_INFO(this->get_logger(), "Distance Remaining: %.2f km", feedback->dis_remain);

//             if (distance < 0.5) {
//                 auto result = std::make_shared<DesData::Result>();
//                 result->result_fser = "Arrived at Destination";
//                 goal_handle->succeed(result);
//                 RCLCPP_INFO(this->get_logger(), "Destination Reached!");
//                 return;
//             }

//             std::this_thread::sleep_for(std::chrono::seconds(2));
//         }
//     }
// };

// int main(int argc, char *argv[]) {
//     rclcpp::init(argc, argv);
//     rclcpp::spin(std::make_shared<PoseProcessor>());
//     rclcpp::shutdown();
//     return 0;
// }