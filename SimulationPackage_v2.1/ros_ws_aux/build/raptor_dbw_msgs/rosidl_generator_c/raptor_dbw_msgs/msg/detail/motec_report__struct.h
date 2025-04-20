// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/MotecReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__MotecReport
{
  std_msgs__msg__Header header;
  uint16_t engine_speed;
  float inlet_manifold_pressure;
  float inlet_air_temperature;
  float throttle_position;
  float fuel_pressure_sensor;
  uint8_t engine_efficiency;
  uint16_t throttle_pedal;
  float engine_load;
  float engine_oil_temperature;
  uint8_t ambient_temperature;
  uint16_t engine_oil_pressure;
  float boost_pressure;
  float boost_aim;
  float wheel_speed_front_left;
  float wheel_speed_front_right;
  float wheel_speed_rear_left;
  float wheel_speed_rear_right;
  uint16_t engine_run_time;
  uint16_t ecu_up_time;
  float ecu_battery_voltage;
  uint8_t warning_source;
  float coolant_temperature;
  bool coolant_temperature_warning;
  bool coolant_pressure_warning;
  bool engine_speed_warning;
  bool engine_oil_temperature_warning;
  bool engine_oil_pressure_warning;
  bool crankcase_pressure_warning;
  bool fuel_pressure_warning;
  float fuel_used;
  bool knock_warning;
  float engine_state;
  float fuel_pump_state;
  float launch_state;
  float boost_aim_state;
  float knock_state;
  float throttle_aim_state;
  float engine_speed_reference_state;
  float gear;
  float engine_speed_limit_state;
  float engine_run_time_total;
  float driver_switch_1;
  float driver_switch_2;
  float driver_switch_3;
  float exhaust_lambda;
  float fuel_pressure_direct_b1;
  float fuel_pressure_direct_b1_aim;
  float fuel_pressure_direct_b1_control;
  float vehicle_speed;
  float gearratio;
  float gear_100hz;
  float gear_shift;
  float gear_shift_req;
  float torque_wheels;
  float fr_wheel_speed_sensor_fault;
  float fl_wheel_speed_sensor_fault;
  float rr_wheel_speed_sensor_fault;
  float rl_wheel_speed_sensor_fault;
} raptor_dbw_msgs__msg__MotecReport;

// Struct for a sequence of raptor_dbw_msgs__msg__MotecReport.
typedef struct raptor_dbw_msgs__msg__MotecReport__Sequence
{
  raptor_dbw_msgs__msg__MotecReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__MotecReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__STRUCT_H_
