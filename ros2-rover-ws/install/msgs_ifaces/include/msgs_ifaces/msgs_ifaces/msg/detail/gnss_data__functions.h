// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgs_ifaces:msg/GnssData.idl
// generated code does not contain a copyright notice

#ifndef MSGS_IFACES__MSG__DETAIL__GNSS_DATA__FUNCTIONS_H_
#define MSGS_IFACES__MSG__DETAIL__GNSS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msgs_ifaces/msg/rosidl_generator_c__visibility_control.h"

#include "msgs_ifaces/msg/detail/gnss_data__struct.h"

/// Initialize msg/GnssData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_ifaces__msg__GnssData
 * )) before or use
 * msgs_ifaces__msg__GnssData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
bool
msgs_ifaces__msg__GnssData__init(msgs_ifaces__msg__GnssData * msg);

/// Finalize msg/GnssData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
void
msgs_ifaces__msg__GnssData__fini(msgs_ifaces__msg__GnssData * msg);

/// Create msg/GnssData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_ifaces__msg__GnssData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
msgs_ifaces__msg__GnssData *
msgs_ifaces__msg__GnssData__create();

/// Destroy msg/GnssData message.
/**
 * It calls
 * msgs_ifaces__msg__GnssData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
void
msgs_ifaces__msg__GnssData__destroy(msgs_ifaces__msg__GnssData * msg);

/// Check for msg/GnssData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
bool
msgs_ifaces__msg__GnssData__are_equal(const msgs_ifaces__msg__GnssData * lhs, const msgs_ifaces__msg__GnssData * rhs);

/// Copy a msg/GnssData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
bool
msgs_ifaces__msg__GnssData__copy(
  const msgs_ifaces__msg__GnssData * input,
  msgs_ifaces__msg__GnssData * output);

/// Initialize array of msg/GnssData messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_ifaces__msg__GnssData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
bool
msgs_ifaces__msg__GnssData__Sequence__init(msgs_ifaces__msg__GnssData__Sequence * array, size_t size);

/// Finalize array of msg/GnssData messages.
/**
 * It calls
 * msgs_ifaces__msg__GnssData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
void
msgs_ifaces__msg__GnssData__Sequence__fini(msgs_ifaces__msg__GnssData__Sequence * array);

/// Create array of msg/GnssData messages.
/**
 * It allocates the memory for the array and calls
 * msgs_ifaces__msg__GnssData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
msgs_ifaces__msg__GnssData__Sequence *
msgs_ifaces__msg__GnssData__Sequence__create(size_t size);

/// Destroy array of msg/GnssData messages.
/**
 * It calls
 * msgs_ifaces__msg__GnssData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
void
msgs_ifaces__msg__GnssData__Sequence__destroy(msgs_ifaces__msg__GnssData__Sequence * array);

/// Check for msg/GnssData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
bool
msgs_ifaces__msg__GnssData__Sequence__are_equal(const msgs_ifaces__msg__GnssData__Sequence * lhs, const msgs_ifaces__msg__GnssData__Sequence * rhs);

/// Copy an array of msg/GnssData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_ifaces
bool
msgs_ifaces__msg__GnssData__Sequence__copy(
  const msgs_ifaces__msg__GnssData__Sequence * input,
  msgs_ifaces__msg__GnssData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSGS_IFACES__MSG__DETAIL__GNSS_DATA__FUNCTIONS_H_
