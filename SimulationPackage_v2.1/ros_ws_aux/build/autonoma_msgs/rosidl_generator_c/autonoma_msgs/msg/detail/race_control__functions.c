// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autonoma_msgs:msg/RaceControl.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/race_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autonoma_msgs__msg__RaceControl__init(autonoma_msgs__msg__RaceControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autonoma_msgs__msg__RaceControl__fini(msg);
    return false;
  }
  // base_to_car_heartbeat
  // track_flag
  // veh_flag
  // veh_rank
  // sys_state
  // lap_count
  // lap_distance
  // round_target_speed
  // laps
  // lap_time
  // time_stamp
  return true;
}

void
autonoma_msgs__msg__RaceControl__fini(autonoma_msgs__msg__RaceControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // base_to_car_heartbeat
  // track_flag
  // veh_flag
  // veh_rank
  // sys_state
  // lap_count
  // lap_distance
  // round_target_speed
  // laps
  // lap_time
  // time_stamp
}

bool
autonoma_msgs__msg__RaceControl__are_equal(const autonoma_msgs__msg__RaceControl * lhs, const autonoma_msgs__msg__RaceControl * rhs)
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
  // base_to_car_heartbeat
  if (lhs->base_to_car_heartbeat != rhs->base_to_car_heartbeat) {
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
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
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
  // round_target_speed
  if (lhs->round_target_speed != rhs->round_target_speed) {
    return false;
  }
  // laps
  if (lhs->laps != rhs->laps) {
    return false;
  }
  // lap_time
  if (lhs->lap_time != rhs->lap_time) {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  return true;
}

bool
autonoma_msgs__msg__RaceControl__copy(
  const autonoma_msgs__msg__RaceControl * input,
  autonoma_msgs__msg__RaceControl * output)
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
  // base_to_car_heartbeat
  output->base_to_car_heartbeat = input->base_to_car_heartbeat;
  // track_flag
  output->track_flag = input->track_flag;
  // veh_flag
  output->veh_flag = input->veh_flag;
  // veh_rank
  output->veh_rank = input->veh_rank;
  // sys_state
  output->sys_state = input->sys_state;
  // lap_count
  output->lap_count = input->lap_count;
  // lap_distance
  output->lap_distance = input->lap_distance;
  // round_target_speed
  output->round_target_speed = input->round_target_speed;
  // laps
  output->laps = input->laps;
  // lap_time
  output->lap_time = input->lap_time;
  // time_stamp
  output->time_stamp = input->time_stamp;
  return true;
}

autonoma_msgs__msg__RaceControl *
autonoma_msgs__msg__RaceControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__RaceControl * msg = (autonoma_msgs__msg__RaceControl *)allocator.allocate(sizeof(autonoma_msgs__msg__RaceControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autonoma_msgs__msg__RaceControl));
  bool success = autonoma_msgs__msg__RaceControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autonoma_msgs__msg__RaceControl__destroy(autonoma_msgs__msg__RaceControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autonoma_msgs__msg__RaceControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autonoma_msgs__msg__RaceControl__Sequence__init(autonoma_msgs__msg__RaceControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__RaceControl * data = NULL;

  if (size) {
    data = (autonoma_msgs__msg__RaceControl *)allocator.zero_allocate(size, sizeof(autonoma_msgs__msg__RaceControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autonoma_msgs__msg__RaceControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autonoma_msgs__msg__RaceControl__fini(&data[i - 1]);
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
autonoma_msgs__msg__RaceControl__Sequence__fini(autonoma_msgs__msg__RaceControl__Sequence * array)
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
      autonoma_msgs__msg__RaceControl__fini(&array->data[i]);
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

autonoma_msgs__msg__RaceControl__Sequence *
autonoma_msgs__msg__RaceControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__RaceControl__Sequence * array = (autonoma_msgs__msg__RaceControl__Sequence *)allocator.allocate(sizeof(autonoma_msgs__msg__RaceControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autonoma_msgs__msg__RaceControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autonoma_msgs__msg__RaceControl__Sequence__destroy(autonoma_msgs__msg__RaceControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autonoma_msgs__msg__RaceControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autonoma_msgs__msg__RaceControl__Sequence__are_equal(const autonoma_msgs__msg__RaceControl__Sequence * lhs, const autonoma_msgs__msg__RaceControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autonoma_msgs__msg__RaceControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autonoma_msgs__msg__RaceControl__Sequence__copy(
  const autonoma_msgs__msg__RaceControl__Sequence * input,
  autonoma_msgs__msg__RaceControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autonoma_msgs__msg__RaceControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autonoma_msgs__msg__RaceControl * data =
      (autonoma_msgs__msg__RaceControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autonoma_msgs__msg__RaceControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autonoma_msgs__msg__RaceControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autonoma_msgs__msg__RaceControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
