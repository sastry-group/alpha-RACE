// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/driver_input_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `turn_signal`
#include "raptor_dbw_msgs/msg/detail/turn_signal__functions.h"
// Member `high_beam_headlights`
#include "raptor_dbw_msgs/msg/detail/high_beam__functions.h"
// Member `wiper`
#include "raptor_dbw_msgs/msg/detail/wiper_front__functions.h"

bool
raptor_dbw_msgs__msg__DriverInputReport__init(raptor_dbw_msgs__msg__DriverInputReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__DriverInputReport__fini(msg);
    return false;
  }
  // turn_signal
  if (!raptor_dbw_msgs__msg__TurnSignal__init(&msg->turn_signal)) {
    raptor_dbw_msgs__msg__DriverInputReport__fini(msg);
    return false;
  }
  // high_beam_headlights
  if (!raptor_dbw_msgs__msg__HighBeam__init(&msg->high_beam_headlights)) {
    raptor_dbw_msgs__msg__DriverInputReport__fini(msg);
    return false;
  }
  // wiper
  if (!raptor_dbw_msgs__msg__WiperFront__init(&msg->wiper)) {
    raptor_dbw_msgs__msg__DriverInputReport__fini(msg);
    return false;
  }
  // cruise_resume_button
  // cruise_cancel_button
  // cruise_accel_button
  // cruise_decel_button
  // cruise_on_off_button
  // adaptive_cruise_on_off_button
  // adaptive_cruise_increase_distance_button
  // adaptive_cruise_decrease_distance_button
  // driver_door_ajar
  // passenger_door_ajar
  // rear_left_door_ajar
  // rear_right_door_ajar
  // liftgate_ajar
  // any_seatbelt_unbuckled
  // airbag_deployed
  // door_or_hood_ajar
  return true;
}

void
raptor_dbw_msgs__msg__DriverInputReport__fini(raptor_dbw_msgs__msg__DriverInputReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // turn_signal
  raptor_dbw_msgs__msg__TurnSignal__fini(&msg->turn_signal);
  // high_beam_headlights
  raptor_dbw_msgs__msg__HighBeam__fini(&msg->high_beam_headlights);
  // wiper
  raptor_dbw_msgs__msg__WiperFront__fini(&msg->wiper);
  // cruise_resume_button
  // cruise_cancel_button
  // cruise_accel_button
  // cruise_decel_button
  // cruise_on_off_button
  // adaptive_cruise_on_off_button
  // adaptive_cruise_increase_distance_button
  // adaptive_cruise_decrease_distance_button
  // driver_door_ajar
  // passenger_door_ajar
  // rear_left_door_ajar
  // rear_right_door_ajar
  // liftgate_ajar
  // any_seatbelt_unbuckled
  // airbag_deployed
  // door_or_hood_ajar
}

