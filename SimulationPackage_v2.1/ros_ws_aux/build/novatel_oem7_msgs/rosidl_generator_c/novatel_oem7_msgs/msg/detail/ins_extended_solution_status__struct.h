// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSExtendedSolutionStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION_UPDATE'.
/**
  * 0x00000001
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__POSITION_UPDATE = 1ul
};

/// Constant 'PHASE_UPDATE'.
/**
  * 0x00000002
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__PHASE_UPDATE = 2ul
};

/// Constant 'ZERO_VELOCITY_UPDATE'.
/**
  * 0x00000004
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ZERO_VELOCITY_UPDATE = 4ul
};

/// Constant 'WHEEL_SEONSOR_UPDATE'.
/**
  * 0x00000008
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__WHEEL_SEONSOR_UPDATE = 8ul
};

/// Constant 'ALIGN_UPDATE'.
/**
  * 0x00000010
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGN_UPDATE = 16ul
};

/// Constant 'EXTERNAL_POSITION_UPDATE'.
/**
  * 0x00000020
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__EXTERNAL_POSITION_UPDATE = 32ul
};

/// Constant 'INS_SOLUTIN_CONVERGENCE_FLAG'.
/**
  * 0x00000040
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__INS_SOLUTIN_CONVERGENCE_FLAG = 64ul
};

/// Constant 'DOPPLER_UPDATE'.
/**
  * 0x00000080
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__DOPPLER_UPDATE = 128ul
};

/// Constant 'PSEUDORANGE_UPDATE'.
/**
  * 0x00000100
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__PSEUDORANGE_UPDATE = 256ul
};

/// Constant 'VELOCITY_UPDATE'.
/**
  * 0x00000200
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__VELOCITY_UPDATE = 512ul
};

/// Constant 'RESERVED_1'.
/**
  * 0x00000400
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__RESERVED_1 = 1024ul
};

/// Constant 'DEAD_RECONING_UPDATE'.
/**
  * 0x00000800
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__DEAD_RECONING_UPDATE = 2048ul
};

/// Constant 'PHASE_WIND_UP_UPDATE'.
/**
  * 0x00001000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__PHASE_WIND_UP_UPDATE = 4096ul
};

/// Constant 'COURSE_OVER_GROUND_UPDATE'.
/**
  * 0x00002000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__COURSE_OVER_GROUND_UPDATE = 8192ul
};

/// Constant 'EXTERNAL_VELOCITY_UPDATE'.
/**
  * 0x00004000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__EXTERNAL_VELOCITY_UPDATE = 16384ul
};

/// Constant 'EXTERNAL_ATTITUDE_UPDATE'.
/**
  * 0x00008000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__EXTERNAL_ATTITUDE_UPDATE = 32768ul
};

/// Constant 'EXTERNAL_HEADING_UPDATE'.
/**
  * 0x00010000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__EXTERNAL_HEADING_UPDATE = 65535ul
};

/// Constant 'EXTERNAL_HEIGHT_UPDATE'.
/**
  * 0x00020000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__EXTERNAL_HEIGHT_UPDATE = 131072ul
};

/// Constant 'RESERVED_2'.
/**
  * 0x00040000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__RESERVED_2 = 262144ul
};

/// Constant 'RESERVED_3'.
/**
  * 0x00080000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__RESERVED_3 = 524288ul
};

/// Constant 'ROVER_POSITION_UPDATE'.
/**
  * 0x00100000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ROVER_POSITION_UPDATE = 1048576ul
};

/// Constant 'ROVER_POSITION_UPDATE_TYPE'.
/**
  * 0x00200000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ROVER_POSITION_UPDATE_TYPE = 2097152ul
};

/// Constant 'RESERVED_4'.
/**
  * 0x00400000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__RESERVED_4 = 4194304ul
};

/// Constant 'RESERVED_5'.
/**
  * 0x00800000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__RESERVED_5 = 8388608ul
};

/// Constant 'TURN_ON_BIASES_ESTIMATED'.
/**
  * 0x01000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__TURN_ON_BIASES_ESTIMATED = 16777216ul
};

/// Constant 'ALIGNMENT_DIRECTION_VERIFIED'.
/**
  * 0x02000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_DIRECTION_VERIFIED = 33554432ul
};

/// Constant 'ALIGNMENT_INDICATION_1'.
/**
  * 0x04000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_INDICATION_1 = 67108864ul
};

/// Constant 'ALIGNMENT_INDICATION_2'.
/**
  * 0x08000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_INDICATION_2 = 134217728ul
};

/// Constant 'ALIGNMENT_INDICATION_3'.
/**
  * 0x10000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_INDICATION_3 = 268435456ul
};

/// Constant 'NVM_SEED_INDICATION_1'.
/**
  * 0x20000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_INDICATION_1 = 538870912ul
};

/// Constant 'NVM_SEED_INDICATION_2'.
/**
  * 0x40000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_INDICATION_2 = 1073741824ul
};

/// Constant 'NVM_SEED_INDICATION_3'.
/**
  * 0x80000000
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_INDICATION_3 = 2147483648ul
};

/// Constant 'ALIGNMENT_INCOMPLETE_ALIGNMENT'.
/**
  * Alignment indication
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_INCOMPLETE_ALIGNMENT = 0ul
};

/// Constant 'ALIGNMENT_STATIC'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_STATIC = 1ul
};

/// Constant 'ALIGNMENT_KINETMATIC'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_KINETMATIC = 2ul
};

/// Constant 'ALIGNMENT_DUAL_ANTENNA'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_DUAL_ANTENNA = 3ul
};

/// Constant 'ALIGNMENT_USER_COMMAND'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_USER_COMMAND = 4ul
};

/// Constant 'ALIGNMENT_NVM_SEED'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__ALIGNMENT_NVM_SEED = 5ul
};

/// Constant 'NVM_SEED_INACTIVE'.
/**
  * NVM Seed Indication
 */
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_INACTIVE = 0ul
};

/// Constant 'NVM_SEED_STORED_INVALID'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_STORED_INVALID = 1ul
};

/// Constant 'NVM_SEED_PENDING_VALIDATION'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_PENDING_VALIDATION = 2ul
};

/// Constant 'NVM_SEED_INJECTED'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_INJECTED = 4ul
};

/// Constant 'NVM_SEEED_DATA_IGNORED'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEEED_DATA_IGNORED = 5ul
};

/// Constant 'NVM_SEED_ERROR_MODEL_DATA_INJECTED'.
enum
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus__NVM_SEED_ERROR_MODEL_DATA_INJECTED = 6ul
};

/// Struct defined in msg/INSExtendedSolutionStatus in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSExtendedSolutionStatus
{
  uint32_t status;
} novatel_oem7_msgs__msg__INSExtendedSolutionStatus;

// Struct for a sequence of novatel_oem7_msgs__msg__INSExtendedSolutionStatus.
typedef struct novatel_oem7_msgs__msg__INSExtendedSolutionStatus__Sequence
{
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSExtendedSolutionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_EXTENDED_SOLUTION_STATUS__STRUCT_H_
