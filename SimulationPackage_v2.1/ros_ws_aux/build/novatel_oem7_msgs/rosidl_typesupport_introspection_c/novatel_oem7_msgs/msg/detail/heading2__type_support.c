// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "novatel_oem7_msgs/msg/detail/heading2__rosidl_typesupport_introspection_c.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "novatel_oem7_msgs/msg/detail/heading2__functions.h"
#include "novatel_oem7_msgs/msg/detail/heading2__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/oem7_header.h"
// Member `nov_header`
#include "novatel_oem7_msgs/msg/detail/oem7_header__rosidl_typesupport_introspection_c.h"
// Member `sol_status`
#include "novatel_oem7_msgs/msg/solution_status.h"
// Member `sol_status`
#include "novatel_oem7_msgs/msg/detail/solution_status__rosidl_typesupport_introspection_c.h"
// Member `pos_type`
#include "novatel_oem7_msgs/msg/position_or_velocity_type.h"
// Member `pos_type`
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__rosidl_typesupport_introspection_c.h"
// Member `sol_source`
#include "novatel_oem7_msgs/msg/solution_source.h"
// Member `sol_source`
#include "novatel_oem7_msgs/msg/detail/solution_source__rosidl_typesupport_introspection_c.h"
// Member `ext_sol_status`
#include "novatel_oem7_msgs/msg/best_extended_solution_status.h"
// Member `ext_sol_status`
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  novatel_oem7_msgs__msg__HEADING2__init(message_memory);
}

void novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_fini_function(void * message_memory)
{
  novatel_oem7_msgs__msg__HEADING2__fini(message_memory);
}

size_t novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__size_function__HEADING2__rover_stn_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_const_function__HEADING2__rover_stn_id(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_function__HEADING2__rover_stn_id(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__fetch_function__HEADING2__rover_stn_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_const_function__HEADING2__rover_stn_id(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__assign_function__HEADING2__rover_stn_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_function__HEADING2__rover_stn_id(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

size_t novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__size_function__HEADING2__master_stn_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_const_function__HEADING2__master_stn_id(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_function__HEADING2__master_stn_id(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__fetch_function__HEADING2__master_stn_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_const_function__HEADING2__master_stn_id(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__assign_function__HEADING2__master_stn_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_function__HEADING2__master_stn_id(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[20] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nov_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, nov_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sol_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, sol_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, pos_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, reserved),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_stdev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, heading_stdev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_stdev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, pitch_stdev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rover_stn_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, rover_stn_id),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__size_function__HEADING2__rover_stn_id,  // size() function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_const_function__HEADING2__rover_stn_id,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_function__HEADING2__rover_stn_id,  // get(index) function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__fetch_function__HEADING2__rover_stn_id,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__assign_function__HEADING2__rover_stn_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "master_stn_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, master_stn_id),  // bytes offset in struct
    NULL,  // default value
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__size_function__HEADING2__master_stn_id,  // size() function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_const_function__HEADING2__master_stn_id,  // get_const(index) function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__get_function__HEADING2__master_stn_id,  // get(index) function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__fetch_function__HEADING2__master_stn_id,  // fetch(index, &value) function pointer
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__assign_function__HEADING2__master_stn_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sv_tracked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, num_sv_tracked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sv_in_sol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, num_sv_in_sol),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sv_obs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, num_sv_obs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_sv_multi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, num_sv_multi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sol_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, sol_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ext_sol_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, ext_sol_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "galileo_beidou_sig_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, galileo_beidou_sig_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_glonass_sig_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs__msg__HEADING2, gps_glonass_sig_mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_members = {
  "novatel_oem7_msgs__msg",  // message namespace
  "HEADING2",  // message name
  20,  // number of fields
  sizeof(novatel_oem7_msgs__msg__HEADING2),
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array,  // message members
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_init_function,  // function to initialize message memory (memory has to be allocated)
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_type_support_handle = {
  0,
  &novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, HEADING2)() {
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, Oem7Header)();
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, SolutionStatus)();
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, PositionOrVelocityType)();
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, SolutionSource)();
  novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, novatel_oem7_msgs, msg, BestExtendedSolutionStatus)();
  if (!novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_type_support_handle.typesupport_identifier) {
    novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &novatel_oem7_msgs__msg__HEADING2__rosidl_typesupport_introspection_c__HEADING2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
