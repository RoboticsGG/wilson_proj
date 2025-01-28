// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rovercon_msgs:msg/Rocon.idl
// generated code does not contain a copyright notice
#include "rovercon_msgs/msg/detail/rocon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rovercon_msgs__msg__Rocon__init(rovercon_msgs__msg__Rocon * msg)
{
  if (!msg) {
    return false;
  }
  // fdr_msg
  // ro_ctrl_msg
  // spd_msg
  // bdr_msg
  return true;
}

void
rovercon_msgs__msg__Rocon__fini(rovercon_msgs__msg__Rocon * msg)
{
  if (!msg) {
    return;
  }
  // fdr_msg
  // ro_ctrl_msg
  // spd_msg
  // bdr_msg
}

bool
rovercon_msgs__msg__Rocon__are_equal(const rovercon_msgs__msg__Rocon * lhs, const rovercon_msgs__msg__Rocon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fdr_msg
  if (lhs->fdr_msg != rhs->fdr_msg) {
    return false;
  }
  // ro_ctrl_msg
  if (lhs->ro_ctrl_msg != rhs->ro_ctrl_msg) {
    return false;
  }
  // spd_msg
  if (lhs->spd_msg != rhs->spd_msg) {
    return false;
  }
  // bdr_msg
  if (lhs->bdr_msg != rhs->bdr_msg) {
    return false;
  }
  return true;
}

bool
rovercon_msgs__msg__Rocon__copy(
  const rovercon_msgs__msg__Rocon * input,
  rovercon_msgs__msg__Rocon * output)
{
  if (!input || !output) {
    return false;
  }
  // fdr_msg
  output->fdr_msg = input->fdr_msg;
  // ro_ctrl_msg
  output->ro_ctrl_msg = input->ro_ctrl_msg;
  // spd_msg
  output->spd_msg = input->spd_msg;
  // bdr_msg
  output->bdr_msg = input->bdr_msg;
  return true;
}

rovercon_msgs__msg__Rocon *
rovercon_msgs__msg__Rocon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__Rocon * msg = (rovercon_msgs__msg__Rocon *)allocator.allocate(sizeof(rovercon_msgs__msg__Rocon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rovercon_msgs__msg__Rocon));
  bool success = rovercon_msgs__msg__Rocon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rovercon_msgs__msg__Rocon__destroy(rovercon_msgs__msg__Rocon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rovercon_msgs__msg__Rocon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rovercon_msgs__msg__Rocon__Sequence__init(rovercon_msgs__msg__Rocon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__Rocon * data = NULL;

  if (size) {
    data = (rovercon_msgs__msg__Rocon *)allocator.zero_allocate(size, sizeof(rovercon_msgs__msg__Rocon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rovercon_msgs__msg__Rocon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rovercon_msgs__msg__Rocon__fini(&data[i - 1]);
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
rovercon_msgs__msg__Rocon__Sequence__fini(rovercon_msgs__msg__Rocon__Sequence * array)
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
      rovercon_msgs__msg__Rocon__fini(&array->data[i]);
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

rovercon_msgs__msg__Rocon__Sequence *
rovercon_msgs__msg__Rocon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__Rocon__Sequence * array = (rovercon_msgs__msg__Rocon__Sequence *)allocator.allocate(sizeof(rovercon_msgs__msg__Rocon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rovercon_msgs__msg__Rocon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rovercon_msgs__msg__Rocon__Sequence__destroy(rovercon_msgs__msg__Rocon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rovercon_msgs__msg__Rocon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rovercon_msgs__msg__Rocon__Sequence__are_equal(const rovercon_msgs__msg__Rocon__Sequence * lhs, const rovercon_msgs__msg__Rocon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rovercon_msgs__msg__Rocon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rovercon_msgs__msg__Rocon__Sequence__copy(
  const rovercon_msgs__msg__Rocon__Sequence * input,
  rovercon_msgs__msg__Rocon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rovercon_msgs__msg__Rocon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rovercon_msgs__msg__Rocon * data =
      (rovercon_msgs__msg__Rocon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rovercon_msgs__msg__Rocon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rovercon_msgs__msg__Rocon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rovercon_msgs__msg__Rocon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
