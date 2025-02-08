// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_ifaces:srv/SpdLimit.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_IFACES__SRV__DETAIL__SPD_LIMIT__BUILDER_HPP_
#define SERVICE_IFACES__SRV__DETAIL__SPD_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_ifaces/srv/detail/spd_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_ifaces
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
  ::service_ifaces::srv::SpdLimit_Request rover_spd(::service_ifaces::srv::SpdLimit_Request::_rover_spd_type arg)
  {
    msg_.rover_spd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_ifaces::srv::SpdLimit_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_ifaces::srv::SpdLimit_Request>()
{
  return service_ifaces::srv::builder::Init_SpdLimit_Request_rover_spd();
}

}  // namespace service_ifaces


namespace service_ifaces
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
  ::service_ifaces::srv::SpdLimit_Response spd_result(::service_ifaces::srv::SpdLimit_Response::_spd_result_type arg)
  {
    msg_.spd_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_ifaces::srv::SpdLimit_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_ifaces::srv::SpdLimit_Response>()
{
  return service_ifaces::srv::builder::Init_SpdLimit_Response_spd_result();
}

}  // namespace service_ifaces

#endif  // SERVICE_IFACES__SRV__DETAIL__SPD_LIMIT__BUILDER_HPP_
