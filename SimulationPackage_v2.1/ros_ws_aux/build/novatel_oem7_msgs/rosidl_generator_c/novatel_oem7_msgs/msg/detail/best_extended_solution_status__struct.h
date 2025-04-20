// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/BestExtendedSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RTK_SOLUTION_VERIFIED'.
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__RTK_SOLUTION_VERIFIED = 1
};

/// Constant 'PDP_SOLUTION_IS_GLIDE'.
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__PDP_SOLUTION_IS_GLIDE = 1
};

/// Constant 'KLOBUCHAR_BROADCAST'.
/**
  * Bits 1-3, mask 0xE
  * 0x2
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__KLOBUCHAR_BROADCAST = 2
};

/// Constant 'SBAS_BROADCAST'.
/**
  * 0x4
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__SBAS_BROADCAST = 4
};

/// Constant 'MULTI_FREQUENCY_COMPUTED'.
/**
  * 0x6
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__MULTI_FREQUENCY_COMPUTED = 6
};

/// Constant 'PSRDIFF_CORRECTION'.
/**
  * 0x8
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__PSRDIFF_CORRECTION = 8
};

/// Constant 'NOVATEL_BLENDED_IONO_VALUE'.
/**
  * 0xA
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__NOVATEL_BLENDED_IONO_VALUE = 10
};

/// Constant 'RTK_ASSIST_ACTIVE'.
/**
  * Bit 4
  * 0x10
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__RTK_ASSIST_ACTIVE = 16
};

/// Constant 'ANTENNA_INFORMATION_IS_MISSING'.
/**
  * Bit 5
  * 0x20
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__ANTENNA_INFORMATION_IS_MISSING = 32
};

/// Constant 'RESERVED'.
/**
  * Bit 6 reserved
  * 0x40
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__RESERVED = 64
};

/// Constant 'POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS'.
/**
  * Bit 7
  * 0x80
 */
enum
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus__POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS = 128
};

/// Struct defined in msg/BestExtendedSolutionStatus in the package novatel_oem7_msgs.
/**
  * Bit 0
 */
typedef struct novatel_oem7_msgs__msg__BestExtendedSolutionStatus
{
  uint8_t status;
} novatel_oem7_msgs__msg__BestExtendedSolutionStatus;

// Struct for a sequence of novatel_oem7_msgs__msg__BestExtendedSolutionStatus.
typedef struct novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence
{
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__BestExtendedSolutionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BEST_EXTENDED_SOLUTION_STATUS__STRUCT_H_
