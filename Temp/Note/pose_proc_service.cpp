#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <msgs_ifaces/msg/gnss_data.hpp>
#include <service_ifaces/srv/des_data.hpp>
#include <cmath>

class PoseProcessor : public rclcpp::Node {
public:
    PoseProcessor() : Node("pose_processor"), des_lat_(0.0), des_long_(0.0) {
        cur_pose_sub_ = this->create_subscription<msgs_ifaces::msg::GnssData>(
            "gnss_data", 10,
            std::bind(&PoseProcessor::topic_cur_callback, this, std::placeholders::_1)
        );

        des_service_ = this->create_service<service_ifaces::srv::DesData>(
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
    rclcpp::Subscription<msgs_ifaces::msg::GnssData>::SharedPtr cur_pose_sub_;
    rclcpp::Service<service_ifaces::srv::DesData>::SharedPtr des_service_;
    rclcpp::Publisher<msgs_ifaces::msg::GnssData>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    msgs_ifaces::msg::GnssData cur_pose_msg_;

    float des_lat_;
    float des_long_;

    void handle_destination_request(const std::shared_ptr<service_ifaces::srv::DesData::Request> request,
                                    std::shared_ptr<service_ifaces::srv::DesData::Response> response) {
        des_lat_ =request->des_lat;
        des_long_ = request->des_long;

        response->result_fser = "Destination set to (" + std::to_string(des_lat_) + ", " + std::to_string(des_long_) + ")";
        RCLCPP_INFO(this->get_logger(), "Destination set via service: Lat=%.6f, Lon=%.6f", des_lat_, des_long_);
    }

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
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}