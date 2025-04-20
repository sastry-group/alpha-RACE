// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from foxglove_msgs:msg/LocationFix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "foxglove_msgs/msg/detail/location_fix__rosidl_typesupport_introspection_c.h"
#include "foxglove_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "foxglove_msgs/msg/detail/location_fix__functions.h"
#include "foxglove_msgs/msg/detail/location_fix__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  foxglove_msgs__msg__LocationFix__init(message_memory);
}

void foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_fini_function(void * message_memory)
{
  foxglove_msgs__msg__LocationFix__fini(message_memory);
}

size_t foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__size_function__LocationFix__position_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__get_const_function__LocationFix__position_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__get_function__LocationFix__position_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__fetch_function__LocationFix__position_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__get_const_function__LocationFix__position_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__assign_function__LocationFix__position_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__get_function__LocationFix__position_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, position_covariance),  // bytes offset in struct
    NULL,  // default value
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__size_function__LocationFix__position_covariance,  // size() function pointer
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__get_const_function__LocationFix__position_covariance,  // get_const(index) function pointer
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__get_function__LocationFix__position_covariance,  // get(index) function pointer
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__fetch_function__LocationFix__position_covariance,  // fetch(index, &value) function pointer
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__assign_function__LocationFix__position_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_covariance_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(foxglove_msgs__msg__LocationFix, position_covariance_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_members = {
  "foxglove_msgs__msg",  // message namespace
  "LocationFix",  // message name
  7,  // number of fields
  sizeof(foxglove_msgs__msg__LocationFix),
  foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_member_array,  // message members
  foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_init_function,  // function to initialize message memory (memory has to be allocated)
  foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_type_support_handle = {
  0,
  &foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, foxglove_msgs, msg, LocationFix)() {
  foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_type_support_handle.typesupport_identifier) {
    foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &foxglove_msgs__msg__LocationFix__rosidl_typesupport_introspection_c__LocationFix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
