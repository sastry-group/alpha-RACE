// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/PositionOrVelocityType.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__NONE = 0ul
};

/// Constant 'FIXEDPOS'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__FIXEDPOS = 1ul
};

/// Constant 'FIXEDHEIGHT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__FIXEDHEIGHT = 2ul
};

/// Constant 'DOPPLER_VELOCITY'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__DOPPLER_VELOCITY = 8ul
};

/// Constant 'SINGLE'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__SINGLE = 16ul
};

/// Constant 'PSRDIFF'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__PSRDIFF = 17ul
};

/// Constant 'WAAS'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__WAAS = 18ul
};

/// Constant 'PROPAGATED'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__PROPAGATED = 19ul
};

/// Constant 'L1_FLOAT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__L1_FLOAT = 32ul
};

/// Constant 'NARROW_FLOAT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__NARROW_FLOAT = 34ul
};

/// Constant 'L1_INT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__L1_INT = 48ul
};

/// Constant 'WIDE_INT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__WIDE_INT = 49ul
};

/// Constant 'NARROW_INT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__NARROW_INT = 50ul
};

/// Constant 'RTK_DIRECT_INS'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__RTK_DIRECT_INS = 51ul
};

/// Constant 'INS_SBAS'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_SBAS = 52ul
};

/// Constant 'INS_PSRSP'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_PSRSP = 53ul
};

/// Constant 'INS_PSRDIFF'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_PSRDIFF = 54ul
};

/// Constant 'INS_RTKFLOAT'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_RTKFLOAT = 55ul
};

/// Constant 'INS_RTKFIXED'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_RTKFIXED = 56ul
};

/// Constant 'PPP_CONVERGING'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__PPP_CONVERGING = 68ul
};

/// Constant 'PPP'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__PPP = 69ul
};

/// Constant 'OPERATIONAL'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__OPERATIONAL = 70ul
};

/// Constant 'WARNING'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__WARNING = 71ul
};

/// Constant 'OUT_OF_BOUNDS'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__OUT_OF_BOUNDS = 72ul
};

/// Constant 'INS_PPP_CONVERGING'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_PPP_CONVERGING = 73ul
};

/// Constant 'INS_PPP'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_PPP = 74ul
};

/// Constant 'PPP_BASIC_CONVERGING'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__PPP_BASIC_CONVERGING = 77ul
};

/// Constant 'PPP_BASIC'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__PPP_BASIC = 78ul
};

/// Constant 'INS_PPP_BASIC_CONVERGING'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_PPP_BASIC_CONVERGING = 79ul
};

/// Constant 'INS_PPP_BASIC'.
enum
{
  novatel_oem7_msgs__msg__PositionOrVelocityType__INS_PPP_BASIC = 80ul
};

/// Struct defined in msg/PositionOrVelocityType in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__PositionOrVelocityType
{
  uint32_t type;
} novatel_oem7_msgs__msg__PositionOrVelocityType;

// Struct for a sequence of novatel_oem7_msgs__msg__PositionOrVelocityType.
typedef struct novatel_oem7_msgs__msg__PositionOrVelocityType__Sequence
{
  novatel_oem7_msgs__msg__PositionOrVelocityType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__PositionOrVelocityType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__STRUCT_H_
