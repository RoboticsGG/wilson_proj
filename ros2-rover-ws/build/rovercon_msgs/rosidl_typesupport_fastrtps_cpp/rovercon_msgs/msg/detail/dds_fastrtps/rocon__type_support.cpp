// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rovercon_msgs:msg/Rocon.idl
// generated code does not contain a copyright notice
#include "rovercon_msgs/msg/detail/rocon__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rovercon_msgs/msg/detail/rocon__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rovercon_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rovercon_msgs
cdr_serialize(
  const rovercon_msgs::msg::Rocon & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fdr_msg
  cdr << ros_message.fdr_msg;
  // Member: ro_ctrl_msg
  cdr << ros_message.ro_ctrl_msg;
  // Member: spd_msg
  cdr << ros_message.spd_msg;
  // Member: bdr_msg
  cdr << ros_message.bdr_msg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rovercon_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rovercon_msgs::msg::Rocon & ros_message)
{
  // Member: fdr_msg
  cdr >> ros_message.fdr_msg;

  // Member: ro_ctrl_msg
  cdr >> ros_message.ro_ctrl_msg;

  // Member: spd_msg
  cdr >> ros_message.spd_msg;

  // Member: bdr_msg
  cdr >> ros_message.bdr_msg;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rovercon_msgs
get_serialized_size(
  const rovercon_msgs::msg::Rocon & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fdr_msg
  {
    size_t item_size = sizeof(ros_message.fdr_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ro_ctrl_msg
  {
    size_t item_size = sizeof(ros_message.ro_ctrl_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spd_msg
  {
    size_t item_size = sizeof(ros_message.spd_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bdr_msg
  {
    size_t item_size = sizeof(ros_message.bdr_msg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rovercon_msgs
max_serialized_size_Rocon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: fdr_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ro_ctrl_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: spd_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bdr_msg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rovercon_msgs::msg::Rocon;
    is_plain =
      (
      offsetof(DataType, bdr_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Rocon__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rovercon_msgs::msg::Rocon *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rocon__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rovercon_msgs::msg::Rocon *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rocon__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rovercon_msgs::msg::Rocon *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rocon__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rocon(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rocon__callbacks = {
  "rovercon_msgs::msg",
  "Rocon",
  _Rocon__cdr_serialize,
  _Rocon__cdr_deserialize,
  _Rocon__get_serialized_size,
  _Rocon__max_serialized_size
};

static rosidl_message_type_support_t _Rocon__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rocon__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rovercon_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rovercon_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rovercon_msgs::msg::Rocon>()
{
  return &rovercon_msgs::msg::typesupport_fastrtps_cpp::_Rocon__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rovercon_msgs, msg, Rocon)() {
  return &rovercon_msgs::msg::typesupport_fastrtps_cpp::_Rocon__handle;
}

#ifdef __cplusplus
}
#endif
