// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_ifaces:srv/DesData.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_IFACES__SRV__DETAIL__DES_DATA__BUILDER_HPP_
#define SERVICE_IFACES__SRV__DETAIL__DES_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_ifaces/srv/detail/des_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_ifaces
{

namespace srv
{

namespace builder
{

class Init_DesData_Request_des_long
{
public:
  explicit Init_DesData_Request_des_long(::service_ifaces::srv::DesData_Request & msg)
  : msg_(msg)
  {}
  ::service_ifaces::srv::DesData_Request des_long(::service_ifaces::srv::DesData_Request::_des_long_type arg)
  {
    msg_.des_long = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_ifaces::srv::DesData_Request msg_;
};

class Init_DesData_Request_des_lat
{
public:
  Init_DesData_Request_des_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DesData_Request_des_long des_lat(::service_ifaces::srv::DesData_Request::_des_lat_type arg)
  {
    msg_.des_lat = std::move(arg);
    return Init_DesData_Request_des_long(msg_);
  }

private:
  ::service_ifaces::srv::DesData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_ifaces::srv::DesData_Request>()
{
  return service_ifaces::srv::builder::Init_DesData_Request_des_lat();
}

}  // namespace service_ifaces


namespace service_ifaces
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
  ::service_ifaces::srv::DesData_Response result_fser(::service_ifaces::srv::DesData_Response::_result_fser_type arg)
  {
    msg_.result_fser = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_ifaces::srv::DesData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_ifaces::srv::DesData_Response>()
{
  return service_ifaces::srv::builder::Init_DesData_Response_result_fser();
}

}  // namespace service_ifaces

#endif  // SERVICE_IFACES__SRV__DETAIL__DES_DATA__BUILDER_HPP_
