// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_report__functions.h"

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
raptor_dbw_msgs__msg__AcceleratorPedalReport__init(raptor_dbw_msgs__msg__AcceleratorPedalReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(msg);
    return false;
  }
  // pedal_input
  // pedal_output
  // enabled
  // ignore_driver
  // driver_activity
  // fault_accel_pedal_system
  // fault_ch1
  // fault_ch2
  // rolling_counter
  // torque_actual
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__init(&msg->control_type)) {
    raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(msg);
    return false;
  }
  return true;
}

void
raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(raptor_dbw_msgs__msg__AcceleratorPedalReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pedal_input
  // pedal_output
  // enabled
  // ignore_driver
  // driver_activity
  // fault_accel_pedal_system
  // fault_ch1
  // fault_ch2
  // rolling_counter
  // torque_actual
  // control_type
  raptor_dbw_msgs__msg__ActuatorControlMode__fini(&msg->control_type);
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalReport__are_equal(const raptor_dbw_msgs__msg__AcceleratorPedalReport * lhs, const raptor_dbw_msgs__msg__AcceleratorPedalReport * rhs)
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
  // pedal_input
  if (lhs->pedal_input != rhs->pedal_input) {
    return false;
  }
  // pedal_output
  if (lhs->pedal_output != rhs->pedal_output) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // ignore_driver
  if (lhs->ignore_driver != rhs->ignore_driver) {
    return false;
  }
  // driver_activity
  if (lhs->driver_activity != rhs->driver_activity) {
    return false;
  }
  // fault_accel_pedal_system
  if (lhs->fault_accel_pedal_system != rhs->fault_accel_pedal_system) {
    return false;
  }
  // fault_ch1
  if (lhs->fault_ch1 != rhs->fault_ch1) {
    return false;
  }
  // fault_ch2
  if (lhs->fault_ch2 != rhs->fault_ch2) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // torque_actual
  if (lhs->torque_actual != rhs->torque_actual) {
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
raptor_dbw_msgs__msg__AcceleratorPedalReport__copy(
  const raptor_dbw_msgs__msg__AcceleratorPedalReport * input,
  raptor_dbw_msgs__msg__AcceleratorPedalReport * output)
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
  // pedal_input
  output->pedal_input = input->pedal_input;
  // pedal_output
  output->pedal_output = input->pedal_output;
  // enabled
  output->enabled = input->enabled;
  // ignore_driver
  output->ignore_driver = input->ignore_driver;
  // driver_activity
  output->driver_activity = input->driver_activity;
  // fault_accel_pedal_system
  output->fault_accel_pedal_system = input->fault_accel_pedal_system;
  // fault_ch1
  output->fault_ch1 = input->fault_ch1;
  // fault_ch2
  output->fault_ch2 = input->fault_ch2;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // torque_actual
  output->torque_actual = input->torque_actual;
  // control_type
  if (!raptor_dbw_msgs__msg__ActuatorControlMode__copy(
      &(input->control_type), &(output->control_type)))
  {
    return false;
  }
  return true;
}

raptor_dbw_msgs__msg__AcceleratorPedalReport *
raptor_dbw_msgs__msg__AcceleratorPedalReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__AcceleratorPedalReport * msg = (raptor_dbw_msgs__msg__AcceleratorPedalReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__AcceleratorPedalReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__AcceleratorPedalReport));
  bool success = raptor_dbw_msgs__msg__AcceleratorPedalReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__AcceleratorPedalReport__destroy(raptor_dbw_msgs__msg__AcceleratorPedalReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__init(raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__AcceleratorPedalReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__AcceleratorPedalReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__AcceleratorPedalReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__AcceleratorPedalReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__fini(raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * array)
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
      raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence *
raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * array = (raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__destroy(raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__are_equal(const raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * lhs, const raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__AcceleratorPedalReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence__copy(
  const raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * input,
  raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__AcceleratorPedalReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__AcceleratorPedalReport * data =
      (raptor_dbw_msgs__msg__AcceleratorPedalReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__AcceleratorPedalReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__AcceleratorPedalReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__AcceleratorPedalReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
