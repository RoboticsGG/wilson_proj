#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"
#include <serial/serial.h>
#include <string>
#include <iostream>

class GNSSReceiver : public rclcpp::Node {
public:
    GNSSReceiver() : Node("gnss_receiver") {
        publisher_ = this->create_publisher<sensor_msgs::msg::NavSatFix>("gnss/fix", 10);
        serial_port_.setPort("/dev/ttyUSB0");
        serial_port_.setBaudrate(115200);
        serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
        serial_port_.setTimeout(timeout);
        
        try {
            serial_port_.open();
        } catch (const serial::IOException &e) {
            RCLCPP_ERROR(this->get_logger(), "Unable to open serial port!");
            rclcpp::shutdown();
        }
        
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&GNSSReceiver::read_gnss_data, this));
        RCLCPP_INFO(this->get_logger(), "GNSS Receiver Node Started");
    }

private:
    void read_gnss_data() {
        if (serial_port_.available()) {
            std::string line = serial_port_.readline();
            RCLCPP_INFO(this->get_logger(), "Received: %s", line.c_str());
            
            double lat, lon;
            if (parse_gnss_data(line, lat, lon)) {
                auto msg = sensor_msgs::msg::NavSatFix();
                msg.latitude = lat;
                msg.longitude = lon;
                msg.altitude = 0.0;
                msg.header.stamp = this->get_clock()->now();
                publisher_->publish(msg);
                RCLCPP_INFO(this->get_logger(), "Published GNSS Fix: Lat=%f, Lon=%f", lat, lon);
            }
        }
    }
    
    bool parse_gnss_data(const std::string &data, double &lat, double &lon) {
        if (data.find("$GPGGA") != std::string::npos) {
            std::vector<std::string> parts;
            std::stringstream ss(data);
            std::string item;
            while (std::getline(ss, item, ',')) {
                parts.push_back(item);
            }
            
            if (parts.size() > 5) {
                lat = convert_nmea_to_decimal(parts[2], parts[3]);
                lon = convert_nmea_to_decimal(parts[4], parts[5]);
                return true;
            }
        }
        return false;
    }
    
    double convert_nmea_to_decimal(const std::string &coord, const std::string &direction) {
        double degrees = std::stod(coord.substr(0, 2));
        double minutes = std::stod(coord.substr(2));
        double decimal = degrees + (minutes / 60.0);
        return (direction == "S" || direction == "W") ? -decimal : decimal;
    }
    
    rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr publisher_;
    serial::Serial serial_port_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GNSSReceiver>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
