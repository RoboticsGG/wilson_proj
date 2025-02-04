// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_rovercon:msg/SubRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__STRUCT_H_
#define MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SubRocon in the package msgs_rovercon.
typedef struct msgs_rovercon__msg__SubRocon
{
  uint8_t fdr_msg;
  float ro_ctrl_msg;
  uint8_t spd_msg;
  uint8_t bdr_msg;
} msgs_rovercon__msg__SubRocon;

// Struct for a sequence of msgs_rovercon__msg__SubRocon.
typedef struct msgs_rovercon__msg__SubRocon__Sequence
{
  msgs_rovercon__msg__SubRocon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_rovercon__msg__SubRocon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_ROVERCON__MSG__DETAIL__SUB_ROCON__STRUCT_H_
