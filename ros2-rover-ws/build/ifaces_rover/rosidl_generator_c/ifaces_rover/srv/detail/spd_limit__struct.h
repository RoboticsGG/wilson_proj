// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ifaces_rover:srv/SpdLimit.idl
// generated code does not contain a copyright notice

#ifndef IFACES_ROVER__SRV__DETAIL__SPD_LIMIT__STRUCT_H_
#define IFACES_ROVER__SRV__DETAIL__SPD_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpdLimit in the package ifaces_rover.
typedef struct ifaces_rover__srv__SpdLimit_Request
{
  uint8_t rover_spd;
} ifaces_rover__srv__SpdLimit_Request;

// Struct for a sequence of ifaces_rover__srv__SpdLimit_Request.
typedef struct ifaces_rover__srv__SpdLimit_Request__Sequence
{
  ifaces_rover__srv__SpdLimit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ifaces_rover__srv__SpdLimit_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'spd_result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpdLimit in the package ifaces_rover.
typedef struct ifaces_rover__srv__SpdLimit_Response
{
  rosidl_runtime_c__String spd_result;
} ifaces_rover__srv__SpdLimit_Response;

// Struct for a sequence of ifaces_rover__srv__SpdLimit_Response.
typedef struct ifaces_rover__srv__SpdLimit_Response__Sequence
{
  ifaces_rover__srv__SpdLimit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ifaces_rover__srv__SpdLimit_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IFACES_ROVER__SRV__DETAIL__SPD_LIMIT__STRUCT_H_
