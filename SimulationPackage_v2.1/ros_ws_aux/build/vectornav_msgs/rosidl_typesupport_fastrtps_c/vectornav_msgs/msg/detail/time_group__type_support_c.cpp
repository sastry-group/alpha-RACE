// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vectornav_msgs:msg/TimeGroup.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/time_group__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vectornav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vectornav_msgs/msg/detail/time_group__struct.h"
#include "vectornav_msgs/msg/detail/time_group__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "vectornav_msgs/msg/detail/time_status__functions.h"  // timestatus
#include "vectornav_msgs/msg/detail/time_utc__functions.h"  // timeutc

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vectornav_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vectornav_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vectornav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
size_t get_serialized_size_vectornav_msgs__msg__TimeStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_vectornav_msgs__msg__TimeStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeStatus)();
size_t get_serialized_size_vectornav_msgs__msg__TimeUTC(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_vectornav_msgs__msg__TimeUTC(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeUTC)();


using _TimeGroup__ros_msg_type = vectornav_msgs__msg__TimeGroup;

static bool _TimeGroup__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TimeGroup__ros_msg_type * ros_message = static_cast<const _TimeGroup__ros_msg_type *>(untyped_ros_message);
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

  // Field name: group_fields
  {
    cdr << ros_message->group_fields;
  }

  // Field name: timestartup
  {
    cdr << ros_message->timestartup;
  }

  // Field name: timegps
  {
    cdr << ros_message->timegps;
  }

  // Field name: gpstow
  {
    cdr << ros_message->gpstow;
  }

  // Field name: gpsweek
  {
    cdr << ros_message->gpsweek;
  }

  // Field name: timesyncin
  {
    cdr << ros_message->timesyncin;
  }

  // Field name: timegpspps
  {
    cdr << ros_message->timegpspps;
  }

  // Field name: timeutc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeUTC
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timeutc, cdr))
    {
      return false;
    }
  }

  // Field name: syncincnt
  {
    cdr << ros_message->syncincnt;
  }

  // Field name: syncoutcnt
  {
    cdr << ros_message->syncoutcnt;
  }

  // Field name: timestatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timestatus, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TimeGroup__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TimeGroup__ros_msg_type * ros_message = static_cast<_TimeGroup__ros_msg_type *>(untyped_ros_message);
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

  // Field name: group_fields
  {
    cdr >> ros_message->group_fields;
  }

  // Field name: timestartup
  {
    cdr >> ros_message->timestartup;
  }

  // Field name: timegps
  {
    cdr >> ros_message->timegps;
  }

  // Field name: gpstow
  {
    cdr >> ros_message->gpstow;
  }

  // Field name: gpsweek
  {
    cdr >> ros_message->gpsweek;
  }

  // Field name: timesyncin
  {
    cdr >> ros_message->timesyncin;
  }

  // Field name: timegpspps
  {
    cdr >> ros_message->timegpspps;
  }

  // Field name: timeutc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeUTC
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timeutc))
    {
      return false;
    }
  }

  // Field name: syncincnt
  {
    cdr >> ros_message->syncincnt;
  }

  // Field name: syncoutcnt
  {
    cdr >> ros_message->syncoutcnt;
  }

  // Field name: timestatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timestatus))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t get_serialized_size_vectornav_msgs__msg__TimeGroup(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TimeGroup__ros_msg_type * ros_message = static_cast<const _TimeGroup__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name group_fields
  {
    size_t item_size = sizeof(ros_message->group_fields);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestartup
  {
    size_t item_size = sizeof(ros_message->timestartup);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timegps
  {
    size_t item_size = sizeof(ros_message->timegps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpstow
  {
    size_t item_size = sizeof(ros_message->gpstow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpsweek
  {
    size_t item_size = sizeof(ros_message->gpsweek);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timesyncin
  {
    size_t item_size = sizeof(ros_message->timesyncin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timegpspps
  {
    size_t item_size = sizeof(ros_message->timegpspps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeutc

  current_alignment += get_serialized_size_vectornav_msgs__msg__TimeUTC(
    &(ros_message->timeutc), current_alignment);
  // field.name syncincnt
  {
    size_t item_size = sizeof(ros_message->syncincnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name syncoutcnt
  {
    size_t item_size = sizeof(ros_message->syncoutcnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestatus

  current_alignment += get_serialized_size_vectornav_msgs__msg__TimeStatus(
    &(ros_message->timestatus), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TimeGroup__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vectornav_msgs__msg__TimeGroup(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t max_serialized_size_vectornav_msgs__msg__TimeGroup(
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
  // member: group_fields
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: timestartup
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timegps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpstow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpsweek
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: timesyncin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timegpspps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timeutc
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_vectornav_msgs__msg__TimeUTC(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: syncincnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: syncoutcnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestatus
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_vectornav_msgs__msg__TimeStatus(
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
    using DataType = vectornav_msgs__msg__TimeGroup;
    is_plain =
      (
      offsetof(DataType, timestatus) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TimeGroup__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vectornav_msgs__msg__TimeGroup(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TimeGroup = {
  "vectornav_msgs::msg",
  "TimeGroup",
  _TimeGroup__cdr_serialize,
  _TimeGroup__cdr_deserialize,
  _TimeGroup__get_serialized_size,
  _TimeGroup__max_serialized_size
};

static rosidl_message_type_support_t _TimeGroup__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TimeGroup,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeGroup)() {
  return &_TimeGroup__type_support;
}

#if defined(__cplusplus)
}
#endif
