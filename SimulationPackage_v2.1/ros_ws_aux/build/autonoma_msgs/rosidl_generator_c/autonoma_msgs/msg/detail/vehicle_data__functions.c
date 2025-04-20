// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/vehicle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
autonoma_msgs__msg__VehicleData__init(autonoma_msgs__msg__VehicleData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autonoma_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  // fl_tire_temperature
  // fl_damper_linear_potentiometer
  // fl_tire_pressure
  // fl_tire_pressure_gauge
  // fl_wheel_load
  // fr_tire_temperature
  // fr_damper_linear_potentiometer
  // fr_tire_pressure
  // fr_tire_pressure_gauge
  // fr_wheel_load
  // rl_tire_temperature
  // rl_damper_linear_potentiometer
  // rl_tire_pressure
  // rl_tire_pressure_gauge
  // rl_wheel_load
  // rr_tire_temperature
  // rr_damper_linear_potentiometer
  // rr_tire_pressure
  // rr_tire_pressure_gauge
  // rr_wheel_load
  // fl_brake_temp
  // fr_brake_temp
  // rl_brake_temp
  // rr_brake_temp
  // battery_voltage
  // safety_switch_state
  // mode_switch_state
  // sys_state
  // accel_pedal_input
  // accel_pedal_output
  // front_brake_pressure
  // rear_brake_pressure
  // steering_wheel_angle
  // steering_wheel_angle_cmd
  // steering_wheel_torque
  // ws_front_left
  // ws_front_right
  // ws_rear_left
  // ws_rear_right
  return true;
}

void
autonoma_msgs__msg__VehicleData__fini(autonoma_msgs__msg__VehicleData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fl_tire_temperature
  // fl_damper_linear_potentiometer
  // fl_tire_pressure
  // fl_tire_pressure_gauge
  // fl_wheel_load
  // fr_tire_temperature
  // fr_damper_linear_potentiometer
  // fr_tire_pressure
  // fr_tire_pressure_gauge
  // fr_wheel_load
  // rl_tire_temperature
  // rl_damper_linear_potentiometer
  // rl_tire_pressure
  // rl_tire_pressure_gauge
  // rl_wheel_load
  // rr_tire_temperature
  // rr_damper_linear_potentiometer
  // rr_tire_pressure
  // rr_tire_pressure_gauge
  // rr_wheel_load
  // fl_brake_temp
  // fr_brake_temp
  // rl_brake_temp
  // rr_brake_temp
  // battery_voltage
  // safety_switch_state
  // mode_switch_state
  // sys_state
  // accel_pedal_input
  // accel_pedal_output
  // front_brake_pressure
  // rear_brake_pressure
  // steering_wheel_angle
  // steering_wheel_angle_cmd
  // steering_wheel_torque
  // ws_front_left
  // ws_front_right
  // ws_rear_left
  // ws_rear_right
}

