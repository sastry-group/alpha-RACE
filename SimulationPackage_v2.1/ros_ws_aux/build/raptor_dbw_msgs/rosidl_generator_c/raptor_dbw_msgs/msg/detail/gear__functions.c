// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/Gear.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/gear__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
raptor_dbw_msgs__msg__Gear__init(raptor_dbw_msgs__msg__Gear * msg)
{
  if (!msg) {
    return false;
  }
  // gear
  return true;
}

void
raptor_dbw_msgs__msg__Gear__fini(raptor_dbw_msgs__msg__Gear * msg)
{
  if (!msg) {
    return;
  }
  // gear
}

bool
raptor_dbw_msgs__msg__Gear__are_equal(const raptor_dbw_msgs__msg__Gear * lhs, const raptor_dbw_msgs__msg__Gear * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__Gear__copy(
  const raptor_dbw_msgs__msg__Gear * input,
  raptor_dbw_msgs__msg__Gear * output)
{
  if (!input || !output) {
    return false;
  }
  // gear
  output->gear = input->gear;
  return true;
}

raptor_dbw_msgs__msg__Gear *
raptor_dbw_msgs__msg__Gear__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__Gear * msg = (raptor_dbw_msgs__msg__Gear *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__Gear), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__Gear));
  bool success = raptor_dbw_msgs__msg__Gear__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__Gear__destroy(raptor_dbw_msgs__msg__Gear * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__Gear__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__Gear__Sequence__init(raptor_dbw_msgs__msg__Gear__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__Gear * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__Gear *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__Gear), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__Gear__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__Gear__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__Gear__Sequence__fini(raptor_dbw_msgs__msg__Gear__Sequence * array)
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
      raptor_dbw_msgs__msg__Gear__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__Gear__Sequence *
raptor_dbw_msgs__msg__Gear__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__Gear__Sequence * array = (raptor_dbw_msgs__msg__Gear__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__Gear__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__Gear__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__Gear__Sequence__destroy(raptor_dbw_msgs__msg__Gear__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__Gear__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__Gear__Sequence__are_equal(const raptor_dbw_msgs__msg__Gear__Sequence * lhs, const raptor_dbw_msgs__msg__Gear__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__Gear__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__Gear__Sequence__copy(
  const raptor_dbw_msgs__msg__Gear__Sequence * input,
  raptor_dbw_msgs__msg__Gear__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__Gear);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__Gear * data =
      (raptor_dbw_msgs__msg__Gear *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__Gear__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__Gear__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__Gear__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
