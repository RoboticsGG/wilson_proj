// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from service_ifaces:srv/DesData.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_IFACES__SRV__DETAIL__DES_DATA__STRUCT_H_
#define SERVICE_IFACES__SRV__DETAIL__DES_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DesData in the package service_ifaces.
typedef struct service_ifaces__srv__DesData_Request
{
  double des_lat;
  double des_long;
} service_ifaces__srv__DesData_Request;

// Struct for a sequence of service_ifaces__srv__DesData_Request.
typedef struct service_ifaces__srv__DesData_Request__Sequence
{
  service_ifaces__srv__DesData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_ifaces__srv__DesData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_fser'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DesData in the package service_ifaces.
typedef struct service_ifaces__srv__DesData_Response
{
  rosidl_runtime_c__String result_fser;
} service_ifaces__srv__DesData_Response;

// Struct for a sequence of service_ifaces__srv__DesData_Response.
typedef struct service_ifaces__srv__DesData_Response__Sequence
{
  service_ifaces__srv__DesData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} service_ifaces__srv__DesData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICE_IFACES__SRV__DETAIL__DES_DATA__STRUCT_H_
