// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rovercon_msgs:msg/MainRocon.idl
// generated code does not contain a copyright notice
#include "rovercon_msgs/msg/detail/main_rocon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rovercon_msg`
#include "rovercon_msg/msg/detail/sub_rocon__functions.h"

bool
rovercon_msgs__msg__MainRocon__init(rovercon_msgs__msg__MainRocon * msg)
{
  if (!msg) {
    return false;
  }
  // rovercon_msg
  if (!rovercon_msg__msg__SubRocon__init(&msg->rovercon_msg)) {
    rovercon_msgs__msg__MainRocon__fini(msg);
    return false;
  }
  return true;
}

void
rovercon_msgs__msg__MainRocon__fini(rovercon_msgs__msg__MainRocon * msg)
{
  if (!msg) {
    return;
  }
  // rovercon_msg
  rovercon_msg__msg__SubRocon__fini(&msg->rovercon_msg);
}

bool
rovercon_msgs__msg__MainRocon__are_equal(const rovercon_msgs__msg__MainRocon * lhs, const rovercon_msgs__msg__MainRocon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rovercon_msg
  if (!rovercon_msg__msg__SubRocon__are_equal(
      &(lhs->rovercon_msg), &(rhs->rovercon_msg)))
  {
    return false;
  }
  return true;
}

bool
rovercon_msgs__msg__MainRocon__copy(
  const rovercon_msgs__msg__MainRocon * input,
  rovercon_msgs__msg__MainRocon * output)
{
  if (!input || !output) {
    return false;
  }
  // rovercon_msg
  if (!rovercon_msg__msg__SubRocon__copy(
      &(input->rovercon_msg), &(output->rovercon_msg)))
  {
    return false;
  }
  return true;
}

rovercon_msgs__msg__MainRocon *
rovercon_msgs__msg__MainRocon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__MainRocon * msg = (rovercon_msgs__msg__MainRocon *)allocator.allocate(sizeof(rovercon_msgs__msg__MainRocon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rovercon_msgs__msg__MainRocon));
  bool success = rovercon_msgs__msg__MainRocon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rovercon_msgs__msg__MainRocon__destroy(rovercon_msgs__msg__MainRocon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rovercon_msgs__msg__MainRocon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rovercon_msgs__msg__MainRocon__Sequence__init(rovercon_msgs__msg__MainRocon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__MainRocon * data = NULL;

  if (size) {
    data = (rovercon_msgs__msg__MainRocon *)allocator.zero_allocate(size, sizeof(rovercon_msgs__msg__MainRocon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rovercon_msgs__msg__MainRocon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rovercon_msgs__msg__MainRocon__fini(&data[i - 1]);
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
rovercon_msgs__msg__MainRocon__Sequence__fini(rovercon_msgs__msg__MainRocon__Sequence * array)
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
      rovercon_msgs__msg__MainRocon__fini(&array->data[i]);
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

rovercon_msgs__msg__MainRocon__Sequence *
rovercon_msgs__msg__MainRocon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__MainRocon__Sequence * array = (rovercon_msgs__msg__MainRocon__Sequence *)allocator.allocate(sizeof(rovercon_msgs__msg__MainRocon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rovercon_msgs__msg__MainRocon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rovercon_msgs__msg__MainRocon__Sequence__destroy(rovercon_msgs__msg__MainRocon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rovercon_msgs__msg__MainRocon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rovercon_msgs__msg__MainRocon__Sequence__are_equal(const rovercon_msgs__msg__MainRocon__Sequence * lhs, const rovercon_msgs__msg__MainRocon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rovercon_msgs__msg__MainRocon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rovercon_msgs__msg__MainRocon__Sequence__copy(
  const rovercon_msgs__msg__MainRocon__Sequence * input,
  rovercon_msgs__msg__MainRocon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rovercon_msgs__msg__MainRocon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rovercon_msgs__msg__MainRocon * data =
      (rovercon_msgs__msg__MainRocon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rovercon_msgs__msg__MainRocon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rovercon_msgs__msg__MainRocon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rovercon_msgs__msg__MainRocon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
