// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/npc_debug__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "npc_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "npc_controller_msgs/msg/detail/npc_debug__struct.h"
#include "npc_controller_msgs/msg/detail/npc_debug__functions.h"
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


// forward declare type support functions


using _NPCDebug__ros_msg_type = npc_controller_msgs__msg__NPCDebug;

static bool _NPCDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NPCDebug__ros_msg_type * ros_message = static_cast<const _NPCDebug__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_acceleration
  {
    cdr << ros_message->desired_acceleration;
  }

  // Field name: desired_velocity
  {
    cdr << ros_message->desired_velocity;
  }

  // Field name: current_acceleration
  {
    cdr << ros_message->current_acceleration;
  }

  // Field name: current_velocity
  {
    cdr << ros_message->current_velocity;
  }

  // Field name: error_acceleration
  {
    cdr << ros_message->error_acceleration;
  }

  // Field name: error_velocity
  {
    cdr << ros_message->error_velocity;
  }

  // Field name: output_throttle
  {
    cdr << ros_message->output_throttle;
  }

  // Field name: output_brake
  {
    cdr << ros_message->output_brake;
  }

  // Field name: vel_p
  {
    cdr << ros_message->vel_p;
  }

  // Field name: vel_i
  {
    cdr << ros_message->vel_i;
  }

  // Field name: vel_d
  {
    cdr << ros_message->vel_d;
  }

  // Field name: thr_p
  {
    cdr << ros_message->thr_p;
  }

  // Field name: thr_i
  {
    cdr << ros_message->thr_i;
  }

  // Field name: thr_d
  {
    cdr << ros_message->thr_d;
  }

  // Field name: brk_p
  {
    cdr << ros_message->brk_p;
  }

  // Field name: brk_i
  {
    cdr << ros_message->brk_i;
  }

  // Field name: brk_d
  {
    cdr << ros_message->brk_d;
  }

  // Field name: throttle_deadband
  {
    cdr << ros_message->throttle_deadband;
  }

  // Field name: brake_deadband
  {
    cdr << ros_message->brake_deadband;
  }

  // Field name: max_throttle
  {
    cdr << ros_message->max_throttle;
  }

  // Field name: ct_state
  {
    cdr << ros_message->ct_state;
  }

  // Field name: vehicle_flag
  {
    cdr << ros_message->vehicle_flag;
  }

  // Field name: track_flag
  {
    cdr << ros_message->track_flag;
  }

  // Field name: lap_state
  {
    cdr << ros_message->lap_state;
  }

  // Field name: track_loc
  {
    cdr << ros_message->track_loc;
  }

  // Field name: center_s
  {
    cdr << ros_message->center_s;
  }

  // Field name: pit_s
  {
    cdr << ros_message->pit_s;
  }

  // Field name: sys_state
  {
    cdr << ros_message->sys_state;
  }

  return true;
}

