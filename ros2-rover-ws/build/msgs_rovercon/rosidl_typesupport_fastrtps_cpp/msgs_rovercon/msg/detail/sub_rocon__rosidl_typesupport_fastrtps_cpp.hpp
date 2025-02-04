// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msgs_rovercon:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msgs_rovercon/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msgs_rovercon/msg/detail/sub_rocon__struct.hpp"

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

namespace msgs_rovercon
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_rovercon
cdr_serialize(
  const msgs_rovercon::msg::SubRocon & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_rovercon
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msgs_rovercon::msg::SubRocon & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_rovercon
get_serialized_size(
  const msgs_rovercon::msg::SubRocon & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_rovercon
max_serialized_size_SubRocon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msgs_rovercon

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_rovercon
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_rovercon, msg, SubRocon)();

#ifdef __cplusplus
}
#endif

#endif  // MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
