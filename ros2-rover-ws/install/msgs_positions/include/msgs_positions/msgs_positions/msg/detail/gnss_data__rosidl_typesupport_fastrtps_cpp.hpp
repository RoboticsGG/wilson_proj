// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msgs_positions:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msgs_positions/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msgs_positions/msg/detail/gnss_data__struct.hpp"

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

namespace msgs_positions
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
cdr_serialize(
  const msgs_positions::msg::GnssData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msgs_positions::msg::GnssData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
get_serialized_size(
  const msgs_positions::msg::GnssData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
max_serialized_size_GnssData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msgs_positions

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_positions, msg, GnssData)();

#ifdef __cplusplus
}
#endif

#endif  // MSGS_POSITIONS__MSG__DETAIL__GNSS_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
