// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msgs_mainrocon:msg/MainRocon.idl
// generated code does not contain a copyright notice
#include "msgs_mainrocon/msg/detail/main_rocon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mainrocon_msg`
#include "msgs_rovercon/msg/detail/sub_rocon__functions.h"

bool
msgs_mainrocon__msg__MainRocon__init(msgs_mainrocon__msg__MainRocon * msg)
{
  if (!msg) {
    return false;
  }
  // mainrocon_msg
  if (!msgs_rovercon__msg__SubRocon__init(&msg->mainrocon_msg)) {
    msgs_mainrocon__msg__MainRocon__fini(msg);
    return false;
  }
  return true;
}

void
msgs_mainrocon__msg__MainRocon__fini(msgs_mainrocon__msg__MainRocon * msg)
{
  if (!msg) {
    return;
  }
  // mainrocon_msg
  msgs_rovercon__msg__SubRocon__fini(&msg->mainrocon_msg);
}

bool
msgs_mainrocon__msg__MainRocon__are_equal(const msgs_mainrocon__msg__MainRocon * lhs, const msgs_mainrocon__msg__MainRocon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mainrocon_msg
  if (!msgs_rovercon__msg__SubRocon__are_equal(
      &(lhs->mainrocon_msg), &(rhs->mainrocon_msg)))
  {
    return false;
  }
  return true;
}

bool
msgs_mainrocon__msg__MainRocon__copy(
  const msgs_mainrocon__msg__MainRocon * input,
  msgs_mainrocon__msg__MainRocon * output)
{
  if (!input || !output) {
    return false;
  }
  // mainrocon_msg
  if (!msgs_rovercon__msg__SubRocon__copy(
      &(input->mainrocon_msg), &(output->mainrocon_msg)))
  {
    return false;
  }
  return true;
}

msgs_mainrocon__msg__MainRocon *
msgs_mainrocon__msg__MainRocon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_mainrocon__msg__MainRocon * msg = (msgs_mainrocon__msg__MainRocon *)allocator.allocate(sizeof(msgs_mainrocon__msg__MainRocon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs_mainrocon__msg__MainRocon));
  bool success = msgs_mainrocon__msg__MainRocon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msgs_mainrocon__msg__MainRocon__destroy(msgs_mainrocon__msg__MainRocon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msgs_mainrocon__msg__MainRocon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msgs_mainrocon__msg__MainRocon__Sequence__init(msgs_mainrocon__msg__MainRocon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_mainrocon__msg__MainRocon * data = NULL;

  if (size) {
    data = (msgs_mainrocon__msg__MainRocon *)allocator.zero_allocate(size, sizeof(msgs_mainrocon__msg__MainRocon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs_mainrocon__msg__MainRocon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs_mainrocon__msg__MainRocon__fini(&data[i - 1]);
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
msgs_mainrocon__msg__MainRocon__Sequence__fini(msgs_mainrocon__msg__MainRocon__Sequence * array)
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
      msgs_mainrocon__msg__MainRocon__fini(&array->data[i]);
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

msgs_mainrocon__msg__MainRocon__Sequence *
msgs_mainrocon__msg__MainRocon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msgs_mainrocon__msg__MainRocon__Sequence * array = (msgs_mainrocon__msg__MainRocon__Sequence *)allocator.allocate(sizeof(msgs_mainrocon__msg__MainRocon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msgs_mainrocon__msg__MainRocon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msgs_mainrocon__msg__MainRocon__Sequence__destroy(msgs_mainrocon__msg__MainRocon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msgs_mainrocon__msg__MainRocon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msgs_mainrocon__msg__MainRocon__Sequence__are_equal(const msgs_mainrocon__msg__MainRocon__Sequence * lhs, const msgs_mainrocon__msg__MainRocon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msgs_mainrocon__msg__MainRocon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msgs_mainrocon__msg__MainRocon__Sequence__copy(
  const msgs_mainrocon__msg__MainRocon__Sequence * input,
  msgs_mainrocon__msg__MainRocon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msgs_mainrocon__msg__MainRocon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msgs_mainrocon__msg__MainRocon * data =
      (msgs_mainrocon__msg__MainRocon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msgs_mainrocon__msg__MainRocon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msgs_mainrocon__msg__MainRocon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msgs_mainrocon__msg__MainRocon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
