// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/steering2_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__Steering2Report__init(raptor_dbw_msgs__msg__Steering2Report * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__Steering2Report__fini(msg);
    return false;
  }
  // vehicle_curvature_actual
  // max_torque_driver
  // max_torque_motor
  return true;
}

void
raptor_dbw_msgs__msg__Steering2Report__fini(raptor_dbw_msgs__msg__Steering2Report * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_curvature_actual
  // max_torque_driver
  // max_torque_motor
}

bool
raptor_dbw_msgs__msg__Steering2Report__are_equal(const raptor_dbw_msgs__msg__Steering2Report * lhs, const raptor_dbw_msgs__msg__Steering2Report * rhs)
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
  // vehicle_curvature_actual
  if (lhs->vehicle_curvature_actual != rhs->vehicle_curvature_actual) {
    return false;
  }
  // max_torque_driver
  if (lhs->max_torque_driver != rhs->max_torque_driver) {
    return false;
  }
  // max_torque_motor
  if (lhs->max_torque_motor != rhs->max_torque_motor) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__Steering2Report__copy(
  const raptor_dbw_msgs__msg__Steering2Report * input,
  raptor_dbw_msgs__msg__Steering2Report * output)
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
  // vehicle_curvature_actual
  output->vehicle_curvature_actual = input->vehicle_curvature_actual;
  // max_torque_driver
  output->max_torque_driver = input->max_torque_driver;
  // max_torque_motor
  output->max_torque_motor = input->max_torque_motor;
  return true;
}

raptor_dbw_msgs__msg__Steering2Report *
raptor_dbw_msgs__msg__Steering2Report__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__Steering2Report * msg = (raptor_dbw_msgs__msg__Steering2Report *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__Steering2Report), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__Steering2Report));
  bool success = raptor_dbw_msgs__msg__Steering2Report__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__Steering2Report__destroy(raptor_dbw_msgs__msg__Steering2Report * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__Steering2Report__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__Steering2Report__Sequence__init(raptor_dbw_msgs__msg__Steering2Report__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__Steering2Report * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__Steering2Report *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__Steering2Report), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__Steering2Report__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__Steering2Report__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__Steering2Report__Sequence__fini(raptor_dbw_msgs__msg__Steering2Report__Sequence * array)
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
      raptor_dbw_msgs__msg__Steering2Report__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__Steering2Report__Sequence *
raptor_dbw_msgs__msg__Steering2Report__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__Steering2Report__Sequence * array = (raptor_dbw_msgs__msg__Steering2Report__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__Steering2Report__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__Steering2Report__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__Steering2Report__Sequence__destroy(raptor_dbw_msgs__msg__Steering2Report__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__Steering2Report__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__Steering2Report__Sequence__are_equal(const raptor_dbw_msgs__msg__Steering2Report__Sequence * lhs, const raptor_dbw_msgs__msg__Steering2Report__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__Steering2Report__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__Steering2Report__Sequence__copy(
  const raptor_dbw_msgs__msg__Steering2Report__Sequence * input,
  raptor_dbw_msgs__msg__Steering2Report__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__Steering2Report);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__Steering2Report * data =
      (raptor_dbw_msgs__msg__Steering2Report *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__Steering2Report__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__Steering2Report__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__Steering2Report__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