static bool _NPCDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NPCDebug__ros_msg_type * ros_message = static_cast<_NPCDebug__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_acceleration
  {
    cdr >> ros_message->desired_acceleration;
  }

  // Field name: desired_velocity
  {
    cdr >> ros_message->desired_velocity;
  }

  // Field name: current_acceleration
  {
    cdr >> ros_message->current_acceleration;
  }

  // Field name: current_velocity
  {
    cdr >> ros_message->current_velocity;
  }

  // Field name: error_acceleration
  {
    cdr >> ros_message->error_acceleration;
  }

  // Field name: error_velocity
  {
    cdr >> ros_message->error_velocity;
  }

  // Field name: output_throttle
  {
    cdr >> ros_message->output_throttle;
  }

  // Field name: output_brake
  {
    cdr >> ros_message->output_brake;
  }

  // Field name: vel_p
  {
    cdr >> ros_message->vel_p;
  }

  // Field name: vel_i
  {
    cdr >> ros_message->vel_i;
  }

  // Field name: vel_d
  {
    cdr >> ros_message->vel_d;
  }

  // Field name: thr_p
  {
    cdr >> ros_message->thr_p;
  }

  // Field name: thr_i
  {
    cdr >> ros_message->thr_i;
  }

  // Field name: thr_d
  {
    cdr >> ros_message->thr_d;
  }

  // Field name: brk_p
  {
    cdr >> ros_message->brk_p;
  }

  // Field name: brk_i
  {
    cdr >> ros_message->brk_i;
  }

  // Field name: brk_d
  {
    cdr >> ros_message->brk_d;
  }

  // Field name: throttle_deadband
  {
    cdr >> ros_message->throttle_deadband;
  }

  // Field name: brake_deadband
  {
    cdr >> ros_message->brake_deadband;
  }

  // Field name: max_throttle
  {
    cdr >> ros_message->max_throttle;
  }

  // Field name: ct_state
  {
    cdr >> ros_message->ct_state;
  }

  // Field name: vehicle_flag
  {
    cdr >> ros_message->vehicle_flag;
  }

  // Field name: track_flag
  {
    cdr >> ros_message->track_flag;
  }

  // Field name: lap_state
  {
    cdr >> ros_message->lap_state;
  }

  // Field name: track_loc
  {
    cdr >> ros_message->track_loc;
  }

  // Field name: center_s
  {
    cdr >> ros_message->center_s;
  }

  // Field name: pit_s
  {
    cdr >> ros_message->pit_s;
  }

  // Field name: sys_state
  {
    cdr >> ros_message->sys_state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_npc_controller_msgs
size_t get_serialized_size_npc_controller_msgs__msg__NPCDebug(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NPCDebug__ros_msg_type * ros_message = static_cast<const _NPCDebug__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name desired_acceleration
  {
    size_t item_size = sizeof(ros_message->desired_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_velocity
  {
    size_t item_size = sizeof(ros_message->desired_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_acceleration
  {
    size_t item_size = sizeof(ros_message->current_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_velocity
  {
    size_t item_size = sizeof(ros_message->current_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_acceleration
  {
    size_t item_size = sizeof(ros_message->error_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_velocity
  {
    size_t item_size = sizeof(ros_message->error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_throttle
  {
    size_t item_size = sizeof(ros_message->output_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_brake
  {
    size_t item_size = sizeof(ros_message->output_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_p
  {
    size_t item_size = sizeof(ros_message->vel_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_i
  {
    size_t item_size = sizeof(ros_message->vel_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_d
  {
    size_t item_size = sizeof(ros_message->vel_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thr_p
  {
    size_t item_size = sizeof(ros_message->thr_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thr_i
  {
    size_t item_size = sizeof(ros_message->thr_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thr_d
  {
    size_t item_size = sizeof(ros_message->thr_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_p
  {
    size_t item_size = sizeof(ros_message->brk_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_i
  {
    size_t item_size = sizeof(ros_message->brk_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_d
  {
    size_t item_size = sizeof(ros_message->brk_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_deadband
  {
    size_t item_size = sizeof(ros_message->throttle_deadband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_deadband
  {
    size_t item_size = sizeof(ros_message->brake_deadband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_throttle
  {
    size_t item_size = sizeof(ros_message->max_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ct_state
  {
    size_t item_size = sizeof(ros_message->ct_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_flag
  {
    size_t item_size = sizeof(ros_message->vehicle_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_flag
  {
    size_t item_size = sizeof(ros_message->track_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lap_state
  {
    size_t item_size = sizeof(ros_message->lap_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_loc
  {
    size_t item_size = sizeof(ros_message->track_loc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_s
  {
    size_t item_size = sizeof(ros_message->center_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pit_s
  {
    size_t item_size = sizeof(ros_message->pit_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sys_state
  {
    size_t item_size = sizeof(ros_message->sys_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NPCDebug__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_npc_controller_msgs__msg__NPCDebug(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_npc_controller_msgs
size_t max_serialized_size_npc_controller_msgs__msg__NPCDebug(
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

  // member: desired_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: desired_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: output_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: output_brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thr_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thr_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thr_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brk_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brk_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brk_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle_deadband
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_deadband
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ct_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: track_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lap_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: track_loc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: center_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pit_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sys_state
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
    using DataType = npc_controller_msgs__msg__NPCDebug;
    is_plain =
      (
      offsetof(DataType, sys_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NPCDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_npc_controller_msgs__msg__NPCDebug(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NPCDebug = {
  "npc_controller_msgs::msg",
  "NPCDebug",
  _NPCDebug__cdr_serialize,
  _NPCDebug__cdr_deserialize,
  _NPCDebug__get_serialized_size,
  _NPCDebug__max_serialized_size
};

static rosidl_message_type_support_t _NPCDebug__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NPCDebug,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, npc_controller_msgs, msg, NPCDebug)() {
  return &_NPCDebug__type_support;
}

#if defined(__cplusplus)
}
#endif
