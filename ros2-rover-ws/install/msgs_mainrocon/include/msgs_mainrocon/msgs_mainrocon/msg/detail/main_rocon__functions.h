// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice

#ifndef MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__FUNCTIONS_H_
#define MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msgs_mainrocon/msg/rosidl_generator_c__visibility_control.h"

#include "msgs_mainrocon/msg/detail/main_rocon__struct.h"

/// Initialize msg/MainRocon message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_mainrocon__msg__MainRocon
 * )) before or use
 * msgs_mainrocon__msg__MainRocon__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
bool
msgs_mainrocon__msg__MainRocon__init(msgs_mainrocon__msg__MainRocon * msg);

/// Finalize msg/MainRocon message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
void
msgs_mainrocon__msg__MainRocon__fini(msgs_mainrocon__msg__MainRocon * msg);

/// Create msg/MainRocon message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_mainrocon__msg__MainRocon__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
msgs_mainrocon__msg__MainRocon *
msgs_mainrocon__msg__MainRocon__create();

/// Destroy msg/MainRocon message.
/**
 * It calls
 * msgs_mainrocon__msg__MainRocon__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
void
msgs_mainrocon__msg__MainRocon__destroy(msgs_mainrocon__msg__MainRocon * msg);

/// Check for msg/MainRocon message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
bool
msgs_mainrocon__msg__MainRocon__are_equal(const msgs_mainrocon__msg__MainRocon * lhs, const msgs_mainrocon__msg__MainRocon * rhs);

/// Copy a msg/MainRocon message.
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
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
bool
msgs_mainrocon__msg__MainRocon__copy(
  const msgs_mainrocon__msg__MainRocon * input,
  msgs_mainrocon__msg__MainRocon * output);

/// Initialize array of msg/MainRocon messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_mainrocon__msg__MainRocon__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
bool
msgs_mainrocon__msg__MainRocon__Sequence__init(msgs_mainrocon__msg__MainRocon__Sequence * array, size_t size);

/// Finalize array of msg/MainRocon messages.
/**
 * It calls
 * msgs_mainrocon__msg__MainRocon__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
void
msgs_mainrocon__msg__MainRocon__Sequence__fini(msgs_mainrocon__msg__MainRocon__Sequence * array);

/// Create array of msg/MainRocon messages.
/**
 * It allocates the memory for the array and calls
 * msgs_mainrocon__msg__MainRocon__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
msgs_mainrocon__msg__MainRocon__Sequence *
msgs_mainrocon__msg__MainRocon__Sequence__create(size_t size);

/// Destroy array of msg/MainRocon messages.
/**
 * It calls
 * msgs_mainrocon__msg__MainRocon__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
void
msgs_mainrocon__msg__MainRocon__Sequence__destroy(msgs_mainrocon__msg__MainRocon__Sequence * array);

/// Check for msg/MainRocon message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
bool
msgs_mainrocon__msg__MainRocon__Sequence__are_equal(const msgs_mainrocon__msg__MainRocon__Sequence * lhs, const msgs_mainrocon__msg__MainRocon__Sequence * rhs);

/// Copy an array of msg/MainRocon messages.
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
ROSIDL_GENERATOR_C_PUBLIC_msgs_mainrocon
bool
msgs_mainrocon__msg__MainRocon__Sequence__copy(
  const msgs_mainrocon__msg__MainRocon__Sequence * input,
  msgs_mainrocon__msg__MainRocon__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSGS_MAINROCON__MSG__DETAIL__MAIN_ROCON__FUNCTIONS_H_
