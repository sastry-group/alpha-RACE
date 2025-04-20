// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/driver_input_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/driver_input_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/driver_input_report__functions.h"
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

#include "raptor_dbw_msgs/msg/detail/high_beam__functions.h"  // high_beam_headlights
#include "raptor_dbw_msgs/msg/detail/turn_signal__functions.h"  // turn_signal
#include "raptor_dbw_msgs/msg/detail/wiper_front__functions.h"  // wiper
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__HighBeam(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__HighBeam(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeam)();
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DriverInputReport__ros_msg_type = raptor_dbw_msgs__msg__DriverInputReport;

static bool _DriverInputReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DriverInputReport__ros_msg_type * ros_message = static_cast<const _DriverInputReport__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: turn_signal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->turn_signal, cdr))
    {
      return false;
    }
  }

  // Field name: high_beam_headlights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeam
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->high_beam_headlights, cdr))
    {
      return false;
    }
  }

  // Field name: wiper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wiper, cdr))
    {
      return false;
    }
  }

  // Field name: cruise_resume_button
  {
    cdr << (ros_message->cruise_resume_button ? true : false);
  }

  // Field name: cruise_cancel_button
  {
    cdr << (ros_message->cruise_cancel_button ? true : false);
  }

  // Field name: cruise_accel_button
  {
    cdr << (ros_message->cruise_accel_button ? true : false);
  }

  // Field name: cruise_decel_button
  {
    cdr << (ros_message->cruise_decel_button ? true : false);
  }

  // Field name: cruise_on_off_button
  {
    cdr << (ros_message->cruise_on_off_button ? true : false);
  }

  // Field name: adaptive_cruise_on_off_button
  {
    cdr << (ros_message->adaptive_cruise_on_off_button ? true : false);
  }

  // Field name: adaptive_cruise_increase_distance_button
  {
    cdr << (ros_message->adaptive_cruise_increase_distance_button ? true : false);
  }

  // Field name: adaptive_cruise_decrease_distance_button
  {
    cdr << (ros_message->adaptive_cruise_decrease_distance_button ? true : false);
  }

  // Field name: driver_door_ajar
  {
    cdr << (ros_message->driver_door_ajar ? true : false);
  }

  // Field name: passenger_door_ajar
  {
    cdr << (ros_message->passenger_door_ajar ? true : false);
  }

  // Field name: rear_left_door_ajar
  {
    cdr << (ros_message->rear_left_door_ajar ? true : false);
  }

  // Field name: rear_right_door_ajar
  {
    cdr << (ros_message->rear_right_door_ajar ? true : false);
  }

  // Field name: liftgate_ajar
  {
    cdr << (ros_message->liftgate_ajar ? true : false);
  }

  // Field name: any_seatbelt_unbuckled
  {
    cdr << (ros_message->any_seatbelt_unbuckled ? true : false);
  }

  // Field name: airbag_deployed
  {
    cdr << (ros_message->airbag_deployed ? true : false);
  }

  // Field name: door_or_hood_ajar
  {
    cdr << (ros_message->door_or_hood_ajar ? true : false);
  }

  return true;
}

