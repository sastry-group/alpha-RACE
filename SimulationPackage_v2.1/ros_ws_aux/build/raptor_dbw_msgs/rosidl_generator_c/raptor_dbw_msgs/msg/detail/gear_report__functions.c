// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/gear_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "raptor_dbw_msgs/msg/detail/gear__functions.h"

bool
raptor_dbw_msgs__msg__GearReport__init(raptor_dbw_msgs__msg__GearReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__GearReport__fini(msg);
    return false;
  }
  // state
  if (!raptor_dbw_msgs__msg__Gear__init(&msg->state)) {
    raptor_dbw_msgs__msg__GearReport__fini(msg);
    return false;
  }
  // reject
  // driver_activity
  // enabled
  // gear_select_system_fault
  return true;
}

void
raptor_dbw_msgs__msg__GearReport__fini(raptor_dbw_msgs__msg__GearReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  raptor_dbw_msgs__msg__Gear__fini(&msg->state);
  // reject
  // driver_activity
  // enabled
  // gear_select_system_fault
}

bool
raptor_dbw_msgs__msg__GearReport__are_equal(const raptor_dbw_msgs__msg__GearReport * lhs, const raptor_dbw_msgs__msg__GearReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // state
  if (!raptor_dbw_msgs__msg__Gear__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // reject
  if (lhs->reject != rhs->reject) {
    return false;
  }
  // driver_activity
  if (lhs->driver_activity != rhs->driver_activity) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // gear_select_system_fault
  if (lhs->gear_select_system_fault != rhs->gear_select_system_fault) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__GearReport__copy(
  const raptor_dbw_msgs__msg__GearReport * input,
  raptor_dbw_msgs__msg__GearReport * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // state
  if (!raptor_dbw_msgs__msg__Gear__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // reject
  output->reject = input->reject;
  // driver_activity
  output->driver_activity = input->driver_activity;
  // enabled
  output->enabled = input->enabled;
  // gear_select_system_fault
  output->gear_select_system_fault = input->gear_select_system_fault;
  return true;
}

raptor_dbw_msgs__msg__GearReport *
raptor_dbw_msgs__msg__GearReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__GearReport * msg = (raptor_dbw_msgs__msg__GearReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__GearReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__GearReport));
  bool success = raptor_dbw_msgs__msg__GearReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__GearReport__destroy(raptor_dbw_msgs__msg__GearReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__GearReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__GearReport__Sequence__init(raptor_dbw_msgs__msg__GearReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__GearReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__GearReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__GearReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__GearReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__GearReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__GearReport__Sequence__fini(raptor_dbw_msgs__msg__GearReport__Sequence * array)
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
      raptor_dbw_msgs__msg__GearReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__GearReport__Sequence *
raptor_dbw_msgs__msg__GearReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__GearReport__Sequence * array = (raptor_dbw_msgs__msg__GearReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__GearReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__GearReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__GearReport__Sequence__destroy(raptor_dbw_msgs__msg__GearReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__GearReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__GearReport__Sequence__are_equal(const raptor_dbw_msgs__msg__GearReport__Sequence * lhs, const raptor_dbw_msgs__msg__GearReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__GearReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__GearReport__Sequence__copy(
  const raptor_dbw_msgs__msg__GearReport__Sequence * input,
  raptor_dbw_msgs__msg__GearReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__GearReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__GearReport * data =
      (raptor_dbw_msgs__msg__GearReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__GearReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__GearReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__GearReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
