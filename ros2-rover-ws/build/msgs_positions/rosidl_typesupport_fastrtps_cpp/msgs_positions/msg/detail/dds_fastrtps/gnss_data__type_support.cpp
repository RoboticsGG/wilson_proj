// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msgs_positions:msg/GnssData.idl
// generated code does not contain a copyright notice
#include "msgs_positions/msg/detail/gnss_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msgs_positions/msg/detail/gnss_data__struct.hpp"

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: date
  cdr << ros_message.date;
  // Member: time
  cdr << ros_message.time;
  // Member: num_satellites
  cdr << ros_message.num_satellites;
  // Member: fix
  cdr << (ros_message.fix ? true : false);
  // Member: latitude
  cdr << ros_message.latitude;
  // Member: longitude
  cdr << ros_message.longitude;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msgs_positions::msg::GnssData & ros_message)
{
  // Member: date
  cdr >> ros_message.date;

  // Member: time
  cdr >> ros_message.time;

  // Member: num_satellites
  cdr >> ros_message.num_satellites;

  // Member: fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fix = tmp ? true : false;
  }

  // Member: latitude
  cdr >> ros_message.latitude;

  // Member: longitude
  cdr >> ros_message.longitude;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
get_serialized_size(
  const msgs_positions::msg::GnssData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.date.size() + 1);
  // Member: time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.time.size() + 1);
  // Member: num_satellites
  {
    size_t item_size = sizeof(ros_message.num_satellites);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fix
  {
    size_t item_size = sizeof(ros_message.fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latitude
  {
    size_t item_size = sizeof(ros_message.latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msgs_positions
max_serialized_size_GnssData(
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


  // Member: date
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: time
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: num_satellites
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msgs_positions::msg::GnssData;
    is_plain =
      (
      offsetof(DataType, longitude) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GnssData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msgs_positions::msg::GnssData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GnssData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msgs_positions::msg::GnssData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GnssData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msgs_positions::msg::GnssData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GnssData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GnssData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GnssData__callbacks = {
  "msgs_positions::msg",
  "GnssData",
  _GnssData__cdr_serialize,
  _GnssData__cdr_deserialize,
  _GnssData__get_serialized_size,
  _GnssData__max_serialized_size
};

static rosidl_message_type_support_t _GnssData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GnssData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msgs_positions

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msgs_positions
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_positions::msg::GnssData>()
{
  return &msgs_positions::msg::typesupport_fastrtps_cpp::_GnssData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msgs_positions, msg, GnssData)() {
  return &msgs_positions::msg::typesupport_fastrtps_cpp::_GnssData__handle;
}

#ifdef __cplusplus
}
#endif
