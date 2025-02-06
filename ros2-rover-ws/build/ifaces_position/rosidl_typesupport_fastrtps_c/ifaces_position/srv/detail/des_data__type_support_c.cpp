// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ifaces_position:srv/DesData.idl
// generated code does not contain a copyright notice
#include "ifaces_position/srv/detail/des_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ifaces_position/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ifaces_position/srv/detail/des_data__struct.h"
#include "ifaces_position/srv/detail/des_data__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DesData_Request__ros_msg_type = ifaces_position__srv__DesData_Request;

static bool _DesData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DesData_Request__ros_msg_type * ros_message = static_cast<const _DesData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: des_lat
  {
    cdr << ros_message->des_lat;
  }

  // Field name: des_long
  {
    cdr << ros_message->des_long;
  }

  return true;
}

static bool _DesData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DesData_Request__ros_msg_type * ros_message = static_cast<_DesData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: des_lat
  {
    cdr >> ros_message->des_lat;
  }

  // Field name: des_long
  {
    cdr >> ros_message->des_long;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ifaces_position
size_t get_serialized_size_ifaces_position__srv__DesData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DesData_Request__ros_msg_type * ros_message = static_cast<const _DesData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name des_lat
  {
    size_t item_size = sizeof(ros_message->des_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name des_long
  {
    size_t item_size = sizeof(ros_message->des_long);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DesData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ifaces_position__srv__DesData_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ifaces_position
size_t max_serialized_size_ifaces_position__srv__DesData_Request(
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

  // member: des_lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: des_long
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ifaces_position__srv__DesData_Request;
    is_plain =
      (
      offsetof(DataType, des_long) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DesData_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ifaces_position__srv__DesData_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DesData_Request = {
  "ifaces_position::srv",
  "DesData_Request",
  _DesData_Request__cdr_serialize,
  _DesData_Request__cdr_deserialize,
  _DesData_Request__get_serialized_size,
  _DesData_Request__max_serialized_size
};

static rosidl_message_type_support_t _DesData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DesData_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ifaces_position, srv, DesData_Request)() {
  return &_DesData_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ifaces_position/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ifaces_position/srv/detail/des_data__struct.h"
// already included above
// #include "ifaces_position/srv/detail/des_data__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // result_fser
#include "rosidl_runtime_c/string_functions.h"  // result_fser

// forward declare type support functions


using _DesData_Response__ros_msg_type = ifaces_position__srv__DesData_Response;

static bool _DesData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DesData_Response__ros_msg_type * ros_message = static_cast<const _DesData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result_fser
  {
    const rosidl_runtime_c__String * str = &ros_message->result_fser;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _DesData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DesData_Response__ros_msg_type * ros_message = static_cast<_DesData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result_fser
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result_fser.data) {
      rosidl_runtime_c__String__init(&ros_message->result_fser);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result_fser,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result_fser'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ifaces_position
size_t get_serialized_size_ifaces_position__srv__DesData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DesData_Response__ros_msg_type * ros_message = static_cast<const _DesData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result_fser
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result_fser.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DesData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ifaces_position__srv__DesData_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ifaces_position
size_t max_serialized_size_ifaces_position__srv__DesData_Response(
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

  // member: result_fser
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ifaces_position__srv__DesData_Response;
    is_plain =
      (
      offsetof(DataType, result_fser) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DesData_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ifaces_position__srv__DesData_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DesData_Response = {
  "ifaces_position::srv",
  "DesData_Response",
  _DesData_Response__cdr_serialize,
  _DesData_Response__cdr_deserialize,
  _DesData_Response__get_serialized_size,
  _DesData_Response__max_serialized_size
};

static rosidl_message_type_support_t _DesData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DesData_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ifaces_position, srv, DesData_Response)() {
  return &_DesData_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ifaces_position/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ifaces_position/srv/des_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DesData__callbacks = {
  "ifaces_position::srv",
  "DesData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ifaces_position, srv, DesData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ifaces_position, srv, DesData_Response)(),
};

static rosidl_service_type_support_t DesData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DesData__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ifaces_position, srv, DesData)() {
  return &DesData__handle;
}

#if defined(__cplusplus)
}
#endif
