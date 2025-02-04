// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msgs_positions:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msgs_positions/msg/detail/nav_sat_fix__rosidl_typesupport_introspection_c.h"
#include "msgs_positions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msgs_positions/msg/detail/nav_sat_fix__functions.h"
#include "msgs_positions/msg/detail/nav_sat_fix__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_positions__msg__NavSatFix__init(message_memory);
}

void msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_fini_function(void * message_memory)
{
  msgs_positions__msg__NavSatFix__fini(message_memory);
}

size_t msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__size_function__NavSatFix__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__get_const_function__NavSatFix__position_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__get_function__NavSatFix__position_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__fetch_function__NavSatFix__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__get_const_function__NavSatFix__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__assign_function__NavSatFix__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__get_function__NavSatFix__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_positions__msg__NavSatFix, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_positions__msg__NavSatFix, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_positions__msg__NavSatFix, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_positions__msg__NavSatFix, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(msgs_positions__msg__NavSatFix, position_covariance),  // bytes offset in struct
    NULL,  // default value
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__size_function__NavSatFix__position_covariance,  // size() function pointer
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__get_const_function__NavSatFix__position_covariance,  // get_const(index) function pointer
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__get_function__NavSatFix__position_covariance,  // get(index) function pointer
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__fetch_function__NavSatFix__position_covariance,  // fetch(index, &value) function pointer
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__assign_function__NavSatFix__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_positions__msg__NavSatFix, position_covariance_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_members = {
  "msgs_positions__msg",  // message namespace
  "NavSatFix",  // message name
  6,  // number of fields
  sizeof(msgs_positions__msg__NavSatFix),
  msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_member_array,  // message members
  msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_init_function,  // function to initialize message memory (memory has to be allocated)
  msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_type_support_handle = {
  0,
  &msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_positions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_positions, msg, NavSatFix)() {
  msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_type_support_handle.typesupport_identifier) {
    msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msgs_positions__msg__NavSatFix__rosidl_typesupport_introspection_c__NavSatFix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
