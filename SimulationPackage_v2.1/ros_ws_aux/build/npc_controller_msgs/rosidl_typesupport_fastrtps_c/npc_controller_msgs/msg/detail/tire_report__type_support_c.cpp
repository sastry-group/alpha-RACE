// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from npc_controller_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice
#include "npc_controller_msgs/msg/detail/tire_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "npc_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "npc_controller_msgs/msg/detail/tire_report__struct.h"
#include "npc_controller_msgs/msg/detail/tire_report__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "rosidl_runtime_c/primitives_sequence.h"  // fl_tire_temperature, fr_tire_temperature, rl_tire_temperature, rr_tire_temperature
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // fl_tire_temperature, fr_tire_temperature, rl_tire_temperature, rr_tire_temperature

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_npc_controller_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_npc_controller_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_npc_controller_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _TireReport__ros_msg_type = npc_controller_msgs__msg__TireReport;

static bool _TireReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TireReport__ros_msg_type * ros_message = static_cast<const _TireReport__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: fl_tire_temperature
  {
    size_t size = ros_message->fl_tire_temperature.size;
    auto array_ptr = ros_message->fl_tire_temperature.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fl_damper_linear_potentiometer
  {
    cdr << ros_message->fl_damper_linear_potentiometer;
  }

  // Field name: fl_tire_pressure
  {
    cdr << ros_message->fl_tire_pressure;
  }

  // Field name: fl_tire_pressure_gauge
  {
    cdr << ros_message->fl_tire_pressure_gauge;
  }

  // Field name: fl_wheel_load
  {
    cdr << ros_message->fl_wheel_load;
  }

  // Field name: fr_tire_temperature
  {
    size_t size = ros_message->fr_tire_temperature.size;
    auto array_ptr = ros_message->fr_tire_temperature.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fr_damper_linear_potentiometer
  {
    cdr << ros_message->fr_damper_linear_potentiometer;
  }

  // Field name: fr_tire_pressure
  {
    cdr << ros_message->fr_tire_pressure;
  }

  // Field name: fr_tire_pressure_gauge
  {
    cdr << ros_message->fr_tire_pressure_gauge;
  }

  // Field name: fr_wheel_load
  {
    cdr << ros_message->fr_wheel_load;
  }

  // Field name: rl_tire_temperature
  {
    size_t size = ros_message->rl_tire_temperature.size;
    auto array_ptr = ros_message->rl_tire_temperature.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rl_damper_linear_potentiometer
  {
    cdr << ros_message->rl_damper_linear_potentiometer;
  }

  // Field name: rl_tire_pressure
  {
    cdr << ros_message->rl_tire_pressure;
  }

  // Field name: rl_tire_pressure_gauge
  {
    cdr << ros_message->rl_tire_pressure_gauge;
  }

  // Field name: rl_wheel_load
  {
    cdr << ros_message->rl_wheel_load;
  }

  // Field name: rr_tire_temperature
  {
    size_t size = ros_message->rr_tire_temperature.size;
    auto array_ptr = ros_message->rr_tire_temperature.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rr_damper_linear_potentiometer
  {
    cdr << ros_message->rr_damper_linear_potentiometer;
  }

  // Field name: rr_tire_pressure
  {
    cdr << ros_message->rr_tire_pressure;
  }

  // Field name: rr_tire_pressure_gauge
  {
    cdr << ros_message->rr_tire_pressure_gauge;
  }

  // Field name: rr_wheel_load
  {
    cdr << ros_message->rr_wheel_load;
  }

  return true;
}

static bool _TireReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TireReport__ros_msg_type * ros_message = static_cast<_TireReport__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: fl_tire_temperature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fl_tire_temperature.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fl_tire_temperature);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fl_tire_temperature, size)) {
      fprintf(stderr, "failed to create array for field 'fl_tire_temperature'");
      return false;
    }
    auto array_ptr = ros_message->fl_tire_temperature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fl_damper_linear_potentiometer
  {
    cdr >> ros_message->fl_damper_linear_potentiometer;
  }

  // Field name: fl_tire_pressure
  {
    cdr >> ros_message->fl_tire_pressure;
  }

  // Field name: fl_tire_pressure_gauge
  {
    cdr >> ros_message->fl_tire_pressure_gauge;
  }

  // Field name: fl_wheel_load
  {
    cdr >> ros_message->fl_wheel_load;
  }

  // Field name: fr_tire_temperature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fr_tire_temperature.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->fr_tire_temperature);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->fr_tire_temperature, size)) {
      fprintf(stderr, "failed to create array for field 'fr_tire_temperature'");
      return false;
    }
    auto array_ptr = ros_message->fr_tire_temperature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fr_damper_linear_potentiometer
  {
    cdr >> ros_message->fr_damper_linear_potentiometer;
  }

  // Field name: fr_tire_pressure
  {
    cdr >> ros_message->fr_tire_pressure;
  }

  // Field name: fr_tire_pressure_gauge
  {
    cdr >> ros_message->fr_tire_pressure_gauge;
  }

  // Field name: fr_wheel_load
  {
    cdr >> ros_message->fr_wheel_load;
  }

  // Field name: rl_tire_temperature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rl_tire_temperature.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->rl_tire_temperature);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->rl_tire_temperature, size)) {
      fprintf(stderr, "failed to create array for field 'rl_tire_temperature'");
      return false;
    }
    auto array_ptr = ros_message->rl_tire_temperature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rl_damper_linear_potentiometer
  {
    cdr >> ros_message->rl_damper_linear_potentiometer;
  }

  // Field name: rl_tire_pressure
  {
    cdr >> ros_message->rl_tire_pressure;
  }

  // Field name: rl_tire_pressure_gauge
  {
    cdr >> ros_message->rl_tire_pressure_gauge;
  }

  // Field name: rl_wheel_load
  {
    cdr >> ros_message->rl_wheel_load;
  }

  // Field name: rr_tire_temperature
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rr_tire_temperature.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->rr_tire_temperature);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->rr_tire_temperature, size)) {
      fprintf(stderr, "failed to create array for field 'rr_tire_temperature'");
      return false;
    }
    auto array_ptr = ros_message->rr_tire_temperature.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rr_damper_linear_potentiometer
  {
    cdr >> ros_message->rr_damper_linear_potentiometer;
  }

  // Field name: rr_tire_pressure
  {
    cdr >> ros_message->rr_tire_pressure;
  }

  // Field name: rr_tire_pressure_gauge
  {
    cdr >> ros_message->rr_tire_pressure_gauge;
  }

  // Field name: rr_wheel_load
  {
    cdr >> ros_message->rr_wheel_load;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_npc_controller_msgs
size_t get_serialized_size_npc_controller_msgs__msg__TireReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireReport__ros_msg_type * ros_message = static_cast<const _TireReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name fl_tire_temperature
  {
    size_t array_size = ros_message->fl_tire_temperature.size;
    auto array_ptr = ros_message->fl_tire_temperature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fl_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message->fl_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fl_tire_pressure
  {
    size_t item_size = sizeof(ros_message->fl_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fl_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message->fl_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fl_wheel_load
  {
    size_t item_size = sizeof(ros_message->fl_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_tire_temperature
  {
    size_t array_size = ros_message->fr_tire_temperature.size;
    auto array_ptr = ros_message->fr_tire_temperature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message->fr_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_tire_pressure
  {
    size_t item_size = sizeof(ros_message->fr_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message->fr_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_wheel_load
  {
    size_t item_size = sizeof(ros_message->fr_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_tire_temperature
  {
    size_t array_size = ros_message->rl_tire_temperature.size;
    auto array_ptr = ros_message->rl_tire_temperature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message->rl_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_tire_pressure
  {
    size_t item_size = sizeof(ros_message->rl_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message->rl_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_wheel_load
  {
    size_t item_size = sizeof(ros_message->rl_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_tire_temperature
  {
    size_t array_size = ros_message->rr_tire_temperature.size;
    auto array_ptr = ros_message->rr_tire_temperature.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_damper_linear_potentiometer
  {
    size_t item_size = sizeof(ros_message->rr_damper_linear_potentiometer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_tire_pressure
  {
    size_t item_size = sizeof(ros_message->rr_tire_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_tire_pressure_gauge
  {
    size_t item_size = sizeof(ros_message->rr_tire_pressure_gauge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_wheel_load
  {
    size_t item_size = sizeof(ros_message->rr_wheel_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TireReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_npc_controller_msgs__msg__TireReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_npc_controller_msgs
size_t max_serialized_size_npc_controller_msgs__msg__TireReport(
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

  // member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fl_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fl_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fl_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fl_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fl_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_wheel_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_tire_temperature
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_damper_linear_potentiometer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_tire_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_tire_pressure_gauge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_wheel_load
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
    using DataType = npc_controller_msgs__msg__TireReport;
    is_plain =
      (
      offsetof(DataType, rr_wheel_load) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TireReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_npc_controller_msgs__msg__TireReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TireReport = {
  "npc_controller_msgs::msg",
  "TireReport",
  _TireReport__cdr_serialize,
  _TireReport__cdr_deserialize,
  _TireReport__get_serialized_size,
  _TireReport__max_serialized_size
};

static rosidl_message_type_support_t _TireReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TireReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, npc_controller_msgs, msg, TireReport)() {
  return &_TireReport__type_support;
}

#if defined(__cplusplus)
}
#endif
