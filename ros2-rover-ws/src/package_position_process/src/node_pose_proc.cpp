#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float32_multi_array.hpp>
#include <ifaces_position/msg/gnss_data.hpp>
#include <cmath>

class PoseProcessor : public rclcpp::Node {
public:
    PoseProcessor() : Node("pose_processor"), destination_a_(0.0), destination_b_(0.0) {
        des_pose_sub_ = this->create_subscription<std_msgs::msg::Float32MultiArray>(
            "topic_destination", 10,
            std::bind(&PoseProcessor::topic_des_callback, this, std::placeholders::_1)
        );
        cur_pose_sub_ = this->create_subscription<ifaces_position::msg::GnssData>(
            "gnss_data", 10,
            std::bind(&PoseProcessor::topic_cur_callback, this, std::placeholders::_1)
        );

        timer_ = this->create_wall_timer(
            std::chrono::seconds(5), 
            std::bind(&PoseProcessor::processData, this)
        );
    }

private:
    rclcpp::Publisher<ifaces_position::msg::GnssData>::SharedPtr publisher_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr des_pose_sub_;
    rclcpp::Subscription<ifaces_position::msg::GnssData>::SharedPtr cur_pose_sub_;
    rclcpp::TimerBase::SharedPtr timer_;
    ifaces_position::msg::GnssData cur_pose_msg_;

    float destination_a_;
    float destination_b_;

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

    void topic_des_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg){
        if (msg->data.size()>=2) {
            if (destination_a_ != msg->data[0] || destination_b_ != msg->data[1] ){
                destination_a_ = msg->data[0];
                destination_b_ = msg->data[1];
                RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %.2f, b = %.2f", destination_a_, destination_b_);
            } else {
            RCLCPP_INFO(this->get_logger(), "Received on topic_destination: a = %.2f, b = %.2f", destination_a_, destination_b_);
        }} else {
            RCLCPP_WARN(this->get_logger(), "Received insufficient data on topic_destination.");
        }
    }

    void topic_cur_callback(const ifaces_position::msg::GnssData::SharedPtr msg) {
        cur_pose_msg_.date = msg->date;
        cur_pose_msg_.time = msg->time;
        cur_pose_msg_.num_satellites = msg->num_satellites;
        cur_pose_msg_.fix = msg->fix;
        cur_pose_msg_.latitude = msg->latitude;
        cur_pose_msg_.longitude = msg->longitude;

        RCLCPP_INFO(this->get_logger(), "Received GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%f, Lon=%f",
                    cur_pose_msg_.date.c_str(), cur_pose_msg_.time.c_str(), cur_pose_msg_.num_satellites, cur_pose_msg_.fix, cur_pose_msg_.latitude, cur_pose_msg_.longitude);

        
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}