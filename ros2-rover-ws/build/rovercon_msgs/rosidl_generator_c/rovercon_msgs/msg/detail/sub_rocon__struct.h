// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rovercon_msgs:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__STRUCT_H_
#define ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SubRocon in the package rovercon_msgs.
typedef struct rovercon_msgs__msg__SubRocon
{
  uint16_t roctrl_msg1;
  float roctrl_msg2;
  uint16_t spd_msg;
  uint16_t b_dr_msg;
} rovercon_msgs__msg__SubRocon;

// Struct for a sequence of rovercon_msgs__msg__SubRocon.
typedef struct rovercon_msgs__msg__SubRocon__Sequence
{
  rovercon_msgs__msg__SubRocon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rovercon_msgs__msg__SubRocon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVERCON_MSGS__MSG__DETAIL__SUB_ROCON__STRUCT_H_
