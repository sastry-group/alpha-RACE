// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/low_voltage_system_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__LowVoltageSystemReport__init(raptor_dbw_msgs__msg__LowVoltageSystemReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__LowVoltageSystemReport__fini(msg);
    return false;
  }
  // dbw_battery_volts
  // vehicle_battery_volts
  // vehicle_battery_current
  // vehicle_alternator_current
  // dcdc_current
  // alternator_current
  // aux_inverter_contactor
  return true;
}

void
raptor_dbw_msgs__msg__LowVoltageSystemReport__fini(raptor_dbw_msgs__msg__LowVoltageSystemReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // dbw_battery_volts
  // vehicle_battery_volts
  // vehicle_battery_current
  // vehicle_alternator_current
  // dcdc_current
  // alternator_current
  // aux_inverter_contactor
}

bool
raptor_dbw_msgs__msg__LowVoltageSystemReport__are_equal(const raptor_dbw_msgs__msg__LowVoltageSystemReport * lhs, const raptor_dbw_msgs__msg__LowVoltageSystemReport * rhs)
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
  // dbw_battery_volts
  if (lhs->dbw_battery_volts != rhs->dbw_battery_volts) {
    return false;
  }
  // vehicle_battery_volts
  if (lhs->vehicle_battery_volts != rhs->vehicle_battery_volts) {
    return false;
  }
  // vehicle_battery_current
  if (lhs->vehicle_battery_current != rhs->vehicle_battery_current) {
    return false;
  }
  // vehicle_alternator_current
  if (lhs->vehicle_alternator_current != rhs->vehicle_alternator_current) {
    return false;
  }
  // dcdc_current
  if (lhs->dcdc_current != rhs->dcdc_current) {
    return false;
  }
  // alternator_current
  if (lhs->alternator_current != rhs->alternator_current) {
    return false;
  }
  // aux_inverter_contactor
  if (lhs->aux_inverter_contactor != rhs->aux_inverter_contactor) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__LowVoltageSystemReport__copy(
  const raptor_dbw_msgs__msg__LowVoltageSystemReport * input,
  raptor_dbw_msgs__msg__LowVoltageSystemReport * output)
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
  // dbw_battery_volts
  output->dbw_battery_volts = input->dbw_battery_volts;
  // vehicle_battery_volts
  output->vehicle_battery_volts = input->vehicle_battery_volts;
  // vehicle_battery_current
  output->vehicle_battery_current = input->vehicle_battery_current;
  // vehicle_alternator_current
  output->vehicle_alternator_current = input->vehicle_alternator_current;
  // dcdc_current
  output->dcdc_current = input->dcdc_current;
  // alternator_current
  output->alternator_current = input->alternator_current;
  // aux_inverter_contactor
  output->aux_inverter_contactor = input->aux_inverter_contactor;
  return true;
}

raptor_dbw_msgs__msg__LowVoltageSystemReport *
raptor_dbw_msgs__msg__LowVoltageSystemReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__LowVoltageSystemReport * msg = (raptor_dbw_msgs__msg__LowVoltageSystemReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__LowVoltageSystemReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__LowVoltageSystemReport));
  bool success = raptor_dbw_msgs__msg__LowVoltageSystemReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__LowVoltageSystemReport__destroy(raptor_dbw_msgs__msg__LowVoltageSystemReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__LowVoltageSystemReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__init(raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__LowVoltageSystemReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__LowVoltageSystemReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__LowVoltageSystemReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__LowVoltageSystemReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__LowVoltageSystemReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__fini(raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * array)
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
      raptor_dbw_msgs__msg__LowVoltageSystemReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence *
raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * array = (raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__destroy(raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__are_equal(const raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * lhs, const raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__LowVoltageSystemReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence__copy(
  const raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * input,
  raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__LowVoltageSystemReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__LowVoltageSystemReport * data =
      (raptor_dbw_msgs__msg__LowVoltageSystemReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__LowVoltageSystemReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__LowVoltageSystemReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__LowVoltageSystemReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