static bool _DriverInputReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DriverInputReport__ros_msg_type * ros_message = static_cast<_DriverInputReport__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: turn_signal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, TurnSignal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->turn_signal))
    {
      return false;
    }
  }

  // Field name: high_beam_headlights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, HighBeam
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->high_beam_headlights))
    {
      return false;
    }
  }

  // Field name: wiper
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, WiperFront
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wiper))
    {
      return false;
    }
  }

  // Field name: cruise_resume_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cruise_resume_button = tmp ? true : false;
  }

  // Field name: cruise_cancel_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cruise_cancel_button = tmp ? true : false;
  }

  // Field name: cruise_accel_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cruise_accel_button = tmp ? true : false;
  }

  // Field name: cruise_decel_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cruise_decel_button = tmp ? true : false;
  }

  // Field name: cruise_on_off_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cruise_on_off_button = tmp ? true : false;
  }

  // Field name: adaptive_cruise_on_off_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->adaptive_cruise_on_off_button = tmp ? true : false;
  }

  // Field name: adaptive_cruise_increase_distance_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->adaptive_cruise_increase_distance_button = tmp ? true : false;
  }

  // Field name: adaptive_cruise_decrease_distance_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->adaptive_cruise_decrease_distance_button = tmp ? true : false;
  }

  // Field name: driver_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->driver_door_ajar = tmp ? true : false;
  }

  // Field name: passenger_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->passenger_door_ajar = tmp ? true : false;
  }

  // Field name: rear_left_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rear_left_door_ajar = tmp ? true : false;
  }

  // Field name: rear_right_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rear_right_door_ajar = tmp ? true : false;
  }

  // Field name: liftgate_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->liftgate_ajar = tmp ? true : false;
  }

  // Field name: any_seatbelt_unbuckled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->any_seatbelt_unbuckled = tmp ? true : false;
  }

  // Field name: airbag_deployed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->airbag_deployed = tmp ? true : false;
  }

  // Field name: door_or_hood_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->door_or_hood_ajar = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__DriverInputReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverInputReport__ros_msg_type * ros_message = static_cast<const _DriverInputReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name turn_signal

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__TurnSignal(
    &(ros_message->turn_signal), current_alignment);
  // field.name high_beam_headlights

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__HighBeam(
    &(ros_message->high_beam_headlights), current_alignment);
  // field.name wiper

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__WiperFront(
    &(ros_message->wiper), current_alignment);
  // field.name cruise_resume_button
  {
    size_t item_size = sizeof(ros_message->cruise_resume_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruise_cancel_button
  {
    size_t item_size = sizeof(ros_message->cruise_cancel_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruise_accel_button
  {
    size_t item_size = sizeof(ros_message->cruise_accel_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruise_decel_button
  {
    size_t item_size = sizeof(ros_message->cruise_decel_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cruise_on_off_button
  {
    size_t item_size = sizeof(ros_message->cruise_on_off_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adaptive_cruise_on_off_button
  {
    size_t item_size = sizeof(ros_message->adaptive_cruise_on_off_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adaptive_cruise_increase_distance_button
  {
    size_t item_size = sizeof(ros_message->adaptive_cruise_increase_distance_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adaptive_cruise_decrease_distance_button
  {
    size_t item_size = sizeof(ros_message->adaptive_cruise_decrease_distance_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_door_ajar
  {
    size_t item_size = sizeof(ros_message->driver_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name passenger_door_ajar
  {
    size_t item_size = sizeof(ros_message->passenger_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_left_door_ajar
  {
    size_t item_size = sizeof(ros_message->rear_left_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_right_door_ajar
  {
    size_t item_size = sizeof(ros_message->rear_right_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name liftgate_ajar
  {
    size_t item_size = sizeof(ros_message->liftgate_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name any_seatbelt_unbuckled
  {
    size_t item_size = sizeof(ros_message->any_seatbelt_unbuckled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airbag_deployed
  {
    size_t item_size = sizeof(ros_message->airbag_deployed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_or_hood_ajar
  {
    size_t item_size = sizeof(ros_message->door_or_hood_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DriverInputReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__DriverInputReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__DriverInputReport(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: turn_signal
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
  // member: high_beam_headlights
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
  // member: wiper
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
  // member: cruise_resume_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cruise_cancel_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cruise_accel_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cruise_decel_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cruise_on_off_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: adaptive_cruise_on_off_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: adaptive_cruise_increase_distance_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: adaptive_cruise_decrease_distance_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: driver_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: passenger_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rear_left_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rear_right_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: liftgate_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: any_seatbelt_unbuckled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: airbag_deployed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_or_hood_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = raptor_dbw_msgs__msg__DriverInputReport;
    is_plain =
      (
      offsetof(DataType, door_or_hood_ajar) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DriverInputReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_raptor_dbw_msgs__msg__DriverInputReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DriverInputReport = {
  "raptor_dbw_msgs::msg",
  "DriverInputReport",
  _DriverInputReport__cdr_serialize,
  _DriverInputReport__cdr_deserialize,
  _DriverInputReport__get_serialized_size,
  _DriverInputReport__max_serialized_size
};

static rosidl_message_type_support_t _DriverInputReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DriverInputReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, DriverInputReport)() {
  return &_DriverInputReport__type_support;
}

#if defined(__cplusplus)
}
#endif
