// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msgs_positions:msg/NavSatFix.idl
// generated code does not contain a copyright notice
#include "msgs_positions/msg/detail/nav_sat_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
msgs_positions__msg__NavSatFix__init(msgs_positions__msg__NavSatFix * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    msgs_positions__msg__NavSatFix__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // altitude
  // position_covariance
  // position_covariance_type
  return true;
}

void
msgs_positions__msg__NavSatFix__fini(msgs_positions__msg__NavSatFix * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // latitude
  // longitude
  // altitude
  // position_covariance
  // position_covariance_type
}

bool
msgs_positions__msg__NavSatFix__are_equal(const msgs_positions__msg__NavSatFix * lhs, const msgs_positions__msg__NavSatFix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // position_covariance_type
  if (lhs->position_covariance_type != rhs->position_covariance_type) {
    return false;
  }
  return true;
}

bool
msgs_positions__msg__NavSatFix__copy(
  const msgs_positions__msg__NavSatFix * input,
  msgs_positions__msg__NavSatFix * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // position_covariance_type
  output->position_covariance_type = input->position_covariance_type;
  return true;
}

msgs_positions__msg__NavSatFix *
msgs_positions__msg__NavSatFix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_positions__msg__NavSatFix * msg = (msgs_positions__msg__NavSatFix *)allocator.allocate(sizeof(msgs_positions__msg__NavSatFix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs_positions__msg__NavSatFix));
  bool success = msgs_positions__msg__NavSatFix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs_positions__msg__NavSatFix__destroy(msgs_positions__msg__NavSatFix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs_positions__msg__NavSatFix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs_positions__msg__NavSatFix__Sequence__init(msgs_positions__msg__NavSatFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_positions__msg__NavSatFix * data = NULL;

  if (size) {
    data = (msgs_positions__msg__NavSatFix *)allocator.zero_allocate(size, sizeof(msgs_positions__msg__NavSatFix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs_positions__msg__NavSatFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs_positions__msg__NavSatFix__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msgs_positions__msg__NavSatFix__Sequence__fini(msgs_positions__msg__NavSatFix__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msgs_positions__msg__NavSatFix__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msgs_positions__msg__NavSatFix__Sequence *
msgs_positions__msg__NavSatFix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_positions__msg__NavSatFix__Sequence * array = (msgs_positions__msg__NavSatFix__Sequence *)allocator.allocate(sizeof(msgs_positions__msg__NavSatFix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs_positions__msg__NavSatFix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs_positions__msg__NavSatFix__Sequence__destroy(msgs_positions__msg__NavSatFix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs_positions__msg__NavSatFix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs_positions__msg__NavSatFix__Sequence__are_equal(const msgs_positions__msg__NavSatFix__Sequence * lhs, const msgs_positions__msg__NavSatFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs_positions__msg__NavSatFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs_positions__msg__NavSatFix__Sequence__copy(
  const msgs_positions__msg__NavSatFix__Sequence * input,
  msgs_positions__msg__NavSatFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs_positions__msg__NavSatFix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msgs_positions__msg__NavSatFix * data =
      (msgs_positions__msg__NavSatFix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs_positions__msg__NavSatFix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msgs_positions__msg__NavSatFix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs_positions__msg__NavSatFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
