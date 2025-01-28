// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rovercon_msgs:msg/Rocon.idl
// generated code does not contain a copyright notice

#ifndef ROVERCON_MSGS__MSG__DETAIL__ROCON__STRUCT_H_
#define ROVERCON_MSGS__MSG__DETAIL__ROCON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Rocon in the package rovercon_msgs.
typedef struct rovercon_msgs__msg__Rocon
{
  uint8_t fdr_msg;
  float ro_ctrl_msg;
  uint8_t spd_msg;
  uint8_t bdr_msg;
} rovercon_msgs__msg__Rocon;

// Struct for a sequence of rovercon_msgs__msg__Rocon.
typedef struct rovercon_msgs__msg__Rocon__Sequence
{
  rovercon_msgs__msg__Rocon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rovercon_msgs__msg__Rocon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVERCON_MSGS__MSG__DETAIL__ROCON__STRUCT_H_
