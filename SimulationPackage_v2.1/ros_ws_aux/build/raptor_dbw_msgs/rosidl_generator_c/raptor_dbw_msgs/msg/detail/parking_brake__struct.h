// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/ParkingBrake.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__PARKING_BRAKE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__PARKING_BRAKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_REQUEST'.
enum
{
  raptor_dbw_msgs__msg__ParkingBrake__NO_REQUEST = 0
};

/// Constant 'OFF'.
enum
{
  raptor_dbw_msgs__msg__ParkingBrake__OFF = 1
};

/// Constant 'ON'.
enum
{
  raptor_dbw_msgs__msg__ParkingBrake__ON = 2
};

/// Constant 'FAULT'.
enum
{
  raptor_dbw_msgs__msg__ParkingBrake__FAULT = 3
};

/// Struct defined in msg/ParkingBrake in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__ParkingBrake
{
  uint8_t status;
} raptor_dbw_msgs__msg__ParkingBrake;

// Struct for a sequence of raptor_dbw_msgs__msg__ParkingBrake.
typedef struct raptor_dbw_msgs__msg__ParkingBrake__Sequence
{
  raptor_dbw_msgs__msg__ParkingBrake * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__ParkingBrake__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__PARKING_BRAKE__STRUCT_H_
