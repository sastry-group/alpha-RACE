// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autonoma_msgs:msg/GroundTruth.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/ground_truth__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autonoma_msgs__msg__GroundTruth__init(autonoma_msgs__msg__GroundTruth * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autonoma_msgs__msg__GroundTruth__fini(msg);
    return false;
  }
  // car_num
  // lat
  // lon
  // hgt
  // vx
  // vy
  // vz
  // yaw
  // pitch
  // roll
  // del_x
  // del_y
  // del_z
  return true;
}

void
autonoma_msgs__msg__GroundTruth__fini(autonoma_msgs__msg__GroundTruth * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // car_num
  // lat
  // lon
  // hgt
  // vx
  // vy
  // vz
  // yaw
  // pitch
  // roll
  // del_x
  // del_y
  // del_z
}

bool
autonoma_msgs__msg__GroundTruth__are_equal(const autonoma_msgs__msg__GroundTruth * lhs, const autonoma_msgs__msg__GroundTruth * rhs)
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
  // car_num
  if (lhs->car_num != rhs->car_num) {
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
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // del_x
  if (lhs->del_x != rhs->del_x) {
    return false;
  }
  // del_y
  if (lhs->del_y != rhs->del_y) {
    return false;
  }
  // del_z
  if (lhs->del_z != rhs->del_z) {
    return false;
  }
  return true;
}

bool
autonoma_msgs__msg__GroundTruth__copy(
  const autonoma_msgs__msg__GroundTruth * input,
  autonoma_msgs__msg__GroundTruth * output)
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
  // car_num
  output->car_num = input->car_num;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // hgt
  output->hgt = input->hgt;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // del_x
  output->del_x = input->del_x;
  // del_y
  output->del_y = input->del_y;
  // del_z
  output->del_z = input->del_z;
  return true;
}

autonoma_msgs__msg__GroundTruth *
autonoma_msgs__msg__GroundTruth__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__GroundTruth * msg = (autonoma_msgs__msg__GroundTruth *)allocator.allocate(sizeof(autonoma_msgs__msg__GroundTruth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autonoma_msgs__msg__GroundTruth));
  bool success = autonoma_msgs__msg__GroundTruth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autonoma_msgs__msg__GroundTruth__destroy(autonoma_msgs__msg__GroundTruth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autonoma_msgs__msg__GroundTruth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autonoma_msgs__msg__GroundTruth__Sequence__init(autonoma_msgs__msg__GroundTruth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__GroundTruth * data = NULL;

  if (size) {
    data = (autonoma_msgs__msg__GroundTruth *)allocator.zero_allocate(size, sizeof(autonoma_msgs__msg__GroundTruth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autonoma_msgs__msg__GroundTruth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autonoma_msgs__msg__GroundTruth__fini(&data[i - 1]);
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
autonoma_msgs__msg__GroundTruth__Sequence__fini(autonoma_msgs__msg__GroundTruth__Sequence * array)
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
      autonoma_msgs__msg__GroundTruth__fini(&array->data[i]);
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

autonoma_msgs__msg__GroundTruth__Sequence *
autonoma_msgs__msg__GroundTruth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__GroundTruth__Sequence * array = (autonoma_msgs__msg__GroundTruth__Sequence *)allocator.allocate(sizeof(autonoma_msgs__msg__GroundTruth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autonoma_msgs__msg__GroundTruth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autonoma_msgs__msg__GroundTruth__Sequence__destroy(autonoma_msgs__msg__GroundTruth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autonoma_msgs__msg__GroundTruth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autonoma_msgs__msg__GroundTruth__Sequence__are_equal(const autonoma_msgs__msg__GroundTruth__Sequence * lhs, const autonoma_msgs__msg__GroundTruth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autonoma_msgs__msg__GroundTruth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autonoma_msgs__msg__GroundTruth__Sequence__copy(
  const autonoma_msgs__msg__GroundTruth__Sequence * input,
  autonoma_msgs__msg__GroundTruth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autonoma_msgs__msg__GroundTruth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autonoma_msgs__msg__GroundTruth * data =
      (autonoma_msgs__msg__GroundTruth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autonoma_msgs__msg__GroundTruth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autonoma_msgs__msg__GroundTruth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autonoma_msgs__msg__GroundTruth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
