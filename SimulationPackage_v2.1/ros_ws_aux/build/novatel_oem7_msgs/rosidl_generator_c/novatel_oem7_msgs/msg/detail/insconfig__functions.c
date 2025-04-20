// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/insconfig__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"
// Member `alignment_mode`
#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__functions.h"
// Member `relative_ins_output_frame`
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__functions.h"
// Member `ins_receiver_status`
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__functions.h"
// Member `translations`
#include "novatel_oem7_msgs/msg/detail/translation__functions.h"
// Member `rotations`
#include "novatel_oem7_msgs/msg/detail/rotation__functions.h"

bool
novatel_oem7_msgs__msg__INSCONFIG__init(novatel_oem7_msgs__msg__INSCONFIG * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  // imu_type
  // mapping
  // initial_alignment_velocity
  // heave_window
  // profile
  // enabled_updates
  // alignment_mode
  if (!novatel_oem7_msgs__msg__INSAlignmentMode__init(&msg->alignment_mode)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  // relative_ins_output_frame
  if (!novatel_oem7_msgs__msg__INSOutputFrame__init(&msg->relative_ins_output_frame)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  // relative_ins_output_direction
  // ins_receiver_status
  if (!novatel_oem7_msgs__msg__INSReceiverStatus__init(&msg->ins_receiver_status)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  // ins_seed_enabled
  // ins_seed_validation
  // reserved_1
  // reserved_2
  // reserved_3
  // reserved_4
  // reserved_5
  // reserved_6
  // reserved_7
  // number_of_translations
  // translations
  if (!novatel_oem7_msgs__msg__Translation__Sequence__init(&msg->translations, 0)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  // number_of_rotations
  // rotations
  if (!novatel_oem7_msgs__msg__Rotation__Sequence__init(&msg->rotations, 0)) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
    return false;
  }
  return true;
}

void
novatel_oem7_msgs__msg__INSCONFIG__fini(novatel_oem7_msgs__msg__INSCONFIG * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // imu_type
  // mapping
  // initial_alignment_velocity
  // heave_window
  // profile
  // enabled_updates
  // alignment_mode
  novatel_oem7_msgs__msg__INSAlignmentMode__fini(&msg->alignment_mode);
  // relative_ins_output_frame
  novatel_oem7_msgs__msg__INSOutputFrame__fini(&msg->relative_ins_output_frame);
  // relative_ins_output_direction
  // ins_receiver_status
  novatel_oem7_msgs__msg__INSReceiverStatus__fini(&msg->ins_receiver_status);
  // ins_seed_enabled
  // ins_seed_validation
  // reserved_1
  // reserved_2
  // reserved_3
  // reserved_4
  // reserved_5
  // reserved_6
  // reserved_7
  // number_of_translations
  // translations
  novatel_oem7_msgs__msg__Translation__Sequence__fini(&msg->translations);
  // number_of_rotations
  // rotations
  novatel_oem7_msgs__msg__Rotation__Sequence__fini(&msg->rotations);
}

bool
novatel_oem7_msgs__msg__INSCONFIG__are_equal(const novatel_oem7_msgs__msg__INSCONFIG * lhs, const novatel_oem7_msgs__msg__INSCONFIG * rhs)
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
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__are_equal(
      &(lhs->nov_header), &(rhs->nov_header)))
  {
    return false;
  }
  // imu_type
  if (lhs->imu_type != rhs->imu_type) {
    return false;
  }
  // mapping
  if (lhs->mapping != rhs->mapping) {
    return false;
  }
  // initial_alignment_velocity
  if (lhs->initial_alignment_velocity != rhs->initial_alignment_velocity) {
    return false;
  }
  // heave_window
  if (lhs->heave_window != rhs->heave_window) {
    return false;
  }
  // profile
  if (lhs->profile != rhs->profile) {
    return false;
  }
  // enabled_updates
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->enabled_updates[i] != rhs->enabled_updates[i]) {
      return false;
    }
  }
  // alignment_mode
  if (!novatel_oem7_msgs__msg__INSAlignmentMode__are_equal(
      &(lhs->alignment_mode), &(rhs->alignment_mode)))
  {
    return false;
  }
  // relative_ins_output_frame
  if (!novatel_oem7_msgs__msg__INSOutputFrame__are_equal(
      &(lhs->relative_ins_output_frame), &(rhs->relative_ins_output_frame)))
  {
    return false;
  }
  // relative_ins_output_direction
  if (lhs->relative_ins_output_direction != rhs->relative_ins_output_direction) {
    return false;
  }
  // ins_receiver_status
  if (!novatel_oem7_msgs__msg__INSReceiverStatus__are_equal(
      &(lhs->ins_receiver_status), &(rhs->ins_receiver_status)))
  {
    return false;
  }
  // ins_seed_enabled
  if (lhs->ins_seed_enabled != rhs->ins_seed_enabled) {
    return false;
  }
  // ins_seed_validation
  if (lhs->ins_seed_validation != rhs->ins_seed_validation) {
    return false;
  }
  // reserved_1
  if (lhs->reserved_1 != rhs->reserved_1) {
    return false;
  }
  // reserved_2
  if (lhs->reserved_2 != rhs->reserved_2) {
    return false;
  }
  // reserved_3
  if (lhs->reserved_3 != rhs->reserved_3) {
    return false;
  }
  // reserved_4
  if (lhs->reserved_4 != rhs->reserved_4) {
    return false;
  }
  // reserved_5
  if (lhs->reserved_5 != rhs->reserved_5) {
    return false;
  }
  // reserved_6
  if (lhs->reserved_6 != rhs->reserved_6) {
    return false;
  }
  // reserved_7
  if (lhs->reserved_7 != rhs->reserved_7) {
    return false;
  }
  // number_of_translations
  if (lhs->number_of_translations != rhs->number_of_translations) {
    return false;
  }
  // translations
  if (!novatel_oem7_msgs__msg__Translation__Sequence__are_equal(
      &(lhs->translations), &(rhs->translations)))
  {
    return false;
  }
  // number_of_rotations
  if (lhs->number_of_rotations != rhs->number_of_rotations) {
    return false;
  }
  // rotations
  if (!novatel_oem7_msgs__msg__Rotation__Sequence__are_equal(
      &(lhs->rotations), &(rhs->rotations)))
  {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSCONFIG__copy(
  const novatel_oem7_msgs__msg__INSCONFIG * input,
  novatel_oem7_msgs__msg__INSCONFIG * output)
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
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__copy(
      &(input->nov_header), &(output->nov_header)))
  {
    return false;
  }
  // imu_type
  output->imu_type = input->imu_type;
  // mapping
  output->mapping = input->mapping;
  // initial_alignment_velocity
  output->initial_alignment_velocity = input->initial_alignment_velocity;
  // heave_window
  output->heave_window = input->heave_window;
  // profile
  output->profile = input->profile;
  // enabled_updates
  for (size_t i = 0; i < 4; ++i) {
    output->enabled_updates[i] = input->enabled_updates[i];
  }
  // alignment_mode
  if (!novatel_oem7_msgs__msg__INSAlignmentMode__copy(
      &(input->alignment_mode), &(output->alignment_mode)))
  {
    return false;
  }
  // relative_ins_output_frame
  if (!novatel_oem7_msgs__msg__INSOutputFrame__copy(
      &(input->relative_ins_output_frame), &(output->relative_ins_output_frame)))
  {
    return false;
  }
  // relative_ins_output_direction
  output->relative_ins_output_direction = input->relative_ins_output_direction;
  // ins_receiver_status
  if (!novatel_oem7_msgs__msg__INSReceiverStatus__copy(
      &(input->ins_receiver_status), &(output->ins_receiver_status)))
  {
    return false;
  }
  // ins_seed_enabled
  output->ins_seed_enabled = input->ins_seed_enabled;
  // ins_seed_validation
  output->ins_seed_validation = input->ins_seed_validation;
  // reserved_1
  output->reserved_1 = input->reserved_1;
  // reserved_2
  output->reserved_2 = input->reserved_2;
  // reserved_3
  output->reserved_3 = input->reserved_3;
  // reserved_4
  output->reserved_4 = input->reserved_4;
  // reserved_5
  output->reserved_5 = input->reserved_5;
  // reserved_6
  output->reserved_6 = input->reserved_6;
  // reserved_7
  output->reserved_7 = input->reserved_7;
  // number_of_translations
  output->number_of_translations = input->number_of_translations;
  // translations
  if (!novatel_oem7_msgs__msg__Translation__Sequence__copy(
      &(input->translations), &(output->translations)))
  {
    return false;
  }
  // number_of_rotations
  output->number_of_rotations = input->number_of_rotations;
  // rotations
  if (!novatel_oem7_msgs__msg__Rotation__Sequence__copy(
      &(input->rotations), &(output->rotations)))
  {
    return false;
  }
  return true;
}

