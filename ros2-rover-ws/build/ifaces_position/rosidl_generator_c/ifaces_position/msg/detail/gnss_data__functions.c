// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ifaces_position:msg/GnssData.idl
// generated code does not contain a copyright notice
#include "ifaces_position/msg/detail/gnss_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `date`
// Member `time`
#include "rosidl_runtime_c/string_functions.h"

bool
ifaces_position__msg__GnssData__init(ifaces_position__msg__GnssData * msg)
{
  if (!msg) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    ifaces_position__msg__GnssData__fini(msg);
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__init(&msg->time)) {
    ifaces_position__msg__GnssData__fini(msg);
    return false;
  }
  // num_satellites
  // fix
  // latitude
  // longitude
  return true;
}

void
ifaces_position__msg__GnssData__fini(ifaces_position__msg__GnssData * msg)
{
  if (!msg) {
    return;
  }
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // time
  rosidl_runtime_c__String__fini(&msg->time);
  // num_satellites
  // fix
  // latitude
  // longitude
}

bool
ifaces_position__msg__GnssData__are_equal(const ifaces_position__msg__GnssData * lhs, const ifaces_position__msg__GnssData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // num_satellites
  if (lhs->num_satellites != rhs->num_satellites) {
    return false;
  }
  // fix
  if (lhs->fix != rhs->fix) {
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
  return true;
}

bool
ifaces_position__msg__GnssData__copy(
  const ifaces_position__msg__GnssData * input,
  ifaces_position__msg__GnssData * output)
{
  if (!input || !output) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // num_satellites
  output->num_satellites = input->num_satellites;
  // fix
  output->fix = input->fix;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  return true;
}

ifaces_position__msg__GnssData *
ifaces_position__msg__GnssData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_position__msg__GnssData * msg = (ifaces_position__msg__GnssData *)allocator.allocate(sizeof(ifaces_position__msg__GnssData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ifaces_position__msg__GnssData));
  bool success = ifaces_position__msg__GnssData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ifaces_position__msg__GnssData__destroy(ifaces_position__msg__GnssData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ifaces_position__msg__GnssData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ifaces_position__msg__GnssData__Sequence__init(ifaces_position__msg__GnssData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_position__msg__GnssData * data = NULL;

  if (size) {
    data = (ifaces_position__msg__GnssData *)allocator.zero_allocate(size, sizeof(ifaces_position__msg__GnssData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ifaces_position__msg__GnssData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ifaces_position__msg__GnssData__fini(&data[i - 1]);
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
ifaces_position__msg__GnssData__Sequence__fini(ifaces_position__msg__GnssData__Sequence * array)
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
      ifaces_position__msg__GnssData__fini(&array->data[i]);
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

ifaces_position__msg__GnssData__Sequence *
ifaces_position__msg__GnssData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ifaces_position__msg__GnssData__Sequence * array = (ifaces_position__msg__GnssData__Sequence *)allocator.allocate(sizeof(ifaces_position__msg__GnssData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ifaces_position__msg__GnssData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ifaces_position__msg__GnssData__Sequence__destroy(ifaces_position__msg__GnssData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ifaces_position__msg__GnssData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ifaces_position__msg__GnssData__Sequence__are_equal(const ifaces_position__msg__GnssData__Sequence * lhs, const ifaces_position__msg__GnssData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ifaces_position__msg__GnssData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ifaces_position__msg__GnssData__Sequence__copy(
  const ifaces_position__msg__GnssData__Sequence * input,
  ifaces_position__msg__GnssData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ifaces_position__msg__GnssData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ifaces_position__msg__GnssData * data =
      (ifaces_position__msg__GnssData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ifaces_position__msg__GnssData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ifaces_position__msg__GnssData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ifaces_position__msg__GnssData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
