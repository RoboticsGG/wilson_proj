// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ifaces_base:srv/DesData.idl
// generated code does not contain a copyright notice

#ifndef IFACES_BASE__SRV__DETAIL__DES_DATA__BUILDER_HPP_
#define IFACES_BASE__SRV__DETAIL__DES_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ifaces_base/srv/detail/des_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ifaces_base
{

namespace srv
{

namespace builder
{

class Init_DesData_Request_des_long
{
public:
  explicit Init_DesData_Request_des_long(::ifaces_base::srv::DesData_Request & msg)
  : msg_(msg)
  {}
  ::ifaces_base::srv::DesData_Request des_long(::ifaces_base::srv::DesData_Request::_des_long_type arg)
  {
    msg_.des_long = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ifaces_base::srv::DesData_Request msg_;
};

class Init_DesData_Request_des_lat
{
public:
  Init_DesData_Request_des_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DesData_Request_des_long des_lat(::ifaces_base::srv::DesData_Request::_des_lat_type arg)
  {
    msg_.des_lat = std::move(arg);
    return Init_DesData_Request_des_long(msg_);
  }

private:
  ::ifaces_base::srv::DesData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ifaces_base::srv::DesData_Request>()
{
  return ifaces_base::srv::builder::Init_DesData_Request_des_lat();
}

}  // namespace ifaces_base


namespace ifaces_base
{

namespace srv
{

namespace builder
{

class Init_DesData_Response_result_fser
{
public:
  Init_DesData_Response_result_fser()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ifaces_base::srv::DesData_Response result_fser(::ifaces_base::srv::DesData_Response::_result_fser_type arg)
  {
    msg_.result_fser = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ifaces_base::srv::DesData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ifaces_base::srv::DesData_Response>()
{
  return ifaces_base::srv::builder::Init_DesData_Response_result_fser();
}

}  // namespace ifaces_base

#endif  // IFACES_BASE__SRV__DETAIL__DES_DATA__BUILDER_HPP_
