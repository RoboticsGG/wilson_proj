// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_ifaces:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef MSGS_IFACES__MSG__DETAIL__GNSS_DATA__STRUCT_H_
#define MSGS_IFACES__MSG__DETAIL__GNSS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'date'
// Member 'time'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GnssData in the package msgs_ifaces.
typedef struct msgs_ifaces__msg__GnssData
{
  rosidl_runtime_c__String date;
  rosidl_runtime_c__String time;
  int32_t num_satellites;
  bool fix;
  double latitude;
  double longitude;
} msgs_ifaces__msg__GnssData;

// Struct for a sequence of msgs_ifaces__msg__GnssData.
typedef struct msgs_ifaces__msg__GnssData__Sequence
{
  msgs_ifaces__msg__GnssData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_ifaces__msg__GnssData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_IFACES__MSG__DETAIL__GNSS_DATA__STRUCT_H_
