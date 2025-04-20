// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/steering_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `control_type`
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"

bool
raptor_dbw_msgs__msg__SteeringReport__init(raptor_dbw_msgs__msg__SteeringReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__SteeringReport__fini(msg);
    return false;
  }
  // steering_wheel_angle
  // steering_wheel_angle_cmd
  // steering_wheel_torque
  // enabled
  // driver_activity
  // fault_steering_system
  // overheat_prevention_mode
  // rolling_counter
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__init(&msg->control_type)) {
    raptor_dbw_msgs__msg__SteeringReport__fini(msg);
    return false;
  }
  // steering_overheat_warning
  return true;
}

void
raptor_dbw_msgs__msg__SteeringReport__fini(raptor_dbw_msgs__msg__SteeringReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // steering_wheel_angle
  // steering_wheel_angle_cmd
  // steering_wheel_torque
  // enabled
  // driver_activity
  // fault_steering_system
  // overheat_prevention_mode
  // rolling_counter
  // control_type
  raptor_dbw_msgs__msg__ActuatorControlMode__fini(&msg->control_type);
  // steering_overheat_warning
}

bool
raptor_dbw_msgs__msg__SteeringReport__are_equal(const raptor_dbw_msgs__msg__SteeringReport * lhs, const raptor_dbw_msgs__msg__SteeringReport * rhs)
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
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  // steering_wheel_angle_cmd
  if (lhs->steering_wheel_angle_cmd != rhs->steering_wheel_angle_cmd) {
    return false;
  }
  // steering_wheel_torque
  if (lhs->steering_wheel_torque != rhs->steering_wheel_torque) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // driver_activity
  if (lhs->driver_activity != rhs->driver_activity) {
    return false;
  }
  // fault_steering_system
  if (lhs->fault_steering_system != rhs->fault_steering_system) {
    return false;
  }
  // overheat_prevention_mode
  if (lhs->overheat_prevention_mode != rhs->overheat_prevention_mode) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__are_equal(
      &(lhs->control_type), &(rhs->control_type)))
  {
    return false;
  }
  // steering_overheat_warning
  if (lhs->steering_overheat_warning != rhs->steering_overheat_warning) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__SteeringReport__copy(
  const raptor_dbw_msgs__msg__SteeringReport * input,
  raptor_dbw_msgs__msg__SteeringReport * output)
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
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  // steering_wheel_angle_cmd
  output->steering_wheel_angle_cmd = input->steering_wheel_angle_cmd;
  // steering_wheel_torque
  output->steering_wheel_torque = input->steering_wheel_torque;
  // enabled
  output->enabled = input->enabled;
  // driver_activity
  output->driver_activity = input->driver_activity;
  // fault_steering_system
  output->fault_steering_system = input->fault_steering_system;
  // overheat_prevention_mode
  output->overheat_prevention_mode = input->overheat_prevention_mode;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__copy(
      &(input->control_type), &(output->control_type)))
  {
    return false;
  }
  // steering_overheat_warning
  output->steering_overheat_warning = input->steering_overheat_warning;
  return true;
}

raptor_dbw_msgs__msg__SteeringReport *
raptor_dbw_msgs__msg__SteeringReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SteeringReport * msg = (raptor_dbw_msgs__msg__SteeringReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__SteeringReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__SteeringReport));
  bool success = raptor_dbw_msgs__msg__SteeringReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__SteeringReport__destroy(raptor_dbw_msgs__msg__SteeringReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__SteeringReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__SteeringReport__Sequence__init(raptor_dbw_msgs__msg__SteeringReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SteeringReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__SteeringReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__SteeringReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__SteeringReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__SteeringReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__SteeringReport__Sequence__fini(raptor_dbw_msgs__msg__SteeringReport__Sequence * array)
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
      raptor_dbw_msgs__msg__SteeringReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__SteeringReport__Sequence *
raptor_dbw_msgs__msg__SteeringReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SteeringReport__Sequence * array = (raptor_dbw_msgs__msg__SteeringReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__SteeringReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__SteeringReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__SteeringReport__Sequence__destroy(raptor_dbw_msgs__msg__SteeringReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__SteeringReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__SteeringReport__Sequence__are_equal(const raptor_dbw_msgs__msg__SteeringReport__Sequence * lhs, const raptor_dbw_msgs__msg__SteeringReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__SteeringReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__SteeringReport__Sequence__copy(
  const raptor_dbw_msgs__msg__SteeringReport__Sequence * input,
  raptor_dbw_msgs__msg__SteeringReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__SteeringReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__SteeringReport * data =
      (raptor_dbw_msgs__msg__SteeringReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__SteeringReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__SteeringReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__SteeringReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
