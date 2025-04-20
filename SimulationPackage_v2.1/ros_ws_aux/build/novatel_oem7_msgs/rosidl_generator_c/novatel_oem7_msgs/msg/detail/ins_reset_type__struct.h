// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSResetType.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INITIALIZED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INITIALIZED = 0
};

/// Constant 'INS_TIMING_ERROR'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INS_TIMING_ERROR = 1
};

/// Constant 'INVALID_SOLUTION'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INVALID_SOLUTION = 2
};

/// Constant 'INS_ORIENT_CHANGED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INS_ORIENT_CHANGED = 3
};

/// Constant 'INS_USER_COMMAND'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INS_USER_COMMAND = 4
};

/// Constant 'INS_CALIBRATION'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INS_CALIBRATION = 5
};

/// Constant 'INIT_ATTITUDE_RECEIVED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INIT_ATTITUDE_RECEIVED = 6
};

/// Constant 'ALIGNMENT_MODE_CHANGED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__ALIGNMENT_MODE_CHANGED = 8
};

/// Constant 'EXPT_RESTRICTS_EXCEEDED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__EXPT_RESTRICTS_EXCEEDED = 9
};

/// Constant 'DATA_GAP'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__DATA_GAP = 10
};

/// Constant 'RECEIVED_IMU_SPECS'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__RECEIVED_IMU_SPECS = 11
};

/// Constant 'ACCEL_RESTRICTIONS_EXCEEDED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__ACCEL_RESTRICTIONS_EXCEEDED = 12
};

/// Constant 'ROTATION_RESTRICTIONS_EXCEEDED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__ROTATION_RESTRICTIONS_EXCEEDED = 13
};

/// Constant 'RAWIMU_STATUS_INVALID'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__RAWIMU_STATUS_INVALID = 14
};

/// Constant 'IMU_CONFIGURED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__IMU_CONFIGURED = 15
};

/// Constant 'IMU_UNUSPPORTED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__IMU_UNUSPPORTED = 16
};

/// Constant 'INS_SEED_INVALID'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INS_SEED_INVALID = 17
};

/// Constant 'INS_SEED_VALIDATION_FAILED'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__INS_SEED_VALIDATION_FAILED = 18
};

/// Constant 'USER_COMMAND_RESTART'.
enum
{
  novatel_oem7_msgs__msg__INSResetType__USER_COMMAND_RESTART = 19
};

/// Struct defined in msg/INSResetType in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSResetType
{
  uint8_t type;
} novatel_oem7_msgs__msg__INSResetType;

// Struct for a sequence of novatel_oem7_msgs__msg__INSResetType.
typedef struct novatel_oem7_msgs__msg__INSResetType__Sequence
{
  novatel_oem7_msgs__msg__INSResetType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSResetType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RESET_TYPE__STRUCT_H_
