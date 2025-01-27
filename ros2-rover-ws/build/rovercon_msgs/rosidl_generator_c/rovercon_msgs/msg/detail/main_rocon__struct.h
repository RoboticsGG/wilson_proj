// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rovercon_msgs:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__STRUCT_H_
#define ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rovercon_msg'
#include "rovercon_msg/msg/detail/sub_rocon__struct.h"

/// Struct defined in msg/MainRocon in the package rovercon_msgs.
typedef struct rovercon_msgs__msg__MainRocon
{
  rovercon_msg__msg__SubRocon rovercon_msg;
} rovercon_msgs__msg__MainRocon;

// Struct for a sequence of rovercon_msgs__msg__MainRocon.
typedef struct rovercon_msgs__msg__MainRocon__Sequence
{
  rovercon_msgs__msg__MainRocon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rovercon_msgs__msg__MainRocon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVERCON_MSGS__MSG__DETAIL__MAIN_ROCON__STRUCT_H_
