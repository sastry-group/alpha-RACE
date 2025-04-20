// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__rosidl_typesupport_introspection_c.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__functions.h"
#include "raptor_dbw_msgs/msg/detail/other_actuators_report__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `turn_signal_state`
#include "raptor_dbw_msgs/msg/turn_signal.h"
// Member `turn_signal_state`
#include "raptor_dbw_msgs/msg/detail/turn_signal__rosidl_typesupport_introspection_c.h"
// Member `right_rear_door_state`
// Member `left_rear_door_state`
// Member `liftgate_door_state`
#include "raptor_dbw_msgs/msg/door_state.h"
// Member `right_rear_door_state`
// Member `left_rear_door_state`
// Member `liftgate_door_state`
#include "raptor_dbw_msgs/msg/detail/door_state__rosidl_typesupport_introspection_c.h"
// Member `high_beam_state`
#include "raptor_dbw_msgs/msg/high_beam_state.h"
// Member `high_beam_state`
#include "raptor_dbw_msgs/msg/detail/high_beam_state__rosidl_typesupport_introspection_c.h"
// Member `front_wiper_state`
#include "raptor_dbw_msgs/msg/wiper_front.h"
// Member `front_wiper_state`
#include "raptor_dbw_msgs/msg/detail/wiper_front__rosidl_typesupport_introspection_c.h"
// Member `rear_wiper_state`
#include "raptor_dbw_msgs/msg/wiper_rear.h"
// Member `rear_wiper_state`
#include "raptor_dbw_msgs/msg/detail/wiper_rear__rosidl_typesupport_introspection_c.h"
// Member `ignition_state`
#include "raptor_dbw_msgs/msg/ignition.h"
// Member `ignition_state`
#include "raptor_dbw_msgs/msg/detail/ignition__rosidl_typesupport_introspection_c.h"
// Member `horn_state`
#include "raptor_dbw_msgs/msg/horn_state.h"
// Member `horn_state`
#include "raptor_dbw_msgs/msg/detail/horn_state__rosidl_typesupport_introspection_c.h"
// Member `low_beam_state`
#include "raptor_dbw_msgs/msg/low_beam.h"
// Member `low_beam_state`
#include "raptor_dbw_msgs/msg/detail/low_beam__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raptor_dbw_msgs__msg__OtherActuatorsReport__init(message_memory);
}

void raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_fini_function(void * message_memory)
{
  raptor_dbw_msgs__msg__OtherActuatorsReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_signal_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, turn_signal_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_rear_door_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, right_rear_door_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "high_beam_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, high_beam_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_wiper_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, front_wiper_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_wiper_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, rear_wiper_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignition_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, ignition_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_rear_door_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, left_rear_door_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "liftgate_door_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, liftgate_door_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horn_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, horn_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_beam_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, low_beam_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rolling_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raptor_dbw_msgs__msg__OtherActuatorsReport, rolling_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_members = {
  "raptor_dbw_msgs__msg",  // message namespace
  "OtherActuatorsReport",  // message name
  12,  // number of fields
  sizeof(raptor_dbw_msgs__msg__OtherActuatorsReport),
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array,  // message members
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_init_function,  // function to initialize message memory (memory has to be allocated)
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_type_support_handle = {
  0,
  &raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, OtherActuatorsReport)() {
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, TurnSignal)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, DoorState)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, HighBeamState)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, WiperFront)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, WiperRear)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, Ignition)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, DoorState)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, DoorState)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, HornState)();
  raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raptor_dbw_msgs, msg, LowBeam)();
  if (!raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_type_support_handle.typesupport_identifier) {
    raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &raptor_dbw_msgs__msg__OtherActuatorsReport__rosidl_typesupport_introspection_c__OtherActuatorsReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
