// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/BestExtendedSolutionStatus.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__init(novatel_oem7_msgs__msg__BestExtendedSolutionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(novatel_oem7_msgs__msg__BestExtendedSolutionStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__are_equal(const novatel_oem7_msgs__msg__BestExtendedSolutionStatus * lhs, const novatel_oem7_msgs__msg__BestExtendedSolutionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__copy(
  const novatel_oem7_msgs__msg__BestExtendedSolutionStatus * input,
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

novatel_oem7_msgs__msg__BestExtendedSolutionStatus *
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus * msg = (novatel_oem7_msgs__msg__BestExtendedSolutionStatus *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__BestExtendedSolutionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__BestExtendedSolutionStatus));
  bool success = novatel_oem7_msgs__msg__BestExtendedSolutionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__destroy(novatel_oem7_msgs__msg__BestExtendedSolutionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__init(novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__BestExtendedSolutionStatus *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__BestExtendedSolutionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__BestExtendedSolutionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__fini(novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * array)
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
      novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence *
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * array = (novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__destroy(novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__are_equal(const novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * lhs, const novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence__copy(
  const novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * input,
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__BestExtendedSolutionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__BestExtendedSolutionStatus * data =
      (novatel_oem7_msgs__msg__BestExtendedSolutionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
