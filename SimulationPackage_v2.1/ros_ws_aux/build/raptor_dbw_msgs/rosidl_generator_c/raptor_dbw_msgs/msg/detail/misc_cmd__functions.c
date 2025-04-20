// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/misc_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cmd`
#include "raptor_dbw_msgs/msg/detail/turn_signal__functions.h"
// Member `door_request_right_rear`
// Member `door_request_left_rear`
// Member `door_request_lift_gate`
#include "raptor_dbw_msgs/msg/detail/door_request__functions.h"
// Member `high_beam_cmd`
#include "raptor_dbw_msgs/msg/detail/high_beam__functions.h"
// Member `front_wiper_cmd`
#include "raptor_dbw_msgs/msg/detail/wiper_front__functions.h"
// Member `rear_wiper_cmd`
#include "raptor_dbw_msgs/msg/detail/wiper_rear__functions.h"
// Member `ignition_cmd`
#include "raptor_dbw_msgs/msg/detail/ignition__functions.h"
// Member `low_beam_cmd`
#include "raptor_dbw_msgs/msg/detail/low_beam__functions.h"

bool
raptor_dbw_msgs__msg__MiscCmd__init(raptor_dbw_msgs__msg__MiscCmd * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  if (!raptor_dbw_msgs__msg__TurnSignal__init(&msg->cmd)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // door_request_right_rear
  if (!raptor_dbw_msgs__msg__DoorRequest__init(&msg->door_request_right_rear)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // rolling_counter
  // high_beam_cmd
  if (!raptor_dbw_msgs__msg__HighBeam__init(&msg->high_beam_cmd)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // front_wiper_cmd
  if (!raptor_dbw_msgs__msg__WiperFront__init(&msg->front_wiper_cmd)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // rear_wiper_cmd
  if (!raptor_dbw_msgs__msg__WiperRear__init(&msg->rear_wiper_cmd)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // ignition_cmd
  if (!raptor_dbw_msgs__msg__Ignition__init(&msg->ignition_cmd)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // door_request_left_rear
  if (!raptor_dbw_msgs__msg__DoorRequest__init(&msg->door_request_left_rear)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // door_request_lift_gate
  if (!raptor_dbw_msgs__msg__DoorRequest__init(&msg->door_request_lift_gate)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  // block_standard_cruise_buttons
  // block_adaptive_cruise_buttons
  // block_turn_signal_stalk
  // horn_cmd
  // low_beam_cmd
  if (!raptor_dbw_msgs__msg__LowBeam__init(&msg->low_beam_cmd)) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
    return false;
  }
  return true;
}

void
raptor_dbw_msgs__msg__MiscCmd__fini(raptor_dbw_msgs__msg__MiscCmd * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  raptor_dbw_msgs__msg__TurnSignal__fini(&msg->cmd);
  // door_request_right_rear
  raptor_dbw_msgs__msg__DoorRequest__fini(&msg->door_request_right_rear);
  // rolling_counter
  // high_beam_cmd
  raptor_dbw_msgs__msg__HighBeam__fini(&msg->high_beam_cmd);
  // front_wiper_cmd
  raptor_dbw_msgs__msg__WiperFront__fini(&msg->front_wiper_cmd);
  // rear_wiper_cmd
  raptor_dbw_msgs__msg__WiperRear__fini(&msg->rear_wiper_cmd);
  // ignition_cmd
  raptor_dbw_msgs__msg__Ignition__fini(&msg->ignition_cmd);
  // door_request_left_rear
  raptor_dbw_msgs__msg__DoorRequest__fini(&msg->door_request_left_rear);
  // door_request_lift_gate
  raptor_dbw_msgs__msg__DoorRequest__fini(&msg->door_request_lift_gate);
  // block_standard_cruise_buttons
  // block_adaptive_cruise_buttons
  // block_turn_signal_stalk
  // horn_cmd
  // low_beam_cmd
  raptor_dbw_msgs__msg__LowBeam__fini(&msg->low_beam_cmd);
}

bool
raptor_dbw_msgs__msg__MiscCmd__are_equal(const raptor_dbw_msgs__msg__MiscCmd * lhs, const raptor_dbw_msgs__msg__MiscCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (!raptor_dbw_msgs__msg__TurnSignal__are_equal(
      &(lhs->cmd), &(rhs->cmd)))
  {
    return false;
  }
  // door_request_right_rear
  if (!raptor_dbw_msgs__msg__DoorRequest__are_equal(
      &(lhs->door_request_right_rear), &(rhs->door_request_right_rear)))
  {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  // high_beam_cmd
  if (!raptor_dbw_msgs__msg__HighBeam__are_equal(
      &(lhs->high_beam_cmd), &(rhs->high_beam_cmd)))
  {
    return false;
  }
  // front_wiper_cmd
  if (!raptor_dbw_msgs__msg__WiperFront__are_equal(
      &(lhs->front_wiper_cmd), &(rhs->front_wiper_cmd)))
  {
    return false;
  }
  // rear_wiper_cmd
  if (!raptor_dbw_msgs__msg__WiperRear__are_equal(
      &(lhs->rear_wiper_cmd), &(rhs->rear_wiper_cmd)))
  {
    return false;
  }
  // ignition_cmd
  if (!raptor_dbw_msgs__msg__Ignition__are_equal(
      &(lhs->ignition_cmd), &(rhs->ignition_cmd)))
  {
    return false;
  }
  // door_request_left_rear
  if (!raptor_dbw_msgs__msg__DoorRequest__are_equal(
      &(lhs->door_request_left_rear), &(rhs->door_request_left_rear)))
  {
    return false;
  }
  // door_request_lift_gate
  if (!raptor_dbw_msgs__msg__DoorRequest__are_equal(
      &(lhs->door_request_lift_gate), &(rhs->door_request_lift_gate)))
  {
    return false;
  }
  // block_standard_cruise_buttons
  if (lhs->block_standard_cruise_buttons != rhs->block_standard_cruise_buttons) {
    return false;
  }
  // block_adaptive_cruise_buttons
  if (lhs->block_adaptive_cruise_buttons != rhs->block_adaptive_cruise_buttons) {
    return false;
  }
  // block_turn_signal_stalk
  if (lhs->block_turn_signal_stalk != rhs->block_turn_signal_stalk) {
    return false;
  }
  // horn_cmd
  if (lhs->horn_cmd != rhs->horn_cmd) {
    return false;
  }
  // low_beam_cmd
  if (!raptor_dbw_msgs__msg__LowBeam__are_equal(
      &(lhs->low_beam_cmd), &(rhs->low_beam_cmd)))
  {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__MiscCmd__copy(
  const raptor_dbw_msgs__msg__MiscCmd * input,
  raptor_dbw_msgs__msg__MiscCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  if (!raptor_dbw_msgs__msg__TurnSignal__copy(
      &(input->cmd), &(output->cmd)))
  {
    return false;
  }
  // door_request_right_rear
  if (!raptor_dbw_msgs__msg__DoorRequest__copy(
      &(input->door_request_right_rear), &(output->door_request_right_rear)))
  {
    return false;
  }
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  // high_beam_cmd
  if (!raptor_dbw_msgs__msg__HighBeam__copy(
      &(input->high_beam_cmd), &(output->high_beam_cmd)))
  {
    return false;
  }
  // front_wiper_cmd
  if (!raptor_dbw_msgs__msg__WiperFront__copy(
      &(input->front_wiper_cmd), &(output->front_wiper_cmd)))
  {
    return false;
  }
  // rear_wiper_cmd
  if (!raptor_dbw_msgs__msg__WiperRear__copy(
      &(input->rear_wiper_cmd), &(output->rear_wiper_cmd)))
  {
    return false;
  }
  // ignition_cmd
  if (!raptor_dbw_msgs__msg__Ignition__copy(
      &(input->ignition_cmd), &(output->ignition_cmd)))
  {
    return false;
  }
  // door_request_left_rear
  if (!raptor_dbw_msgs__msg__DoorRequest__copy(
      &(input->door_request_left_rear), &(output->door_request_left_rear)))
  {
    return false;
  }
  // door_request_lift_gate
  if (!raptor_dbw_msgs__msg__DoorRequest__copy(
      &(input->door_request_lift_gate), &(output->door_request_lift_gate)))
  {
    return false;
  }
  // block_standard_cruise_buttons
  output->block_standard_cruise_buttons = input->block_standard_cruise_buttons;
  // block_adaptive_cruise_buttons
  output->block_adaptive_cruise_buttons = input->block_adaptive_cruise_buttons;
  // block_turn_signal_stalk
  output->block_turn_signal_stalk = input->block_turn_signal_stalk;
  // horn_cmd
  output->horn_cmd = input->horn_cmd;
  // low_beam_cmd
  if (!raptor_dbw_msgs__msg__LowBeam__copy(
      &(input->low_beam_cmd), &(output->low_beam_cmd)))
  {
    return false;
  }
  return true;
}

raptor_dbw_msgs__msg__MiscCmd *
raptor_dbw_msgs__msg__MiscCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MiscCmd * msg = (raptor_dbw_msgs__msg__MiscCmd *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__MiscCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__MiscCmd));
  bool success = raptor_dbw_msgs__msg__MiscCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__MiscCmd__destroy(raptor_dbw_msgs__msg__MiscCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__MiscCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__MiscCmd__Sequence__init(raptor_dbw_msgs__msg__MiscCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MiscCmd * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__MiscCmd *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__MiscCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__MiscCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__MiscCmd__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__MiscCmd__Sequence__fini(raptor_dbw_msgs__msg__MiscCmd__Sequence * array)
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
      raptor_dbw_msgs__msg__MiscCmd__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__MiscCmd__Sequence *
raptor_dbw_msgs__msg__MiscCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MiscCmd__Sequence * array = (raptor_dbw_msgs__msg__MiscCmd__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__MiscCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__MiscCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__MiscCmd__Sequence__destroy(raptor_dbw_msgs__msg__MiscCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__MiscCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__MiscCmd__Sequence__are_equal(const raptor_dbw_msgs__msg__MiscCmd__Sequence * lhs, const raptor_dbw_msgs__msg__MiscCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__MiscCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__MiscCmd__Sequence__copy(
  const raptor_dbw_msgs__msg__MiscCmd__Sequence * input,
  raptor_dbw_msgs__msg__MiscCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__MiscCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__MiscCmd * data =
      (raptor_dbw_msgs__msg__MiscCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__MiscCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__MiscCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__MiscCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
