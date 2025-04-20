// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/InertialSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INERTIAL_SOLUTION_STATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INERTIAL_SOLUTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INS_INACTIVE'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INS_INACTIVE = 0ul
};

/// Constant 'INS_ALIGNING'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INS_ALIGNING = 1ul
};

/// Constant 'INS_HIGH_VARIANCE'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INS_HIGH_VARIANCE = 2ul
};

/// Constant 'INS_SOLUTION_GOOD'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INS_SOLUTION_GOOD = 3ul
};

/// Constant 'INS_SOLUTION_FREE'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INS_SOLUTION_FREE = 6ul
};

/// Constant 'INS_ALIGNMENT_COMPLETE'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INS_ALIGNMENT_COMPLETE = 7ul
};

/// Constant 'DETERMINING_ORIENTATION'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__DETERMINING_ORIENTATION = 8ul
};

/// Constant 'WAITING_INITIAL_POS'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__WAITING_INITIAL_POS = 9ul
};

/// Constant 'WAITING_AZIMUTH'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__WAITING_AZIMUTH = 10ul
};

/// Constant 'INITIALIZING_BIASES'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__INITIALIZING_BIASES = 11ul
};

/// Constant 'MOTION_DETECT'.
enum
{
  novatel_oem7_msgs__msg__InertialSolutionStatus__MOTION_DETECT = 12ul
};

/// Struct defined in msg/InertialSolutionStatus in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__InertialSolutionStatus
{
  uint32_t status;
} novatel_oem7_msgs__msg__InertialSolutionStatus;

// Struct for a sequence of novatel_oem7_msgs__msg__InertialSolutionStatus.
typedef struct novatel_oem7_msgs__msg__InertialSolutionStatus__Sequence
{
  novatel_oem7_msgs__msg__InertialSolutionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__InertialSolutionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INERTIAL_SOLUTION_STATUS__STRUCT_H_
