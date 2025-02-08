#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <ifaces_position/msg/gnss_data.hpp>
#include <ifaces_position/srv/des_data.hpp>
#include <cmath>

class PoseProcessor : public rclcpp::Node {
public:
    PoseProcessor() : Node("pose_processor"), destination_a_(0.0), destination_b_(0.0) {
        cur_pose_sub_ = this->create_subscription<ifaces_position::msg::GnssData>(
            "gnss_data", 10,
            std::bind(&PoseProcessor::topic_cur_callback, this, std::placeholders::_1)
        );

        des_service_ = this->create_service<ifaces_position::srv::DesData>(
            "des_data",
            std::bind(&PoseProcessor::handle_destination_request, this, std::placeholders::_1, std::placeholders::_2)
        );

        timer_ = this->create_wall_timer(
            std::chrono::seconds(5), 
            std::bind(&PoseProcessor::processData, this)
        );

        RCLCPP_INFO(this->get_logger(), "PoseProcessor Node Initialized.");
    }

private:

    void handle_destination_request(const std::shared_ptr<ifaces_position::srv::DesData::Request> request,
                                    std::shared_ptr<ifaces_position::srv::DesData::Response> response) {
        std::lock_guard<std::mutex> lock(data_lock_);
        destination_a_ = request->latitude;
        destination_b_ = request->longitude;

        response->des_result = "Destination set to (" + std::to_string(destination_a_) + ", " + std::to_string(destination_b_) + ")";
        RCLCPP_INFO(this->get_logger(), "Destination set via service: Lat=%.6f, Lon=%.6f", destination_a_, destination_b_);
    }

    void topic_cur_callback(const ifaces_position::msg::GnssData::SharedPtr msg) {
        std::lock_guard<std::mutex> lock(data_lock_);
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
        std::lock_guard<std::mutex> lock(data_lock_);
        if (destination_a_ == 0.0 && destination_b_ == 0.0) {
            RCLCPP_WARN(this->get_logger(), "Destination not set. Waiting for data.");
            return;
        }
        if (cur_pose_msg_.latitude == 0.0 && cur_pose_msg_.longitude == 0.0) {
            RCLCPP_WARN(this->get_logger(), "Current position not set. Waiting for data.");
            return;
        }
        double distance = haversine_distance(cur_pose_msg_.latitude, cur_pose_msg_.longitude, destination_a_, destination_b_);
        RCLCPP_INFO(this->get_logger(), "Calculated Distance: %.2f km", distance);
    }

    rclcpp::Subscription<ifaces_position::msg::GnssData>::SharedPtr cur_pose_sub_;
    rclcpp::Service<ifaces_position::srv::DesData>::SharedPtr des_service_;
    rclcpp::Publisher<ifaces_position::msg::GnssData>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    ifaces_position::msg::GnssData cur_pose_msg_;

    float destination_a_;
    float destination_b_;

    std::mutex data_lock_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}