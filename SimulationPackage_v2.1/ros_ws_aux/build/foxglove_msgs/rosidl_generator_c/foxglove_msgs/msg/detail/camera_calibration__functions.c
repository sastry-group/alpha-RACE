// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from foxglove_msgs:msg/CameraCalibration.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/camera_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `frame_id`
// Member `distortion_model`
#include "rosidl_runtime_c/string_functions.h"
// Member `d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
foxglove_msgs__msg__CameraCalibration__init(foxglove_msgs__msg__CameraCalibration * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    foxglove_msgs__msg__CameraCalibration__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    foxglove_msgs__msg__CameraCalibration__fini(msg);
    return false;
  }
  // width
  // height
  // distortion_model
  if (!rosidl_runtime_c__String__init(&msg->distortion_model)) {
    foxglove_msgs__msg__CameraCalibration__fini(msg);
    return false;
  }
  // d
  if (!rosidl_runtime_c__double__Sequence__init(&msg->d, 0)) {
    foxglove_msgs__msg__CameraCalibration__fini(msg);
    return false;
  }
  // k
  // r
  // p
  return true;
}

void
foxglove_msgs__msg__CameraCalibration__fini(foxglove_msgs__msg__CameraCalibration * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // width
  // height
  // distortion_model
  rosidl_runtime_c__String__fini(&msg->distortion_model);
  // d
  rosidl_runtime_c__double__Sequence__fini(&msg->d);
  // k
  // r
  // p
}

bool
foxglove_msgs__msg__CameraCalibration__are_equal(const foxglove_msgs__msg__CameraCalibration * lhs, const foxglove_msgs__msg__CameraCalibration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // distortion_model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->distortion_model), &(rhs->distortion_model)))
  {
    return false;
  }
  // d
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->d), &(rhs->d)))
  {
    return false;
  }
  // k
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->k[i] != rhs->k[i]) {
      return false;
    }
  }
  // r
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->r[i] != rhs->r[i]) {
      return false;
    }
  }
  // p
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->p[i] != rhs->p[i]) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__CameraCalibration__copy(
  const foxglove_msgs__msg__CameraCalibration * input,
  foxglove_msgs__msg__CameraCalibration * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // distortion_model
  if (!rosidl_runtime_c__String__copy(
      &(input->distortion_model), &(output->distortion_model)))
  {
    return false;
  }
  // d
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->d), &(output->d)))
  {
    return false;
  }
  // k
  for (size_t i = 0; i < 9; ++i) {
    output->k[i] = input->k[i];
  }
  // r
  for (size_t i = 0; i < 9; ++i) {
    output->r[i] = input->r[i];
  }
  // p
  for (size_t i = 0; i < 12; ++i) {
    output->p[i] = input->p[i];
  }
  return true;
}

foxglove_msgs__msg__CameraCalibration *
foxglove_msgs__msg__CameraCalibration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__CameraCalibration * msg = (foxglove_msgs__msg__CameraCalibration *)allocator.allocate(sizeof(foxglove_msgs__msg__CameraCalibration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(foxglove_msgs__msg__CameraCalibration));
  bool success = foxglove_msgs__msg__CameraCalibration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
foxglove_msgs__msg__CameraCalibration__destroy(foxglove_msgs__msg__CameraCalibration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    foxglove_msgs__msg__CameraCalibration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
foxglove_msgs__msg__CameraCalibration__Sequence__init(foxglove_msgs__msg__CameraCalibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__CameraCalibration * data = NULL;

  if (size) {
    data = (foxglove_msgs__msg__CameraCalibration *)allocator.zero_allocate(size, sizeof(foxglove_msgs__msg__CameraCalibration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = foxglove_msgs__msg__CameraCalibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        foxglove_msgs__msg__CameraCalibration__fini(&data[i - 1]);
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
foxglove_msgs__msg__CameraCalibration__Sequence__fini(foxglove_msgs__msg__CameraCalibration__Sequence * array)
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
      foxglove_msgs__msg__CameraCalibration__fini(&array->data[i]);
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

foxglove_msgs__msg__CameraCalibration__Sequence *
foxglove_msgs__msg__CameraCalibration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  foxglove_msgs__msg__CameraCalibration__Sequence * array = (foxglove_msgs__msg__CameraCalibration__Sequence *)allocator.allocate(sizeof(foxglove_msgs__msg__CameraCalibration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = foxglove_msgs__msg__CameraCalibration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
foxglove_msgs__msg__CameraCalibration__Sequence__destroy(foxglove_msgs__msg__CameraCalibration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    foxglove_msgs__msg__CameraCalibration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
foxglove_msgs__msg__CameraCalibration__Sequence__are_equal(const foxglove_msgs__msg__CameraCalibration__Sequence * lhs, const foxglove_msgs__msg__CameraCalibration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!foxglove_msgs__msg__CameraCalibration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
foxglove_msgs__msg__CameraCalibration__Sequence__copy(
  const foxglove_msgs__msg__CameraCalibration__Sequence * input,
  foxglove_msgs__msg__CameraCalibration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(foxglove_msgs__msg__CameraCalibration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    foxglove_msgs__msg__CameraCalibration * data =
      (foxglove_msgs__msg__CameraCalibration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!foxglove_msgs__msg__CameraCalibration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          foxglove_msgs__msg__CameraCalibration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!foxglove_msgs__msg__CameraCalibration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
