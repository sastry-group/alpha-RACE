// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/motec_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
raptor_dbw_msgs__msg__MotecReport__init(raptor_dbw_msgs__msg__MotecReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    raptor_dbw_msgs__msg__MotecReport__fini(msg);
    return false;
  }
  // engine_speed
  // inlet_manifold_pressure
  // inlet_air_temperature
  // throttle_position
  // fuel_pressure_sensor
  // engine_efficiency
  // throttle_pedal
  // engine_load
  // engine_oil_temperature
  // ambient_temperature
  // engine_oil_pressure
  // boost_pressure
  // boost_aim
  // wheel_speed_front_left
  // wheel_speed_front_right
  // wheel_speed_rear_left
  // wheel_speed_rear_right
  // engine_run_time
  // ecu_up_time
  // ecu_battery_voltage
  // warning_source
  // coolant_temperature
  // coolant_temperature_warning
  // coolant_pressure_warning
  // engine_speed_warning
  // engine_oil_temperature_warning
  // engine_oil_pressure_warning
  // crankcase_pressure_warning
  // fuel_pressure_warning
  // fuel_used
  // knock_warning
  // engine_state
  // fuel_pump_state
  // launch_state
  // boost_aim_state
  // knock_state
  // throttle_aim_state
  // engine_speed_reference_state
  // gear
  // engine_speed_limit_state
  // engine_run_time_total
  // driver_switch_1
  // driver_switch_2
  // driver_switch_3
  // exhaust_lambda
  // fuel_pressure_direct_b1
  // fuel_pressure_direct_b1_aim
  // fuel_pressure_direct_b1_control
  // vehicle_speed
  // gearratio
  // gear_100hz
  // gear_shift
  // gear_shift_req
  // torque_wheels
  // fr_wheel_speed_sensor_fault
  // fl_wheel_speed_sensor_fault
  // rr_wheel_speed_sensor_fault
  // rl_wheel_speed_sensor_fault
  return true;
}

void
raptor_dbw_msgs__msg__MotecReport__fini(raptor_dbw_msgs__msg__MotecReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // engine_speed
  // inlet_manifold_pressure
  // inlet_air_temperature
  // throttle_position
  // fuel_pressure_sensor
  // engine_efficiency
  // throttle_pedal
  // engine_load
  // engine_oil_temperature
  // ambient_temperature
  // engine_oil_pressure
  // boost_pressure
  // boost_aim
  // wheel_speed_front_left
  // wheel_speed_front_right
  // wheel_speed_rear_left
  // wheel_speed_rear_right
  // engine_run_time
  // ecu_up_time
  // ecu_battery_voltage
  // warning_source
  // coolant_temperature
  // coolant_temperature_warning
  // coolant_pressure_warning
  // engine_speed_warning
  // engine_oil_temperature_warning
  // engine_oil_pressure_warning
  // crankcase_pressure_warning
  // fuel_pressure_warning
  // fuel_used
  // knock_warning
  // engine_state
  // fuel_pump_state
  // launch_state
  // boost_aim_state
  // knock_state
  // throttle_aim_state
  // engine_speed_reference_state
  // gear
  // engine_speed_limit_state
  // engine_run_time_total
  // driver_switch_1
  // driver_switch_2
  // driver_switch_3
  // exhaust_lambda
  // fuel_pressure_direct_b1
  // fuel_pressure_direct_b1_aim
  // fuel_pressure_direct_b1_control
  // vehicle_speed
  // gearratio
  // gear_100hz
  // gear_shift
  // gear_shift_req
  // torque_wheels
  // fr_wheel_speed_sensor_fault
  // fl_wheel_speed_sensor_fault
  // rr_wheel_speed_sensor_fault
  // rl_wheel_speed_sensor_fault
}

