// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ifaces_rover:srv/SpdLimit.idl
// generated code does not contain a copyright notice

#ifndef IFACES_ROVER__SRV__DETAIL__SPD_LIMIT__BUILDER_HPP_
#define IFACES_ROVER__SRV__DETAIL__SPD_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ifaces_rover/srv/detail/spd_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ifaces_rover
{

namespace srv
{

namespace builder
{

class Init_SpdLimit_Request_rover_spd
{
public:
  Init_SpdLimit_Request_rover_spd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ifaces_rover::srv::SpdLimit_Request rover_spd(::ifaces_rover::srv::SpdLimit_Request::_rover_spd_type arg)
  {
    msg_.rover_spd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ifaces_rover::srv::SpdLimit_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ifaces_rover::srv::SpdLimit_Request>()
{
  return ifaces_rover::srv::builder::Init_SpdLimit_Request_rover_spd();
}

}  // namespace ifaces_rover


namespace ifaces_rover
{

namespace srv
{

namespace builder
{

class Init_SpdLimit_Response_spd_result
{
public:
  Init_SpdLimit_Response_spd_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ifaces_rover::srv::SpdLimit_Response spd_result(::ifaces_rover::srv::SpdLimit_Response::_spd_result_type arg)
  {
    msg_.spd_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ifaces_rover::srv::SpdLimit_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ifaces_rover::srv::SpdLimit_Response>()
{
  return ifaces_rover::srv::builder::Init_SpdLimit_Response_spd_result();
}

}  // namespace ifaces_rover

#endif  // IFACES_ROVER__SRV__DETAIL__SPD_LIMIT__BUILDER_HPP_
