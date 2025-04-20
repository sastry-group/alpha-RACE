// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/twist_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
raptor_dbw_msgs__msg__TwistCmd__init(raptor_dbw_msgs__msg__TwistCmd * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    raptor_dbw_msgs__msg__TwistCmd__fini(msg);
    return false;
  }
  // accel_limit
  // decel_limit
  return true;
}

void
raptor_dbw_msgs__msg__TwistCmd__fini(raptor_dbw_msgs__msg__TwistCmd * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // accel_limit
  // decel_limit
}

bool
raptor_dbw_msgs__msg__TwistCmd__are_equal(const raptor_dbw_msgs__msg__TwistCmd * lhs, const raptor_dbw_msgs__msg__TwistCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // accel_limit
  if (lhs->accel_limit != rhs->accel_limit) {
    return false;
  }
  // decel_limit
  if (lhs->decel_limit != rhs->decel_limit) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__TwistCmd__copy(
  const raptor_dbw_msgs__msg__TwistCmd * input,
  raptor_dbw_msgs__msg__TwistCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // accel_limit
  output->accel_limit = input->accel_limit;
  // decel_limit
  output->decel_limit = input->decel_limit;
  return true;
}

raptor_dbw_msgs__msg__TwistCmd *
raptor_dbw_msgs__msg__TwistCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__TwistCmd * msg = (raptor_dbw_msgs__msg__TwistCmd *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__TwistCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__TwistCmd));
  bool success = raptor_dbw_msgs__msg__TwistCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__TwistCmd__destroy(raptor_dbw_msgs__msg__TwistCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__TwistCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__TwistCmd__Sequence__init(raptor_dbw_msgs__msg__TwistCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__TwistCmd * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__TwistCmd *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__TwistCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__TwistCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__TwistCmd__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__TwistCmd__Sequence__fini(raptor_dbw_msgs__msg__TwistCmd__Sequence * array)
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
      raptor_dbw_msgs__msg__TwistCmd__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__TwistCmd__Sequence *
raptor_dbw_msgs__msg__TwistCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__TwistCmd__Sequence * array = (raptor_dbw_msgs__msg__TwistCmd__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__TwistCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__TwistCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__TwistCmd__Sequence__destroy(raptor_dbw_msgs__msg__TwistCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__TwistCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__TwistCmd__Sequence__are_equal(const raptor_dbw_msgs__msg__TwistCmd__Sequence * lhs, const raptor_dbw_msgs__msg__TwistCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__TwistCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__TwistCmd__Sequence__copy(
  const raptor_dbw_msgs__msg__TwistCmd__Sequence * input,
  raptor_dbw_msgs__msg__TwistCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__TwistCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__TwistCmd * data =
      (raptor_dbw_msgs__msg__TwistCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__TwistCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__TwistCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__TwistCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