bool
raptor_dbw_msgs__msg__DriverInputReport__are_equal(const raptor_dbw_msgs__msg__DriverInputReport * lhs, const raptor_dbw_msgs__msg__DriverInputReport * rhs)
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
  // turn_signal
  if (!raptor_dbw_msgs__msg__TurnSignal__are_equal(
      &(lhs->turn_signal), &(rhs->turn_signal)))
  {
    return false;
  }
  // high_beam_headlights
  if (!raptor_dbw_msgs__msg__HighBeam__are_equal(
      &(lhs->high_beam_headlights), &(rhs->high_beam_headlights)))
  {
    return false;
  }
  // wiper
  if (!raptor_dbw_msgs__msg__WiperFront__are_equal(
      &(lhs->wiper), &(rhs->wiper)))
  {
    return false;
  }
  // cruise_resume_button
  if (lhs->cruise_resume_button != rhs->cruise_resume_button) {
    return false;
  }
  // cruise_cancel_button
  if (lhs->cruise_cancel_button != rhs->cruise_cancel_button) {
    return false;
  }
  // cruise_accel_button
  if (lhs->cruise_accel_button != rhs->cruise_accel_button) {
    return false;
  }
  // cruise_decel_button
  if (lhs->cruise_decel_button != rhs->cruise_decel_button) {
    return false;
  }
  // cruise_on_off_button
  if (lhs->cruise_on_off_button != rhs->cruise_on_off_button) {
    return false;
  }
  // adaptive_cruise_on_off_button
  if (lhs->adaptive_cruise_on_off_button != rhs->adaptive_cruise_on_off_button) {
    return false;
  }
  // adaptive_cruise_increase_distance_button
  if (lhs->adaptive_cruise_increase_distance_button != rhs->adaptive_cruise_increase_distance_button) {
    return false;
  }
  // adaptive_cruise_decrease_distance_button
  if (lhs->adaptive_cruise_decrease_distance_button != rhs->adaptive_cruise_decrease_distance_button) {
    return false;
  }
  // driver_door_ajar
  if (lhs->driver_door_ajar != rhs->driver_door_ajar) {
    return false;
  }
  // passenger_door_ajar
  if (lhs->passenger_door_ajar != rhs->passenger_door_ajar) {
    return false;
  }
  // rear_left_door_ajar
  if (lhs->rear_left_door_ajar != rhs->rear_left_door_ajar) {
    return false;
  }
  // rear_right_door_ajar
  if (lhs->rear_right_door_ajar != rhs->rear_right_door_ajar) {
    return false;
  }
  // liftgate_ajar
  if (lhs->liftgate_ajar != rhs->liftgate_ajar) {
    return false;
  }
  // any_seatbelt_unbuckled
  if (lhs->any_seatbelt_unbuckled != rhs->any_seatbelt_unbuckled) {
    return false;
  }
  // airbag_deployed
  if (lhs->airbag_deployed != rhs->airbag_deployed) {
    return false;
  }
  // door_or_hood_ajar
  if (lhs->door_or_hood_ajar != rhs->door_or_hood_ajar) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__DriverInputReport__copy(
  const raptor_dbw_msgs__msg__DriverInputReport * input,
  raptor_dbw_msgs__msg__DriverInputReport * output)
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
  // turn_signal
  if (!raptor_dbw_msgs__msg__TurnSignal__copy(
      &(input->turn_signal), &(output->turn_signal)))
  {
    return false;
  }
  // high_beam_headlights
  if (!raptor_dbw_msgs__msg__HighBeam__copy(
      &(input->high_beam_headlights), &(output->high_beam_headlights)))
  {
    return false;
  }
  // wiper
  if (!raptor_dbw_msgs__msg__WiperFront__copy(
      &(input->wiper), &(output->wiper)))
  {
    return false;
  }
  // cruise_resume_button
  output->cruise_resume_button = input->cruise_resume_button;
  // cruise_cancel_button
  output->cruise_cancel_button = input->cruise_cancel_button;
  // cruise_accel_button
  output->cruise_accel_button = input->cruise_accel_button;
  // cruise_decel_button
  output->cruise_decel_button = input->cruise_decel_button;
  // cruise_on_off_button
  output->cruise_on_off_button = input->cruise_on_off_button;
  // adaptive_cruise_on_off_button
  output->adaptive_cruise_on_off_button = input->adaptive_cruise_on_off_button;
  // adaptive_cruise_increase_distance_button
  output->adaptive_cruise_increase_distance_button = input->adaptive_cruise_increase_distance_button;
  // adaptive_cruise_decrease_distance_button
  output->adaptive_cruise_decrease_distance_button = input->adaptive_cruise_decrease_distance_button;
  // driver_door_ajar
  output->driver_door_ajar = input->driver_door_ajar;
  // passenger_door_ajar
  output->passenger_door_ajar = input->passenger_door_ajar;
  // rear_left_door_ajar
  output->rear_left_door_ajar = input->rear_left_door_ajar;
  // rear_right_door_ajar
  output->rear_right_door_ajar = input->rear_right_door_ajar;
  // liftgate_ajar
  output->liftgate_ajar = input->liftgate_ajar;
  // any_seatbelt_unbuckled
  output->any_seatbelt_unbuckled = input->any_seatbelt_unbuckled;
  // airbag_deployed
  output->airbag_deployed = input->airbag_deployed;
  // door_or_hood_ajar
  output->door_or_hood_ajar = input->door_or_hood_ajar;
  return true;
}

raptor_dbw_msgs__msg__DriverInputReport *
raptor_dbw_msgs__msg__DriverInputReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__DriverInputReport * msg = (raptor_dbw_msgs__msg__DriverInputReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__DriverInputReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__DriverInputReport));
  bool success = raptor_dbw_msgs__msg__DriverInputReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__DriverInputReport__destroy(raptor_dbw_msgs__msg__DriverInputReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__DriverInputReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__DriverInputReport__Sequence__init(raptor_dbw_msgs__msg__DriverInputReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__DriverInputReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__DriverInputReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__DriverInputReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__DriverInputReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__DriverInputReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__DriverInputReport__Sequence__fini(raptor_dbw_msgs__msg__DriverInputReport__Sequence * array)
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
      raptor_dbw_msgs__msg__DriverInputReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__DriverInputReport__Sequence *
raptor_dbw_msgs__msg__DriverInputReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__DriverInputReport__Sequence * array = (raptor_dbw_msgs__msg__DriverInputReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__DriverInputReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__DriverInputReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__DriverInputReport__Sequence__destroy(raptor_dbw_msgs__msg__DriverInputReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__DriverInputReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__DriverInputReport__Sequence__are_equal(const raptor_dbw_msgs__msg__DriverInputReport__Sequence * lhs, const raptor_dbw_msgs__msg__DriverInputReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__DriverInputReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__DriverInputReport__Sequence__copy(
  const raptor_dbw_msgs__msg__DriverInputReport__Sequence * input,
  raptor_dbw_msgs__msg__DriverInputReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__DriverInputReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__DriverInputReport * data =
      (raptor_dbw_msgs__msg__DriverInputReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__DriverInputReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__DriverInputReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__DriverInputReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
