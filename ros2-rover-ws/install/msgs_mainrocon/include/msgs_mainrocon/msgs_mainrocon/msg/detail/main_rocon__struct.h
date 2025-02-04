// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__STRUCT_H_
#define MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mainrocon_msg'
#include "msgs_rovercon/msg/detail/sub_rocon__struct.h"

/// Struct defined in msg/MainRocon in the package msgs_mainrocon.
typedef struct msgs_mainrocon__msg__MainRocon
{
  msgs_rovercon__msg__SubRocon mainrocon_msg;
} msgs_mainrocon__msg__MainRocon;

// Struct for a sequence of msgs_mainrocon__msg__MainRocon.
typedef struct msgs_mainrocon__msg__MainRocon__Sequence
{
  msgs_mainrocon__msg__MainRocon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_mainrocon__msg__MainRocon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__STRUCT_H_
