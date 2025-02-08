// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ifaces_base:srv/SpdLimit.idl
// generated code does not contain a copyright notice
#include "ifaces_base/srv/detail/spd_limit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ifaces_base__srv__SpdLimit_Request__init(ifaces_base__srv__SpdLimit_Request * msg)
{
  if (!msg) {
    return false;
  }
  // rover_spd
  return true;
}

void
ifaces_base__srv__SpdLimit_Request__fini(ifaces_base__srv__SpdLimit_Request * msg)
{
  if (!msg) {
    return;
  }
  // rover_spd
}

bool
ifaces_base__srv__SpdLimit_Request__are_equal(const ifaces_base__srv__SpdLimit_Request * lhs, const ifaces_base__srv__SpdLimit_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rover_spd
  if (lhs->rover_spd != rhs->rover_spd) {
    return false;
  }
  return true;
}

bool
ifaces_base__srv__SpdLimit_Request__copy(
  const ifaces_base__srv__SpdLimit_Request * input,
  ifaces_base__srv__SpdLimit_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // rover_spd
  output->rover_spd = input->rover_spd;
  return true;
}

ifaces_base__srv__SpdLimit_Request *
ifaces_base__srv__SpdLimit_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_base__srv__SpdLimit_Request * msg = (ifaces_base__srv__SpdLimit_Request *)allocator.allocate(sizeof(ifaces_base__srv__SpdLimit_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ifaces_base__srv__SpdLimit_Request));
  bool success = ifaces_base__srv__SpdLimit_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ifaces_base__srv__SpdLimit_Request__destroy(ifaces_base__srv__SpdLimit_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ifaces_base__srv__SpdLimit_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ifaces_base__srv__SpdLimit_Request__Sequence__init(ifaces_base__srv__SpdLimit_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_base__srv__SpdLimit_Request * data = NULL;

  if (size) {
    data = (ifaces_base__srv__SpdLimit_Request *)allocator.zero_allocate(size, sizeof(ifaces_base__srv__SpdLimit_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ifaces_base__srv__SpdLimit_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ifaces_base__srv__SpdLimit_Request__fini(&data[i - 1]);
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
ifaces_base__srv__SpdLimit_Request__Sequence__fini(ifaces_base__srv__SpdLimit_Request__Sequence * array)
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
      ifaces_base__srv__SpdLimit_Request__fini(&array->data[i]);
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

ifaces_base__srv__SpdLimit_Request__Sequence *
ifaces_base__srv__SpdLimit_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_base__srv__SpdLimit_Request__Sequence * array = (ifaces_base__srv__SpdLimit_Request__Sequence *)allocator.allocate(sizeof(ifaces_base__srv__SpdLimit_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ifaces_base__srv__SpdLimit_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ifaces_base__srv__SpdLimit_Request__Sequence__destroy(ifaces_base__srv__SpdLimit_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ifaces_base__srv__SpdLimit_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ifaces_base__srv__SpdLimit_Request__Sequence__are_equal(const ifaces_base__srv__SpdLimit_Request__Sequence * lhs, const ifaces_base__srv__SpdLimit_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ifaces_base__srv__SpdLimit_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ifaces_base__srv__SpdLimit_Request__Sequence__copy(
  const ifaces_base__srv__SpdLimit_Request__Sequence * input,
  ifaces_base__srv__SpdLimit_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ifaces_base__srv__SpdLimit_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ifaces_base__srv__SpdLimit_Request * data =
      (ifaces_base__srv__SpdLimit_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ifaces_base__srv__SpdLimit_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ifaces_base__srv__SpdLimit_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ifaces_base__srv__SpdLimit_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `spd_result`
#include "rosidl_runtime_c/string_functions.h"

bool
ifaces_base__srv__SpdLimit_Response__init(ifaces_base__srv__SpdLimit_Response * msg)
{
  if (!msg) {
    return false;
  }
  // spd_result
  if (!rosidl_runtime_c__String__init(&msg->spd_result)) {
    ifaces_base__srv__SpdLimit_Response__fini(msg);
    return false;
  }
  return true;
}

void
ifaces_base__srv__SpdLimit_Response__fini(ifaces_base__srv__SpdLimit_Response * msg)
{
  if (!msg) {
    return;
  }
  // spd_result
  rosidl_runtime_c__String__fini(&msg->spd_result);
}

bool
ifaces_base__srv__SpdLimit_Response__are_equal(const ifaces_base__srv__SpdLimit_Response * lhs, const ifaces_base__srv__SpdLimit_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // spd_result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->spd_result), &(rhs->spd_result)))
  {
    return false;
  }
  return true;
}

bool
ifaces_base__srv__SpdLimit_Response__copy(
  const ifaces_base__srv__SpdLimit_Response * input,
  ifaces_base__srv__SpdLimit_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // spd_result
  if (!rosidl_runtime_c__String__copy(
      &(input->spd_result), &(output->spd_result)))
  {
    return false;
  }
  return true;
}

ifaces_base__srv__SpdLimit_Response *
ifaces_base__srv__SpdLimit_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_base__srv__SpdLimit_Response * msg = (ifaces_base__srv__SpdLimit_Response *)allocator.allocate(sizeof(ifaces_base__srv__SpdLimit_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ifaces_base__srv__SpdLimit_Response));
  bool success = ifaces_base__srv__SpdLimit_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ifaces_base__srv__SpdLimit_Response__destroy(ifaces_base__srv__SpdLimit_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ifaces_base__srv__SpdLimit_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ifaces_base__srv__SpdLimit_Response__Sequence__init(ifaces_base__srv__SpdLimit_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_base__srv__SpdLimit_Response * data = NULL;

  if (size) {
    data = (ifaces_base__srv__SpdLimit_Response *)allocator.zero_allocate(size, sizeof(ifaces_base__srv__SpdLimit_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ifaces_base__srv__SpdLimit_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ifaces_base__srv__SpdLimit_Response__fini(&data[i - 1]);
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
ifaces_base__srv__SpdLimit_Response__Sequence__fini(ifaces_base__srv__SpdLimit_Response__Sequence * array)
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
      ifaces_base__srv__SpdLimit_Response__fini(&array->data[i]);
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

ifaces_base__srv__SpdLimit_Response__Sequence *
ifaces_base__srv__SpdLimit_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_base__srv__SpdLimit_Response__Sequence * array = (ifaces_base__srv__SpdLimit_Response__Sequence *)allocator.allocate(sizeof(ifaces_base__srv__SpdLimit_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ifaces_base__srv__SpdLimit_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ifaces_base__srv__SpdLimit_Response__Sequence__destroy(ifaces_base__srv__SpdLimit_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ifaces_base__srv__SpdLimit_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ifaces_base__srv__SpdLimit_Response__Sequence__are_equal(const ifaces_base__srv__SpdLimit_Response__Sequence * lhs, const ifaces_base__srv__SpdLimit_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ifaces_base__srv__SpdLimit_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ifaces_base__srv__SpdLimit_Response__Sequence__copy(
  const ifaces_base__srv__SpdLimit_Response__Sequence * input,
  ifaces_base__srv__SpdLimit_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ifaces_base__srv__SpdLimit_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ifaces_base__srv__SpdLimit_Response * data =
      (ifaces_base__srv__SpdLimit_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ifaces_base__srv__SpdLimit_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ifaces_base__srv__SpdLimit_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ifaces_base__srv__SpdLimit_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
