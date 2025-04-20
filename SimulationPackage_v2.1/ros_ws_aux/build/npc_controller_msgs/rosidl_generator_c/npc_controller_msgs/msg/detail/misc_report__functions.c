// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from npc_controller_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/misc_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
npc_controller_msgs__msg__MiscReport__init(npc_controller_msgs__msg__MiscReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    npc_controller_msgs__msg__MiscReport__fini(msg);
    return false;
  }
  // battery_voltage
  // off_grid_power_connection
  // safety_switch_state
  // mode_switch_state
  // sys_state
  return true;
}

void
npc_controller_msgs__msg__MiscReport__fini(npc_controller_msgs__msg__MiscReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // battery_voltage
  // off_grid_power_connection
  // safety_switch_state
  // mode_switch_state
  // sys_state
}

bool
npc_controller_msgs__msg__MiscReport__are_equal(const npc_controller_msgs__msg__MiscReport * lhs, const npc_controller_msgs__msg__MiscReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // off_grid_power_connection
  if (lhs->off_grid_power_connection != rhs->off_grid_power_connection) {
    return false;
  }
  // safety_switch_state
  if (lhs->safety_switch_state != rhs->safety_switch_state) {
    return false;
  }
  // mode_switch_state
  if (lhs->mode_switch_state != rhs->mode_switch_state) {
    return false;
  }
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
    return false;
  }
  return true;
}

bool
npc_controller_msgs__msg__MiscReport__copy(
  const npc_controller_msgs__msg__MiscReport * input,
  npc_controller_msgs__msg__MiscReport * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // off_grid_power_connection
  output->off_grid_power_connection = input->off_grid_power_connection;
  // safety_switch_state
  output->safety_switch_state = input->safety_switch_state;
  // mode_switch_state
  output->mode_switch_state = input->mode_switch_state;
  // sys_state
  output->sys_state = input->sys_state;
  return true;
}

npc_controller_msgs__msg__MiscReport *
npc_controller_msgs__msg__MiscReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__MiscReport * msg = (npc_controller_msgs__msg__MiscReport *)allocator.allocate(sizeof(npc_controller_msgs__msg__MiscReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(npc_controller_msgs__msg__MiscReport));
  bool success = npc_controller_msgs__msg__MiscReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
npc_controller_msgs__msg__MiscReport__destroy(npc_controller_msgs__msg__MiscReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    npc_controller_msgs__msg__MiscReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
npc_controller_msgs__msg__MiscReport__Sequence__init(npc_controller_msgs__msg__MiscReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__MiscReport * data = NULL;

  if (size) {
    data = (npc_controller_msgs__msg__MiscReport *)allocator.zero_allocate(size, sizeof(npc_controller_msgs__msg__MiscReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = npc_controller_msgs__msg__MiscReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        npc_controller_msgs__msg__MiscReport__fini(&data[i - 1]);
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
npc_controller_msgs__msg__MiscReport__Sequence__fini(npc_controller_msgs__msg__MiscReport__Sequence * array)
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
      npc_controller_msgs__msg__MiscReport__fini(&array->data[i]);
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

npc_controller_msgs__msg__MiscReport__Sequence *
npc_controller_msgs__msg__MiscReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__MiscReport__Sequence * array = (npc_controller_msgs__msg__MiscReport__Sequence *)allocator.allocate(sizeof(npc_controller_msgs__msg__MiscReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = npc_controller_msgs__msg__MiscReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
npc_controller_msgs__msg__MiscReport__Sequence__destroy(npc_controller_msgs__msg__MiscReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    npc_controller_msgs__msg__MiscReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
npc_controller_msgs__msg__MiscReport__Sequence__are_equal(const npc_controller_msgs__msg__MiscReport__Sequence * lhs, const npc_controller_msgs__msg__MiscReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!npc_controller_msgs__msg__MiscReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
npc_controller_msgs__msg__MiscReport__Sequence__copy(
  const npc_controller_msgs__msg__MiscReport__Sequence * input,
  npc_controller_msgs__msg__MiscReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(npc_controller_msgs__msg__MiscReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    npc_controller_msgs__msg__MiscReport * data =
      (npc_controller_msgs__msg__MiscReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!npc_controller_msgs__msg__MiscReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          npc_controller_msgs__msg__MiscReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!npc_controller_msgs__msg__MiscReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
