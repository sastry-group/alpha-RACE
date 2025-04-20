// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/npc_debug__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
npc_controller_msgs__msg__NPCDebug__init(npc_controller_msgs__msg__NPCDebug * msg)
{
  if (!msg) {
    return false;
  }
  // desired_acceleration
  // desired_velocity
  // current_acceleration
  // current_velocity
  // error_acceleration
  // error_velocity
  // output_throttle
  // output_brake
  // vel_p
  // vel_i
  // vel_d
  // thr_p
  // thr_i
  // thr_d
  // brk_p
  // brk_i
  // brk_d
  // throttle_deadband
  // brake_deadband
  // max_throttle
  // ct_state
  // vehicle_flag
  // track_flag
  // lap_state
  // track_loc
  // center_s
  // pit_s
  // sys_state
  return true;
}

void
npc_controller_msgs__msg__NPCDebug__fini(npc_controller_msgs__msg__NPCDebug * msg)
{
  if (!msg) {
    return;
  }
  // desired_acceleration
  // desired_velocity
  // current_acceleration
  // current_velocity
  // error_acceleration
  // error_velocity
  // output_throttle
  // output_brake
  // vel_p
  // vel_i
  // vel_d
  // thr_p
  // thr_i
  // thr_d
  // brk_p
  // brk_i
  // brk_d
  // throttle_deadband
  // brake_deadband
  // max_throttle
  // ct_state
  // vehicle_flag
  // track_flag
  // lap_state
  // track_loc
  // center_s
  // pit_s
  // sys_state
}

bool
npc_controller_msgs__msg__NPCDebug__are_equal(const npc_controller_msgs__msg__NPCDebug * lhs, const npc_controller_msgs__msg__NPCDebug * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_acceleration
  if (lhs->desired_acceleration != rhs->desired_acceleration) {
    return false;
  }
  // desired_velocity
  if (lhs->desired_velocity != rhs->desired_velocity) {
    return false;
  }
  // current_acceleration
  if (lhs->current_acceleration != rhs->current_acceleration) {
    return false;
  }
  // current_velocity
  if (lhs->current_velocity != rhs->current_velocity) {
    return false;
  }
  // error_acceleration
  if (lhs->error_acceleration != rhs->error_acceleration) {
    return false;
  }
  // error_velocity
  if (lhs->error_velocity != rhs->error_velocity) {
    return false;
  }
  // output_throttle
  if (lhs->output_throttle != rhs->output_throttle) {
    return false;
  }
  // output_brake
  if (lhs->output_brake != rhs->output_brake) {
    return false;
  }
  // vel_p
  if (lhs->vel_p != rhs->vel_p) {
    return false;
  }
  // vel_i
  if (lhs->vel_i != rhs->vel_i) {
    return false;
  }
  // vel_d
  if (lhs->vel_d != rhs->vel_d) {
    return false;
  }
  // thr_p
  if (lhs->thr_p != rhs->thr_p) {
    return false;
  }
  // thr_i
  if (lhs->thr_i != rhs->thr_i) {
    return false;
  }
  // thr_d
  if (lhs->thr_d != rhs->thr_d) {
    return false;
  }
  // brk_p
  if (lhs->brk_p != rhs->brk_p) {
    return false;
  }
  // brk_i
  if (lhs->brk_i != rhs->brk_i) {
    return false;
  }
  // brk_d
  if (lhs->brk_d != rhs->brk_d) {
    return false;
  }
  // throttle_deadband
  if (lhs->throttle_deadband != rhs->throttle_deadband) {
    return false;
  }
  // brake_deadband
  if (lhs->brake_deadband != rhs->brake_deadband) {
    return false;
  }
  // max_throttle
  if (lhs->max_throttle != rhs->max_throttle) {
    return false;
  }
  // ct_state
  if (lhs->ct_state != rhs->ct_state) {
    return false;
  }
  // vehicle_flag
  if (lhs->vehicle_flag != rhs->vehicle_flag) {
    return false;
  }
  // track_flag
  if (lhs->track_flag != rhs->track_flag) {
    return false;
  }
  // lap_state
  if (lhs->lap_state != rhs->lap_state) {
    return false;
  }
  // track_loc
  if (lhs->track_loc != rhs->track_loc) {
    return false;
  }
  // center_s
  if (lhs->center_s != rhs->center_s) {
    return false;
  }
  // pit_s
  if (lhs->pit_s != rhs->pit_s) {
    return false;
  }
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
    return false;
  }
  return true;
}

