#include "rclcpp/rclcpp.hpp"
#include "msgs_ifaces/msg/gnss_data.hpp"  
#include <json/json.h>
#include <fstream>
#include <sstream>
#include <chrono>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>

using namespace std::chrono_literals;

class GNSSPublisher : public rclcpp::Node {
public:
    GNSSPublisher() : Node("gnss_publisher"), csv_file_("gnss_data.csv", std::ios::app) {
        publisher_ = this->create_publisher<msgs_ifaces::msg::GnssData>("gnss_data", 10);

        // Open Serial Port
        serial_port_ = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NDELAY);
        if (serial_port_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Error opening serial port: /dev/ttyUSB0");
            return;
        }
        
        struct termios options;
        tcgetattr(serial_port_, &options);
        cfsetispeed(&options, B115200);
        cfsetospeed(&options, B115200);
        options.c_cflag |= (CLOCAL | CREAD);
        options.c_cflag &= ~PARENB;
        options.c_cflag &= ~CSTOPB;
        options.c_cflag &= ~CSIZE;
        options.c_cflag |= CS8;
        tcsetattr(serial_port_, TCSANOW, &options);

        // Write CSV header if file is empty
        if (csv_file_.tellp() == 0) {
            csv_file_ << "Date,Time,NumSatellites,Fix,Latitude,Longitude\n";
        }

        // Timer to publish every 1 second
        timer_ = this->create_wall_timer(1s, std::bind(&GNSSPublisher::readSerialData, this));
    }

    ~GNSSPublisher() {
        if (serial_port_ != -1) {
            close(serial_port_);
        }
        csv_file_.close();
    }

private:
    rclcpp::Publisher<msgs_ifaces::msg::GnssData>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int serial_port_;
    std::ofstream csv_file_;

    void readSerialData() {
        if (serial_port_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Serial port not open!");
            return;
        }

        char buffer[256];
        int bytes_read = read(serial_port_, buffer, sizeof(buffer) - 1);
        
        if (bytes_read > 0) {
            buffer[bytes_read] = '\0';  
            std::string json_data(buffer);

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

                auto msg = msgs_ifaces::msg::GnssData();
                msg.date = date;
                msg.time = time;
                msg.num_satellites = numSatellites;
                msg.fix = fix;
                msg.latitude = latitude;
                msg.longitude = longitude;

                publisher_->publish(msg);
                RCLCPP_INFO(this->get_logger(), "Published GNSS Data: Date=%s, Time=%s, Sat=%d, Fix=%d, Lat=%f, Lon=%f",
                            msg.date.c_str(), msg.time.c_str(), msg.num_satellites, msg.fix, msg.latitude, msg.longitude);

                // Write data to CSV
                csv_file_ << date << "," << time << "," << numSatellites << "," << fix 
                          << "," << latitude << "," << longitude << "\n";
            } else {
                RCLCPP_WARN(this->get_logger(), "Invalid JSON received!");
            }
        } else {
            RCLCPP_WARN(this->get_logger(), "No data received from GNSS device.");
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GNSSPublisher>());
    rclcpp::shutdown();
    return 0;
}
