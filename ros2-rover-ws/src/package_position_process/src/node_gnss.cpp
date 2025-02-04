#include "rclcpp/rclcpp.hpp"
#include "msgs_positions/msg/gnss_data.hpp"  // Include your custom message
#include <json/json.h>
#include <fstream>
#include <sstream>

class GNSSPublisher : public rclcpp::Node {
public:
    GNSSPublisher() : Node("gnss_publisher") {
        publisher_ = this->create_publisher<msgs_positions::msg::GnssData>("gnss_data", 10);
        //processJSON(R"({"time":"2025-02-04 09:42:25","numSatellites":6,"fix":false,"latitude":37.7749,"longitude":-122.4194})");
        timer_ = this->create_wall_timer(
          std::chrono::seconds(1), std::bind(&GNSSPublisher::publishData, this));
    }

private:
    rclcpp::Publisher<msgs_positions::msg::GnssData>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    void publishData() {
        std::string json_data = R"({"time":"2025-02-04 09:42:25","numSatellites":6,"fix":false,"latitude":37.7749,"longitude":-122.4194})";

        Json::CharReaderBuilder reader;
        Json::Value root;
        std::string errs;
        std::istringstream ss(json_data);

        if (Json::parseFromStream(reader, ss, &root, &errs)) {
            std::string date_time = root["time"].asString();
            int numSatellites = root["numSatellites"].asInt();
            bool fix = root["fix"].asBool();
            double latitude = root["latitude"].asDouble();
            double longitude = root["longitude"].asDouble();

            std::string date = date_time.substr(0, date_time.find(" "));
            std::string time = date_time.substr(date_time.find(" ") + 1);

            auto msg = msgs_positions::msg::GnssData();
            msg.date = date;
            msg.time = time;
            msg.num_satellites = numSatellites;
            msg.fix = fix;
            msg.latitude = latitude;
            msg.longitude = longitude;

            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Published GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%f, Lon=%f",
                        msg.date.c_str(), msg.time.c_str(), msg.num_satellites, msg.fix, msg.latitude, msg.longitude);
        } else {
            RCLCPP_WARN(this->get_logger(), "Invalid JSON data received!");
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GNSSPublisher>());
    rclcpp::shutdown();
    return 0;
}