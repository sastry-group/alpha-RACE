// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/heading2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "novatel_oem7_msgs/msg/detail/heading2__struct.h"
#include "novatel_oem7_msgs/msg/detail/heading2__functions.h"
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

#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__functions.h"  // ext_sol_status
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"  // nov_header
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__functions.h"  // pos_type
#include "novatel_oem7_msgs/msg/detail/solution_source__functions.h"  // sol_source
#include "novatel_oem7_msgs/msg/detail/solution_status__functions.h"  // sol_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_novatel_oem7_msgs__msg__BestExtendedSolutionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__BestExtendedSolutionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BestExtendedSolutionStatus)();
size_t get_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header)();
size_t get_serialized_size_novatel_oem7_msgs__msg__PositionOrVelocityType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__PositionOrVelocityType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, PositionOrVelocityType)();
size_t get_serialized_size_novatel_oem7_msgs__msg__SolutionSource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__SolutionSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, SolutionSource)();
size_t get_serialized_size_novatel_oem7_msgs__msg__SolutionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__SolutionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, SolutionStatus)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_novatel_oem7_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_novatel_oem7_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _HEADING2__ros_msg_type = novatel_oem7_msgs__msg__HEADING2;

static bool _HEADING2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HEADING2__ros_msg_type * ros_message = static_cast<const _HEADING2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: nov_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nov_header, cdr))
    {
      return false;
    }
  }

  // Field name: sol_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, SolutionStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sol_status, cdr))
    {
      return false;
    }
  }

  // Field name: pos_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, PositionOrVelocityType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos_type, cdr))
    {
      return false;
    }
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: heading_stdev
  {
    cdr << ros_message->heading_stdev;
  }

  // Field name: pitch_stdev
  {
    cdr << ros_message->pitch_stdev;
  }

  // Field name: rover_stn_id
  {
    size_t size = 4;
    auto array_ptr = ros_message->rover_stn_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: master_stn_id
  {
    size_t size = 4;
    auto array_ptr = ros_message->master_stn_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: num_sv_tracked
  {
    cdr << ros_message->num_sv_tracked;
  }

  // Field name: num_sv_in_sol
  {
    cdr << ros_message->num_sv_in_sol;
  }

  // Field name: num_sv_obs
  {
    cdr << ros_message->num_sv_obs;
  }

  // Field name: num_sv_multi
  {
    cdr << ros_message->num_sv_multi;
  }

  // Field name: sol_source
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, SolutionSource
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sol_source, cdr))
    {
      return false;
    }
  }

  // Field name: ext_sol_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BestExtendedSolutionStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ext_sol_status, cdr))
    {
      return false;
    }
  }

  // Field name: galileo_beidou_sig_mask
  {
    cdr << ros_message->galileo_beidou_sig_mask;
  }

  // Field name: gps_glonass_sig_mask
  {
    cdr << ros_message->gps_glonass_sig_mask;
  }

  return true;
}

static bool _HEADING2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HEADING2__ros_msg_type * ros_message = static_cast<_HEADING2__ros_msg_type *>(untyped_ros_message);
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

  // Field name: nov_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nov_header))
    {
      return false;
    }
  }

  // Field name: sol_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, SolutionStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sol_status))
    {
      return false;
    }
  }

  // Field name: pos_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, PositionOrVelocityType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos_type))
    {
      return false;
    }
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: heading_stdev
  {
    cdr >> ros_message->heading_stdev;
  }

  // Field name: pitch_stdev
  {
    cdr >> ros_message->pitch_stdev;
  }

  // Field name: rover_stn_id
  {
    size_t size = 4;
    auto array_ptr = ros_message->rover_stn_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: master_stn_id
  {
    size_t size = 4;
    auto array_ptr = ros_message->master_stn_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: num_sv_tracked
  {
    cdr >> ros_message->num_sv_tracked;
  }

  // Field name: num_sv_in_sol
  {
    cdr >> ros_message->num_sv_in_sol;
  }

  // Field name: num_sv_obs
  {
    cdr >> ros_message->num_sv_obs;
  }

  // Field name: num_sv_multi
  {
    cdr >> ros_message->num_sv_multi;
  }

  // Field name: sol_source
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, SolutionSource
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sol_source))
    {
      return false;
    }
  }

  // Field name: ext_sol_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BestExtendedSolutionStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ext_sol_status))
    {
      return false;
    }
  }

  // Field name: galileo_beidou_sig_mask
  {
    cdr >> ros_message->galileo_beidou_sig_mask;
  }

  // Field name: gps_glonass_sig_mask
  {
    cdr >> ros_message->gps_glonass_sig_mask;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t get_serialized_size_novatel_oem7_msgs__msg__HEADING2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HEADING2__ros_msg_type * ros_message = static_cast<const _HEADING2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name nov_header

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
    &(ros_message->nov_header), current_alignment);
  // field.name sol_status

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__SolutionStatus(
    &(ros_message->sol_status), current_alignment);
  // field.name pos_type

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__PositionOrVelocityType(
    &(ros_message->pos_type), current_alignment);
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_stdev
  {
    size_t item_size = sizeof(ros_message->heading_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_stdev
  {
    size_t item_size = sizeof(ros_message->pitch_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rover_stn_id
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->rover_stn_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name master_stn_id
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->master_stn_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv_tracked
  {
    size_t item_size = sizeof(ros_message->num_sv_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv_in_sol
  {
    size_t item_size = sizeof(ros_message->num_sv_in_sol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv_obs
  {
    size_t item_size = sizeof(ros_message->num_sv_obs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sv_multi
  {
    size_t item_size = sizeof(ros_message->num_sv_multi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sol_source

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__SolutionSource(
    &(ros_message->sol_source), current_alignment);
  // field.name ext_sol_status

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__BestExtendedSolutionStatus(
    &(ros_message->ext_sol_status), current_alignment);
  // field.name galileo_beidou_sig_mask
  {
    size_t item_size = sizeof(ros_message->galileo_beidou_sig_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_glonass_sig_mask
  {
    size_t item_size = sizeof(ros_message->gps_glonass_sig_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HEADING2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_novatel_oem7_msgs__msg__HEADING2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t max_serialized_size_novatel_oem7_msgs__msg__HEADING2(
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
  // member: nov_header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: sol_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_novatel_oem7_msgs__msg__SolutionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pos_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_novatel_oem7_msgs__msg__PositionOrVelocityType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rover_stn_id
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: master_stn_id
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sv_tracked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sv_in_sol
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sv_obs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sv_multi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sol_source
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_novatel_oem7_msgs__msg__SolutionSource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ext_sol_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_novatel_oem7_msgs__msg__BestExtendedSolutionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: galileo_beidou_sig_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_glonass_sig_mask
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
    using DataType = novatel_oem7_msgs__msg__HEADING2;
    is_plain =
      (
      offsetof(DataType, gps_glonass_sig_mask) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HEADING2__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_novatel_oem7_msgs__msg__HEADING2(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HEADING2 = {
  "novatel_oem7_msgs::msg",
  "HEADING2",
  _HEADING2__cdr_serialize,
  _HEADING2__cdr_deserialize,
  _HEADING2__get_serialized_size,
  _HEADING2__max_serialized_size
};

static rosidl_message_type_support_t _HEADING2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HEADING2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, HEADING2)() {
  return &_HEADING2__type_support;
}

#if defined(__cplusplus)
}
#endif