bool
autonoma_msgs__msg__VehicleData__are_equal(const autonoma_msgs__msg__VehicleData * lhs, const autonoma_msgs__msg__VehicleData * rhs)
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
  // fl_tire_temperature
  if (lhs->fl_tire_temperature != rhs->fl_tire_temperature) {
    return false;
  }
  // fl_damper_linear_potentiometer
  if (lhs->fl_damper_linear_potentiometer != rhs->fl_damper_linear_potentiometer) {
    return false;
  }
  // fl_tire_pressure
  if (lhs->fl_tire_pressure != rhs->fl_tire_pressure) {
    return false;
  }
  // fl_tire_pressure_gauge
  if (lhs->fl_tire_pressure_gauge != rhs->fl_tire_pressure_gauge) {
    return false;
  }
  // fl_wheel_load
  if (lhs->fl_wheel_load != rhs->fl_wheel_load) {
    return false;
  }
  // fr_tire_temperature
  if (lhs->fr_tire_temperature != rhs->fr_tire_temperature) {
    return false;
  }
  // fr_damper_linear_potentiometer
  if (lhs->fr_damper_linear_potentiometer != rhs->fr_damper_linear_potentiometer) {
    return false;
  }
  // fr_tire_pressure
  if (lhs->fr_tire_pressure != rhs->fr_tire_pressure) {
    return false;
  }
  // fr_tire_pressure_gauge
  if (lhs->fr_tire_pressure_gauge != rhs->fr_tire_pressure_gauge) {
    return false;
  }
  // fr_wheel_load
  if (lhs->fr_wheel_load != rhs->fr_wheel_load) {
    return false;
  }
  // rl_tire_temperature
  if (lhs->rl_tire_temperature != rhs->rl_tire_temperature) {
    return false;
  }
  // rl_damper_linear_potentiometer
  if (lhs->rl_damper_linear_potentiometer != rhs->rl_damper_linear_potentiometer) {
    return false;
  }
  // rl_tire_pressure
  if (lhs->rl_tire_pressure != rhs->rl_tire_pressure) {
    return false;
  }
  // rl_tire_pressure_gauge
  if (lhs->rl_tire_pressure_gauge != rhs->rl_tire_pressure_gauge) {
    return false;
  }
  // rl_wheel_load
  if (lhs->rl_wheel_load != rhs->rl_wheel_load) {
    return false;
  }
  // rr_tire_temperature
  if (lhs->rr_tire_temperature != rhs->rr_tire_temperature) {
    return false;
  }
  // rr_damper_linear_potentiometer
  if (lhs->rr_damper_linear_potentiometer != rhs->rr_damper_linear_potentiometer) {
    return false;
  }
  // rr_tire_pressure
  if (lhs->rr_tire_pressure != rhs->rr_tire_pressure) {
    return false;
  }
  // rr_tire_pressure_gauge
  if (lhs->rr_tire_pressure_gauge != rhs->rr_tire_pressure_gauge) {
    return false;
  }
  // rr_wheel_load
  if (lhs->rr_wheel_load != rhs->rr_wheel_load) {
    return false;
  }
  // fl_brake_temp
  if (lhs->fl_brake_temp != rhs->fl_brake_temp) {
    return false;
  }
  // fr_brake_temp
  if (lhs->fr_brake_temp != rhs->fr_brake_temp) {
    return false;
  }
  // rl_brake_temp
  if (lhs->rl_brake_temp != rhs->rl_brake_temp) {
    return false;
  }
  // rr_brake_temp
  if (lhs->rr_brake_temp != rhs->rr_brake_temp) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // safety_switch_state
  if (lhs->safety_switch_state != rhs->safety_switch_state) {
    return false;
  }
  // mode_switch_state
  if (lhs->mode_switch_state != rhs->mode_switch_state) {
    return false;
  }
  // sys_state
  if (lhs->sys_state != rhs->sys_state) {
    return false;
  }
  // accel_pedal_input
  if (lhs->accel_pedal_input != rhs->accel_pedal_input) {
    return false;
  }
  // accel_pedal_output
  if (lhs->accel_pedal_output != rhs->accel_pedal_output) {
    return false;
  }
  // front_brake_pressure
  if (lhs->front_brake_pressure != rhs->front_brake_pressure) {
    return false;
  }
  // rear_brake_pressure
  if (lhs->rear_brake_pressure != rhs->rear_brake_pressure) {
    return false;
  }
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  // steering_wheel_angle_cmd
  if (lhs->steering_wheel_angle_cmd != rhs->steering_wheel_angle_cmd) {
    return false;
  }
  // steering_wheel_torque
  if (lhs->steering_wheel_torque != rhs->steering_wheel_torque) {
    return false;
  }
  // ws_front_left
  if (lhs->ws_front_left != rhs->ws_front_left) {
    return false;
  }
  // ws_front_right
  if (lhs->ws_front_right != rhs->ws_front_right) {
    return false;
  }
  // ws_rear_left
  if (lhs->ws_rear_left != rhs->ws_rear_left) {
    return false;
  }
  // ws_rear_right
  if (lhs->ws_rear_right != rhs->ws_rear_right) {
    return false;
  }
  return true;
}

