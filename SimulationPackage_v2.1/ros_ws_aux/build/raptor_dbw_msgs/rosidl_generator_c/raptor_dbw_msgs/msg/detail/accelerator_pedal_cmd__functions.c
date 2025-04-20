// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `control_type`
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"

bool
raptor_dbw_msgs__msg__AcceleratorPedalCmd__init(raptor_dbw_msgs__msg__AcceleratorPedalCmd * msg)
{
  if (!msg) {
    return false;
  }
  // pedal_cmd
  // torque_cmd
  // speed_cmd
  // enable
  // ignore
  // rolling_counter
  // road_slope
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__init(&msg->control_type)) {
    raptor_dbw_msgs__msg__AcceleratorPedalCmd__fini(msg);
    return false;
  }
  // accel_limit
  // accel_positive_jerk_limit
  return true;
}

void
raptor_dbw_msgs__msg__AcceleratorPedalCmd__fini(raptor_dbw_msgs__msg__AcceleratorPedalCmd * msg)
{
  if (!msg) {
    return;
  }
  // pedal_cmd
  // torque_cmd
  // speed_cmd
  // enable
  // ignore
  // rolling_counter
  // road_slope
  // control_type
  raptor_dbw_msgs__msg__ActuatorControlMode__fini(&msg->control_type);
  // accel_limit
  // accel_positive_jerk_limit
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalCmd__are_equal(const raptor_dbw_msgs__msg__AcceleratorPedalCmd * lhs, const raptor_dbw_msgs__msg__AcceleratorPedalCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pedal_cmd
  if (lhs->pedal_cmd != rhs->pedal_cmd) {
    return false;
  }
  // torque_cmd
  if (lhs->torque_cmd != rhs->torque_cmd) {
    return false;
  }
  // speed_cmd
  if (lhs->speed_cmd != rhs->speed_cmd) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // ignore
  if (lhs->ignore != rhs->ignore) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // road_slope
  if (lhs->road_slope != rhs->road_slope) {
    return false;
  }
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__are_equal(
      &(lhs->control_type), &(rhs->control_type)))
  {
    return false;
  }
  // accel_limit
  if (lhs->accel_limit != rhs->accel_limit) {
    return false;
  }
  // accel_positive_jerk_limit
  if (lhs->accel_positive_jerk_limit != rhs->accel_positive_jerk_limit) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalCmd__copy(
  const raptor_dbw_msgs__msg__AcceleratorPedalCmd * input,
  raptor_dbw_msgs__msg__AcceleratorPedalCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // pedal_cmd
  output->pedal_cmd = input->pedal_cmd;
  // torque_cmd
  output->torque_cmd = input->torque_cmd;
  // speed_cmd
  output->speed_cmd = input->speed_cmd;
  // enable
  output->enable = input->enable;
  // ignore
  output->ignore = input->ignore;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // road_slope
  output->road_slope = input->road_slope;
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__copy(
      &(input->control_type), &(output->control_type)))
  {
    return false;
  }
  // accel_limit
  output->accel_limit = input->accel_limit;
  // accel_positive_jerk_limit
  output->accel_positive_jerk_limit = input->accel_positive_jerk_limit;
  return true;
}

raptor_dbw_msgs__msg__AcceleratorPedalCmd *
raptor_dbw_msgs__msg__AcceleratorPedalCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__AcceleratorPedalCmd * msg = (raptor_dbw_msgs__msg__AcceleratorPedalCmd *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__AcceleratorPedalCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__AcceleratorPedalCmd));
  bool success = raptor_dbw_msgs__msg__AcceleratorPedalCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__AcceleratorPedalCmd__destroy(raptor_dbw_msgs__msg__AcceleratorPedalCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__AcceleratorPedalCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__init(raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__AcceleratorPedalCmd * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__AcceleratorPedalCmd *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__AcceleratorPedalCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__AcceleratorPedalCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__AcceleratorPedalCmd__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__fini(raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * array)
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
      raptor_dbw_msgs__msg__AcceleratorPedalCmd__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence *
raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * array = (raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__destroy(raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__are_equal(const raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * lhs, const raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__AcceleratorPedalCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence__copy(
  const raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * input,
  raptor_dbw_msgs__msg__AcceleratorPedalCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__AcceleratorPedalCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__AcceleratorPedalCmd * data =
      (raptor_dbw_msgs__msg__AcceleratorPedalCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__AcceleratorPedalCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__AcceleratorPedalCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__AcceleratorPedalCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
