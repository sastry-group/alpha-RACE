// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from novatel_oem7_msgs:msg/INSSTDEV.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/insstdev__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "novatel_oem7_msgs/msg/detail/insstdev__struct.h"
#include "novatel_oem7_msgs/msg/detail/insstdev__functions.h"
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

#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__functions.h"  // ext_sol_status
#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"  // nov_header
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_novatel_oem7_msgs__msg__INSExtendedSolutionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__INSExtendedSolutionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, INSExtendedSolutionStatus)();
size_t get_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header)();
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


using _INSSTDEV__ros_msg_type = novatel_oem7_msgs__msg__INSSTDEV;

static bool _INSSTDEV__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _INSSTDEV__ros_msg_type * ros_message = static_cast<const _INSSTDEV__ros_msg_type *>(untyped_ros_message);
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

  // Field name: latitude_stdev
  {
    cdr << ros_message->latitude_stdev;
  }

  // Field name: longitude_stdev
  {
    cdr << ros_message->longitude_stdev;
  }

  // Field name: height_stdev
  {
    cdr << ros_message->height_stdev;
  }

  // Field name: north_velocity_stdev
  {
    cdr << ros_message->north_velocity_stdev;
  }

  // Field name: east_velocity_stdev
  {
    cdr << ros_message->east_velocity_stdev;
  }

  // Field name: up_velocity_stdev
  {
    cdr << ros_message->up_velocity_stdev;
  }

  // Field name: roll_stdev
  {
    cdr << ros_message->roll_stdev;
  }

  // Field name: pitch_stdev
  {
    cdr << ros_message->pitch_stdev;
  }

  // Field name: azimuth_stdev
  {
    cdr << ros_message->azimuth_stdev;
  }

  // Field name: ext_sol_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, INSExtendedSolutionStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ext_sol_status, cdr))
    {
      return false;
    }
  }

  // Field name: time_since_last_update
  {
    cdr << ros_message->time_since_last_update;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  // Field name: reserved2
  {
    cdr << ros_message->reserved2;
  }

  // Field name: reserved3
  {
    cdr << ros_message->reserved3;
  }

  return true;
}

static bool _INSSTDEV__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _INSSTDEV__ros_msg_type * ros_message = static_cast<_INSSTDEV__ros_msg_type *>(untyped_ros_message);
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

  // Field name: latitude_stdev
  {
    cdr >> ros_message->latitude_stdev;
  }

  // Field name: longitude_stdev
  {
    cdr >> ros_message->longitude_stdev;
  }

  // Field name: height_stdev
  {
    cdr >> ros_message->height_stdev;
  }

  // Field name: north_velocity_stdev
  {
    cdr >> ros_message->north_velocity_stdev;
  }

  // Field name: east_velocity_stdev
  {
    cdr >> ros_message->east_velocity_stdev;
  }

  // Field name: up_velocity_stdev
  {
    cdr >> ros_message->up_velocity_stdev;
  }

  // Field name: roll_stdev
  {
    cdr >> ros_message->roll_stdev;
  }

  // Field name: pitch_stdev
  {
    cdr >> ros_message->pitch_stdev;
  }

  // Field name: azimuth_stdev
  {
    cdr >> ros_message->azimuth_stdev;
  }

  // Field name: ext_sol_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, INSExtendedSolutionStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ext_sol_status))
    {
      return false;
    }
  }

  // Field name: time_since_last_update
  {
    cdr >> ros_message->time_since_last_update;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  // Field name: reserved2
  {
    cdr >> ros_message->reserved2;
  }

  // Field name: reserved3
  {
    cdr >> ros_message->reserved3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t get_serialized_size_novatel_oem7_msgs__msg__INSSTDEV(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _INSSTDEV__ros_msg_type * ros_message = static_cast<const _INSSTDEV__ros_msg_type *>(untyped_ros_message);
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
  // field.name latitude_stdev
  {
    size_t item_size = sizeof(ros_message->latitude_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude_stdev
  {
    size_t item_size = sizeof(ros_message->longitude_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_stdev
  {
    size_t item_size = sizeof(ros_message->height_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name north_velocity_stdev
  {
    size_t item_size = sizeof(ros_message->north_velocity_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name east_velocity_stdev
  {
    size_t item_size = sizeof(ros_message->east_velocity_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name up_velocity_stdev
  {
    size_t item_size = sizeof(ros_message->up_velocity_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_stdev
  {
    size_t item_size = sizeof(ros_message->roll_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_stdev
  {
    size_t item_size = sizeof(ros_message->pitch_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth_stdev
  {
    size_t item_size = sizeof(ros_message->azimuth_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ext_sol_status

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__INSExtendedSolutionStatus(
    &(ros_message->ext_sol_status), current_alignment);
  // field.name time_since_last_update
  {
    size_t item_size = sizeof(ros_message->time_since_last_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved2
  {
    size_t item_size = sizeof(ros_message->reserved2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved3
  {
    size_t item_size = sizeof(ros_message->reserved3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _INSSTDEV__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_novatel_oem7_msgs__msg__INSSTDEV(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t max_serialized_size_novatel_oem7_msgs__msg__INSSTDEV(
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
  // member: latitude_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: longitude_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: north_velocity_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: east_velocity_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: up_velocity_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_stdev
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
  // member: azimuth_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
        max_serialized_size_novatel_oem7_msgs__msg__INSExtendedSolutionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: time_since_last_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reserved3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = novatel_oem7_msgs__msg__INSSTDEV;
    is_plain =
      (
      offsetof(DataType, reserved3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _INSSTDEV__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_novatel_oem7_msgs__msg__INSSTDEV(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_INSSTDEV = {
  "novatel_oem7_msgs::msg",
  "INSSTDEV",
  _INSSTDEV__cdr_serialize,
  _INSSTDEV__cdr_deserialize,
  _INSSTDEV__get_serialized_size,
  _INSSTDEV__max_serialized_size
};

static rosidl_message_type_support_t _INSSTDEV__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_INSSTDEV,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, INSSTDEV)() {
  return &_INSSTDEV__type_support;
}

#if defined(__cplusplus)
}
#endif