bool
autonoma_msgs__msg__VehicleData__copy(
  const autonoma_msgs__msg__VehicleData * input,
  autonoma_msgs__msg__VehicleData * output)
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
  // fl_tire_temperature
  output->fl_tire_temperature = input->fl_tire_temperature;
  // fl_damper_linear_potentiometer
  output->fl_damper_linear_potentiometer = input->fl_damper_linear_potentiometer;
  // fl_tire_pressure
  output->fl_tire_pressure = input->fl_tire_pressure;
  // fl_tire_pressure_gauge
  output->fl_tire_pressure_gauge = input->fl_tire_pressure_gauge;
  // fl_wheel_load
  output->fl_wheel_load = input->fl_wheel_load;
  // fr_tire_temperature
  output->fr_tire_temperature = input->fr_tire_temperature;
  // fr_damper_linear_potentiometer
  output->fr_damper_linear_potentiometer = input->fr_damper_linear_potentiometer;
  // fr_tire_pressure
  output->fr_tire_pressure = input->fr_tire_pressure;
  // fr_tire_pressure_gauge
  output->fr_tire_pressure_gauge = input->fr_tire_pressure_gauge;
  // fr_wheel_load
  output->fr_wheel_load = input->fr_wheel_load;
  // rl_tire_temperature
  output->rl_tire_temperature = input->rl_tire_temperature;
  // rl_damper_linear_potentiometer
  output->rl_damper_linear_potentiometer = input->rl_damper_linear_potentiometer;
  // rl_tire_pressure
  output->rl_tire_pressure = input->rl_tire_pressure;
  // rl_tire_pressure_gauge
  output->rl_tire_pressure_gauge = input->rl_tire_pressure_gauge;
  // rl_wheel_load
  output->rl_wheel_load = input->rl_wheel_load;
  // rr_tire_temperature
  output->rr_tire_temperature = input->rr_tire_temperature;
  // rr_damper_linear_potentiometer
  output->rr_damper_linear_potentiometer = input->rr_damper_linear_potentiometer;
  // rr_tire_pressure
  output->rr_tire_pressure = input->rr_tire_pressure;
  // rr_tire_pressure_gauge
  output->rr_tire_pressure_gauge = input->rr_tire_pressure_gauge;
  // rr_wheel_load
  output->rr_wheel_load = input->rr_wheel_load;
  // fl_brake_temp
  output->fl_brake_temp = input->fl_brake_temp;
  // fr_brake_temp
  output->fr_brake_temp = input->fr_brake_temp;
  // rl_brake_temp
  output->rl_brake_temp = input->rl_brake_temp;
  // rr_brake_temp
  output->rr_brake_temp = input->rr_brake_temp;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // safety_switch_state
  output->safety_switch_state = input->safety_switch_state;
  // mode_switch_state
  output->mode_switch_state = input->mode_switch_state;
  // sys_state
  output->sys_state = input->sys_state;
  // accel_pedal_input
  output->accel_pedal_input = input->accel_pedal_input;
  // accel_pedal_output
  output->accel_pedal_output = input->accel_pedal_output;
  // front_brake_pressure
  output->front_brake_pressure = input->front_brake_pressure;
  // rear_brake_pressure
  output->rear_brake_pressure = input->rear_brake_pressure;
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  // steering_wheel_angle_cmd
  output->steering_wheel_angle_cmd = input->steering_wheel_angle_cmd;
  // steering_wheel_torque
  output->steering_wheel_torque = input->steering_wheel_torque;
  // ws_front_left
  output->ws_front_left = input->ws_front_left;
  // ws_front_right
  output->ws_front_right = input->ws_front_right;
  // ws_rear_left
  output->ws_rear_left = input->ws_rear_left;
  // ws_rear_right
  output->ws_rear_right = input->ws_rear_right;
  return true;
}

autonoma_msgs__msg__VehicleData *
autonoma_msgs__msg__VehicleData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__VehicleData * msg = (autonoma_msgs__msg__VehicleData *)allocator.allocate(sizeof(autonoma_msgs__msg__VehicleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autonoma_msgs__msg__VehicleData));
  bool success = autonoma_msgs__msg__VehicleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autonoma_msgs__msg__VehicleData__destroy(autonoma_msgs__msg__VehicleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autonoma_msgs__msg__VehicleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autonoma_msgs__msg__VehicleData__Sequence__init(autonoma_msgs__msg__VehicleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__VehicleData * data = NULL;

  if (size) {
    data = (autonoma_msgs__msg__VehicleData *)allocator.zero_allocate(size, sizeof(autonoma_msgs__msg__VehicleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autonoma_msgs__msg__VehicleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autonoma_msgs__msg__VehicleData__fini(&data[i - 1]);
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
autonoma_msgs__msg__VehicleData__Sequence__fini(autonoma_msgs__msg__VehicleData__Sequence * array)
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
      autonoma_msgs__msg__VehicleData__fini(&array->data[i]);
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

autonoma_msgs__msg__VehicleData__Sequence *
autonoma_msgs__msg__VehicleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autonoma_msgs__msg__VehicleData__Sequence * array = (autonoma_msgs__msg__VehicleData__Sequence *)allocator.allocate(sizeof(autonoma_msgs__msg__VehicleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autonoma_msgs__msg__VehicleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autonoma_msgs__msg__VehicleData__Sequence__destroy(autonoma_msgs__msg__VehicleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autonoma_msgs__msg__VehicleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autonoma_msgs__msg__VehicleData__Sequence__are_equal(const autonoma_msgs__msg__VehicleData__Sequence * lhs, const autonoma_msgs__msg__VehicleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autonoma_msgs__msg__VehicleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autonoma_msgs__msg__VehicleData__Sequence__copy(
  const autonoma_msgs__msg__VehicleData__Sequence * input,
  autonoma_msgs__msg__VehicleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autonoma_msgs__msg__VehicleData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autonoma_msgs__msg__VehicleData * data =
      (autonoma_msgs__msg__VehicleData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autonoma_msgs__msg__VehicleData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autonoma_msgs__msg__VehicleData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autonoma_msgs__msg__VehicleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
