// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rovercon_msgs:msg/SubRocon.idl
// generated code does not contain a copyright notice
#include "rovercon_msgs/msg/detail/sub_rocon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rovercon_msgs__msg__SubRocon__init(rovercon_msgs__msg__SubRocon * msg)
{
  if (!msg) {
    return false;
  }
  // roctrl_msg1
  // roctrl_msg2
  // spd_msg
  // b_dr_msg
  return true;
}

void
rovercon_msgs__msg__SubRocon__fini(rovercon_msgs__msg__SubRocon * msg)
{
  if (!msg) {
    return;
  }
  // roctrl_msg1
  // roctrl_msg2
  // spd_msg
  // b_dr_msg
}

bool
rovercon_msgs__msg__SubRocon__are_equal(const rovercon_msgs__msg__SubRocon * lhs, const rovercon_msgs__msg__SubRocon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roctrl_msg1
  if (lhs->roctrl_msg1 != rhs->roctrl_msg1) {
    return false;
  }
  // roctrl_msg2
  if (lhs->roctrl_msg2 != rhs->roctrl_msg2) {
    return false;
  }
  // spd_msg
  if (lhs->spd_msg != rhs->spd_msg) {
    return false;
  }
  // b_dr_msg
  if (lhs->b_dr_msg != rhs->b_dr_msg) {
    return false;
  }
  return true;
}

bool
rovercon_msgs__msg__SubRocon__copy(
  const rovercon_msgs__msg__SubRocon * input,
  rovercon_msgs__msg__SubRocon * output)
{
  if (!input || !output) {
    return false;
  }
  // roctrl_msg1
  output->roctrl_msg1 = input->roctrl_msg1;
  // roctrl_msg2
  output->roctrl_msg2 = input->roctrl_msg2;
  // spd_msg
  output->spd_msg = input->spd_msg;
  // b_dr_msg
  output->b_dr_msg = input->b_dr_msg;
  return true;
}

rovercon_msgs__msg__SubRocon *
rovercon_msgs__msg__SubRocon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__SubRocon * msg = (rovercon_msgs__msg__SubRocon *)allocator.allocate(sizeof(rovercon_msgs__msg__SubRocon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rovercon_msgs__msg__SubRocon));
  bool success = rovercon_msgs__msg__SubRocon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rovercon_msgs__msg__SubRocon__destroy(rovercon_msgs__msg__SubRocon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rovercon_msgs__msg__SubRocon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rovercon_msgs__msg__SubRocon__Sequence__init(rovercon_msgs__msg__SubRocon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__SubRocon * data = NULL;

  if (size) {
    data = (rovercon_msgs__msg__SubRocon *)allocator.zero_allocate(size, sizeof(rovercon_msgs__msg__SubRocon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rovercon_msgs__msg__SubRocon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rovercon_msgs__msg__SubRocon__fini(&data[i - 1]);
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
rovercon_msgs__msg__SubRocon__Sequence__fini(rovercon_msgs__msg__SubRocon__Sequence * array)
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
      rovercon_msgs__msg__SubRocon__fini(&array->data[i]);
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

rovercon_msgs__msg__SubRocon__Sequence *
rovercon_msgs__msg__SubRocon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rovercon_msgs__msg__SubRocon__Sequence * array = (rovercon_msgs__msg__SubRocon__Sequence *)allocator.allocate(sizeof(rovercon_msgs__msg__SubRocon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rovercon_msgs__msg__SubRocon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rovercon_msgs__msg__SubRocon__Sequence__destroy(rovercon_msgs__msg__SubRocon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rovercon_msgs__msg__SubRocon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rovercon_msgs__msg__SubRocon__Sequence__are_equal(const rovercon_msgs__msg__SubRocon__Sequence * lhs, const rovercon_msgs__msg__SubRocon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rovercon_msgs__msg__SubRocon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rovercon_msgs__msg__SubRocon__Sequence__copy(
  const rovercon_msgs__msg__SubRocon__Sequence * input,
  rovercon_msgs__msg__SubRocon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rovercon_msgs__msg__SubRocon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rovercon_msgs__msg__SubRocon * data =
      (rovercon_msgs__msg__SubRocon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rovercon_msgs__msg__SubRocon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rovercon_msgs__msg__SubRocon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rovercon_msgs__msg__SubRocon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
