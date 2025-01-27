// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rovercon_msgs:msg/SubRocon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rovercon_msgs/msg/detail/sub_rocon__rosidl_typesupport_introspection_c.h"
#include "rovercon_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rovercon_msgs/msg/detail/sub_rocon__functions.h"
#include "rovercon_msgs/msg/detail/sub_rocon__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rovercon_msgs__msg__SubRocon__init(message_memory);
}

void rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_fini_function(void * message_memory)
{
  rovercon_msgs__msg__SubRocon__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_member_array[4] = {
  {
    "roctrl_msg1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rovercon_msgs__msg__SubRocon, roctrl_msg1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roctrl_msg2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rovercon_msgs__msg__SubRocon, roctrl_msg2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spd_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rovercon_msgs__msg__SubRocon, spd_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b_dr_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rovercon_msgs__msg__SubRocon, b_dr_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_members = {
  "rovercon_msgs__msg",  // message namespace
  "SubRocon",  // message name
  4,  // number of fields
  sizeof(rovercon_msgs__msg__SubRocon),
  rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_member_array,  // message members
  rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_init_function,  // function to initialize message memory (memory has to be allocated)
  rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_type_support_handle = {
  0,
  &rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rovercon_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rovercon_msgs, msg, SubRocon)() {
  if (!rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_type_support_handle.typesupport_identifier) {
    rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rovercon_msgs__msg__SubRocon__rosidl_typesupport_introspection_c__SubRocon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
