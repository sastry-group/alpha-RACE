// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/heading2__functions.h"

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
// Member `sol_status`
#include "novatel_oem7_msgs/msg/detail/solution_status__functions.h"
// Member `pos_type`
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__functions.h"
// Member `sol_source`
#include "novatel_oem7_msgs/msg/detail/solution_source__functions.h"
// Member `ext_sol_status`
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__functions.h"

bool
novatel_oem7_msgs__msg__HEADING2__init(novatel_oem7_msgs__msg__HEADING2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
    return false;
  }
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__init(&msg->sol_status)) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
    return false;
  }
  // pos_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__init(&msg->pos_type)) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
    return false;
  }
  // length
  // heading
  // pitch
  // reserved
  // heading_stdev
  // pitch_stdev
  // rover_stn_id
  // master_stn_id
  // num_sv_tracked
  // num_sv_in_sol
  // num_sv_obs
  // num_sv_multi
  // sol_source
  if (!novatel_oem7_msgs__msg__SolutionSource__init(&msg->sol_source)) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
    return false;
  }
  // ext_sol_status
  if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__init(&msg->ext_sol_status)) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
    return false;
  }
  // galileo_beidou_sig_mask
  // gps_glonass_sig_mask
  return true;
}

void
novatel_oem7_msgs__msg__HEADING2__fini(novatel_oem7_msgs__msg__HEADING2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // sol_status
  novatel_oem7_msgs__msg__SolutionStatus__fini(&msg->sol_status);
  // pos_type
  novatel_oem7_msgs__msg__PositionOrVelocityType__fini(&msg->pos_type);
  // length
  // heading
  // pitch
  // reserved
  // heading_stdev
  // pitch_stdev
  // rover_stn_id
  // master_stn_id
  // num_sv_tracked
  // num_sv_in_sol
  // num_sv_obs
  // num_sv_multi
  // sol_source
  novatel_oem7_msgs__msg__SolutionSource__fini(&msg->sol_source);
  // ext_sol_status
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(&msg->ext_sol_status);
  // galileo_beidou_sig_mask
  // gps_glonass_sig_mask
}

bool
novatel_oem7_msgs__msg__HEADING2__are_equal(const novatel_oem7_msgs__msg__HEADING2 * lhs, const novatel_oem7_msgs__msg__HEADING2 * rhs)
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
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__are_equal(
      &(lhs->sol_status), &(rhs->sol_status)))
  {
    return false;
  }
  // pos_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__are_equal(
      &(lhs->pos_type), &(rhs->pos_type)))
  {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // heading_stdev
  if (lhs->heading_stdev != rhs->heading_stdev) {
    return false;
  }
  // pitch_stdev
  if (lhs->pitch_stdev != rhs->pitch_stdev) {
    return false;
  }
  // rover_stn_id
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->rover_stn_id[i] != rhs->rover_stn_id[i]) {
      return false;
    }
  }
  // master_stn_id
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->master_stn_id[i] != rhs->master_stn_id[i]) {
      return false;
    }
  }
  // num_sv_tracked
  if (lhs->num_sv_tracked != rhs->num_sv_tracked) {
    return false;
  }
  // num_sv_in_sol
  if (lhs->num_sv_in_sol != rhs->num_sv_in_sol) {
    return false;
  }
  // num_sv_obs
  if (lhs->num_sv_obs != rhs->num_sv_obs) {
    return false;
  }
  // num_sv_multi
  if (lhs->num_sv_multi != rhs->num_sv_multi) {
    return false;
  }
  // sol_source
  if (!novatel_oem7_msgs__msg__SolutionSource__are_equal(
      &(lhs->sol_source), &(rhs->sol_source)))
  {
    return false;
  }
  // ext_sol_status
  if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__are_equal(
      &(lhs->ext_sol_status), &(rhs->ext_sol_status)))
  {
    return false;
  }
  // galileo_beidou_sig_mask
  if (lhs->galileo_beidou_sig_mask != rhs->galileo_beidou_sig_mask) {
    return false;
  }
  // gps_glonass_sig_mask
  if (lhs->gps_glonass_sig_mask != rhs->gps_glonass_sig_mask) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__HEADING2__copy(
  const novatel_oem7_msgs__msg__HEADING2 * input,
  novatel_oem7_msgs__msg__HEADING2 * output)
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
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__copy(
      &(input->sol_status), &(output->sol_status)))
  {
    return false;
  }
  // pos_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__copy(
      &(input->pos_type), &(output->pos_type)))
  {
    return false;
  }
  // length
  output->length = input->length;
  // heading
  output->heading = input->heading;
  // pitch
  output->pitch = input->pitch;
  // reserved
  output->reserved = input->reserved;
  // heading_stdev
  output->heading_stdev = input->heading_stdev;
  // pitch_stdev
  output->pitch_stdev = input->pitch_stdev;
  // rover_stn_id
  for (size_t i = 0; i < 4; ++i) {
    output->rover_stn_id[i] = input->rover_stn_id[i];
  }
  // master_stn_id
  for (size_t i = 0; i < 4; ++i) {
    output->master_stn_id[i] = input->master_stn_id[i];
  }
  // num_sv_tracked
  output->num_sv_tracked = input->num_sv_tracked;
  // num_sv_in_sol
  output->num_sv_in_sol = input->num_sv_in_sol;
  // num_sv_obs
  output->num_sv_obs = input->num_sv_obs;
  // num_sv_multi
  output->num_sv_multi = input->num_sv_multi;
  // sol_source
  if (!novatel_oem7_msgs__msg__SolutionSource__copy(
      &(input->sol_source), &(output->sol_source)))
  {
    return false;
  }
  // ext_sol_status
  if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__copy(
      &(input->ext_sol_status), &(output->ext_sol_status)))
  {
    return false;
  }
  // galileo_beidou_sig_mask
  output->galileo_beidou_sig_mask = input->galileo_beidou_sig_mask;
  // gps_glonass_sig_mask
  output->gps_glonass_sig_mask = input->gps_glonass_sig_mask;
  return true;
}

novatel_oem7_msgs__msg__HEADING2 *
novatel_oem7_msgs__msg__HEADING2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__HEADING2 * msg = (novatel_oem7_msgs__msg__HEADING2 *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__HEADING2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__HEADING2));
  bool success = novatel_oem7_msgs__msg__HEADING2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__HEADING2__destroy(novatel_oem7_msgs__msg__HEADING2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__HEADING2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__HEADING2__Sequence__init(novatel_oem7_msgs__msg__HEADING2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__HEADING2 * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__HEADING2 *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__HEADING2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__HEADING2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__HEADING2__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__HEADING2__Sequence__fini(novatel_oem7_msgs__msg__HEADING2__Sequence * array)
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
      novatel_oem7_msgs__msg__HEADING2__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__HEADING2__Sequence *
novatel_oem7_msgs__msg__HEADING2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__HEADING2__Sequence * array = (novatel_oem7_msgs__msg__HEADING2__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__HEADING2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__HEADING2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__HEADING2__Sequence__destroy(novatel_oem7_msgs__msg__HEADING2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__HEADING2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__HEADING2__Sequence__are_equal(const novatel_oem7_msgs__msg__HEADING2__Sequence * lhs, const novatel_oem7_msgs__msg__HEADING2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__HEADING2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__HEADING2__Sequence__copy(
  const novatel_oem7_msgs__msg__HEADING2__Sequence * input,
  novatel_oem7_msgs__msg__HEADING2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__HEADING2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__HEADING2 * data =
      (novatel_oem7_msgs__msg__HEADING2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__HEADING2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__HEADING2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__HEADING2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
