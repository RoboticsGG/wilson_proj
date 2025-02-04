// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msgs_mainrocon/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msgs_mainrocon/msg/detail/main_rocon__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace msgs_mainrocon
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
cdr_serialize(
  const msgs_mainrocon::msg::MainRocon & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msgs_mainrocon::msg::MainRocon & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
get_serialized_size(
  const msgs_mainrocon::msg::MainRocon & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
max_serialized_size_MainRocon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msgs_mainrocon

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_mainrocon, msg, MainRocon)();

#ifdef __cplusplus
}
#endif

#endif  // MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