bool
npc_controller_msgs__msg__NPCDebug__copy(
  const npc_controller_msgs__msg__NPCDebug * input,
  npc_controller_msgs__msg__NPCDebug * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_acceleration
  output->desired_acceleration = input->desired_acceleration;
  // desired_velocity
  output->desired_velocity = input->desired_velocity;
  // current_acceleration
  output->current_acceleration = input->current_acceleration;
  // current_velocity
  output->current_velocity = input->current_velocity;
  // error_acceleration
  output->error_acceleration = input->error_acceleration;
  // error_velocity
  output->error_velocity = input->error_velocity;
  // output_throttle
  output->output_throttle = input->output_throttle;
  // output_brake
  output->output_brake = input->output_brake;
  // vel_p
  output->vel_p = input->vel_p;
  // vel_i
  output->vel_i = input->vel_i;
  // vel_d
  output->vel_d = input->vel_d;
  // thr_p
  output->thr_p = input->thr_p;
  // thr_i
  output->thr_i = input->thr_i;
  // thr_d
  output->thr_d = input->thr_d;
  // brk_p
  output->brk_p = input->brk_p;
  // brk_i
  output->brk_i = input->brk_i;
  // brk_d
  output->brk_d = input->brk_d;
  // throttle_deadband
  output->throttle_deadband = input->throttle_deadband;
  // brake_deadband
  output->brake_deadband = input->brake_deadband;
  // max_throttle
  output->max_throttle = input->max_throttle;
  // ct_state
  output->ct_state = input->ct_state;
  // vehicle_flag
  output->vehicle_flag = input->vehicle_flag;
  // track_flag
  output->track_flag = input->track_flag;
  // lap_state
  output->lap_state = input->lap_state;
  // track_loc
  output->track_loc = input->track_loc;
  // center_s
  output->center_s = input->center_s;
  // pit_s
  output->pit_s = input->pit_s;
  // sys_state
  output->sys_state = input->sys_state;
  return true;
}

npc_controller_msgs__msg__NPCDebug *
npc_controller_msgs__msg__NPCDebug__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__NPCDebug * msg = (npc_controller_msgs__msg__NPCDebug *)allocator.allocate(sizeof(npc_controller_msgs__msg__NPCDebug), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(npc_controller_msgs__msg__NPCDebug));
  bool success = npc_controller_msgs__msg__NPCDebug__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
npc_controller_msgs__msg__NPCDebug__destroy(npc_controller_msgs__msg__NPCDebug * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    npc_controller_msgs__msg__NPCDebug__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
npc_controller_msgs__msg__NPCDebug__Sequence__init(npc_controller_msgs__msg__NPCDebug__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__NPCDebug * data = NULL;

  if (size) {
    data = (npc_controller_msgs__msg__NPCDebug *)allocator.zero_allocate(size, sizeof(npc_controller_msgs__msg__NPCDebug), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = npc_controller_msgs__msg__NPCDebug__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        npc_controller_msgs__msg__NPCDebug__fini(&data[i - 1]);
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
npc_controller_msgs__msg__NPCDebug__Sequence__fini(npc_controller_msgs__msg__NPCDebug__Sequence * array)
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
      npc_controller_msgs__msg__NPCDebug__fini(&array->data[i]);
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

npc_controller_msgs__msg__NPCDebug__Sequence *
npc_controller_msgs__msg__NPCDebug__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  npc_controller_msgs__msg__NPCDebug__Sequence * array = (npc_controller_msgs__msg__NPCDebug__Sequence *)allocator.allocate(sizeof(npc_controller_msgs__msg__NPCDebug__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = npc_controller_msgs__msg__NPCDebug__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
npc_controller_msgs__msg__NPCDebug__Sequence__destroy(npc_controller_msgs__msg__NPCDebug__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    npc_controller_msgs__msg__NPCDebug__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
npc_controller_msgs__msg__NPCDebug__Sequence__are_equal(const npc_controller_msgs__msg__NPCDebug__Sequence * lhs, const npc_controller_msgs__msg__NPCDebug__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!npc_controller_msgs__msg__NPCDebug__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
npc_controller_msgs__msg__NPCDebug__Sequence__copy(
  const npc_controller_msgs__msg__NPCDebug__Sequence * input,
  npc_controller_msgs__msg__NPCDebug__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(npc_controller_msgs__msg__NPCDebug);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    npc_controller_msgs__msg__NPCDebug * data =
      (npc_controller_msgs__msg__NPCDebug *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!npc_controller_msgs__msg__NPCDebug__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          npc_controller_msgs__msg__NPCDebug__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!npc_controller_msgs__msg__NPCDebug__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