novatel_oem7_msgs__msg__INSCONFIG *
novatel_oem7_msgs__msg__INSCONFIG__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSCONFIG * msg = (novatel_oem7_msgs__msg__INSCONFIG *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSCONFIG), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__INSCONFIG));
  bool success = novatel_oem7_msgs__msg__INSCONFIG__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__INSCONFIG__destroy(novatel_oem7_msgs__msg__INSCONFIG * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__INSCONFIG__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__INSCONFIG__Sequence__init(novatel_oem7_msgs__msg__INSCONFIG__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSCONFIG * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__INSCONFIG *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__INSCONFIG), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__INSCONFIG__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__INSCONFIG__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__INSCONFIG__Sequence__fini(novatel_oem7_msgs__msg__INSCONFIG__Sequence * array)
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
      novatel_oem7_msgs__msg__INSCONFIG__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__INSCONFIG__Sequence *
novatel_oem7_msgs__msg__INSCONFIG__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__INSCONFIG__Sequence * array = (novatel_oem7_msgs__msg__INSCONFIG__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__INSCONFIG__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__INSCONFIG__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__INSCONFIG__Sequence__destroy(novatel_oem7_msgs__msg__INSCONFIG__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__INSCONFIG__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__INSCONFIG__Sequence__are_equal(const novatel_oem7_msgs__msg__INSCONFIG__Sequence * lhs, const novatel_oem7_msgs__msg__INSCONFIG__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSCONFIG__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__INSCONFIG__Sequence__copy(
  const novatel_oem7_msgs__msg__INSCONFIG__Sequence * input,
  novatel_oem7_msgs__msg__INSCONFIG__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__INSCONFIG);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__INSCONFIG * data =
      (novatel_oem7_msgs__msg__INSCONFIG *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__INSCONFIG__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__INSCONFIG__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__INSCONFIG__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
