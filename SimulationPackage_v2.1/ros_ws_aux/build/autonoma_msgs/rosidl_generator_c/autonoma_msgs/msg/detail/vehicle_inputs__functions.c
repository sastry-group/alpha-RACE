// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autonoma_msgs:msg/VehicleInputs.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/vehicle_inputs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autonoma_msgs__msg__VehicleInputs__init(autonoma_msgs__msg__VehicleInputs * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autonoma_msgs__msg__VehicleInputs__fini(msg);
    return false;
  }
  // throttle_cmd
  // throttle_cmd_count
  // brake_cmd
  // brake_cmd_count
  // steering_cmd
  // steering_cmd_count
  // gear_cmd
  return true;
}

void
autonoma_msgs__msg__VehicleInputs__fini(autonoma_msgs__msg__VehicleInputs * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // throttle_cmd
  // throttle_cmd_count
  // brake_cmd
  // brake_cmd_count
  // steering_cmd
  // steering_cmd_count
  // gear_cmd
}

bool
autonoma_msgs__msg__VehicleInputs__are_equal(const autonoma_msgs__msg__VehicleInputs * lhs, const autonoma_msgs__msg__VehicleInputs * rhs)
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
  // throttle_cmd
  if (lhs->throttle_cmd != rhs->throttle_cmd) {
    return false;
  }
  // throttle_cmd_count
  if (lhs->throttle_cmd_count != rhs->throttle_cmd_count) {
    return false;
  }
  // brake_cmd
  if (lhs->brake_cmd != rhs->brake_cmd) {
    return false;
  }
  // brake_cmd_count
  if (lhs->brake_cmd_count != rhs->brake_cmd_count) {
    return false;
  }
  // steering_cmd
  if (lhs->steering_cmd != rhs->steering_cmd) {
    return false;
  }
  // steering_cmd_count
  if (lhs->steering_cmd_count != rhs->steering_cmd_count) {
    return false;
  }
  // gear_cmd
  if (lhs->gear_cmd != rhs->gear_cmd) {
    return false;
  }
  return true;
}

bool
autonoma_msgs__msg__VehicleInputs__copy(
  const autonoma_msgs__msg__VehicleInputs * input,
  autonoma_msgs__msg__VehicleInputs * output)
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
  // throttle_cmd
  output->throttle_cmd = input->throttle_cmd;
  // throttle_cmd_count
  output->throttle_cmd_count = input->throttle_cmd_count;
  // brake_cmd
  output->brake_cmd = input->brake_cmd;
  // brake_cmd_count
  output->brake_cmd_count = input->brake_cmd_count;
  // steering_cmd
  output->steering_cmd = input->steering_cmd;
  // steering_cmd_count
  output->steering_cmd_count = input->steering_cmd_count;
  // gear_cmd
  output->gear_cmd = input->gear_cmd;
  return true;
}

autonoma_msgs__msg__VehicleInputs *
autonoma_msgs__msg__VehicleInputs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__VehicleInputs * msg = (autonoma_msgs__msg__VehicleInputs *)allocator.allocate(sizeof(autonoma_msgs__msg__VehicleInputs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autonoma_msgs__msg__VehicleInputs));
  bool success = autonoma_msgs__msg__VehicleInputs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autonoma_msgs__msg__VehicleInputs__destroy(autonoma_msgs__msg__VehicleInputs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autonoma_msgs__msg__VehicleInputs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autonoma_msgs__msg__VehicleInputs__Sequence__init(autonoma_msgs__msg__VehicleInputs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__VehicleInputs * data = NULL;

  if (size) {
    data = (autonoma_msgs__msg__VehicleInputs *)allocator.zero_allocate(size, sizeof(autonoma_msgs__msg__VehicleInputs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autonoma_msgs__msg__VehicleInputs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autonoma_msgs__msg__VehicleInputs__fini(&data[i - 1]);
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
autonoma_msgs__msg__VehicleInputs__Sequence__fini(autonoma_msgs__msg__VehicleInputs__Sequence * array)
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
      autonoma_msgs__msg__VehicleInputs__fini(&array->data[i]);
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

autonoma_msgs__msg__VehicleInputs__Sequence *
autonoma_msgs__msg__VehicleInputs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__VehicleInputs__Sequence * array = (autonoma_msgs__msg__VehicleInputs__Sequence *)allocator.allocate(sizeof(autonoma_msgs__msg__VehicleInputs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autonoma_msgs__msg__VehicleInputs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autonoma_msgs__msg__VehicleInputs__Sequence__destroy(autonoma_msgs__msg__VehicleInputs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autonoma_msgs__msg__VehicleInputs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autonoma_msgs__msg__VehicleInputs__Sequence__are_equal(const autonoma_msgs__msg__VehicleInputs__Sequence * lhs, const autonoma_msgs__msg__VehicleInputs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autonoma_msgs__msg__VehicleInputs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autonoma_msgs__msg__VehicleInputs__Sequence__copy(
  const autonoma_msgs__msg__VehicleInputs__Sequence * input,
  autonoma_msgs__msg__VehicleInputs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autonoma_msgs__msg__VehicleInputs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autonoma_msgs__msg__VehicleInputs * data =
      (autonoma_msgs__msg__VehicleInputs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autonoma_msgs__msg__VehicleInputs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autonoma_msgs__msg__VehicleInputs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autonoma_msgs__msg__VehicleInputs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
