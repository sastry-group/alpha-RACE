// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autonoma_msgs:msg/PowertrainData.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/powertrain_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autonoma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autonoma_msgs/msg/detail/powertrain_data__struct.h"
#include "autonoma_msgs/msg/detail/powertrain_data__functions.h"
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

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autonoma_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autonoma_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autonoma_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PowertrainData__ros_msg_type = autonoma_msgs__msg__PowertrainData;

static bool _PowertrainData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PowertrainData__ros_msg_type * ros_message = static_cast<const _PowertrainData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: map_sensor
  {
    cdr << ros_message->map_sensor;
  }

  // Field name: lambda_sensor
  {
    cdr << ros_message->lambda_sensor;
  }

  // Field name: fuel_level
  {
    cdr << ros_message->fuel_level;
  }

  // Field name: fuel_pressure
  {
    cdr << ros_message->fuel_pressure;
  }

  // Field name: engine_oil_pressure
  {
    cdr << ros_message->engine_oil_pressure;
  }

  // Field name: engine_oil_temperature
  {
    cdr << ros_message->engine_oil_temperature;
  }

  // Field name: engine_coolant_temperature
  {
    cdr << ros_message->engine_coolant_temperature;
  }

  // Field name: engine_coolant_pressure
  {
    cdr << ros_message->engine_coolant_pressure;
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: engine_on_status
  {
    cdr << (ros_message->engine_on_status ? true : false);
  }

  // Field name: engine_run_switch_status
  {
    cdr << (ros_message->engine_run_switch_status ? true : false);
  }

  // Field name: throttle_position
  {
    cdr << ros_message->throttle_position;
  }

  // Field name: current_gear
  {
    cdr << ros_message->current_gear;
  }

  // Field name: gear_shift_status
  {
    cdr << ros_message->gear_shift_status;
  }

  // Field name: transmission_oil_pressure
  {
    cdr << ros_message->transmission_oil_pressure;
  }

  // Field name: transmission_accumulator_pressure
  {
    cdr << ros_message->transmission_accumulator_pressure;
  }

  // Field name: transmission_oil_temperature
  {
    cdr << ros_message->transmission_oil_temperature;
  }

  // Field name: vehicle_speed_kmph
  {
    cdr << ros_message->vehicle_speed_kmph;
  }

  // Field name: torque_wheels_nm
  {
    cdr << ros_message->torque_wheels_nm;
  }

  return true;
}

static bool _PowertrainData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PowertrainData__ros_msg_type * ros_message = static_cast<_PowertrainData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: map_sensor
  {
    cdr >> ros_message->map_sensor;
  }

  // Field name: lambda_sensor
  {
    cdr >> ros_message->lambda_sensor;
  }

  // Field name: fuel_level
  {
    cdr >> ros_message->fuel_level;
  }

  // Field name: fuel_pressure
  {
    cdr >> ros_message->fuel_pressure;
  }

  // Field name: engine_oil_pressure
  {
    cdr >> ros_message->engine_oil_pressure;
  }

  // Field name: engine_oil_temperature
  {
    cdr >> ros_message->engine_oil_temperature;
  }

  // Field name: engine_coolant_temperature
  {
    cdr >> ros_message->engine_coolant_temperature;
  }

  // Field name: engine_coolant_pressure
  {
    cdr >> ros_message->engine_coolant_pressure;
  }

  // Field name: engine_rpm
  {
    cdr >> ros_message->engine_rpm;
  }

  // Field name: engine_on_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_on_status = tmp ? true : false;
  }

  // Field name: engine_run_switch_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_run_switch_status = tmp ? true : false;
  }

  // Field name: throttle_position
  {
    cdr >> ros_message->throttle_position;
  }

  // Field name: current_gear
  {
    cdr >> ros_message->current_gear;
  }

  // Field name: gear_shift_status
  {
    cdr >> ros_message->gear_shift_status;
  }

  // Field name: transmission_oil_pressure
  {
    cdr >> ros_message->transmission_oil_pressure;
  }

  // Field name: transmission_accumulator_pressure
  {
    cdr >> ros_message->transmission_accumulator_pressure;
  }

  // Field name: transmission_oil_temperature
  {
    cdr >> ros_message->transmission_oil_temperature;
  }

  // Field name: vehicle_speed_kmph
  {
    cdr >> ros_message->vehicle_speed_kmph;
  }

  // Field name: torque_wheels_nm
  {
    cdr >> ros_message->torque_wheels_nm;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autonoma_msgs
size_t get_serialized_size_autonoma_msgs__msg__PowertrainData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PowertrainData__ros_msg_type * ros_message = static_cast<const _PowertrainData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name map_sensor
  {
    size_t item_size = sizeof(ros_message->map_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_sensor
  {
    size_t item_size = sizeof(ros_message->lambda_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_level
  {
    size_t item_size = sizeof(ros_message->fuel_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure
  {
    size_t item_size = sizeof(ros_message->fuel_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_pressure
  {
    size_t item_size = sizeof(ros_message->engine_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_temperature
  {
    size_t item_size = sizeof(ros_message->engine_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_coolant_temperature
  {
    size_t item_size = sizeof(ros_message->engine_coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_coolant_pressure
  {
    size_t item_size = sizeof(ros_message->engine_coolant_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_on_status
  {
    size_t item_size = sizeof(ros_message->engine_on_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_run_switch_status
  {
    size_t item_size = sizeof(ros_message->engine_run_switch_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_position
  {
    size_t item_size = sizeof(ros_message->throttle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_gear
  {
    size_t item_size = sizeof(ros_message->current_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_shift_status
  {
    size_t item_size = sizeof(ros_message->gear_shift_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmission_oil_pressure
  {
    size_t item_size = sizeof(ros_message->transmission_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmission_accumulator_pressure
  {
    size_t item_size = sizeof(ros_message->transmission_accumulator_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmission_oil_temperature
  {
    size_t item_size = sizeof(ros_message->transmission_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed_kmph
  {
    size_t item_size = sizeof(ros_message->vehicle_speed_kmph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_wheels_nm
  {
    size_t item_size = sizeof(ros_message->torque_wheels_nm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PowertrainData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autonoma_msgs__msg__PowertrainData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autonoma_msgs
size_t max_serialized_size_autonoma_msgs__msg__PowertrainData(
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
  // member: map_sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lambda_sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_coolant_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_coolant_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_on_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_run_switch_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_shift_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transmission_oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: transmission_accumulator_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: transmission_oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_speed_kmph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_wheels_nm
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
    using DataType = autonoma_msgs__msg__PowertrainData;
    is_plain =
      (
      offsetof(DataType, torque_wheels_nm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PowertrainData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autonoma_msgs__msg__PowertrainData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PowertrainData = {
  "autonoma_msgs::msg",
  "PowertrainData",
  _PowertrainData__cdr_serialize,
  _PowertrainData__cdr_deserialize,
  _PowertrainData__get_serialized_size,
  _PowertrainData__max_serialized_size
};

static rosidl_message_type_support_t _PowertrainData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PowertrainData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autonoma_msgs, msg, PowertrainData)() {
  return &_PowertrainData__type_support;
}

#if defined(__cplusplus)
}
#endif
