// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from novatel_oem7_msgs:msg/CORRIMU.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/corrimu__functions.h"

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

bool
novatel_oem7_msgs__msg__CORRIMU__init(novatel_oem7_msgs__msg__CORRIMU * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    novatel_oem7_msgs__msg__CORRIMU__fini(msg);
    return false;
  }
  // nov_header
  if (!novatel_oem7_msgs__msg__Oem7Header__init(&msg->nov_header)) {
    novatel_oem7_msgs__msg__CORRIMU__fini(msg);
    return false;
  }
  // imu_data_count
  // pitch_rate
  // roll_rate
  // yaw_rate
  // lateral_acc
  // longitudinal_acc
  // vertical_acc
  // reserved1
  // reserved2
  return true;
}

void
novatel_oem7_msgs__msg__CORRIMU__fini(novatel_oem7_msgs__msg__CORRIMU * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nov_header
  novatel_oem7_msgs__msg__Oem7Header__fini(&msg->nov_header);
  // imu_data_count
  // pitch_rate
  // roll_rate
  // yaw_rate
  // lateral_acc
  // longitudinal_acc
  // vertical_acc
  // reserved1
  // reserved2
}

bool
novatel_oem7_msgs__msg__CORRIMU__are_equal(const novatel_oem7_msgs__msg__CORRIMU * lhs, const novatel_oem7_msgs__msg__CORRIMU * rhs)
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
  // imu_data_count
  if (lhs->imu_data_count != rhs->imu_data_count) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // roll_rate
  if (lhs->roll_rate != rhs->roll_rate) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // lateral_acc
  if (lhs->lateral_acc != rhs->lateral_acc) {
    return false;
  }
  // longitudinal_acc
  if (lhs->longitudinal_acc != rhs->longitudinal_acc) {
    return false;
  }
  // vertical_acc
  if (lhs->vertical_acc != rhs->vertical_acc) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // reserved2
  if (lhs->reserved2 != rhs->reserved2) {
    return false;
  }
  return true;
}

bool
novatel_oem7_msgs__msg__CORRIMU__copy(
  const novatel_oem7_msgs__msg__CORRIMU * input,
  novatel_oem7_msgs__msg__CORRIMU * output)
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
  // imu_data_count
  output->imu_data_count = input->imu_data_count;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // roll_rate
  output->roll_rate = input->roll_rate;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // lateral_acc
  output->lateral_acc = input->lateral_acc;
  // longitudinal_acc
  output->longitudinal_acc = input->longitudinal_acc;
  // vertical_acc
  output->vertical_acc = input->vertical_acc;
  // reserved1
  output->reserved1 = input->reserved1;
  // reserved2
  output->reserved2 = input->reserved2;
  return true;
}

novatel_oem7_msgs__msg__CORRIMU *
novatel_oem7_msgs__msg__CORRIMU__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__CORRIMU * msg = (novatel_oem7_msgs__msg__CORRIMU *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__CORRIMU), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(novatel_oem7_msgs__msg__CORRIMU));
  bool success = novatel_oem7_msgs__msg__CORRIMU__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
novatel_oem7_msgs__msg__CORRIMU__destroy(novatel_oem7_msgs__msg__CORRIMU * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    novatel_oem7_msgs__msg__CORRIMU__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
novatel_oem7_msgs__msg__CORRIMU__Sequence__init(novatel_oem7_msgs__msg__CORRIMU__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__CORRIMU * data = NULL;

  if (size) {
    data = (novatel_oem7_msgs__msg__CORRIMU *)allocator.zero_allocate(size, sizeof(novatel_oem7_msgs__msg__CORRIMU), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = novatel_oem7_msgs__msg__CORRIMU__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        novatel_oem7_msgs__msg__CORRIMU__fini(&data[i - 1]);
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
novatel_oem7_msgs__msg__CORRIMU__Sequence__fini(novatel_oem7_msgs__msg__CORRIMU__Sequence * array)
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
      novatel_oem7_msgs__msg__CORRIMU__fini(&array->data[i]);
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

novatel_oem7_msgs__msg__CORRIMU__Sequence *
novatel_oem7_msgs__msg__CORRIMU__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  novatel_oem7_msgs__msg__CORRIMU__Sequence * array = (novatel_oem7_msgs__msg__CORRIMU__Sequence *)allocator.allocate(sizeof(novatel_oem7_msgs__msg__CORRIMU__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = novatel_oem7_msgs__msg__CORRIMU__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
novatel_oem7_msgs__msg__CORRIMU__Sequence__destroy(novatel_oem7_msgs__msg__CORRIMU__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    novatel_oem7_msgs__msg__CORRIMU__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
novatel_oem7_msgs__msg__CORRIMU__Sequence__are_equal(const novatel_oem7_msgs__msg__CORRIMU__Sequence * lhs, const novatel_oem7_msgs__msg__CORRIMU__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!novatel_oem7_msgs__msg__CORRIMU__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
novatel_oem7_msgs__msg__CORRIMU__Sequence__copy(
  const novatel_oem7_msgs__msg__CORRIMU__Sequence * input,
  novatel_oem7_msgs__msg__CORRIMU__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(novatel_oem7_msgs__msg__CORRIMU);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    novatel_oem7_msgs__msg__CORRIMU * data =
      (novatel_oem7_msgs__msg__CORRIMU *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!novatel_oem7_msgs__msg__CORRIMU__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          novatel_oem7_msgs__msg__CORRIMU__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!novatel_oem7_msgs__msg__CORRIMU__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
