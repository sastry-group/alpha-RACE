// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `turn_signal_state`
#include "raptor_dbw_msgs/msg/detail/turn_signal__functions.h"
// Member `right_rear_door_state`
// Member `left_rear_door_state`
// Member `liftgate_door_state`
#include "raptor_dbw_msgs/msg/detail/door_state__functions.h"
// Member `high_beam_state`
#include "raptor_dbw_msgs/msg/detail/high_beam_state__functions.h"
// Member `front_wiper_state`
#include "raptor_dbw_msgs/msg/detail/wiper_front__functions.h"
// Member `rear_wiper_state`
#include "raptor_dbw_msgs/msg/detail/wiper_rear__functions.h"
// Member `ignition_state`
#include "raptor_dbw_msgs/msg/detail/ignition__functions.h"
// Member `horn_state`
#include "raptor_dbw_msgs/msg/detail/horn_state__functions.h"
// Member `low_beam_state`
#include "raptor_dbw_msgs/msg/detail/low_beam__functions.h"

bool
raptor_dbw_msgs__msg__OtherActuatorsReport__init(raptor_dbw_msgs__msg__OtherActuatorsReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // turn_signal_state
  if (!raptor_dbw_msgs__msg__TurnSignal__init(&msg->turn_signal_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // right_rear_door_state
  if (!raptor_dbw_msgs__msg__DoorState__init(&msg->right_rear_door_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // high_beam_state
  if (!raptor_dbw_msgs__msg__HighBeamState__init(&msg->high_beam_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // front_wiper_state
  if (!raptor_dbw_msgs__msg__WiperFront__init(&msg->front_wiper_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // rear_wiper_state
  if (!raptor_dbw_msgs__msg__WiperRear__init(&msg->rear_wiper_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // ignition_state
  if (!raptor_dbw_msgs__msg__Ignition__init(&msg->ignition_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // left_rear_door_state
  if (!raptor_dbw_msgs__msg__DoorState__init(&msg->left_rear_door_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // liftgate_door_state
  if (!raptor_dbw_msgs__msg__DoorState__init(&msg->liftgate_door_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // horn_state
  if (!raptor_dbw_msgs__msg__HornState__init(&msg->horn_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // low_beam_state
  if (!raptor_dbw_msgs__msg__LowBeam__init(&msg->low_beam_state)) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
    return false;
  }
  // rolling_counter
  return true;
}

void
raptor_dbw_msgs__msg__OtherActuatorsReport__fini(raptor_dbw_msgs__msg__OtherActuatorsReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // turn_signal_state
  raptor_dbw_msgs__msg__TurnSignal__fini(&msg->turn_signal_state);
  // right_rear_door_state
  raptor_dbw_msgs__msg__DoorState__fini(&msg->right_rear_door_state);
  // high_beam_state
  raptor_dbw_msgs__msg__HighBeamState__fini(&msg->high_beam_state);
  // front_wiper_state
  raptor_dbw_msgs__msg__WiperFront__fini(&msg->front_wiper_state);
  // rear_wiper_state
  raptor_dbw_msgs__msg__WiperRear__fini(&msg->rear_wiper_state);
  // ignition_state
  raptor_dbw_msgs__msg__Ignition__fini(&msg->ignition_state);
  // left_rear_door_state
  raptor_dbw_msgs__msg__DoorState__fini(&msg->left_rear_door_state);
  // liftgate_door_state
  raptor_dbw_msgs__msg__DoorState__fini(&msg->liftgate_door_state);
  // horn_state
  raptor_dbw_msgs__msg__HornState__fini(&msg->horn_state);
  // low_beam_state
  raptor_dbw_msgs__msg__LowBeam__fini(&msg->low_beam_state);
  // rolling_counter
}

bool
raptor_dbw_msgs__msg__OtherActuatorsReport__are_equal(const raptor_dbw_msgs__msg__OtherActuatorsReport * lhs, const raptor_dbw_msgs__msg__OtherActuatorsReport * rhs)
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
  // turn_signal_state
  if (!raptor_dbw_msgs__msg__TurnSignal__are_equal(
      &(lhs->turn_signal_state), &(rhs->turn_signal_state)))
  {
    return false;
  }
  // right_rear_door_state
  if (!raptor_dbw_msgs__msg__DoorState__are_equal(
      &(lhs->right_rear_door_state), &(rhs->right_rear_door_state)))
  {
    return false;
  }
  // high_beam_state
  if (!raptor_dbw_msgs__msg__HighBeamState__are_equal(
      &(lhs->high_beam_state), &(rhs->high_beam_state)))
  {
    return false;
  }
  // front_wiper_state
  if (!raptor_dbw_msgs__msg__WiperFront__are_equal(
      &(lhs->front_wiper_state), &(rhs->front_wiper_state)))
  {
    return false;
  }
  // rear_wiper_state
  if (!raptor_dbw_msgs__msg__WiperRear__are_equal(
      &(lhs->rear_wiper_state), &(rhs->rear_wiper_state)))
  {
    return false;
  }
  // ignition_state
  if (!raptor_dbw_msgs__msg__Ignition__are_equal(
      &(lhs->ignition_state), &(rhs->ignition_state)))
  {
    return false;
  }
  // left_rear_door_state
  if (!raptor_dbw_msgs__msg__DoorState__are_equal(
      &(lhs->left_rear_door_state), &(rhs->left_rear_door_state)))
  {
    return false;
  }
  // liftgate_door_state
  if (!raptor_dbw_msgs__msg__DoorState__are_equal(
      &(lhs->liftgate_door_state), &(rhs->liftgate_door_state)))
  {
    return false;
  }
  // horn_state
  if (!raptor_dbw_msgs__msg__HornState__are_equal(
      &(lhs->horn_state), &(rhs->horn_state)))
  {
    return false;
  }
  // low_beam_state
  if (!raptor_dbw_msgs__msg__LowBeam__are_equal(
      &(lhs->low_beam_state), &(rhs->low_beam_state)))
  {
    return false;
  }
  // rolling_counter
  if (lhs->rolling_counter != rhs->rolling_counter) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__OtherActuatorsReport__copy(
  const raptor_dbw_msgs__msg__OtherActuatorsReport * input,
  raptor_dbw_msgs__msg__OtherActuatorsReport * output)
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
  // turn_signal_state
  if (!raptor_dbw_msgs__msg__TurnSignal__copy(
      &(input->turn_signal_state), &(output->turn_signal_state)))
  {
    return false;
  }
  // right_rear_door_state
  if (!raptor_dbw_msgs__msg__DoorState__copy(
      &(input->right_rear_door_state), &(output->right_rear_door_state)))
  {
    return false;
  }
  // high_beam_state
  if (!raptor_dbw_msgs__msg__HighBeamState__copy(
      &(input->high_beam_state), &(output->high_beam_state)))
  {
    return false;
  }
  // front_wiper_state
  if (!raptor_dbw_msgs__msg__WiperFront__copy(
      &(input->front_wiper_state), &(output->front_wiper_state)))
  {
    return false;
  }
  // rear_wiper_state
  if (!raptor_dbw_msgs__msg__WiperRear__copy(
      &(input->rear_wiper_state), &(output->rear_wiper_state)))
  {
    return false;
  }
  // ignition_state
  if (!raptor_dbw_msgs__msg__Ignition__copy(
      &(input->ignition_state), &(output->ignition_state)))
  {
    return false;
  }
  // left_rear_door_state
  if (!raptor_dbw_msgs__msg__DoorState__copy(
      &(input->left_rear_door_state), &(output->left_rear_door_state)))
  {
    return false;
  }
  // liftgate_door_state
  if (!raptor_dbw_msgs__msg__DoorState__copy(
      &(input->liftgate_door_state), &(output->liftgate_door_state)))
  {
    return false;
  }
  // horn_state
  if (!raptor_dbw_msgs__msg__HornState__copy(
      &(input->horn_state), &(output->horn_state)))
  {
    return false;
  }
  // low_beam_state
  if (!raptor_dbw_msgs__msg__LowBeam__copy(
      &(input->low_beam_state), &(output->low_beam_state)))
  {
    return false;
  }
  // rolling_counter
  output->rolling_counter = input->rolling_counter;
  return true;
}

raptor_dbw_msgs__msg__OtherActuatorsReport *
raptor_dbw_msgs__msg__OtherActuatorsReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__OtherActuatorsReport * msg = (raptor_dbw_msgs__msg__OtherActuatorsReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__OtherActuatorsReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__OtherActuatorsReport));
  bool success = raptor_dbw_msgs__msg__OtherActuatorsReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__OtherActuatorsReport__destroy(raptor_dbw_msgs__msg__OtherActuatorsReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__init(raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__OtherActuatorsReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__OtherActuatorsReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__OtherActuatorsReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__OtherActuatorsReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__OtherActuatorsReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__fini(raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * array)
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
      raptor_dbw_msgs__msg__OtherActuatorsReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence *
raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * array = (raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__destroy(raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__are_equal(const raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * lhs, const raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__OtherActuatorsReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence__copy(
  const raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * input,
  raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__OtherActuatorsReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__OtherActuatorsReport * data =
      (raptor_dbw_msgs__msg__OtherActuatorsReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__OtherActuatorsReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__OtherActuatorsReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__OtherActuatorsReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
