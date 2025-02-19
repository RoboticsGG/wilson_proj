#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float64.hpp>
#include <msgs_ifaces/msg/gnss_data.hpp>
#include <fstream>
#include <sstream>
#include <vector>
#include <chrono>

class PoseProcessor : public rclcpp::Node {
public:
    PoseProcessor() : Node("pose_processor"), current_index_(0) {
        gnss_publisher_ = this->create_publisher<msgs_ifaces::msg::GnssData>("gnss_data", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&PoseProcessor::publish_gnss_data, this)
        );
        load_csv("/mnt/data/gnss_data_demo.csv");
    }

private:
    rclcpp::Publisher<msgs_ifaces::msg::GnssData>::SharedPtr gnss_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::vector<msgs_ifaces::msg::GnssData> gnss_data_;
    size_t current_index_;

    void load_csv(const std::string &filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open file: %s", filename.c_str());
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            msgs_ifaces::msg::GnssData data;
            std::string value;

            std::getline(ss, data.date, ',');
            std::getline(ss, data.time, ',');
            std::getline(ss, value, ','); data.num_satellites = std::stoi(value);
            std::getline(ss, value, ','); data.fix = (value == "true");
            std::getline(ss, value, ','); data.latitude = std::stod(value);
            std::getline(ss, value, ','); data.longitude = std::stod(value);

            gnss_data_.push_back(data);
        }
        file.close();
        RCLCPP_INFO(this->get_logger(), "Loaded %zu GNSS data points.", gnss_data_.size());
    }

    void publish_gnss_data() {
        if (gnss_data_.empty()) return;
        gnss_publisher_->publish(gnss_data_[current_index_]);
        RCLCPP_INFO(this->get_logger(), "Published GNSS data: %s %s Lat: %f Lon: %f", 
                    gnss_data_[current_index_].date.c_str(), 
                    gnss_data_[current_index_].time.c_str(), 
                    gnss_data_[current_index_].latitude, 
                    gnss_data_[current_index_].longitude);
        current_index_ = (current_index_ + 1) % gnss_data_.size(); // Loop through data
    }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseProcessor>());
    rclcpp::shutdown();
    return 0;
}
