// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ifaces_position:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef IFACES_POSITION__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_
#define IFACES_POSITION__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ifaces_position/msg/detail/gnss_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ifaces_position
{

namespace msg
{

namespace builder
{

class Init_GnssData_longitude
{
public:
  explicit Init_GnssData_longitude(::ifaces_position::msg::GnssData & msg)
  : msg_(msg)
  {}
  ::ifaces_position::msg::GnssData longitude(::ifaces_position::msg::GnssData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ifaces_position::msg::GnssData msg_;
};

class Init_GnssData_latitude
{
public:
  explicit Init_GnssData_latitude(::ifaces_position::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_longitude latitude(::ifaces_position::msg::GnssData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GnssData_longitude(msg_);
  }

private:
  ::ifaces_position::msg::GnssData msg_;
};

class Init_GnssData_fix
{
public:
  explicit Init_GnssData_fix(::ifaces_position::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_latitude fix(::ifaces_position::msg::GnssData::_fix_type arg)
  {
    msg_.fix = std::move(arg);
    return Init_GnssData_latitude(msg_);
  }

private:
  ::ifaces_position::msg::GnssData msg_;
};

class Init_GnssData_num_satellites
{
public:
  explicit Init_GnssData_num_satellites(::ifaces_position::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_fix num_satellites(::ifaces_position::msg::GnssData::_num_satellites_type arg)
  {
    msg_.num_satellites = std::move(arg);
    return Init_GnssData_fix(msg_);
  }

private:
  ::ifaces_position::msg::GnssData msg_;
};

class Init_GnssData_time
{
public:
  explicit Init_GnssData_time(::ifaces_position::msg::GnssData & msg)
  : msg_(msg)
  {}
  Init_GnssData_num_satellites time(::ifaces_position::msg::GnssData::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GnssData_num_satellites(msg_);
  }

private:
  ::ifaces_position::msg::GnssData msg_;
};

class Init_GnssData_date
{
public:
  Init_GnssData_date()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GnssData_time date(::ifaces_position::msg::GnssData::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_GnssData_time(msg_);
  }

private:
  ::ifaces_position::msg::GnssData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ifaces_position::msg::GnssData>()
{
  return ifaces_position::msg::builder::Init_GnssData_date();
}

}  // namespace ifaces_position

#endif  // IFACES_POSITION__MSG__DETAIL__GNSS_DATA__BUILDER_HPP_
