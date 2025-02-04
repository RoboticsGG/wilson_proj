// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice
#include "msgs_mainrocon/msg/detail/main_rocon__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msgs_mainrocon/msg/detail/main_rocon__struct.hpp"

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
namespace msgs_rovercon
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const msgs_rovercon::msg::SubRocon &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  msgs_rovercon::msg::SubRocon &);
size_t get_serialized_size(
  const msgs_rovercon::msg::SubRocon &,
  size_t current_alignment);
size_t
max_serialized_size_SubRocon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace msgs_rovercon


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mainrocon_msg
  msgs_rovercon::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mainrocon_msg,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msgs_mainrocon::msg::MainRocon & ros_message)
{
  // Member: mainrocon_msg
  msgs_rovercon::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mainrocon_msg);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
get_serialized_size(
  const msgs_mainrocon::msg::MainRocon & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mainrocon_msg

  current_alignment +=
    msgs_rovercon::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mainrocon_msg, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_mainrocon
max_serialized_size_MainRocon(
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


  // Member: mainrocon_msg
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        msgs_rovercon::msg::typesupport_fastrtps_cpp::max_serialized_size_SubRocon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msgs_mainrocon::msg::MainRocon;
    is_plain =
      (
      offsetof(DataType, mainrocon_msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MainRocon__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msgs_mainrocon::msg::MainRocon *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MainRocon__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msgs_mainrocon::msg::MainRocon *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MainRocon__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msgs_mainrocon::msg::MainRocon *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MainRocon__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MainRocon(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MainRocon__callbacks = {
  "msgs_mainrocon::msg",
  "MainRocon",
  _MainRocon__cdr_serialize,
  _MainRocon__cdr_deserialize,
  _MainRocon__get_serialized_size,
  _MainRocon__max_serialized_size
};

static rosidl_message_type_support_t _MainRocon__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MainRocon__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msgs_mainrocon

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msgs_mainrocon
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_mainrocon::msg::MainRocon>()
{
  return &msgs_mainrocon::msg::typesupport_fastrtps_cpp::_MainRocon__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_mainrocon, msg, MainRocon)() {
  return &msgs_mainrocon::msg::typesupport_fastrtps_cpp::_MainRocon__handle;
}

#ifdef __cplusplus
}
#endif
