// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/diagnostic_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__DiagnosticReport__init(raptor_dbw_msgs__msg__DiagnosticReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__DiagnosticReport__fini(msg);
    return false;
  }
  // sd_system_warning
  // sd_system_failure
  // sd_brake_warning1
  // sd_brake_warning2
  // sd_brake_warning3
  // sd_steer_warning1
  // sd_steer_warning2
  // sd_steer_warning3
  // motec_warning
  // front_brk_failure
  // rear_brk_failure
  // low_eng_speed
  // sd_comms_loss
  // motec_comms_loss
  // sd_ebrake
  // adlink_hb_lost
  // rc_lost
  return true;
}

void
raptor_dbw_msgs__msg__DiagnosticReport__fini(raptor_dbw_msgs__msg__DiagnosticReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sd_system_warning
  // sd_system_failure
  // sd_brake_warning1
  // sd_brake_warning2
  // sd_brake_warning3
  // sd_steer_warning1
  // sd_steer_warning2
  // sd_steer_warning3
  // motec_warning
  // front_brk_failure
  // rear_brk_failure
  // low_eng_speed
  // sd_comms_loss
  // motec_comms_loss
  // sd_ebrake
  // adlink_hb_lost
  // rc_lost
}

bool
raptor_dbw_msgs__msg__DiagnosticReport__are_equal(const raptor_dbw_msgs__msg__DiagnosticReport * lhs, const raptor_dbw_msgs__msg__DiagnosticReport * rhs)
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
  // sd_system_warning
  if (lhs->sd_system_warning != rhs->sd_system_warning) {
    return false;
  }
  // sd_system_failure
  if (lhs->sd_system_failure != rhs->sd_system_failure) {
    return false;
  }
  // sd_brake_warning1
  if (lhs->sd_brake_warning1 != rhs->sd_brake_warning1) {
    return false;
  }
  // sd_brake_warning2
  if (lhs->sd_brake_warning2 != rhs->sd_brake_warning2) {
    return false;
  }
  // sd_brake_warning3
  if (lhs->sd_brake_warning3 != rhs->sd_brake_warning3) {
    return false;
  }
  // sd_steer_warning1
  if (lhs->sd_steer_warning1 != rhs->sd_steer_warning1) {
    return false;
  }
  // sd_steer_warning2
  if (lhs->sd_steer_warning2 != rhs->sd_steer_warning2) {
    return false;
  }
  // sd_steer_warning3
  if (lhs->sd_steer_warning3 != rhs->sd_steer_warning3) {
    return false;
  }
  // motec_warning
  if (lhs->motec_warning != rhs->motec_warning) {
    return false;
  }
  // front_brk_failure
  if (lhs->front_brk_failure != rhs->front_brk_failure) {
    return false;
  }
  // rear_brk_failure
  if (lhs->rear_brk_failure != rhs->rear_brk_failure) {
    return false;
  }
  // low_eng_speed
  if (lhs->low_eng_speed != rhs->low_eng_speed) {
    return false;
  }
  // sd_comms_loss
  if (lhs->sd_comms_loss != rhs->sd_comms_loss) {
    return false;
  }
  // motec_comms_loss
  if (lhs->motec_comms_loss != rhs->motec_comms_loss) {
    return false;
  }
  // sd_ebrake
  if (lhs->sd_ebrake != rhs->sd_ebrake) {
    return false;
  }
  // adlink_hb_lost
  if (lhs->adlink_hb_lost != rhs->adlink_hb_lost) {
    return false;
  }
  // rc_lost
  if (lhs->rc_lost != rhs->rc_lost) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__DiagnosticReport__copy(
  const raptor_dbw_msgs__msg__DiagnosticReport * input,
  raptor_dbw_msgs__msg__DiagnosticReport * output)
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
  // sd_system_warning
  output->sd_system_warning = input->sd_system_warning;
  // sd_system_failure
  output->sd_system_failure = input->sd_system_failure;
  // sd_brake_warning1
  output->sd_brake_warning1 = input->sd_brake_warning1;
  // sd_brake_warning2
  output->sd_brake_warning2 = input->sd_brake_warning2;
  // sd_brake_warning3
  output->sd_brake_warning3 = input->sd_brake_warning3;
  // sd_steer_warning1
  output->sd_steer_warning1 = input->sd_steer_warning1;
  // sd_steer_warning2
  output->sd_steer_warning2 = input->sd_steer_warning2;
  // sd_steer_warning3
  output->sd_steer_warning3 = input->sd_steer_warning3;
  // motec_warning
  output->motec_warning = input->motec_warning;
  // front_brk_failure
  output->front_brk_failure = input->front_brk_failure;
  // rear_brk_failure
  output->rear_brk_failure = input->rear_brk_failure;
  // low_eng_speed
  output->low_eng_speed = input->low_eng_speed;
  // sd_comms_loss
  output->sd_comms_loss = input->sd_comms_loss;
  // motec_comms_loss
  output->motec_comms_loss = input->motec_comms_loss;
  // sd_ebrake
  output->sd_ebrake = input->sd_ebrake;
  // adlink_hb_lost
  output->adlink_hb_lost = input->adlink_hb_lost;
  // rc_lost
  output->rc_lost = input->rc_lost;
  return true;
}

raptor_dbw_msgs__msg__DiagnosticReport *
raptor_dbw_msgs__msg__DiagnosticReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__DiagnosticReport * msg = (raptor_dbw_msgs__msg__DiagnosticReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__DiagnosticReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__DiagnosticReport));
  bool success = raptor_dbw_msgs__msg__DiagnosticReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__DiagnosticReport__destroy(raptor_dbw_msgs__msg__DiagnosticReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__DiagnosticReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__init(raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__DiagnosticReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__DiagnosticReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__DiagnosticReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__DiagnosticReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__DiagnosticReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__fini(raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array)
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
      raptor_dbw_msgs__msg__DiagnosticReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__DiagnosticReport__Sequence *
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array = (raptor_dbw_msgs__msg__DiagnosticReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__DiagnosticReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__DiagnosticReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__destroy(raptor_dbw_msgs__msg__DiagnosticReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__DiagnosticReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__are_equal(const raptor_dbw_msgs__msg__DiagnosticReport__Sequence * lhs, const raptor_dbw_msgs__msg__DiagnosticReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__DiagnosticReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__DiagnosticReport__Sequence__copy(
  const raptor_dbw_msgs__msg__DiagnosticReport__Sequence * input,
  raptor_dbw_msgs__msg__DiagnosticReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__DiagnosticReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__DiagnosticReport * data =
      (raptor_dbw_msgs__msg__DiagnosticReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__DiagnosticReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__DiagnosticReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__DiagnosticReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
