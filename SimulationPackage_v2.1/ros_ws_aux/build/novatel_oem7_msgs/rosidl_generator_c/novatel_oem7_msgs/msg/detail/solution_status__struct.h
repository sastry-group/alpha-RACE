// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/SolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_STATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOL_COMPUTED'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__SOL_COMPUTED = 0ul
};

/// Constant 'INSUFFICIENT_OBS'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__INSUFFICIENT_OBS = 1ul
};

/// Constant 'NO_CONVERGECE'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__NO_CONVERGECE = 2ul
};

/// Constant 'SINGULARITY'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__SINGULARITY = 3ul
};

/// Constant 'COV_TRACE'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__COV_TRACE = 4ul
};

/// Constant 'TEST_DIST'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__TEST_DIST = 5ul
};

/// Constant 'COLD_START'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__COLD_START = 6ul
};

/// Constant 'V_H_LIMIT'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__V_H_LIMIT = 7ul
};

/// Constant 'VARIANCE'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__VARIANCE = 8ul
};

/// Constant 'RESIDUALS'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__RESIDUALS = 1ul
};

/// Constant 'INTEGRITY_WARNING'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__INTEGRITY_WARNING = 13ul
};

/// Constant 'PENDING'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__PENDING = 18ul
};

/// Constant 'INVALID_FIX'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__INVALID_FIX = 19ul
};

/// Constant 'UNAUTHORIZED'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__UNAUTHORIZED = 20ul
};

/// Constant 'INVALID_RATE'.
enum
{
  novatel_oem7_msgs__msg__SolutionStatus__INVALID_RATE = 22ul
};

/// Struct defined in msg/SolutionStatus in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__SolutionStatus
{
  uint32_t status;
} novatel_oem7_msgs__msg__SolutionStatus;

// Struct for a sequence of novatel_oem7_msgs__msg__SolutionStatus.
typedef struct novatel_oem7_msgs__msg__SolutionStatus__Sequence
{
  novatel_oem7_msgs__msg__SolutionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__SolutionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_STATUS__STRUCT_H_
