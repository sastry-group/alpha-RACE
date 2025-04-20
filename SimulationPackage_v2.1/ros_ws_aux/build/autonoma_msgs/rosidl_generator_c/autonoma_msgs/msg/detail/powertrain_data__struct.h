// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/PowertrainData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__STRUCT_H_

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

/// Struct defined in msg/PowertrainData in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__PowertrainData
{
  std_msgs__msg__Header header;
  float map_sensor;
  float lambda_sensor;
  float fuel_level;
  float fuel_pressure;
  float engine_oil_pressure;
  float engine_oil_temperature;
  float engine_coolant_temperature;
  float engine_coolant_pressure;
  float engine_rpm;
  bool engine_on_status;
  bool engine_run_switch_status;
  float throttle_position;
  int8_t current_gear;
  int8_t gear_shift_status;
  float transmission_oil_pressure;
  float transmission_accumulator_pressure;
  float transmission_oil_temperature;
  float vehicle_speed_kmph;
  float torque_wheels_nm;
} autonoma_msgs__msg__PowertrainData;

// Struct for a sequence of autonoma_msgs__msg__PowertrainData.
typedef struct autonoma_msgs__msg__PowertrainData__Sequence
{
  autonoma_msgs__msg__PowertrainData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__PowertrainData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__POWERTRAIN_DATA__STRUCT_H_
