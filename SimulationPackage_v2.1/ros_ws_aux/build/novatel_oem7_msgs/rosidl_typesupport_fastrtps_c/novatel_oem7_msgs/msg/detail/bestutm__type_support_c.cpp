// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from novatel_oem7_msgs:msg/BESTUTM.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/bestutm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "novatel_oem7_msgs/msg/detail/bestutm__struct.h"
#include "novatel_oem7_msgs/msg/detail/bestutm__functions.h"
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

#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__functions.h"  // ext_sol_stat
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"  // nov_header
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__functions.h"  // pos_type
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


using _BESTUTM__ros_msg_type = novatel_oem7_msgs__msg__BESTUTM;

static bool _BESTUTM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BESTUTM__ros_msg_type * ros_message = static_cast<const _BESTUTM__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lon_zone_number
  {
    cdr << ros_message->lon_zone_number;
  }

  // Field name: lat_zone_letter
  {
    cdr << ros_message->lat_zone_letter;
  }

  // Field name: northing
  {
    cdr << ros_message->northing;
  }

  // Field name: easting
  {
    cdr << ros_message->easting;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: datum_id
  {
    cdr << ros_message->datum_id;
  }

  // Field name: northing_stddev
  {
    cdr << ros_message->northing_stddev;
  }

  // Field name: easting_stddev
  {
    cdr << ros_message->easting_stddev;
  }

  // Field name: height_stddev
  {
    cdr << ros_message->height_stddev;
  }

  // Field name: stn_id
  {
    size_t size = 4;
    auto array_ptr = ros_message->stn_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: sol_age
  {
    cdr << ros_message->sol_age;
  }

  // Field name: num_svs
  {
    cdr << ros_message->num_svs;
  }

  // Field name: num_sol_svs
  {
    cdr << ros_message->num_sol_svs;
  }

  // Field name: num_sol_ggl1_svs
  {
    cdr << ros_message->num_sol_ggl1_svs;
  }

  // Field name: num_sol_multi_svs
  {
    cdr << ros_message->num_sol_multi_svs;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: ext_sol_stat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BestExtendedSolutionStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ext_sol_stat, cdr))
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

static bool _BESTUTM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BESTUTM__ros_msg_type * ros_message = static_cast<_BESTUTM__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lon_zone_number
  {
    cdr >> ros_message->lon_zone_number;
  }

  // Field name: lat_zone_letter
  {
    cdr >> ros_message->lat_zone_letter;
  }

  // Field name: northing
  {
    cdr >> ros_message->northing;
  }

  // Field name: easting
  {
    cdr >> ros_message->easting;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: datum_id
  {
    cdr >> ros_message->datum_id;
  }

  // Field name: northing_stddev
  {
    cdr >> ros_message->northing_stddev;
  }

  // Field name: easting_stddev
  {
    cdr >> ros_message->easting_stddev;
  }

  // Field name: height_stddev
  {
    cdr >> ros_message->height_stddev;
  }

  // Field name: stn_id
  {
    size_t size = 4;
    auto array_ptr = ros_message->stn_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: sol_age
  {
    cdr >> ros_message->sol_age;
  }

  // Field name: num_svs
  {
    cdr >> ros_message->num_svs;
  }

  // Field name: num_sol_svs
  {
    cdr >> ros_message->num_sol_svs;
  }

  // Field name: num_sol_ggl1_svs
  {
    cdr >> ros_message->num_sol_ggl1_svs;
  }

  // Field name: num_sol_multi_svs
  {
    cdr >> ros_message->num_sol_multi_svs;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: ext_sol_stat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BestExtendedSolutionStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ext_sol_stat))
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
size_t get_serialized_size_novatel_oem7_msgs__msg__BESTUTM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BESTUTM__ros_msg_type * ros_message = static_cast<const _BESTUTM__ros_msg_type *>(untyped_ros_message);
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
  // field.name lon_zone_number
  {
    size_t item_size = sizeof(ros_message->lon_zone_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_zone_letter
  {
    size_t item_size = sizeof(ros_message->lat_zone_letter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name northing
  {
    size_t item_size = sizeof(ros_message->northing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name easting
  {
    size_t item_size = sizeof(ros_message->easting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name datum_id
  {
    size_t item_size = sizeof(ros_message->datum_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name northing_stddev
  {
    size_t item_size = sizeof(ros_message->northing_stddev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name easting_stddev
  {
    size_t item_size = sizeof(ros_message->easting_stddev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_stddev
  {
    size_t item_size = sizeof(ros_message->height_stddev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stn_id
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->stn_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sol_age
  {
    size_t item_size = sizeof(ros_message->sol_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_svs
  {
    size_t item_size = sizeof(ros_message->num_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sol_svs
  {
    size_t item_size = sizeof(ros_message->num_sol_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sol_ggl1_svs
  {
    size_t item_size = sizeof(ros_message->num_sol_ggl1_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_sol_multi_svs
  {
    size_t item_size = sizeof(ros_message->num_sol_multi_svs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_sol_stat

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__BestExtendedSolutionStatus(
    &(ros_message->ext_sol_stat), current_alignment);
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

static uint32_t _BESTUTM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_novatel_oem7_msgs__msg__BESTUTM(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t max_serialized_size_novatel_oem7_msgs__msg__BESTUTM(
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
  // member: lon_zone_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat_zone_letter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: northing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: easting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: undulation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: datum_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: northing_stddev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: easting_stddev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_stddev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stn_id
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sol_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_svs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sol_svs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sol_ggl1_svs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_sol_multi_svs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ext_sol_stat
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
    using DataType = novatel_oem7_msgs__msg__BESTUTM;
    is_plain =
      (
      offsetof(DataType, gps_glonass_sig_mask) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BESTUTM__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_novatel_oem7_msgs__msg__BESTUTM(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BESTUTM = {
  "novatel_oem7_msgs::msg",
  "BESTUTM",
  _BESTUTM__cdr_serialize,
  _BESTUTM__cdr_deserialize,
  _BESTUTM__get_serialized_size,
  _BESTUTM__max_serialized_size
};

static rosidl_message_type_support_t _BESTUTM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BESTUTM,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BESTUTM)() {
  return &_BESTUTM__type_support;
}

#if defined(__cplusplus)
}
#endif
