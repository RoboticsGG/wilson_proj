// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_positions:msg/NavSatFix.idl
// generated code does not contain a copyright notice

#ifndef MSGS_POSITIONS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_
#define MSGS_POSITIONS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/NavSatFix in the package msgs_positions.
typedef struct msgs_positions__msg__NavSatFix
{
  std_msgs__msg__Header header;
  double latitude;
  double longitude;
  double altitude;
  double position_covariance[9];
  uint8_t position_covariance_type;
} msgs_positions__msg__NavSatFix;

// Struct for a sequence of msgs_positions__msg__NavSatFix.
typedef struct msgs_positions__msg__NavSatFix__Sequence
{
  msgs_positions__msg__NavSatFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_positions__msg__NavSatFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_POSITIONS__MSG__DETAIL__NAV_SAT_FIX__STRUCT_H_
