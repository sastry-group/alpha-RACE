// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/misc_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__struct.h"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "raptor_dbw_msgs/msg/detail/door_request__functions.h"  // door_request_left_rear, door_request_lift_gate, door_request_right_rear
#include "raptor_dbw_msgs/msg/detail/high_beam__functions.h"  // high_beam_cmd
#include "raptor_dbw_msgs/msg/detail/ignition__functions.h"  // ignition_cmd
#include "raptor_dbw_msgs/msg/detail/low_beam__functions.h"  // low_beam_cmd
#include "raptor_dbw_msgs/msg/detail/turn_signal__functions.h"  // cmd
#include "raptor_dbw_msgs/msg/detail/wiper_front__functions.h"  // front_wiper_cmd
#include "raptor_dbw_msgs/msg/detail/wiper_rear__functions.h"  // rear_wiper_cmd

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest)();
size_t get_serialized_size_raptor_dbw_msgs__msg__HighBeam(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__HighBeam(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeam)();
size_t get_serialized_size_raptor_dbw_msgs__msg__Ignition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__Ignition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Ignition)();
size_t get_serialized_size_raptor_dbw_msgs__msg__LowBeam(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__LowBeam(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, LowBeam)();
size_t get_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal)();
size_t get_serialized_size_raptor_dbw_msgs__msg__WiperFront(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__WiperFront(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront)();
size_t get_serialized_size_raptor_dbw_msgs__msg__WiperRear(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__WiperRear(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperRear)();


using _MiscCmd__ros_msg_type = raptor_dbw_msgs__msg__MiscCmd;

static bool _MiscCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MiscCmd__ros_msg_type * ros_message = static_cast<const _MiscCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cmd, cdr))
    {
      return false;
    }
  }

  // Field name: door_request_right_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->door_request_right_rear, cdr))
    {
      return false;
    }
  }

  // Field name: rolling_counter
  {
    cdr << ros_message->rolling_counter;
  }

  // Field name: high_beam_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeam
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->high_beam_cmd, cdr))
    {
      return false;
    }
  }

  // Field name: front_wiper_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front_wiper_cmd, cdr))
    {
      return false;
    }
  }

  // Field name: rear_wiper_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperRear
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear_wiper_cmd, cdr))
    {
      return false;
    }
  }

  // Field name: ignition_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Ignition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ignition_cmd, cdr))
    {
      return false;
    }
  }

  // Field name: door_request_left_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->door_request_left_rear, cdr))
    {
      return false;
    }
  }

  // Field name: door_request_lift_gate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->door_request_lift_gate, cdr))
    {
      return false;
    }
  }

  // Field name: block_standard_cruise_buttons
  {
    cdr << (ros_message->block_standard_cruise_buttons ? true : false);
  }

  // Field name: block_adaptive_cruise_buttons
  {
    cdr << (ros_message->block_adaptive_cruise_buttons ? true : false);
  }

  // Field name: block_turn_signal_stalk
  {
    cdr << (ros_message->block_turn_signal_stalk ? true : false);
  }

  // Field name: horn_cmd
  {
    cdr << (ros_message->horn_cmd ? true : false);
  }

  // Field name: low_beam_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, LowBeam
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->low_beam_cmd, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MiscCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MiscCmd__ros_msg_type * ros_message = static_cast<_MiscCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cmd))
    {
      return false;
    }
  }

  // Field name: door_request_right_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->door_request_right_rear))
    {
      return false;
    }
  }

  // Field name: rolling_counter
  {
    cdr >> ros_message->rolling_counter;
  }

  // Field name: high_beam_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeam
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->high_beam_cmd))
    {
      return false;
    }
  }

  // Field name: front_wiper_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front_wiper_cmd))
    {
      return false;
    }
  }

  // Field name: rear_wiper_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperRear
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear_wiper_cmd))
    {
      return false;
    }
  }

  // Field name: ignition_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, Ignition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ignition_cmd))
    {
      return false;
    }
  }

  // Field name: door_request_left_rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->door_request_left_rear))
    {
      return false;
    }
  }

  // Field name: door_request_lift_gate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DoorRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->door_request_lift_gate))
    {
      return false;
    }
  }

  // Field name: block_standard_cruise_buttons
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->block_standard_cruise_buttons = tmp ? true : false;
  }

  // Field name: block_adaptive_cruise_buttons
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->block_adaptive_cruise_buttons = tmp ? true : false;
  }

  // Field name: block_turn_signal_stalk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->block_turn_signal_stalk = tmp ? true : false;
  }

  // Field name: horn_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->horn_cmd = tmp ? true : false;
  }

  // Field name: low_beam_cmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, LowBeam
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->low_beam_cmd))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__MiscCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MiscCmd__ros_msg_type * ros_message = static_cast<const _MiscCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
    &(ros_message->cmd), current_alignment);
  // field.name door_request_right_rear

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
    &(ros_message->door_request_right_rear), current_alignment);
  // field.name rolling_counter
  {
    size_t item_size = sizeof(ros_message->rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_beam_cmd

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__HighBeam(
    &(ros_message->high_beam_cmd), current_alignment);
  // field.name front_wiper_cmd

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__WiperFront(
    &(ros_message->front_wiper_cmd), current_alignment);
  // field.name rear_wiper_cmd

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__WiperRear(
    &(ros_message->rear_wiper_cmd), current_alignment);
  // field.name ignition_cmd

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__Ignition(
    &(ros_message->ignition_cmd), current_alignment);
  // field.name door_request_left_rear

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
    &(ros_message->door_request_left_rear), current_alignment);
  // field.name door_request_lift_gate

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
    &(ros_message->door_request_lift_gate), current_alignment);
  // field.name block_standard_cruise_buttons
  {
    size_t item_size = sizeof(ros_message->block_standard_cruise_buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name block_adaptive_cruise_buttons
  {
    size_t item_size = sizeof(ros_message->block_adaptive_cruise_buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name block_turn_signal_stalk
  {
    size_t item_size = sizeof(ros_message->block_turn_signal_stalk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn_cmd
  {
    size_t item_size = sizeof(ros_message->horn_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_beam_cmd

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__LowBeam(
    &(ros_message->low_beam_cmd), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MiscCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__MiscCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__MiscCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: door_request_right_rear
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rolling_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: high_beam_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__HighBeam(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: front_wiper_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__WiperFront(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rear_wiper_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__WiperRear(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ignition_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__Ignition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: door_request_left_rear
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: door_request_lift_gate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__DoorRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: block_standard_cruise_buttons
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: block_adaptive_cruise_buttons
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: block_turn_signal_stalk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: horn_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: low_beam_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__LowBeam(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = raptor_dbw_msgs__msg__MiscCmd;
    is_plain =
      (
      offsetof(DataType, low_beam_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MiscCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_raptor_dbw_msgs__msg__MiscCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MiscCmd = {
  "raptor_dbw_msgs::msg",
  "MiscCmd",
  _MiscCmd__cdr_serialize,
  _MiscCmd__cdr_deserialize,
  _MiscCmd__get_serialized_size,
  _MiscCmd__max_serialized_size
};

static rosidl_message_type_support_t _MiscCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MiscCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, MiscCmd)() {
  return &_MiscCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