bool
raptor_dbw_msgs__msg__MotecReport__are_equal(const raptor_dbw_msgs__msg__MotecReport * lhs, const raptor_dbw_msgs__msg__MotecReport * rhs)
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
  // engine_speed
  if (lhs->engine_speed != rhs->engine_speed) {
    return false;
  }
  // inlet_manifold_pressure
  if (lhs->inlet_manifold_pressure != rhs->inlet_manifold_pressure) {
    return false;
  }
  // inlet_air_temperature
  if (lhs->inlet_air_temperature != rhs->inlet_air_temperature) {
    return false;
  }
  // throttle_position
  if (lhs->throttle_position != rhs->throttle_position) {
    return false;
  }
  // fuel_pressure_sensor
  if (lhs->fuel_pressure_sensor != rhs->fuel_pressure_sensor) {
    return false;
  }
  // engine_efficiency
  if (lhs->engine_efficiency != rhs->engine_efficiency) {
    return false;
  }
  // throttle_pedal
  if (lhs->throttle_pedal != rhs->throttle_pedal) {
    return false;
  }
  // engine_load
  if (lhs->engine_load != rhs->engine_load) {
    return false;
  }
  // engine_oil_temperature
  if (lhs->engine_oil_temperature != rhs->engine_oil_temperature) {
    return false;
  }
  // ambient_temperature
  if (lhs->ambient_temperature != rhs->ambient_temperature) {
    return false;
  }
  // engine_oil_pressure
  if (lhs->engine_oil_pressure != rhs->engine_oil_pressure) {
    return false;
  }
  // boost_pressure
  if (lhs->boost_pressure != rhs->boost_pressure) {
    return false;
  }
  // boost_aim
  if (lhs->boost_aim != rhs->boost_aim) {
    return false;
  }
  // wheel_speed_front_left
  if (lhs->wheel_speed_front_left != rhs->wheel_speed_front_left) {
    return false;
  }
  // wheel_speed_front_right
  if (lhs->wheel_speed_front_right != rhs->wheel_speed_front_right) {
    return false;
  }
  // wheel_speed_rear_left
  if (lhs->wheel_speed_rear_left != rhs->wheel_speed_rear_left) {
    return false;
  }
  // wheel_speed_rear_right
  if (lhs->wheel_speed_rear_right != rhs->wheel_speed_rear_right) {
    return false;
  }
  // engine_run_time
  if (lhs->engine_run_time != rhs->engine_run_time) {
    return false;
  }
  // ecu_up_time
  if (lhs->ecu_up_time != rhs->ecu_up_time) {
    return false;
  }
  // ecu_battery_voltage
  if (lhs->ecu_battery_voltage != rhs->ecu_battery_voltage) {
    return false;
  }
  // warning_source
  if (lhs->warning_source != rhs->warning_source) {
    return false;
  }
  // coolant_temperature
  if (lhs->coolant_temperature != rhs->coolant_temperature) {
    return false;
  }
  // coolant_temperature_warning
  if (lhs->coolant_temperature_warning != rhs->coolant_temperature_warning) {
    return false;
  }
  // coolant_pressure_warning
  if (lhs->coolant_pressure_warning != rhs->coolant_pressure_warning) {
    return false;
  }
  // engine_speed_warning
  if (lhs->engine_speed_warning != rhs->engine_speed_warning) {
    return false;
  }
  // engine_oil_temperature_warning
  if (lhs->engine_oil_temperature_warning != rhs->engine_oil_temperature_warning) {
    return false;
  }
  // engine_oil_pressure_warning
  if (lhs->engine_oil_pressure_warning != rhs->engine_oil_pressure_warning) {
    return false;
  }
  // crankcase_pressure_warning
  if (lhs->crankcase_pressure_warning != rhs->crankcase_pressure_warning) {
    return false;
  }
  // fuel_pressure_warning
  if (lhs->fuel_pressure_warning != rhs->fuel_pressure_warning) {
    return false;
  }
  // fuel_used
  if (lhs->fuel_used != rhs->fuel_used) {
    return false;
  }
  // knock_warning
  if (lhs->knock_warning != rhs->knock_warning) {
    return false;
  }
  // engine_state
  if (lhs->engine_state != rhs->engine_state) {
    return false;
  }
  // fuel_pump_state
  if (lhs->fuel_pump_state != rhs->fuel_pump_state) {
    return false;
  }
  // launch_state
  if (lhs->launch_state != rhs->launch_state) {
    return false;
  }
  // boost_aim_state
  if (lhs->boost_aim_state != rhs->boost_aim_state) {
    return false;
  }
  // knock_state
  if (lhs->knock_state != rhs->knock_state) {
    return false;
  }
  // throttle_aim_state
  if (lhs->throttle_aim_state != rhs->throttle_aim_state) {
    return false;
  }
  // engine_speed_reference_state
  if (lhs->engine_speed_reference_state != rhs->engine_speed_reference_state) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // engine_speed_limit_state
  if (lhs->engine_speed_limit_state != rhs->engine_speed_limit_state) {
    return false;
  }
  // engine_run_time_total
  if (lhs->engine_run_time_total != rhs->engine_run_time_total) {
    return false;
  }
  // driver_switch_1
  if (lhs->driver_switch_1 != rhs->driver_switch_1) {
    return false;
  }
  // driver_switch_2
  if (lhs->driver_switch_2 != rhs->driver_switch_2) {
    return false;
  }
  // driver_switch_3
  if (lhs->driver_switch_3 != rhs->driver_switch_3) {
    return false;
  }
  // exhaust_lambda
  if (lhs->exhaust_lambda != rhs->exhaust_lambda) {
    return false;
  }
  // fuel_pressure_direct_b1
  if (lhs->fuel_pressure_direct_b1 != rhs->fuel_pressure_direct_b1) {
    return false;
  }
  // fuel_pressure_direct_b1_aim
  if (lhs->fuel_pressure_direct_b1_aim != rhs->fuel_pressure_direct_b1_aim) {
    return false;
  }
  // fuel_pressure_direct_b1_control
  if (lhs->fuel_pressure_direct_b1_control != rhs->fuel_pressure_direct_b1_control) {
    return false;
  }
  // vehicle_speed
  if (lhs->vehicle_speed != rhs->vehicle_speed) {
    return false;
  }
  // gearratio
  if (lhs->gearratio != rhs->gearratio) {
    return false;
  }
  // gear_100hz
  if (lhs->gear_100hz != rhs->gear_100hz) {
    return false;
  }
  // gear_shift
  if (lhs->gear_shift != rhs->gear_shift) {
    return false;
  }
  // gear_shift_req
  if (lhs->gear_shift_req != rhs->gear_shift_req) {
    return false;
  }
  // torque_wheels
  if (lhs->torque_wheels != rhs->torque_wheels) {
    return false;
  }
  // fr_wheel_speed_sensor_fault
  if (lhs->fr_wheel_speed_sensor_fault != rhs->fr_wheel_speed_sensor_fault) {
    return false;
  }
  // fl_wheel_speed_sensor_fault
  if (lhs->fl_wheel_speed_sensor_fault != rhs->fl_wheel_speed_sensor_fault) {
    return false;
  }
  // rr_wheel_speed_sensor_fault
  if (lhs->rr_wheel_speed_sensor_fault != rhs->rr_wheel_speed_sensor_fault) {
    return false;
  }
  // rl_wheel_speed_sensor_fault
  if (lhs->rl_wheel_speed_sensor_fault != rhs->rl_wheel_speed_sensor_fault) {
    return false;
  }
  return true;
}

