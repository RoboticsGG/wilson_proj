// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from base_command_package:action/Carcontrol.idl
// generated code does not contain a copyright notice

#ifndef BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__FUNCTIONS_H_
#define BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "base_command_package/msg/rosidl_generator_c__visibility_control.h"

#include "base_command_package/action/detail/carcontrol__struct.h"

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_Goal
 * )) before or use
 * base_command_package__action__Carcontrol_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Goal__init(base_command_package__action__Carcontrol_Goal * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Goal__fini(base_command_package__action__Carcontrol_Goal * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_Goal *
base_command_package__action__Carcontrol_Goal__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Goal__destroy(base_command_package__action__Carcontrol_Goal * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Goal__are_equal(const base_command_package__action__Carcontrol_Goal * lhs, const base_command_package__action__Carcontrol_Goal * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Goal__copy(
  const base_command_package__action__Carcontrol_Goal * input,
  base_command_package__action__Carcontrol_Goal * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Goal__Sequence__init(base_command_package__action__Carcontrol_Goal__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Goal__Sequence__fini(base_command_package__action__Carcontrol_Goal__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_Goal__Sequence *
base_command_package__action__Carcontrol_Goal__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Goal__Sequence__destroy(base_command_package__action__Carcontrol_Goal__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Goal__Sequence__are_equal(const base_command_package__action__Carcontrol_Goal__Sequence * lhs, const base_command_package__action__Carcontrol_Goal__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Goal__Sequence__copy(
  const base_command_package__action__Carcontrol_Goal__Sequence * input,
  base_command_package__action__Carcontrol_Goal__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_Result
 * )) before or use
 * base_command_package__action__Carcontrol_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Result__init(base_command_package__action__Carcontrol_Result * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Result__fini(base_command_package__action__Carcontrol_Result * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_Result *
base_command_package__action__Carcontrol_Result__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Result__destroy(base_command_package__action__Carcontrol_Result * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Result__are_equal(const base_command_package__action__Carcontrol_Result * lhs, const base_command_package__action__Carcontrol_Result * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Result__copy(
  const base_command_package__action__Carcontrol_Result * input,
  base_command_package__action__Carcontrol_Result * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Result__Sequence__init(base_command_package__action__Carcontrol_Result__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Result__Sequence__fini(base_command_package__action__Carcontrol_Result__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_Result__Sequence *
base_command_package__action__Carcontrol_Result__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Result__Sequence__destroy(base_command_package__action__Carcontrol_Result__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Result__Sequence__are_equal(const base_command_package__action__Carcontrol_Result__Sequence * lhs, const base_command_package__action__Carcontrol_Result__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Result__Sequence__copy(
  const base_command_package__action__Carcontrol_Result__Sequence * input,
  base_command_package__action__Carcontrol_Result__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_Feedback
 * )) before or use
 * base_command_package__action__Carcontrol_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Feedback__init(base_command_package__action__Carcontrol_Feedback * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Feedback__fini(base_command_package__action__Carcontrol_Feedback * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_Feedback *
base_command_package__action__Carcontrol_Feedback__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Feedback__destroy(base_command_package__action__Carcontrol_Feedback * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Feedback__are_equal(const base_command_package__action__Carcontrol_Feedback * lhs, const base_command_package__action__Carcontrol_Feedback * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Feedback__copy(
  const base_command_package__action__Carcontrol_Feedback * input,
  base_command_package__action__Carcontrol_Feedback * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Feedback__Sequence__init(base_command_package__action__Carcontrol_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Feedback__Sequence__fini(base_command_package__action__Carcontrol_Feedback__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_Feedback__Sequence *
base_command_package__action__Carcontrol_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_Feedback__Sequence__destroy(base_command_package__action__Carcontrol_Feedback__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Feedback__Sequence__are_equal(const base_command_package__action__Carcontrol_Feedback__Sequence * lhs, const base_command_package__action__Carcontrol_Feedback__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_Feedback__Sequence__copy(
  const base_command_package__action__Carcontrol_Feedback__Sequence * input,
  base_command_package__action__Carcontrol_Feedback__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_SendGoal_Request
 * )) before or use
 * base_command_package__action__Carcontrol_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Request__init(base_command_package__action__Carcontrol_SendGoal_Request * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Request__fini(base_command_package__action__Carcontrol_SendGoal_Request * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_SendGoal_Request *
base_command_package__action__Carcontrol_SendGoal_Request__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Request__destroy(base_command_package__action__Carcontrol_SendGoal_Request * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Request__are_equal(const base_command_package__action__Carcontrol_SendGoal_Request * lhs, const base_command_package__action__Carcontrol_SendGoal_Request * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Request__copy(
  const base_command_package__action__Carcontrol_SendGoal_Request * input,
  base_command_package__action__Carcontrol_SendGoal_Request * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Request__Sequence__init(base_command_package__action__Carcontrol_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Request__Sequence__fini(base_command_package__action__Carcontrol_SendGoal_Request__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_SendGoal_Request__Sequence *
base_command_package__action__Carcontrol_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Request__Sequence__destroy(base_command_package__action__Carcontrol_SendGoal_Request__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Request__Sequence__are_equal(const base_command_package__action__Carcontrol_SendGoal_Request__Sequence * lhs, const base_command_package__action__Carcontrol_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Request__Sequence__copy(
  const base_command_package__action__Carcontrol_SendGoal_Request__Sequence * input,
  base_command_package__action__Carcontrol_SendGoal_Request__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_SendGoal_Response
 * )) before or use
 * base_command_package__action__Carcontrol_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Response__init(base_command_package__action__Carcontrol_SendGoal_Response * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Response__fini(base_command_package__action__Carcontrol_SendGoal_Response * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_SendGoal_Response *
base_command_package__action__Carcontrol_SendGoal_Response__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Response__destroy(base_command_package__action__Carcontrol_SendGoal_Response * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Response__are_equal(const base_command_package__action__Carcontrol_SendGoal_Response * lhs, const base_command_package__action__Carcontrol_SendGoal_Response * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Response__copy(
  const base_command_package__action__Carcontrol_SendGoal_Response * input,
  base_command_package__action__Carcontrol_SendGoal_Response * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Response__Sequence__init(base_command_package__action__Carcontrol_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Response__Sequence__fini(base_command_package__action__Carcontrol_SendGoal_Response__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_SendGoal_Response__Sequence *
base_command_package__action__Carcontrol_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_SendGoal_Response__Sequence__destroy(base_command_package__action__Carcontrol_SendGoal_Response__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Response__Sequence__are_equal(const base_command_package__action__Carcontrol_SendGoal_Response__Sequence * lhs, const base_command_package__action__Carcontrol_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_SendGoal_Response__Sequence__copy(
  const base_command_package__action__Carcontrol_SendGoal_Response__Sequence * input,
  base_command_package__action__Carcontrol_SendGoal_Response__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_GetResult_Request
 * )) before or use
 * base_command_package__action__Carcontrol_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Request__init(base_command_package__action__Carcontrol_GetResult_Request * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Request__fini(base_command_package__action__Carcontrol_GetResult_Request * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_GetResult_Request *
base_command_package__action__Carcontrol_GetResult_Request__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Request__destroy(base_command_package__action__Carcontrol_GetResult_Request * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Request__are_equal(const base_command_package__action__Carcontrol_GetResult_Request * lhs, const base_command_package__action__Carcontrol_GetResult_Request * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Request__copy(
  const base_command_package__action__Carcontrol_GetResult_Request * input,
  base_command_package__action__Carcontrol_GetResult_Request * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Request__Sequence__init(base_command_package__action__Carcontrol_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Request__Sequence__fini(base_command_package__action__Carcontrol_GetResult_Request__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_GetResult_Request__Sequence *
base_command_package__action__Carcontrol_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Request__Sequence__destroy(base_command_package__action__Carcontrol_GetResult_Request__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Request__Sequence__are_equal(const base_command_package__action__Carcontrol_GetResult_Request__Sequence * lhs, const base_command_package__action__Carcontrol_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Request__Sequence__copy(
  const base_command_package__action__Carcontrol_GetResult_Request__Sequence * input,
  base_command_package__action__Carcontrol_GetResult_Request__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_GetResult_Response
 * )) before or use
 * base_command_package__action__Carcontrol_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Response__init(base_command_package__action__Carcontrol_GetResult_Response * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Response__fini(base_command_package__action__Carcontrol_GetResult_Response * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_GetResult_Response *
base_command_package__action__Carcontrol_GetResult_Response__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Response__destroy(base_command_package__action__Carcontrol_GetResult_Response * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Response__are_equal(const base_command_package__action__Carcontrol_GetResult_Response * lhs, const base_command_package__action__Carcontrol_GetResult_Response * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Response__copy(
  const base_command_package__action__Carcontrol_GetResult_Response * input,
  base_command_package__action__Carcontrol_GetResult_Response * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Response__Sequence__init(base_command_package__action__Carcontrol_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Response__Sequence__fini(base_command_package__action__Carcontrol_GetResult_Response__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_GetResult_Response__Sequence *
base_command_package__action__Carcontrol_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_GetResult_Response__Sequence__destroy(base_command_package__action__Carcontrol_GetResult_Response__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Response__Sequence__are_equal(const base_command_package__action__Carcontrol_GetResult_Response__Sequence * lhs, const base_command_package__action__Carcontrol_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_GetResult_Response__Sequence__copy(
  const base_command_package__action__Carcontrol_GetResult_Response__Sequence * input,
  base_command_package__action__Carcontrol_GetResult_Response__Sequence * output);

/// Initialize action/Carcontrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * base_command_package__action__Carcontrol_FeedbackMessage
 * )) before or use
 * base_command_package__action__Carcontrol_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_FeedbackMessage__init(base_command_package__action__Carcontrol_FeedbackMessage * msg);

/// Finalize action/Carcontrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_FeedbackMessage__fini(base_command_package__action__Carcontrol_FeedbackMessage * msg);

/// Create action/Carcontrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * base_command_package__action__Carcontrol_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_FeedbackMessage *
base_command_package__action__Carcontrol_FeedbackMessage__create();

/// Destroy action/Carcontrol message.
/**
 * It calls
 * base_command_package__action__Carcontrol_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_FeedbackMessage__destroy(base_command_package__action__Carcontrol_FeedbackMessage * msg);

/// Check for action/Carcontrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_FeedbackMessage__are_equal(const base_command_package__action__Carcontrol_FeedbackMessage * lhs, const base_command_package__action__Carcontrol_FeedbackMessage * rhs);

/// Copy a action/Carcontrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_FeedbackMessage__copy(
  const base_command_package__action__Carcontrol_FeedbackMessage * input,
  base_command_package__action__Carcontrol_FeedbackMessage * output);

/// Initialize array of action/Carcontrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * base_command_package__action__Carcontrol_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_FeedbackMessage__Sequence__init(base_command_package__action__Carcontrol_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_FeedbackMessage__Sequence__fini(base_command_package__action__Carcontrol_FeedbackMessage__Sequence * array);

/// Create array of action/Carcontrol messages.
/**
 * It allocates the memory for the array and calls
 * base_command_package__action__Carcontrol_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
base_command_package__action__Carcontrol_FeedbackMessage__Sequence *
base_command_package__action__Carcontrol_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Carcontrol messages.
/**
 * It calls
 * base_command_package__action__Carcontrol_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
void
base_command_package__action__Carcontrol_FeedbackMessage__Sequence__destroy(base_command_package__action__Carcontrol_FeedbackMessage__Sequence * array);

/// Check for action/Carcontrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_FeedbackMessage__Sequence__are_equal(const base_command_package__action__Carcontrol_FeedbackMessage__Sequence * lhs, const base_command_package__action__Carcontrol_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Carcontrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_base_command_package
bool
base_command_package__action__Carcontrol_FeedbackMessage__Sequence__copy(
  const base_command_package__action__Carcontrol_FeedbackMessage__Sequence * input,
  base_command_package__action__Carcontrol_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BASE_COMMAND_PACKAGE__ACTION__DETAIL__CARCONTROL__FUNCTIONS_H_
