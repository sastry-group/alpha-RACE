// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/BESTPOS.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/bestpos__functions.h"

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
// Member `ext_sol_stat`
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__functions.h"

bool
novatel_oem7_msgs__msg__BESTPOS__init(novatel_oem7_msgs__msg__BESTPOS * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__BESTPOS__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__BESTPOS__fini(msg);
    return false;
  }
  // sol_status
  if (!novatel_oem7_msgs__msg__SolutionStatus__init(&msg->sol_status)) {
    novatel_oem7_msgs__msg__BESTPOS__fini(msg);
    return false;
  }
  // pos_type
  if (!novatel_oem7_msgs__msg__PositionOrVelocityType__init(&msg->pos_type)) {
    novatel_oem7_msgs__msg__BESTPOS__fini(msg);
    return false;
  }
  // lat
  // lon
  // hgt
  // undulation
  // datum_id
  // lat_stdev
  // lon_stdev
  // hgt_stdev
  // stn_id
  // diff_age
  // sol_age
  // num_svs
  // num_sol_svs
  // num_sol_l1_svs
  // num_sol_multi_svs
  // reserved
  // ext_sol_stat
  if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__init(&msg->ext_sol_stat)) {
    novatel_oem7_msgs__msg__BESTPOS__fini(msg);
    return false;
  }
  // galileo_beidou_sig_mask
  // gps_glonass_sig_mask
  return true;
}

void
novatel_oem7_msgs__msg__BESTPOS__fini(novatel_oem7_msgs__msg__BESTPOS * msg)
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
  // lat
  // lon
  // hgt
  // undulation
  // datum_id
  // lat_stdev
  // lon_stdev
  // hgt_stdev
  // stn_id
  // diff_age
  // sol_age
  // num_svs
  // num_sol_svs
  // num_sol_l1_svs
  // num_sol_multi_svs
  // reserved
  // ext_sol_stat
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__fini(&msg->ext_sol_stat);
  // galileo_beidou_sig_mask
  // gps_glonass_sig_mask
}

bool
novatel_oem7_msgs__msg__BESTPOS__are_equal(const novatel_oem7_msgs__msg__BESTPOS * lhs, const novatel_oem7_msgs__msg__BESTPOS * rhs)
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
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // hgt
  if (lhs->hgt != rhs->hgt) {
    return false;
  }
  // undulation
  if (lhs->undulation != rhs->undulation) {
    return false;
  }
  // datum_id
  if (lhs->datum_id != rhs->datum_id) {
    return false;
  }
  // lat_stdev
  if (lhs->lat_stdev != rhs->lat_stdev) {
    return false;
  }
  // lon_stdev
  if (lhs->lon_stdev != rhs->lon_stdev) {
    return false;
  }
  // hgt_stdev
  if (lhs->hgt_stdev != rhs->hgt_stdev) {
    return false;
  }
  // stn_id
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->stn_id[i] != rhs->stn_id[i]) {
      return false;
    }
  }
  // diff_age
  if (lhs->diff_age != rhs->diff_age) {
    return false;
  }
  // sol_age
  if (lhs->sol_age != rhs->sol_age) {
    return false;
  }
  // num_svs
  if (lhs->num_svs != rhs->num_svs) {
    return false;
  }
  // num_sol_svs
  if (lhs->num_sol_svs != rhs->num_sol_svs) {
    return false;
  }
  // num_sol_l1_svs
  if (lhs->num_sol_l1_svs != rhs->num_sol_l1_svs) {
    return false;
  }
  // num_sol_multi_svs
  if (lhs->num_sol_multi_svs != rhs->num_sol_multi_svs) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // ext_sol_stat
  if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__are_equal(
      &(lhs->ext_sol_stat), &(rhs->ext_sol_stat)))
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
novatel_oem7_msgs__msg__BESTPOS__copy(
  const novatel_oem7_msgs__msg__BESTPOS * input,
  novatel_oem7_msgs__msg__BESTPOS * output)
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
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // hgt
  output->hgt = input->hgt;
  // undulation
  output->undulation = input->undulation;
  // datum_id
  output->datum_id = input->datum_id;
  // lat_stdev
  output->lat_stdev = input->lat_stdev;
  // lon_stdev
  output->lon_stdev = input->lon_stdev;
  // hgt_stdev
  output->hgt_stdev = input->hgt_stdev;
  // stn_id
  for (size_t i = 0; i < 4; ++i) {
    output->stn_id[i] = input->stn_id[i];
  }
  // diff_age
  output->diff_age = input->diff_age;
  // sol_age
  output->sol_age = input->sol_age;
  // num_svs
  output->num_svs = input->num_svs;
  // num_sol_svs
  output->num_sol_svs = input->num_sol_svs;
  // num_sol_l1_svs
  output->num_sol_l1_svs = input->num_sol_l1_svs;
  // num_sol_multi_svs
  output->num_sol_multi_svs = input->num_sol_multi_svs;
  // reserved
  output->reserved = input->reserved;
  // ext_sol_stat
  if (!novatel_oem7_msgs__msg__BestExtendedSolutionStatus__copy(
      &(input->ext_sol_stat), &(output->ext_sol_stat)))
  {
    return false;
  }
  // galileo_beidou_sig_mask
  output->galileo_beidou_sig_mask = input->galileo_beidou_sig_mask;
  // gps_glonass_sig_mask
  output->gps_glonass_sig_mask = input->gps_glonass_sig_mask;
  return true;
}

novatel_oem7_msgs__msg__BESTPOS *
novatel_oem7_msgs__msg__BESTPOS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BESTPOS * msg = (novatel_oem7_msgs__msg__BESTPOS *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__BESTPOS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__BESTPOS));
  bool success = novatel_oem7_msgs__msg__BESTPOS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__BESTPOS__destroy(novatel_oem7_msgs__msg__BESTPOS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__BESTPOS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__BESTPOS__Sequence__init(novatel_oem7_msgs__msg__BESTPOS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BESTPOS * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__BESTPOS *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__BESTPOS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__BESTPOS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__BESTPOS__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__BESTPOS__Sequence__fini(novatel_oem7_msgs__msg__BESTPOS__Sequence * array)
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
      novatel_oem7_msgs__msg__BESTPOS__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__BESTPOS__Sequence *
novatel_oem7_msgs__msg__BESTPOS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__BESTPOS__Sequence * array = (novatel_oem7_msgs__msg__BESTPOS__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__BESTPOS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__BESTPOS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__BESTPOS__Sequence__destroy(novatel_oem7_msgs__msg__BESTPOS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__BESTPOS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__BESTPOS__Sequence__are_equal(const novatel_oem7_msgs__msg__BESTPOS__Sequence * lhs, const novatel_oem7_msgs__msg__BESTPOS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__BESTPOS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__BESTPOS__Sequence__copy(
  const novatel_oem7_msgs__msg__BESTPOS__Sequence * input,
  novatel_oem7_msgs__msg__BESTPOS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__BESTPOS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__BESTPOS * data =
      (novatel_oem7_msgs__msg__BESTPOS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__BESTPOS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__BESTPOS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__BESTPOS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
