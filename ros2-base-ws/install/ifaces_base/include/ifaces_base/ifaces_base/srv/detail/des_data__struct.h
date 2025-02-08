// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ifaces_base:srv/DesData.idl
// generated code does not contain a copyright notice

#ifndef IFACES_BASE__SRV__DETAIL__DES_DATA__STRUCT_H_
#define IFACES_BASE__SRV__DETAIL__DES_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DesData in the package ifaces_base.
typedef struct ifaces_base__srv__DesData_Request
{
  double des_lat;
  double des_long;
} ifaces_base__srv__DesData_Request;

// Struct for a sequence of ifaces_base__srv__DesData_Request.
typedef struct ifaces_base__srv__DesData_Request__Sequence
{
  ifaces_base__srv__DesData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ifaces_base__srv__DesData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_fser'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DesData in the package ifaces_base.
typedef struct ifaces_base__srv__DesData_Response
{
  rosidl_runtime_c__String result_fser;
} ifaces_base__srv__DesData_Response;

// Struct for a sequence of ifaces_base__srv__DesData_Response.
typedef struct ifaces_base__srv__DesData_Response__Sequence
{
  ifaces_base__srv__DesData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ifaces_base__srv__DesData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IFACES_BASE__SRV__DETAIL__DES_DATA__STRUCT_H_
