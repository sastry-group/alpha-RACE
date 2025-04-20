// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/surround_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rear_right`
// Member `rear_left`
// Member `rear_center`
// Member `front_right`
// Member `front_left`
// Member `front_center`
#include "raptor_dbw_msgs/msg/detail/sonar_arc_num__functions.h"

bool
raptor_dbw_msgs__msg__SurroundReport__init(raptor_dbw_msgs__msg__SurroundReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // front_radar_object_distance
  // rear_radar_object_distance
  // rear_right
  if (!raptor_dbw_msgs__msg__SonarArcNum__init(&msg->rear_right)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // rear_left
  if (!raptor_dbw_msgs__msg__SonarArcNum__init(&msg->rear_left)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // rear_center
  if (!raptor_dbw_msgs__msg__SonarArcNum__init(&msg->rear_center)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // front_right
  if (!raptor_dbw_msgs__msg__SonarArcNum__init(&msg->front_right)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // front_left
  if (!raptor_dbw_msgs__msg__SonarArcNum__init(&msg->front_left)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // front_center
  if (!raptor_dbw_msgs__msg__SonarArcNum__init(&msg->front_center)) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
    return false;
  }
  // front_radar_distance_valid
  // parking_sonar_data_valid
  return true;
}

void
raptor_dbw_msgs__msg__SurroundReport__fini(raptor_dbw_msgs__msg__SurroundReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // front_radar_object_distance
  // rear_radar_object_distance
  // rear_right
  raptor_dbw_msgs__msg__SonarArcNum__fini(&msg->rear_right);
  // rear_left
  raptor_dbw_msgs__msg__SonarArcNum__fini(&msg->rear_left);
  // rear_center
  raptor_dbw_msgs__msg__SonarArcNum__fini(&msg->rear_center);
  // front_right
  raptor_dbw_msgs__msg__SonarArcNum__fini(&msg->front_right);
  // front_left
  raptor_dbw_msgs__msg__SonarArcNum__fini(&msg->front_left);
  // front_center
  raptor_dbw_msgs__msg__SonarArcNum__fini(&msg->front_center);
  // front_radar_distance_valid
  // parking_sonar_data_valid
}

bool
raptor_dbw_msgs__msg__SurroundReport__are_equal(const raptor_dbw_msgs__msg__SurroundReport * lhs, const raptor_dbw_msgs__msg__SurroundReport * rhs)
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
  // front_radar_object_distance
  if (lhs->front_radar_object_distance != rhs->front_radar_object_distance) {
    return false;
  }
  // rear_radar_object_distance
  if (lhs->rear_radar_object_distance != rhs->rear_radar_object_distance) {
    return false;
  }
  // rear_right
  if (!raptor_dbw_msgs__msg__SonarArcNum__are_equal(
      &(lhs->rear_right), &(rhs->rear_right)))
  {
    return false;
  }
  // rear_left
  if (!raptor_dbw_msgs__msg__SonarArcNum__are_equal(
      &(lhs->rear_left), &(rhs->rear_left)))
  {
    return false;
  }
  // rear_center
  if (!raptor_dbw_msgs__msg__SonarArcNum__are_equal(
      &(lhs->rear_center), &(rhs->rear_center)))
  {
    return false;
  }
  // front_right
  if (!raptor_dbw_msgs__msg__SonarArcNum__are_equal(
      &(lhs->front_right), &(rhs->front_right)))
  {
    return false;
  }
  // front_left
  if (!raptor_dbw_msgs__msg__SonarArcNum__are_equal(
      &(lhs->front_left), &(rhs->front_left)))
  {
    return false;
  }
  // front_center
  if (!raptor_dbw_msgs__msg__SonarArcNum__are_equal(
      &(lhs->front_center), &(rhs->front_center)))
  {
    return false;
  }
  // front_radar_distance_valid
  if (lhs->front_radar_distance_valid != rhs->front_radar_distance_valid) {
    return false;
  }
  // parking_sonar_data_valid
  if (lhs->parking_sonar_data_valid != rhs->parking_sonar_data_valid) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__SurroundReport__copy(
  const raptor_dbw_msgs__msg__SurroundReport * input,
  raptor_dbw_msgs__msg__SurroundReport * output)
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
  // front_radar_object_distance
  output->front_radar_object_distance = input->front_radar_object_distance;
  // rear_radar_object_distance
  output->rear_radar_object_distance = input->rear_radar_object_distance;
  // rear_right
  if (!raptor_dbw_msgs__msg__SonarArcNum__copy(
      &(input->rear_right), &(output->rear_right)))
  {
    return false;
  }
  // rear_left
  if (!raptor_dbw_msgs__msg__SonarArcNum__copy(
      &(input->rear_left), &(output->rear_left)))
  {
    return false;
  }
  // rear_center
  if (!raptor_dbw_msgs__msg__SonarArcNum__copy(
      &(input->rear_center), &(output->rear_center)))
  {
    return false;
  }
  // front_right
  if (!raptor_dbw_msgs__msg__SonarArcNum__copy(
      &(input->front_right), &(output->front_right)))
  {
    return false;
  }
  // front_left
  if (!raptor_dbw_msgs__msg__SonarArcNum__copy(
      &(input->front_left), &(output->front_left)))
  {
    return false;
  }
  // front_center
  if (!raptor_dbw_msgs__msg__SonarArcNum__copy(
      &(input->front_center), &(output->front_center)))
  {
    return false;
  }
  // front_radar_distance_valid
  output->front_radar_distance_valid = input->front_radar_distance_valid;
  // parking_sonar_data_valid
  output->parking_sonar_data_valid = input->parking_sonar_data_valid;
  return true;
}

raptor_dbw_msgs__msg__SurroundReport *
raptor_dbw_msgs__msg__SurroundReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SurroundReport * msg = (raptor_dbw_msgs__msg__SurroundReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__SurroundReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__SurroundReport));
  bool success = raptor_dbw_msgs__msg__SurroundReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__SurroundReport__destroy(raptor_dbw_msgs__msg__SurroundReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__SurroundReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__SurroundReport__Sequence__init(raptor_dbw_msgs__msg__SurroundReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SurroundReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__SurroundReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__SurroundReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__SurroundReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__SurroundReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__SurroundReport__Sequence__fini(raptor_dbw_msgs__msg__SurroundReport__Sequence * array)
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
      raptor_dbw_msgs__msg__SurroundReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__SurroundReport__Sequence *
raptor_dbw_msgs__msg__SurroundReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__SurroundReport__Sequence * array = (raptor_dbw_msgs__msg__SurroundReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__SurroundReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__SurroundReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__SurroundReport__Sequence__destroy(raptor_dbw_msgs__msg__SurroundReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__SurroundReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__SurroundReport__Sequence__are_equal(const raptor_dbw_msgs__msg__SurroundReport__Sequence * lhs, const raptor_dbw_msgs__msg__SurroundReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__SurroundReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__SurroundReport__Sequence__copy(
  const raptor_dbw_msgs__msg__SurroundReport__Sequence * input,
  raptor_dbw_msgs__msg__SurroundReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__SurroundReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__SurroundReport * data =
      (raptor_dbw_msgs__msg__SurroundReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__SurroundReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__SurroundReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__SurroundReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
