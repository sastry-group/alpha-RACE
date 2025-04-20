// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/INSAlignmentMode.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
novatel_oem7_msgs__msg__INSAlignmentMode__init(novatel_oem7_msgs__msg__INSAlignmentMode * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
novatel_oem7_msgs__msg__INSAlignmentMode__fini(novatel_oem7_msgs__msg__INSAlignmentMode * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
novatel_oem7_msgs__msg__INSAlignmentMode__are_equal(const novatel_oem7_msgs__msg__INSAlignmentMode * lhs, const novatel_oem7_msgs__msg__INSAlignmentMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSAlignmentMode__copy(
  const novatel_oem7_msgs__msg__INSAlignmentMode * input,
  novatel_oem7_msgs__msg__INSAlignmentMode * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

novatel_oem7_msgs__msg__INSAlignmentMode *
novatel_oem7_msgs__msg__INSAlignmentMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSAlignmentMode * msg = (novatel_oem7_msgs__msg__INSAlignmentMode *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSAlignmentMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__INSAlignmentMode));
  bool success = novatel_oem7_msgs__msg__INSAlignmentMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__INSAlignmentMode__destroy(novatel_oem7_msgs__msg__INSAlignmentMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__INSAlignmentMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__init(novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSAlignmentMode * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__INSAlignmentMode *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__INSAlignmentMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__INSAlignmentMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__INSAlignmentMode__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__fini(novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * array)
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
      novatel_oem7_msgs__msg__INSAlignmentMode__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__INSAlignmentMode__Sequence *
novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * array = (novatel_oem7_msgs__msg__INSAlignmentMode__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSAlignmentMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__destroy(novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__are_equal(const novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * lhs, const novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSAlignmentMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSAlignmentMode__Sequence__copy(
  const novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * input,
  novatel_oem7_msgs__msg__INSAlignmentMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__INSAlignmentMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__INSAlignmentMode * data =
      (novatel_oem7_msgs__msg__INSAlignmentMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__INSAlignmentMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__INSAlignmentMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSAlignmentMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
