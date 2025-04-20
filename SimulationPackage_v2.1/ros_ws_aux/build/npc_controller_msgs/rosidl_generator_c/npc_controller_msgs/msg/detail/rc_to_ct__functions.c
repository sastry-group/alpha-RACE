// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from npc_controller_msgs:msg/RcToCt.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/rc_to_ct__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
npc_controller_msgs__msg__RcToCt__init(npc_controller_msgs__msg__RcToCt * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    npc_controller_msgs__msg__RcToCt__fini(msg);
    return false;
  }
  // track_flag
  // veh_flag
  // veh_rank
  // lap_count
  // lap_distance
  // target_speed
  // rolling_counter
  return true;
}

void
npc_controller_msgs__msg__RcToCt__fini(npc_controller_msgs__msg__RcToCt * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // track_flag
  // veh_flag
  // veh_rank
  // lap_count
  // lap_distance
  // target_speed
  // rolling_counter
}

bool
npc_controller_msgs__msg__RcToCt__are_equal(const npc_controller_msgs__msg__RcToCt * lhs, const npc_controller_msgs__msg__RcToCt * rhs)
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
  // track_flag
  if (lhs->track_flag != rhs->track_flag) {
    return false;
  }
  // veh_flag
  if (lhs->veh_flag != rhs->veh_flag) {
    return false;
  }
  // veh_rank
  if (lhs->veh_rank != rhs->veh_rank) {
    return false;
  }
  // lap_count
  if (lhs->lap_count != rhs->lap_count) {
    return false;
  }
  // lap_distance
  if (lhs->lap_distance != rhs->lap_distance) {
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
npc_controller_msgs__msg__RcToCt__copy(
  const npc_controller_msgs__msg__RcToCt * input,
  npc_controller_msgs__msg__RcToCt * output)
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
  // track_flag
  output->track_flag = input->track_flag;
  // veh_flag
  output->veh_flag = input->veh_flag;
  // veh_rank
  output->veh_rank = input->veh_rank;
  // lap_count
  output->lap_count = input->lap_count;
  // lap_distance
  output->lap_distance = input->lap_distance;
  // target_speed
  output->target_speed = input->target_speed;
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  return true;
}

npc_controller_msgs__msg__RcToCt *
npc_controller_msgs__msg__RcToCt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__RcToCt * msg = (npc_controller_msgs__msg__RcToCt *)allocator.allocate(sizeof(npc_controller_msgs__msg__RcToCt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(npc_controller_msgs__msg__RcToCt));
  bool success = npc_controller_msgs__msg__RcToCt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
npc_controller_msgs__msg__RcToCt__destroy(npc_controller_msgs__msg__RcToCt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    npc_controller_msgs__msg__RcToCt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
npc_controller_msgs__msg__RcToCt__Sequence__init(npc_controller_msgs__msg__RcToCt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__RcToCt * data = NULL;

  if (size) {
    data = (npc_controller_msgs__msg__RcToCt *)allocator.zero_allocate(size, sizeof(npc_controller_msgs__msg__RcToCt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = npc_controller_msgs__msg__RcToCt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        npc_controller_msgs__msg__RcToCt__fini(&data[i - 1]);
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
npc_controller_msgs__msg__RcToCt__Sequence__fini(npc_controller_msgs__msg__RcToCt__Sequence * array)
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
      npc_controller_msgs__msg__RcToCt__fini(&array->data[i]);
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

npc_controller_msgs__msg__RcToCt__Sequence *
npc_controller_msgs__msg__RcToCt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__RcToCt__Sequence * array = (npc_controller_msgs__msg__RcToCt__Sequence *)allocator.allocate(sizeof(npc_controller_msgs__msg__RcToCt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = npc_controller_msgs__msg__RcToCt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
npc_controller_msgs__msg__RcToCt__Sequence__destroy(npc_controller_msgs__msg__RcToCt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    npc_controller_msgs__msg__RcToCt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
npc_controller_msgs__msg__RcToCt__Sequence__are_equal(const npc_controller_msgs__msg__RcToCt__Sequence * lhs, const npc_controller_msgs__msg__RcToCt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!npc_controller_msgs__msg__RcToCt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
npc_controller_msgs__msg__RcToCt__Sequence__copy(
  const npc_controller_msgs__msg__RcToCt__Sequence * input,
  npc_controller_msgs__msg__RcToCt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(npc_controller_msgs__msg__RcToCt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    npc_controller_msgs__msg__RcToCt * data =
      (npc_controller_msgs__msg__RcToCt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!npc_controller_msgs__msg__RcToCt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          npc_controller_msgs__msg__RcToCt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!npc_controller_msgs__msg__RcToCt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
