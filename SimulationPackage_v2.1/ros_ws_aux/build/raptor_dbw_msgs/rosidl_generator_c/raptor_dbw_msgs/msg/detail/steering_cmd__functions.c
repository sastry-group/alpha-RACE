// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/steering_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `control_type`
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"

bool
raptor_dbw_msgs__msg__SteeringCmd__init(raptor_dbw_msgs__msg__SteeringCmd * msg)
{
  if (!msg) {
    return false;
  }
  // angle_cmd
  // angle_velocity
  // enable
  // ignore
  // rolling_counter
  // torque_cmd
  // vehicle_curvature_cmd
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__init(&msg->control_type)) {
    raptor_dbw_msgs__msg__SteeringCmd__fini(msg);
    return false;
  }
  return true;
}

void
raptor_dbw_msgs__msg__SteeringCmd__fini(raptor_dbw_msgs__msg__SteeringCmd * msg)
{
  if (!msg) {
    return;
  }
  // angle_cmd
  // angle_velocity
  // enable
  // ignore
  // rolling_counter
  // torque_cmd
  // vehicle_curvature_cmd
  // control_type
  raptor_dbw_msgs__msg__ActuatorControlMode__fini(&msg->control_type);
}

bool
raptor_dbw_msgs__msg__SteeringCmd__are_equal(const raptor_dbw_msgs__msg__SteeringCmd * lhs, const raptor_dbw_msgs__msg__SteeringCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle_cmd
  if (lhs->angle_cmd != rhs->angle_cmd) {
    return false;
  }
  // angle_velocity
  if (lhs->angle_velocity != rhs->angle_velocity) {
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
  // torque_cmd
  if (lhs->torque_cmd != rhs->torque_cmd) {
    return false;
  }
  // vehicle_curvature_cmd
  if (lhs->vehicle_curvature_cmd != rhs->vehicle_curvature_cmd) {
    return false;
  }
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__are_equal(
      &(lhs->control_type), &(rhs->control_type)))
  {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__SteeringCmd__copy(
  const raptor_dbw_msgs__msg__SteeringCmd * input,
  raptor_dbw_msgs__msg__SteeringCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // angle_cmd
  output->angle_cmd = input->angle_cmd;
  // angle_velocity
  output->angle_velocity = input->angle_velocity;
  // enable
  output->enable = input->enable;
  // ignore
  output->ignore = input->ignore;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // torque_cmd
  output->torque_cmd = input->torque_cmd;
  // vehicle_curvature_cmd
  output->vehicle_curvature_cmd = input->vehicle_curvature_cmd;
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__copy(
      &(input->control_type), &(output->control_type)))
  {
    return false;
  }
  return true;
}

raptor_dbw_msgs__msg__SteeringCmd *
raptor_dbw_msgs__msg__SteeringCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SteeringCmd * msg = (raptor_dbw_msgs__msg__SteeringCmd *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__SteeringCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__SteeringCmd));
  bool success = raptor_dbw_msgs__msg__SteeringCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__SteeringCmd__destroy(raptor_dbw_msgs__msg__SteeringCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__SteeringCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__SteeringCmd__Sequence__init(raptor_dbw_msgs__msg__SteeringCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SteeringCmd * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__SteeringCmd *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__SteeringCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__SteeringCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__SteeringCmd__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__SteeringCmd__Sequence__fini(raptor_dbw_msgs__msg__SteeringCmd__Sequence * array)
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
      raptor_dbw_msgs__msg__SteeringCmd__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__SteeringCmd__Sequence *
raptor_dbw_msgs__msg__SteeringCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SteeringCmd__Sequence * array = (raptor_dbw_msgs__msg__SteeringCmd__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__SteeringCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__SteeringCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__SteeringCmd__Sequence__destroy(raptor_dbw_msgs__msg__SteeringCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__SteeringCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__SteeringCmd__Sequence__are_equal(const raptor_dbw_msgs__msg__SteeringCmd__Sequence * lhs, const raptor_dbw_msgs__msg__SteeringCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__SteeringCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__SteeringCmd__Sequence__copy(
  const raptor_dbw_msgs__msg__SteeringCmd__Sequence * input,
  raptor_dbw_msgs__msg__SteeringCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__SteeringCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__SteeringCmd * data =
      (raptor_dbw_msgs__msg__SteeringCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__SteeringCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__SteeringCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__SteeringCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
