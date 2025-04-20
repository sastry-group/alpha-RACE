// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_

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

/// Struct defined in msg/VehicleData in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__VehicleData
{
  std_msgs__msg__Header header;
  /// Tire data
  /// [deg C]
  float fl_tire_temperature;
  float fl_damper_linear_potentiometer;
  float fl_tire_pressure;
  float fl_tire_pressure_gauge;
  float fl_wheel_load;
  float fr_tire_temperature;
  float fr_damper_linear_potentiometer;
  float fr_tire_pressure;
  float fr_tire_pressure_gauge;
  float fr_wheel_load;
  float rl_tire_temperature;
  float rl_damper_linear_potentiometer;
  float rl_tire_pressure;
  float rl_tire_pressure_gauge;
  float rl_wheel_load;
  float rr_tire_temperature;
  float rr_damper_linear_potentiometer;
  float rr_tire_pressure;
  float rr_tire_pressure_gauge;
  float rr_wheel_load;
  /// Brake temps
  /// [deg C]
  float fl_brake_temp;
  float fr_brake_temp;
  float rl_brake_temp;
  float rr_brake_temp;
  /// Misc data
  float battery_voltage;
  uint8_t safety_switch_state;
  bool mode_switch_state;
  uint8_t sys_state;
  /// Accel pedal report
  /// [%] 0 to 100%
  float accel_pedal_input;
  /// 0 to 100%
  float accel_pedal_output;
  /// Brake report
  /// [kPa]
  float front_brake_pressure;
  float rear_brake_pressure;
  /// Steering Report
  /// [deg] motor angle
  float steering_wheel_angle;
  /// motor angle
  float steering_wheel_angle_cmd;
  /// 0 to 100%
  float steering_wheel_torque;
  /// Wheel speeds (kph)
  /// [km/h]
  float ws_front_left;
  float ws_front_right;
  float ws_rear_left;
  float ws_rear_right;
} autonoma_msgs__msg__VehicleData;

// Struct for a sequence of autonoma_msgs__msg__VehicleData.
typedef struct autonoma_msgs__msg__VehicleData__Sequence
{
  autonoma_msgs__msg__VehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__VehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
