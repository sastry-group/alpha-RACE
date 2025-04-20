// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__struct.h"
#include "raptor_dbw_msgs/msg/detail/accelerator_pedal_cmd__functions.h"
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

#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__functions.h"  // control_type

// forward declare type support functions
size_t get_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode)();


using _AcceleratorPedalCmd__ros_msg_type = raptor_dbw_msgs__msg__AcceleratorPedalCmd;

static bool _AcceleratorPedalCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AcceleratorPedalCmd__ros_msg_type * ros_message = static_cast<const _AcceleratorPedalCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: pedal_cmd
  {
    cdr << ros_message->pedal_cmd;
  }

  // Field name: torque_cmd
  {
    cdr << ros_message->torque_cmd;
  }

  // Field name: speed_cmd
  {
    cdr << ros_message->speed_cmd;
  }

  // Field name: enable
  {
    cdr << (ros_message->enable ? true : false);
  }

  // Field name: ignore
  {
    cdr << (ros_message->ignore ? true : false);
  }

  // Field name: rolling_counter
  {
    cdr << ros_message->rolling_counter;
  }

  // Field name: road_slope
  {
    cdr << ros_message->road_slope;
  }

  // Field name: control_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->control_type, cdr))
    {
      return false;
    }
  }

  // Field name: accel_limit
  {
    cdr << ros_message->accel_limit;
  }

  // Field name: accel_positive_jerk_limit
  {
    cdr << ros_message->accel_positive_jerk_limit;
  }

  return true;
}

static bool _AcceleratorPedalCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AcceleratorPedalCmd__ros_msg_type * ros_message = static_cast<_AcceleratorPedalCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: pedal_cmd
  {
    cdr >> ros_message->pedal_cmd;
  }

  // Field name: torque_cmd
  {
    cdr >> ros_message->torque_cmd;
  }

  // Field name: speed_cmd
  {
    cdr >> ros_message->speed_cmd;
  }

  // Field name: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable = tmp ? true : false;
  }

  // Field name: ignore
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore = tmp ? true : false;
  }

  // Field name: rolling_counter
  {
    cdr >> ros_message->rolling_counter;
  }

  // Field name: road_slope
  {
    cdr >> ros_message->road_slope;
  }

  // Field name: control_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, ActuatorControlMode
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->control_type))
    {
      return false;
    }
  }

  // Field name: accel_limit
  {
    cdr >> ros_message->accel_limit;
  }

  // Field name: accel_positive_jerk_limit
  {
    cdr >> ros_message->accel_positive_jerk_limit;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AcceleratorPedalCmd__ros_msg_type * ros_message = static_cast<const _AcceleratorPedalCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pedal_cmd
  {
    size_t item_size = sizeof(ros_message->pedal_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_cmd
  {
    size_t item_size = sizeof(ros_message->torque_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_cmd
  {
    size_t item_size = sizeof(ros_message->speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable
  {
    size_t item_size = sizeof(ros_message->enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignore
  {
    size_t item_size = sizeof(ros_message->ignore);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_counter
  {
    size_t item_size = sizeof(ros_message->rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_slope
  {
    size_t item_size = sizeof(ros_message->road_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_type

  current_alignment += get_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
    &(ros_message->control_type), current_alignment);
  // field.name accel_limit
  {
    size_t item_size = sizeof(ros_message->accel_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_positive_jerk_limit
  {
    size_t item_size = sizeof(ros_message->accel_positive_jerk_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AcceleratorPedalCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalCmd(
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

  // member: pedal_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ignore
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rolling_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_raptor_dbw_msgs__msg__ActuatorControlMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: accel_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_positive_jerk_limit
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
    using DataType = raptor_dbw_msgs__msg__AcceleratorPedalCmd;
    is_plain =
      (
      offsetof(DataType, accel_positive_jerk_limit) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AcceleratorPedalCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_raptor_dbw_msgs__msg__AcceleratorPedalCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AcceleratorPedalCmd = {
  "raptor_dbw_msgs::msg",
  "AcceleratorPedalCmd",
  _AcceleratorPedalCmd__cdr_serialize,
  _AcceleratorPedalCmd__cdr_deserialize,
  _AcceleratorPedalCmd__get_serialized_size,
  _AcceleratorPedalCmd__max_serialized_size
};

static rosidl_message_type_support_t _AcceleratorPedalCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AcceleratorPedalCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, AcceleratorPedalCmd)() {
  return &_AcceleratorPedalCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