bool
raptor_dbw_msgs__msg__MotecReport__copy(
  const raptor_dbw_msgs__msg__MotecReport * input,
  raptor_dbw_msgs__msg__MotecReport * output)
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
  // engine_speed
  output->engine_speed = input->engine_speed;
  // inlet_manifold_pressure
  output->inlet_manifold_pressure = input->inlet_manifold_pressure;
  // inlet_air_temperature
  output->inlet_air_temperature = input->inlet_air_temperature;
  // throttle_position
  output->throttle_position = input->throttle_position;
  // fuel_pressure_sensor
  output->fuel_pressure_sensor = input->fuel_pressure_sensor;
  // engine_efficiency
  output->engine_efficiency = input->engine_efficiency;
  // throttle_pedal
  output->throttle_pedal = input->throttle_pedal;
  // engine_load
  output->engine_load = input->engine_load;
  // engine_oil_temperature
  output->engine_oil_temperature = input->engine_oil_temperature;
  // ambient_temperature
  output->ambient_temperature = input->ambient_temperature;
  // engine_oil_pressure
  output->engine_oil_pressure = input->engine_oil_pressure;
  // boost_pressure
  output->boost_pressure = input->boost_pressure;
  // boost_aim
  output->boost_aim = input->boost_aim;
  // wheel_speed_front_left
  output->wheel_speed_front_left = input->wheel_speed_front_left;
  // wheel_speed_front_right
  output->wheel_speed_front_right = input->wheel_speed_front_right;
  // wheel_speed_rear_left
  output->wheel_speed_rear_left = input->wheel_speed_rear_left;
  // wheel_speed_rear_right
  output->wheel_speed_rear_right = input->wheel_speed_rear_right;
  // engine_run_time
  output->engine_run_time = input->engine_run_time;
  // ecu_up_time
  output->ecu_up_time = input->ecu_up_time;
  // ecu_battery_voltage
  output->ecu_battery_voltage = input->ecu_battery_voltage;
  // warning_source
  output->warning_source = input->warning_source;
  // coolant_temperature
  output->coolant_temperature = input->coolant_temperature;
  // coolant_temperature_warning
  output->coolant_temperature_warning = input->coolant_temperature_warning;
  // coolant_pressure_warning
  output->coolant_pressure_warning = input->coolant_pressure_warning;
  // engine_speed_warning
  output->engine_speed_warning = input->engine_speed_warning;
  // engine_oil_temperature_warning
  output->engine_oil_temperature_warning = input->engine_oil_temperature_warning;
  // engine_oil_pressure_warning
  output->engine_oil_pressure_warning = input->engine_oil_pressure_warning;
  // crankcase_pressure_warning
  output->crankcase_pressure_warning = input->crankcase_pressure_warning;
  // fuel_pressure_warning
  output->fuel_pressure_warning = input->fuel_pressure_warning;
  // fuel_used
  output->fuel_used = input->fuel_used;
  // knock_warning
  output->knock_warning = input->knock_warning;
  // engine_state
  output->engine_state = input->engine_state;
  // fuel_pump_state
  output->fuel_pump_state = input->fuel_pump_state;
  // launch_state
  output->launch_state = input->launch_state;
  // boost_aim_state
  output->boost_aim_state = input->boost_aim_state;
  // knock_state
  output->knock_state = input->knock_state;
  // throttle_aim_state
  output->throttle_aim_state = input->throttle_aim_state;
  // engine_speed_reference_state
  output->engine_speed_reference_state = input->engine_speed_reference_state;
  // gear
  output->gear = input->gear;
  // engine_speed_limit_state
  output->engine_speed_limit_state = input->engine_speed_limit_state;
  // engine_run_time_total
  output->engine_run_time_total = input->engine_run_time_total;
  // driver_switch_1
  output->driver_switch_1 = input->driver_switch_1;
  // driver_switch_2
  output->driver_switch_2 = input->driver_switch_2;
  // driver_switch_3
  output->driver_switch_3 = input->driver_switch_3;
  // exhaust_lambda
  output->exhaust_lambda = input->exhaust_lambda;
  // fuel_pressure_direct_b1
  output->fuel_pressure_direct_b1 = input->fuel_pressure_direct_b1;
  // fuel_pressure_direct_b1_aim
  output->fuel_pressure_direct_b1_aim = input->fuel_pressure_direct_b1_aim;
  // fuel_pressure_direct_b1_control
  output->fuel_pressure_direct_b1_control = input->fuel_pressure_direct_b1_control;
  // vehicle_speed
  output->vehicle_speed = input->vehicle_speed;
  // gearratio
  output->gearratio = input->gearratio;
  // gear_100hz
  output->gear_100hz = input->gear_100hz;
  // gear_shift
  output->gear_shift = input->gear_shift;
  // gear_shift_req
  output->gear_shift_req = input->gear_shift_req;
  // torque_wheels
  output->torque_wheels = input->torque_wheels;
  // fr_wheel_speed_sensor_fault
  output->fr_wheel_speed_sensor_fault = input->fr_wheel_speed_sensor_fault;
  // fl_wheel_speed_sensor_fault
  output->fl_wheel_speed_sensor_fault = input->fl_wheel_speed_sensor_fault;
  // rr_wheel_speed_sensor_fault
  output->rr_wheel_speed_sensor_fault = input->rr_wheel_speed_sensor_fault;
  // rl_wheel_speed_sensor_fault
  output->rl_wheel_speed_sensor_fault = input->rl_wheel_speed_sensor_fault;
  return true;
}

