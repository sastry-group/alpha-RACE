// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/bestvel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "novatel_oem7_msgs/msg/detail/bestvel__struct.h"
#include "novatel_oem7_msgs/msg/detail/bestvel__functions.h"
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

#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"  // nov_header
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__functions.h"  // vel_type
#include "novatel_oem7_msgs/msg/detail/solution_status__functions.h"  // sol_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
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


using _BESTVEL__ros_msg_type = novatel_oem7_msgs__msg__BESTVEL;

static bool _BESTVEL__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BESTVEL__ros_msg_type * ros_message = static_cast<const _BESTVEL__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vel_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, PositionOrVelocityType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vel_type, cdr))
    {
      return false;
    }
  }

  // Field name: latency
  {
    cdr << ros_message->latency;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: hor_speed
  {
    cdr << ros_message->hor_speed;
  }

  // Field name: trk_gnd
  {
    cdr << ros_message->trk_gnd;
  }

  // Field name: ver_speed
  {
    cdr << ros_message->ver_speed;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  return true;
}

static bool _BESTVEL__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BESTVEL__ros_msg_type * ros_message = static_cast<_BESTVEL__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vel_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, PositionOrVelocityType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vel_type))
    {
      return false;
    }
  }

  // Field name: latency
  {
    cdr >> ros_message->latency;
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: hor_speed
  {
    cdr >> ros_message->hor_speed;
  }

  // Field name: trk_gnd
  {
    cdr >> ros_message->trk_gnd;
  }

  // Field name: ver_speed
  {
    cdr >> ros_message->ver_speed;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t get_serialized_size_novatel_oem7_msgs__msg__BESTVEL(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BESTVEL__ros_msg_type * ros_message = static_cast<const _BESTVEL__ros_msg_type *>(untyped_ros_message);
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
  // field.name vel_type

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__PositionOrVelocityType(
    &(ros_message->vel_type), current_alignment);
  // field.name latency
  {
    size_t item_size = sizeof(ros_message->latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hor_speed
  {
    size_t item_size = sizeof(ros_message->hor_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trk_gnd
  {
    size_t item_size = sizeof(ros_message->trk_gnd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ver_speed
  {
    size_t item_size = sizeof(ros_message->ver_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BESTVEL__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_novatel_oem7_msgs__msg__BESTVEL(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t max_serialized_size_novatel_oem7_msgs__msg__BESTVEL(
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
  // member: vel_type
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
  // member: latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hor_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trk_gnd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ver_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserved
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
    using DataType = novatel_oem7_msgs__msg__BESTVEL;
    is_plain =
      (
      offsetof(DataType, reserved) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BESTVEL__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_novatel_oem7_msgs__msg__BESTVEL(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BESTVEL = {
  "novatel_oem7_msgs::msg",
  "BESTVEL",
  _BESTVEL__cdr_serialize,
  _BESTVEL__cdr_deserialize,
  _BESTVEL__get_serialized_size,
  _BESTVEL__max_serialized_size
};

static rosidl_message_type_support_t _BESTVEL__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BESTVEL,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, BESTVEL)() {
  return &_BESTVEL__type_support;
}

#if defined(__cplusplus)
}
#endif
