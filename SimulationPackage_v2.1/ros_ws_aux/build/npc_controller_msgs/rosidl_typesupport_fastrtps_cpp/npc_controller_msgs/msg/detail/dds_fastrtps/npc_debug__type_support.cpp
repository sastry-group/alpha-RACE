// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/npc_debug__rosidl_typesupport_fastrtps_cpp.hpp"
#include "npc_controller_msgs/msg/detail/npc_debug__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace npc_controller_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
cdr_serialize(
  const npc_controller_msgs::msg::NPCDebug & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: desired_acceleration
  cdr << ros_message.desired_acceleration;
  // Member: desired_velocity
  cdr << ros_message.desired_velocity;
  // Member: current_acceleration
  cdr << ros_message.current_acceleration;
  // Member: current_velocity
  cdr << ros_message.current_velocity;
  // Member: error_acceleration
  cdr << ros_message.error_acceleration;
  // Member: error_velocity
  cdr << ros_message.error_velocity;
  // Member: output_throttle
  cdr << ros_message.output_throttle;
  // Member: output_brake
  cdr << ros_message.output_brake;
  // Member: vel_p
  cdr << ros_message.vel_p;
  // Member: vel_i
  cdr << ros_message.vel_i;
  // Member: vel_d
  cdr << ros_message.vel_d;
  // Member: thr_p
  cdr << ros_message.thr_p;
  // Member: thr_i
  cdr << ros_message.thr_i;
  // Member: thr_d
  cdr << ros_message.thr_d;
  // Member: brk_p
  cdr << ros_message.brk_p;
  // Member: brk_i
  cdr << ros_message.brk_i;
  // Member: brk_d
  cdr << ros_message.brk_d;
  // Member: throttle_deadband
  cdr << ros_message.throttle_deadband;
  // Member: brake_deadband
  cdr << ros_message.brake_deadband;
  // Member: max_throttle
  cdr << ros_message.max_throttle;
  // Member: ct_state
  cdr << ros_message.ct_state;
  // Member: vehicle_flag
  cdr << ros_message.vehicle_flag;
  // Member: track_flag
  cdr << ros_message.track_flag;
  // Member: lap_state
  cdr << ros_message.lap_state;
  // Member: track_loc
  cdr << ros_message.track_loc;
  // Member: center_s
  cdr << ros_message.center_s;
  // Member: pit_s
  cdr << ros_message.pit_s;
  // Member: sys_state
  cdr << ros_message.sys_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  npc_controller_msgs::msg::NPCDebug & ros_message)
{
  // Member: desired_acceleration
  cdr >> ros_message.desired_acceleration;

  // Member: desired_velocity
  cdr >> ros_message.desired_velocity;

  // Member: current_acceleration
  cdr >> ros_message.current_acceleration;

  // Member: current_velocity
  cdr >> ros_message.current_velocity;

  // Member: error_acceleration
  cdr >> ros_message.error_acceleration;

  // Member: error_velocity
  cdr >> ros_message.error_velocity;

  // Member: output_throttle
  cdr >> ros_message.output_throttle;

  // Member: output_brake
  cdr >> ros_message.output_brake;

  // Member: vel_p
  cdr >> ros_message.vel_p;

  // Member: vel_i
  cdr >> ros_message.vel_i;

  // Member: vel_d
  cdr >> ros_message.vel_d;

  // Member: thr_p
  cdr >> ros_message.thr_p;

  // Member: thr_i
  cdr >> ros_message.thr_i;

  // Member: thr_d
  cdr >> ros_message.thr_d;

  // Member: brk_p
  cdr >> ros_message.brk_p;

  // Member: brk_i
  cdr >> ros_message.brk_i;

  // Member: brk_d
  cdr >> ros_message.brk_d;

  // Member: throttle_deadband
  cdr >> ros_message.throttle_deadband;

  // Member: brake_deadband
  cdr >> ros_message.brake_deadband;

  // Member: max_throttle
  cdr >> ros_message.max_throttle;

  // Member: ct_state
  cdr >> ros_message.ct_state;

  // Member: vehicle_flag
  cdr >> ros_message.vehicle_flag;

  // Member: track_flag
  cdr >> ros_message.track_flag;

  // Member: lap_state
  cdr >> ros_message.lap_state;

  // Member: track_loc
  cdr >> ros_message.track_loc;

  // Member: center_s
  cdr >> ros_message.center_s;

  // Member: pit_s
  cdr >> ros_message.pit_s;

  // Member: sys_state
  cdr >> ros_message.sys_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
get_serialized_size(
  const npc_controller_msgs::msg::NPCDebug & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: desired_acceleration
  {
    size_t item_size = sizeof(ros_message.desired_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_velocity
  {
    size_t item_size = sizeof(ros_message.desired_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_acceleration
  {
    size_t item_size = sizeof(ros_message.current_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_velocity
  {
    size_t item_size = sizeof(ros_message.current_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_acceleration
  {
    size_t item_size = sizeof(ros_message.error_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_velocity
  {
    size_t item_size = sizeof(ros_message.error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_throttle
  {
    size_t item_size = sizeof(ros_message.output_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_brake
  {
    size_t item_size = sizeof(ros_message.output_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_p
  {
    size_t item_size = sizeof(ros_message.vel_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_i
  {
    size_t item_size = sizeof(ros_message.vel_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_d
  {
    size_t item_size = sizeof(ros_message.vel_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thr_p
  {
    size_t item_size = sizeof(ros_message.thr_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thr_i
  {
    size_t item_size = sizeof(ros_message.thr_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thr_d
  {
    size_t item_size = sizeof(ros_message.thr_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_p
  {
    size_t item_size = sizeof(ros_message.brk_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_i
  {
    size_t item_size = sizeof(ros_message.brk_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_d
  {
    size_t item_size = sizeof(ros_message.brk_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_deadband
  {
    size_t item_size = sizeof(ros_message.throttle_deadband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_deadband
  {
    size_t item_size = sizeof(ros_message.brake_deadband);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_throttle
  {
    size_t item_size = sizeof(ros_message.max_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ct_state
  {
    size_t item_size = sizeof(ros_message.ct_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_flag
  {
    size_t item_size = sizeof(ros_message.vehicle_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_flag
  {
    size_t item_size = sizeof(ros_message.track_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lap_state
  {
    size_t item_size = sizeof(ros_message.lap_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_loc
  {
    size_t item_size = sizeof(ros_message.track_loc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_s
  {
    size_t item_size = sizeof(ros_message.center_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pit_s
  {
    size_t item_size = sizeof(ros_message.pit_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sys_state
  {
    size_t item_size = sizeof(ros_message.sys_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
max_serialized_size_NPCDebug(
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


  // Member: desired_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: output_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: output_brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thr_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thr_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thr_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brk_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brk_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brk_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttle_deadband
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_deadband
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ct_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lap_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_loc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: center_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pit_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sys_state
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
    using DataType = npc_controller_msgs::msg::NPCDebug;
    is_plain =
      (
      offsetof(DataType, sys_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NPCDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const npc_controller_msgs::msg::NPCDebug *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NPCDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<npc_controller_msgs::msg::NPCDebug *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NPCDebug__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const npc_controller_msgs::msg::NPCDebug *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NPCDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NPCDebug(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NPCDebug__callbacks = {
  "npc_controller_msgs::msg",
  "NPCDebug",
  _NPCDebug__cdr_serialize,
  _NPCDebug__cdr_deserialize,
  _NPCDebug__get_serialized_size,
  _NPCDebug__max_serialized_size
};

static rosidl_message_type_support_t _NPCDebug__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NPCDebug__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace npc_controller_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_npc_controller_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<npc_controller_msgs::msg::NPCDebug>()
{
  return &npc_controller_msgs::msg::typesupport_fastrtps_cpp::_NPCDebug__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, npc_controller_msgs, msg, NPCDebug)() {
  return &npc_controller_msgs::msg::typesupport_fastrtps_cpp::_NPCDebug__handle;
}

#ifdef __cplusplus
}
#endif