raptor_dbw_msgs__msg__MotecReport *
raptor_dbw_msgs__msg__MotecReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MotecReport * msg = (raptor_dbw_msgs__msg__MotecReport *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__MotecReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(raptor_dbw_msgs__msg__MotecReport));
  bool success = raptor_dbw_msgs__msg__MotecReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
raptor_dbw_msgs__msg__MotecReport__destroy(raptor_dbw_msgs__msg__MotecReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    raptor_dbw_msgs__msg__MotecReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
raptor_dbw_msgs__msg__MotecReport__Sequence__init(raptor_dbw_msgs__msg__MotecReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MotecReport * data = NULL;

  if (size) {
    data = (raptor_dbw_msgs__msg__MotecReport *)allocator.zero_allocate(size, sizeof(raptor_dbw_msgs__msg__MotecReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = raptor_dbw_msgs__msg__MotecReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        raptor_dbw_msgs__msg__MotecReport__fini(&data[i - 1]);
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
raptor_dbw_msgs__msg__MotecReport__Sequence__fini(raptor_dbw_msgs__msg__MotecReport__Sequence * array)
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
      raptor_dbw_msgs__msg__MotecReport__fini(&array->data[i]);
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

raptor_dbw_msgs__msg__MotecReport__Sequence *
raptor_dbw_msgs__msg__MotecReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  raptor_dbw_msgs__msg__MotecReport__Sequence * array = (raptor_dbw_msgs__msg__MotecReport__Sequence *)allocator.allocate(sizeof(raptor_dbw_msgs__msg__MotecReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = raptor_dbw_msgs__msg__MotecReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
raptor_dbw_msgs__msg__MotecReport__Sequence__destroy(raptor_dbw_msgs__msg__MotecReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    raptor_dbw_msgs__msg__MotecReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
raptor_dbw_msgs__msg__MotecReport__Sequence__are_equal(const raptor_dbw_msgs__msg__MotecReport__Sequence * lhs, const raptor_dbw_msgs__msg__MotecReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!raptor_dbw_msgs__msg__MotecReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
raptor_dbw_msgs__msg__MotecReport__Sequence__copy(
  const raptor_dbw_msgs__msg__MotecReport__Sequence * input,
  raptor_dbw_msgs__msg__MotecReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(raptor_dbw_msgs__msg__MotecReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    raptor_dbw_msgs__msg__MotecReport * data =
      (raptor_dbw_msgs__msg__MotecReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!raptor_dbw_msgs__msg__MotecReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          raptor_dbw_msgs__msg__MotecReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!raptor_dbw_msgs__msg__MotecReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
