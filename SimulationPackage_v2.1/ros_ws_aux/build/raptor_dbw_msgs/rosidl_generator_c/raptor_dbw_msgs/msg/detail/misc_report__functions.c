// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/misc_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__MiscReport__init(raptor_dbw_msgs__msg__MiscReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__MiscReport__fini(msg);
    return false;
  }
  // fuel_level
  // drive_by_wire_enabled
  // vehicle_speed
  // software_build_number
  // general_actuator_fault
  // by_wire_ready
  // general_driver_activity
  // comms_fault
  // ambient_temp
  return true;
}

void
raptor_dbw_msgs__msg__MiscReport__fini(raptor_dbw_msgs__msg__MiscReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fuel_level
  // drive_by_wire_enabled
  // vehicle_speed
  // software_build_number
  // general_actuator_fault
  // by_wire_ready
  // general_driver_activity
  // comms_fault
  // ambient_temp
}

bool
raptor_dbw_msgs__msg__MiscReport__are_equal(const raptor_dbw_msgs__msg__MiscReport * lhs, const raptor_dbw_msgs__msg__MiscReport * rhs)
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
  // fuel_level
  if (lhs->fuel_level != rhs->fuel_level) {
    return false;
  }
  // drive_by_wire_enabled
  if (lhs->drive_by_wire_enabled != rhs->drive_by_wire_enabled) {
    return false;
  }
  // vehicle_speed
  if (lhs->vehicle_speed != rhs->vehicle_speed) {
    return false;
  }
  // software_build_number
  if (lhs->software_build_number != rhs->software_build_number) {
    return false;
  }
  // general_actuator_fault
  if (lhs->general_actuator_fault != rhs->general_actuator_fault) {
    return false;
  }
  // by_wire_ready
  if (lhs->by_wire_ready != rhs->by_wire_ready) {
    return false;
  }
  // general_driver_activity
  if (lhs->general_driver_activity != rhs->general_driver_activity) {
    return false;
  }
  // comms_fault
  if (lhs->comms_fault != rhs->comms_fault) {
    return false;
  }
  // ambient_temp
  if (lhs->ambient_temp != rhs->ambient_temp) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__MiscReport__copy(
  const raptor_dbw_msgs__msg__MiscReport * input,
  raptor_dbw_msgs__msg__MiscReport * output)
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
  // fuel_level
  output->fuel_level = input->fuel_level;
  // drive_by_wire_enabled
  output->drive_by_wire_enabled = input->drive_by_wire_enabled;
  // vehicle_speed
  output->vehicle_speed = input->vehicle_speed;
  // software_build_number
  output->software_build_number = input->software_build_number;
  // general_actuator_fault
  output->general_actuator_fault = input->general_actuator_fault;
  // by_wire_ready
  output->by_wire_ready = input->by_wire_ready;
  // general_driver_activity
  output->general_driver_activity = input->general_driver_activity;
  // comms_fault
  output->comms_fault = input->comms_fault;
  // ambient_temp
  output->ambient_temp = input->ambient_temp;
  return true;
}

raptor_dbw_msgs__msg__MiscReport *
raptor_dbw_msgs__msg__MiscReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MiscReport * msg = (raptor_dbw_msgs__msg__MiscReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__MiscReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__MiscReport));
  bool success = raptor_dbw_msgs__msg__MiscReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__MiscReport__destroy(raptor_dbw_msgs__msg__MiscReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__MiscReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__MiscReport__Sequence__init(raptor_dbw_msgs__msg__MiscReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MiscReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__MiscReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__MiscReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__MiscReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__MiscReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__MiscReport__Sequence__fini(raptor_dbw_msgs__msg__MiscReport__Sequence * array)
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
      raptor_dbw_msgs__msg__MiscReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__MiscReport__Sequence *
raptor_dbw_msgs__msg__MiscReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MiscReport__Sequence * array = (raptor_dbw_msgs__msg__MiscReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__MiscReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__MiscReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__MiscReport__Sequence__destroy(raptor_dbw_msgs__msg__MiscReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__MiscReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__MiscReport__Sequence__are_equal(const raptor_dbw_msgs__msg__MiscReport__Sequence * lhs, const raptor_dbw_msgs__msg__MiscReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__MiscReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__MiscReport__Sequence__copy(
  const raptor_dbw_msgs__msg__MiscReport__Sequence * input,
  raptor_dbw_msgs__msg__MiscReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__MiscReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__MiscReport * data =
      (raptor_dbw_msgs__msg__MiscReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__MiscReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__MiscReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__MiscReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
