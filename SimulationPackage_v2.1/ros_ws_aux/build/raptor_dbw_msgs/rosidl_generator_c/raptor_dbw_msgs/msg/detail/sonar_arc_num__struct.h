// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/SonarArcNum.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SONAR_ARC_NUM__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SONAR_ARC_NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_DISTANCE'.
/**
  * Unitless - based on bars on display
 */
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__NO_DISTANCE = 0
};

/// Constant 'ARC1'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC1 = 1
};

/// Constant 'ARC2'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC2 = 2
};

/// Constant 'ARC3'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC3 = 3
};

/// Constant 'ARC4'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC4 = 4
};

/// Constant 'ARC5'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC5 = 5
};

/// Constant 'ARC6'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC6 = 6
};

/// Constant 'ARC7'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC7 = 7
};

/// Constant 'ARC8'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__ARC8 = 8
};

/// Constant 'NO_ARC'.
enum
{
  raptor_dbw_msgs__msg__SonarArcNum__NO_ARC = 15
};

/// Struct defined in msg/SonarArcNum in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__SonarArcNum
{
  uint8_t status;
} raptor_dbw_msgs__msg__SonarArcNum;

// Struct for a sequence of raptor_dbw_msgs__msg__SonarArcNum.
typedef struct raptor_dbw_msgs__msg__SonarArcNum__Sequence
{
  raptor_dbw_msgs__msg__SonarArcNum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__SonarArcNum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SONAR_ARC_NUM__STRUCT_H_
