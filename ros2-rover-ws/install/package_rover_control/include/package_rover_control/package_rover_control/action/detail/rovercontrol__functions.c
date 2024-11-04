// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from package_rover_control:action/Rovercontrol.idl
// generated code does not contain a copyright notice
#include "package_rover_control/action/detail/rovercontrol__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
package_rover_control__action__Rovercontrol_Goal__init(package_rover_control__action__Rovercontrol_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    package_rover_control__action__Rovercontrol_Goal__fini(msg);
    return false;
  }
  // timestop
  return true;
}

void
package_rover_control__action__Rovercontrol_Goal__fini(package_rover_control__action__Rovercontrol_Goal * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // timestop
}

bool
package_rover_control__action__Rovercontrol_Goal__are_equal(const package_rover_control__action__Rovercontrol_Goal * lhs, const package_rover_control__action__Rovercontrol_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // timestop
  if (lhs->timestop != rhs->timestop) {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_Goal__copy(
  const package_rover_control__action__Rovercontrol_Goal * input,
  package_rover_control__action__Rovercontrol_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // timestop
  output->timestop = input->timestop;
  return true;
}

package_rover_control__action__Rovercontrol_Goal *
package_rover_control__action__Rovercontrol_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Goal * msg = (package_rover_control__action__Rovercontrol_Goal *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_Goal));
  bool success = package_rover_control__action__Rovercontrol_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_Goal__destroy(package_rover_control__action__Rovercontrol_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_Goal__Sequence__init(package_rover_control__action__Rovercontrol_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Goal * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_Goal *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_Goal__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_Goal__Sequence__fini(package_rover_control__action__Rovercontrol_Goal__Sequence * array)
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
      package_rover_control__action__Rovercontrol_Goal__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_Goal__Sequence *
package_rover_control__action__Rovercontrol_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Goal__Sequence * array = (package_rover_control__action__Rovercontrol_Goal__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_Goal__Sequence__destroy(package_rover_control__action__Rovercontrol_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_Goal__Sequence__are_equal(const package_rover_control__action__Rovercontrol_Goal__Sequence * lhs, const package_rover_control__action__Rovercontrol_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_Goal__Sequence__copy(
  const package_rover_control__action__Rovercontrol_Goal__Sequence * input,
  package_rover_control__action__Rovercontrol_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_Goal * data =
      (package_rover_control__action__Rovercontrol_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
package_rover_control__action__Rovercontrol_Result__init(package_rover_control__action__Rovercontrol_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__init(&msg->result_msg)) {
    package_rover_control__action__Rovercontrol_Result__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_Result__fini(package_rover_control__action__Rovercontrol_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_msg
  rosidl_runtime_c__String__fini(&msg->result_msg);
}

bool
package_rover_control__action__Rovercontrol_Result__are_equal(const package_rover_control__action__Rovercontrol_Result * lhs, const package_rover_control__action__Rovercontrol_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_msg), &(rhs->result_msg)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_Result__copy(
  const package_rover_control__action__Rovercontrol_Result * input,
  package_rover_control__action__Rovercontrol_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->result_msg), &(output->result_msg)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_Result *
package_rover_control__action__Rovercontrol_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Result * msg = (package_rover_control__action__Rovercontrol_Result *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_Result));
  bool success = package_rover_control__action__Rovercontrol_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_Result__destroy(package_rover_control__action__Rovercontrol_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_Result__Sequence__init(package_rover_control__action__Rovercontrol_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Result * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_Result *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_Result__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_Result__Sequence__fini(package_rover_control__action__Rovercontrol_Result__Sequence * array)
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
      package_rover_control__action__Rovercontrol_Result__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_Result__Sequence *
package_rover_control__action__Rovercontrol_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Result__Sequence * array = (package_rover_control__action__Rovercontrol_Result__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_Result__Sequence__destroy(package_rover_control__action__Rovercontrol_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_Result__Sequence__are_equal(const package_rover_control__action__Rovercontrol_Result__Sequence * lhs, const package_rover_control__action__Rovercontrol_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_Result__Sequence__copy(
  const package_rover_control__action__Rovercontrol_Result__Sequence * input,
  package_rover_control__action__Rovercontrol_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_Result * data =
      (package_rover_control__action__Rovercontrol_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `time_remaining`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
package_rover_control__action__Rovercontrol_Feedback__init(package_rover_control__action__Rovercontrol_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // time_remaining
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->time_remaining, 0)) {
    package_rover_control__action__Rovercontrol_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_Feedback__fini(package_rover_control__action__Rovercontrol_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // time_remaining
  rosidl_runtime_c__int32__Sequence__fini(&msg->time_remaining);
}

bool
package_rover_control__action__Rovercontrol_Feedback__are_equal(const package_rover_control__action__Rovercontrol_Feedback * lhs, const package_rover_control__action__Rovercontrol_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_remaining
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->time_remaining), &(rhs->time_remaining)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_Feedback__copy(
  const package_rover_control__action__Rovercontrol_Feedback * input,
  package_rover_control__action__Rovercontrol_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // time_remaining
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->time_remaining), &(output->time_remaining)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_Feedback *
package_rover_control__action__Rovercontrol_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Feedback * msg = (package_rover_control__action__Rovercontrol_Feedback *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_Feedback));
  bool success = package_rover_control__action__Rovercontrol_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_Feedback__destroy(package_rover_control__action__Rovercontrol_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_Feedback__Sequence__init(package_rover_control__action__Rovercontrol_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Feedback * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_Feedback *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_Feedback__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_Feedback__Sequence__fini(package_rover_control__action__Rovercontrol_Feedback__Sequence * array)
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
      package_rover_control__action__Rovercontrol_Feedback__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_Feedback__Sequence *
package_rover_control__action__Rovercontrol_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_Feedback__Sequence * array = (package_rover_control__action__Rovercontrol_Feedback__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_Feedback__Sequence__destroy(package_rover_control__action__Rovercontrol_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_Feedback__Sequence__are_equal(const package_rover_control__action__Rovercontrol_Feedback__Sequence * lhs, const package_rover_control__action__Rovercontrol_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_Feedback__Sequence__copy(
  const package_rover_control__action__Rovercontrol_Feedback__Sequence * input,
  package_rover_control__action__Rovercontrol_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_Feedback * data =
      (package_rover_control__action__Rovercontrol_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "package_rover_control/action/detail/rovercontrol__functions.h"

bool
package_rover_control__action__Rovercontrol_SendGoal_Request__init(package_rover_control__action__Rovercontrol_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    package_rover_control__action__Rovercontrol_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!package_rover_control__action__Rovercontrol_Goal__init(&msg->goal)) {
    package_rover_control__action__Rovercontrol_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Request__fini(package_rover_control__action__Rovercontrol_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  package_rover_control__action__Rovercontrol_Goal__fini(&msg->goal);
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Request__are_equal(const package_rover_control__action__Rovercontrol_SendGoal_Request * lhs, const package_rover_control__action__Rovercontrol_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!package_rover_control__action__Rovercontrol_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Request__copy(
  const package_rover_control__action__Rovercontrol_SendGoal_Request * input,
  package_rover_control__action__Rovercontrol_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!package_rover_control__action__Rovercontrol_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_SendGoal_Request *
package_rover_control__action__Rovercontrol_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Request * msg = (package_rover_control__action__Rovercontrol_SendGoal_Request *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_SendGoal_Request));
  bool success = package_rover_control__action__Rovercontrol_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Request__destroy(package_rover_control__action__Rovercontrol_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__init(package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Request * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_SendGoal_Request *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_SendGoal_Request__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__fini(package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * array)
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
      package_rover_control__action__Rovercontrol_SendGoal_Request__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence *
package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * array = (package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__destroy(package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__are_equal(const package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * lhs, const package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__copy(
  const package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * input,
  package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_SendGoal_Request * data =
      (package_rover_control__action__Rovercontrol_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
package_rover_control__action__Rovercontrol_SendGoal_Response__init(package_rover_control__action__Rovercontrol_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    package_rover_control__action__Rovercontrol_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Response__fini(package_rover_control__action__Rovercontrol_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Response__are_equal(const package_rover_control__action__Rovercontrol_SendGoal_Response * lhs, const package_rover_control__action__Rovercontrol_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Response__copy(
  const package_rover_control__action__Rovercontrol_SendGoal_Response * input,
  package_rover_control__action__Rovercontrol_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_SendGoal_Response *
package_rover_control__action__Rovercontrol_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Response * msg = (package_rover_control__action__Rovercontrol_SendGoal_Response *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_SendGoal_Response));
  bool success = package_rover_control__action__Rovercontrol_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Response__destroy(package_rover_control__action__Rovercontrol_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__init(package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Response * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_SendGoal_Response *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_SendGoal_Response__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__fini(package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * array)
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
      package_rover_control__action__Rovercontrol_SendGoal_Response__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence *
package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * array = (package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__destroy(package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__are_equal(const package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * lhs, const package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__copy(
  const package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * input,
  package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_SendGoal_Response * data =
      (package_rover_control__action__Rovercontrol_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "package_rover_control/action/detail/rovercontrol__functions.h"

bool
package_rover_control__action__Rovercontrol_SendGoal_Event__init(package_rover_control__action__Rovercontrol_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    package_rover_control__action__Rovercontrol_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    package_rover_control__action__Rovercontrol_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    package_rover_control__action__Rovercontrol_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Event__fini(package_rover_control__action__Rovercontrol_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Event__are_equal(const package_rover_control__action__Rovercontrol_SendGoal_Event * lhs, const package_rover_control__action__Rovercontrol_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Event__copy(
  const package_rover_control__action__Rovercontrol_SendGoal_Event * input,
  package_rover_control__action__Rovercontrol_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!package_rover_control__action__Rovercontrol_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!package_rover_control__action__Rovercontrol_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_SendGoal_Event *
package_rover_control__action__Rovercontrol_SendGoal_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Event * msg = (package_rover_control__action__Rovercontrol_SendGoal_Event *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_SendGoal_Event));
  bool success = package_rover_control__action__Rovercontrol_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Event__destroy(package_rover_control__action__Rovercontrol_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__init(package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Event * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_SendGoal_Event *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_SendGoal_Event__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__fini(package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * array)
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
      package_rover_control__action__Rovercontrol_SendGoal_Event__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence *
package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * array = (package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__destroy(package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__are_equal(const package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * lhs, const package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence__copy(
  const package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * input,
  package_rover_control__action__Rovercontrol_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_SendGoal_Event * data =
      (package_rover_control__action__Rovercontrol_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
package_rover_control__action__Rovercontrol_GetResult_Request__init(package_rover_control__action__Rovercontrol_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    package_rover_control__action__Rovercontrol_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_GetResult_Request__fini(package_rover_control__action__Rovercontrol_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
package_rover_control__action__Rovercontrol_GetResult_Request__are_equal(const package_rover_control__action__Rovercontrol_GetResult_Request * lhs, const package_rover_control__action__Rovercontrol_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_GetResult_Request__copy(
  const package_rover_control__action__Rovercontrol_GetResult_Request * input,
  package_rover_control__action__Rovercontrol_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_GetResult_Request *
package_rover_control__action__Rovercontrol_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Request * msg = (package_rover_control__action__Rovercontrol_GetResult_Request *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_GetResult_Request));
  bool success = package_rover_control__action__Rovercontrol_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_GetResult_Request__destroy(package_rover_control__action__Rovercontrol_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__init(package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Request * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_GetResult_Request *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_GetResult_Request__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__fini(package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * array)
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
      package_rover_control__action__Rovercontrol_GetResult_Request__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_GetResult_Request__Sequence *
package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * array = (package_rover_control__action__Rovercontrol_GetResult_Request__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__destroy(package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__are_equal(const package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * lhs, const package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__copy(
  const package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * input,
  package_rover_control__action__Rovercontrol_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_GetResult_Request * data =
      (package_rover_control__action__Rovercontrol_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "package_rover_control/action/detail/rovercontrol__functions.h"

bool
package_rover_control__action__Rovercontrol_GetResult_Response__init(package_rover_control__action__Rovercontrol_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!package_rover_control__action__Rovercontrol_Result__init(&msg->result)) {
    package_rover_control__action__Rovercontrol_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_GetResult_Response__fini(package_rover_control__action__Rovercontrol_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  package_rover_control__action__Rovercontrol_Result__fini(&msg->result);
}

bool
package_rover_control__action__Rovercontrol_GetResult_Response__are_equal(const package_rover_control__action__Rovercontrol_GetResult_Response * lhs, const package_rover_control__action__Rovercontrol_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!package_rover_control__action__Rovercontrol_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_GetResult_Response__copy(
  const package_rover_control__action__Rovercontrol_GetResult_Response * input,
  package_rover_control__action__Rovercontrol_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!package_rover_control__action__Rovercontrol_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_GetResult_Response *
package_rover_control__action__Rovercontrol_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Response * msg = (package_rover_control__action__Rovercontrol_GetResult_Response *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_GetResult_Response));
  bool success = package_rover_control__action__Rovercontrol_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_GetResult_Response__destroy(package_rover_control__action__Rovercontrol_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__init(package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Response * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_GetResult_Response *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_GetResult_Response__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__fini(package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * array)
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
      package_rover_control__action__Rovercontrol_GetResult_Response__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_GetResult_Response__Sequence *
package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * array = (package_rover_control__action__Rovercontrol_GetResult_Response__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__destroy(package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__are_equal(const package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * lhs, const package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__copy(
  const package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * input,
  package_rover_control__action__Rovercontrol_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_GetResult_Response * data =
      (package_rover_control__action__Rovercontrol_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "package_rover_control/action/detail/rovercontrol__functions.h"

bool
package_rover_control__action__Rovercontrol_GetResult_Event__init(package_rover_control__action__Rovercontrol_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    package_rover_control__action__Rovercontrol_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__init(&msg->request, 0)) {
    package_rover_control__action__Rovercontrol_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__init(&msg->response, 0)) {
    package_rover_control__action__Rovercontrol_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_GetResult_Event__fini(package_rover_control__action__Rovercontrol_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__fini(&msg->request);
  // response
  package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__fini(&msg->response);
}

bool
package_rover_control__action__Rovercontrol_GetResult_Event__are_equal(const package_rover_control__action__Rovercontrol_GetResult_Event * lhs, const package_rover_control__action__Rovercontrol_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_GetResult_Event__copy(
  const package_rover_control__action__Rovercontrol_GetResult_Event * input,
  package_rover_control__action__Rovercontrol_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!package_rover_control__action__Rovercontrol_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!package_rover_control__action__Rovercontrol_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_GetResult_Event *
package_rover_control__action__Rovercontrol_GetResult_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Event * msg = (package_rover_control__action__Rovercontrol_GetResult_Event *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_GetResult_Event));
  bool success = package_rover_control__action__Rovercontrol_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_GetResult_Event__destroy(package_rover_control__action__Rovercontrol_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__init(package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Event * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_GetResult_Event *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_GetResult_Event__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__fini(package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * array)
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
      package_rover_control__action__Rovercontrol_GetResult_Event__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_GetResult_Event__Sequence *
package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * array = (package_rover_control__action__Rovercontrol_GetResult_Event__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__destroy(package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__are_equal(const package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * lhs, const package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_GetResult_Event__Sequence__copy(
  const package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * input,
  package_rover_control__action__Rovercontrol_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_GetResult_Event * data =
      (package_rover_control__action__Rovercontrol_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "package_rover_control/action/detail/rovercontrol__functions.h"

bool
package_rover_control__action__Rovercontrol_FeedbackMessage__init(package_rover_control__action__Rovercontrol_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    package_rover_control__action__Rovercontrol_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!package_rover_control__action__Rovercontrol_Feedback__init(&msg->feedback)) {
    package_rover_control__action__Rovercontrol_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
package_rover_control__action__Rovercontrol_FeedbackMessage__fini(package_rover_control__action__Rovercontrol_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  package_rover_control__action__Rovercontrol_Feedback__fini(&msg->feedback);
}

bool
package_rover_control__action__Rovercontrol_FeedbackMessage__are_equal(const package_rover_control__action__Rovercontrol_FeedbackMessage * lhs, const package_rover_control__action__Rovercontrol_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!package_rover_control__action__Rovercontrol_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_FeedbackMessage__copy(
  const package_rover_control__action__Rovercontrol_FeedbackMessage * input,
  package_rover_control__action__Rovercontrol_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!package_rover_control__action__Rovercontrol_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

package_rover_control__action__Rovercontrol_FeedbackMessage *
package_rover_control__action__Rovercontrol_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_FeedbackMessage * msg = (package_rover_control__action__Rovercontrol_FeedbackMessage *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(package_rover_control__action__Rovercontrol_FeedbackMessage));
  bool success = package_rover_control__action__Rovercontrol_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
package_rover_control__action__Rovercontrol_FeedbackMessage__destroy(package_rover_control__action__Rovercontrol_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    package_rover_control__action__Rovercontrol_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__init(package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_FeedbackMessage * data = NULL;

  if (size) {
    data = (package_rover_control__action__Rovercontrol_FeedbackMessage *)allocator.zero_allocate(size, sizeof(package_rover_control__action__Rovercontrol_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = package_rover_control__action__Rovercontrol_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        package_rover_control__action__Rovercontrol_FeedbackMessage__fini(&data[i - 1]);
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
package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__fini(package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * array)
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
      package_rover_control__action__Rovercontrol_FeedbackMessage__fini(&array->data[i]);
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

package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence *
package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * array = (package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence *)allocator.allocate(sizeof(package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__destroy(package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__are_equal(const package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * lhs, const package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence__copy(
  const package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * input,
  package_rover_control__action__Rovercontrol_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(package_rover_control__action__Rovercontrol_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    package_rover_control__action__Rovercontrol_FeedbackMessage * data =
      (package_rover_control__action__Rovercontrol_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!package_rover_control__action__Rovercontrol_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          package_rover_control__action__Rovercontrol_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!package_rover_control__action__Rovercontrol_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
