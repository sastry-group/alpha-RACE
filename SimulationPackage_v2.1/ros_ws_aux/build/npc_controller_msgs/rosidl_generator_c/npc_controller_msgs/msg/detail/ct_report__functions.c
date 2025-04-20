// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from npc_controller_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/ct_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
npc_controller_msgs__msg__CtReport__init(npc_controller_msgs__msg__CtReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    npc_controller_msgs__msg__CtReport__fini(msg);
    return false;
  }
  // track_flag_ack
  // veh_flag_ack
  // ct_state
  // target_speed
  // rolling_counter
  return true;
}

void
npc_controller_msgs__msg__CtReport__fini(npc_controller_msgs__msg__CtReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // track_flag_ack
  // veh_flag_ack
  // ct_state
  // target_speed
  // rolling_counter
}

bool
npc_controller_msgs__msg__CtReport__are_equal(const npc_controller_msgs__msg__CtReport * lhs, const npc_controller_msgs__msg__CtReport * rhs)
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
  // track_flag_ack
  if (lhs->track_flag_ack != rhs->track_flag_ack) {
    return false;
  }
  // veh_flag_ack
  if (lhs->veh_flag_ack != rhs->veh_flag_ack) {
    return false;
  }
  // ct_state
  if (lhs->ct_state != rhs->ct_state) {
    return false;
  }
  // target_speed
  if (lhs->target_speed != rhs->target_speed) {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  return true;
}

bool
npc_controller_msgs__msg__CtReport__copy(
  const npc_controller_msgs__msg__CtReport * input,
  npc_controller_msgs__msg__CtReport * output)
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
  // track_flag_ack
  output->track_flag_ack = input->track_flag_ack;
  // veh_flag_ack
  output->veh_flag_ack = input->veh_flag_ack;
  // ct_state
  output->ct_state = input->ct_state;
  // target_speed
  output->target_speed = input->target_speed;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  return true;
}

npc_controller_msgs__msg__CtReport *
npc_controller_msgs__msg__CtReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__CtReport * msg = (npc_controller_msgs__msg__CtReport *)allocator.allocate(sizeof(npc_controller_msgs__msg__CtReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(npc_controller_msgs__msg__CtReport));
  bool success = npc_controller_msgs__msg__CtReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
npc_controller_msgs__msg__CtReport__destroy(npc_controller_msgs__msg__CtReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    npc_controller_msgs__msg__CtReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
npc_controller_msgs__msg__CtReport__Sequence__init(npc_controller_msgs__msg__CtReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__CtReport * data = NULL;

  if (size) {
    data = (npc_controller_msgs__msg__CtReport *)allocator.zero_allocate(size, sizeof(npc_controller_msgs__msg__CtReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = npc_controller_msgs__msg__CtReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        npc_controller_msgs__msg__CtReport__fini(&data[i - 1]);
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
npc_controller_msgs__msg__CtReport__Sequence__fini(npc_controller_msgs__msg__CtReport__Sequence * array)
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
      npc_controller_msgs__msg__CtReport__fini(&array->data[i]);
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

npc_controller_msgs__msg__CtReport__Sequence *
npc_controller_msgs__msg__CtReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__CtReport__Sequence * array = (npc_controller_msgs__msg__CtReport__Sequence *)allocator.allocate(sizeof(npc_controller_msgs__msg__CtReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = npc_controller_msgs__msg__CtReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
npc_controller_msgs__msg__CtReport__Sequence__destroy(npc_controller_msgs__msg__CtReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    npc_controller_msgs__msg__CtReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
npc_controller_msgs__msg__CtReport__Sequence__are_equal(const npc_controller_msgs__msg__CtReport__Sequence * lhs, const npc_controller_msgs__msg__CtReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!npc_controller_msgs__msg__CtReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
npc_controller_msgs__msg__CtReport__Sequence__copy(
  const npc_controller_msgs__msg__CtReport__Sequence * input,
  npc_controller_msgs__msg__CtReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(npc_controller_msgs__msg__CtReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    npc_controller_msgs__msg__CtReport * data =
      (npc_controller_msgs__msg__CtReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!npc_controller_msgs__msg__CtReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          npc_controller_msgs__msg__CtReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!npc_controller_msgs__msg__CtReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
