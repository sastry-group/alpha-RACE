// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/fault_actions_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__FaultActionsReport__init(raptor_dbw_msgs__msg__FaultActionsReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__FaultActionsReport__fini(msg);
    return false;
  }
  // autonomous_disabled_no_brakes
  // autonomous_disabled_apply_brakes
  // can_gateway_disabled
  // inverter_contactor_disabled
  // prevent_enter_autonomous_mode
  // warn_driver_only
  return true;
}

void
raptor_dbw_msgs__msg__FaultActionsReport__fini(raptor_dbw_msgs__msg__FaultActionsReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // autonomous_disabled_no_brakes
  // autonomous_disabled_apply_brakes
  // can_gateway_disabled
  // inverter_contactor_disabled
  // prevent_enter_autonomous_mode
  // warn_driver_only
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__are_equal(const raptor_dbw_msgs__msg__FaultActionsReport * lhs, const raptor_dbw_msgs__msg__FaultActionsReport * rhs)
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
  // autonomous_disabled_no_brakes
  if (lhs->autonomous_disabled_no_brakes != rhs->autonomous_disabled_no_brakes) {
    return false;
  }
  // autonomous_disabled_apply_brakes
  if (lhs->autonomous_disabled_apply_brakes != rhs->autonomous_disabled_apply_brakes) {
    return false;
  }
  // can_gateway_disabled
  if (lhs->can_gateway_disabled != rhs->can_gateway_disabled) {
    return false;
  }
  // inverter_contactor_disabled
  if (lhs->inverter_contactor_disabled != rhs->inverter_contactor_disabled) {
    return false;
  }
  // prevent_enter_autonomous_mode
  if (lhs->prevent_enter_autonomous_mode != rhs->prevent_enter_autonomous_mode) {
    return false;
  }
  // warn_driver_only
  if (lhs->warn_driver_only != rhs->warn_driver_only) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__copy(
  const raptor_dbw_msgs__msg__FaultActionsReport * input,
  raptor_dbw_msgs__msg__FaultActionsReport * output)
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
  // autonomous_disabled_no_brakes
  output->autonomous_disabled_no_brakes = input->autonomous_disabled_no_brakes;
  // autonomous_disabled_apply_brakes
  output->autonomous_disabled_apply_brakes = input->autonomous_disabled_apply_brakes;
  // can_gateway_disabled
  output->can_gateway_disabled = input->can_gateway_disabled;
  // inverter_contactor_disabled
  output->inverter_contactor_disabled = input->inverter_contactor_disabled;
  // prevent_enter_autonomous_mode
  output->prevent_enter_autonomous_mode = input->prevent_enter_autonomous_mode;
  // warn_driver_only
  output->warn_driver_only = input->warn_driver_only;
  return true;
}

raptor_dbw_msgs__msg__FaultActionsReport *
raptor_dbw_msgs__msg__FaultActionsReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__FaultActionsReport * msg = (raptor_dbw_msgs__msg__FaultActionsReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__FaultActionsReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__FaultActionsReport));
  bool success = raptor_dbw_msgs__msg__FaultActionsReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__FaultActionsReport__destroy(raptor_dbw_msgs__msg__FaultActionsReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__FaultActionsReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__init(raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__FaultActionsReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__FaultActionsReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__FaultActionsReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__FaultActionsReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__FaultActionsReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__fini(raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array)
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
      raptor_dbw_msgs__msg__FaultActionsReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__FaultActionsReport__Sequence *
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array = (raptor_dbw_msgs__msg__FaultActionsReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__FaultActionsReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__FaultActionsReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__destroy(raptor_dbw_msgs__msg__FaultActionsReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__FaultActionsReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__are_equal(const raptor_dbw_msgs__msg__FaultActionsReport__Sequence * lhs, const raptor_dbw_msgs__msg__FaultActionsReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__FaultActionsReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__FaultActionsReport__Sequence__copy(
  const raptor_dbw_msgs__msg__FaultActionsReport__Sequence * input,
  raptor_dbw_msgs__msg__FaultActionsReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__FaultActionsReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__FaultActionsReport * data =
      (raptor_dbw_msgs__msg__FaultActionsReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__FaultActionsReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__FaultActionsReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__FaultActionsReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
