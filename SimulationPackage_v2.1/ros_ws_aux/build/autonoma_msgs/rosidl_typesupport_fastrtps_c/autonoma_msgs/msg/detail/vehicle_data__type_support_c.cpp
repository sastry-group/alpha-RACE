// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "autonoma_msgs/msg/detail/vehicle_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autonoma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autonoma_msgs/msg/detail/vehicle_data__struct.h"
#include "autonoma_msgs/msg/detail/vehicle_data__functions.h"
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


using _VehicleData__ros_msg_type = autonoma_msgs__msg__VehicleData;

static bool _VehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleData__ros_msg_type * ros_message = static_cast<const _VehicleData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fl_tire_temperature
  {
    cdr << ros_message->fl_tire_temperature;
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
    cdr << ros_message->fr_tire_temperature;
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
    cdr << ros_message->rl_tire_temperature;
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
    cdr << ros_message->rr_tire_temperature;
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

  // Field name: fl_brake_temp
  {
    cdr << ros_message->fl_brake_temp;
  }

  // Field name: fr_brake_temp
  {
    cdr << ros_message->fr_brake_temp;
  }

  // Field name: rl_brake_temp
  {
    cdr << ros_message->rl_brake_temp;
  }

  // Field name: rr_brake_temp
  {
    cdr << ros_message->rr_brake_temp;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: safety_switch_state
  {
    cdr << ros_message->safety_switch_state;
  }

  // Field name: mode_switch_state
  {
    cdr << (ros_message->mode_switch_state ? true : false);
  }

  // Field name: sys_state
  {
    cdr << ros_message->sys_state;
  }

  // Field name: accel_pedal_input
  {
    cdr << ros_message->accel_pedal_input;
  }

  // Field name: accel_pedal_output
  {
    cdr << ros_message->accel_pedal_output;
  }

  // Field name: front_brake_pressure
  {
    cdr << ros_message->front_brake_pressure;
  }

  // Field name: rear_brake_pressure
  {
    cdr << ros_message->rear_brake_pressure;
  }

  // Field name: steering_wheel_angle
  {
    cdr << ros_message->steering_wheel_angle;
  }

  // Field name: steering_wheel_angle_cmd
  {
    cdr << ros_message->steering_wheel_angle_cmd;
  }

  // Field name: steering_wheel_torque
  {
    cdr << ros_message->steering_wheel_torque;
  }

  // Field name: ws_front_left
  {
    cdr << ros_message->ws_front_left;
  }

  // Field name: ws_front_right
  {
    cdr << ros_message->ws_front_right;
  }

  // Field name: ws_rear_left
  {
    cdr << ros_message->ws_rear_left;
  }

  // Field name: ws_rear_right
  {
    cdr << ros_message->ws_rear_right;
  }

  return true;
}

static bool _VehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleData__ros_msg_type * ros_message = static_cast<_VehicleData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fl_tire_temperature
  {
    cdr >> ros_message->fl_tire_temperature;
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
    cdr >> ros_message->fr_tire_temperature;
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
    cdr >> ros_message->rl_tire_temperature;
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
    cdr >> ros_message->rr_tire_temperature;
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

  // Field name: fl_brake_temp
  {
    cdr >> ros_message->fl_brake_temp;
  }

  // Field name: fr_brake_temp
  {
    cdr >> ros_message->fr_brake_temp;
  }

  // Field name: rl_brake_temp
  {
    cdr >> ros_message->rl_brake_temp;
  }

  // Field name: rr_brake_temp
  {
    cdr >> ros_message->rr_brake_temp;
  }

  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: safety_switch_state
  {
    cdr >> ros_message->safety_switch_state;
  }

  // Field name: mode_switch_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_switch_state = tmp ? true : false;
  }

  // Field name: sys_state
  {
    cdr >> ros_message->sys_state;
  }

  // Field name: accel_pedal_input
  {
    cdr >> ros_message->accel_pedal_input;
  }

  // Field name: accel_pedal_output
  {
    cdr >> ros_message->accel_pedal_output;
  }

  // Field name: front_brake_pressure
  {
    cdr >> ros_message->front_brake_pressure;
  }

  // Field name: rear_brake_pressure
  {
    cdr >> ros_message->rear_brake_pressure;
  }

  // Field name: steering_wheel_angle
  {
    cdr >> ros_message->steering_wheel_angle;
  }

  // Field name: steering_wheel_angle_cmd
  {
    cdr >> ros_message->steering_wheel_angle_cmd;
  }

  // Field name: steering_wheel_torque
  {
    cdr >> ros_message->steering_wheel_torque;
  }

  // Field name: ws_front_left
  {
    cdr >> ros_message->ws_front_left;
  }

  // Field name: ws_front_right
  {
    cdr >> ros_message->ws_front_right;
  }

  // Field name: ws_rear_left
  {
    cdr >> ros_message->ws_rear_left;
  }

  // Field name: ws_rear_right
  {
    cdr >> ros_message->ws_rear_right;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autonoma_msgs
size_t get_serialized_size_autonoma_msgs__msg__VehicleData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleData__ros_msg_type * ros_message = static_cast<const _VehicleData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name fl_tire_temperature
  {
    size_t item_size = sizeof(ros_message->fl_tire_temperature);
    current_alignment += item_size +
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
    size_t item_size = sizeof(ros_message->fr_tire_temperature);
    current_alignment += item_size +
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
    size_t item_size = sizeof(ros_message->rl_tire_temperature);
    current_alignment += item_size +
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
    size_t item_size = sizeof(ros_message->rr_tire_temperature);
    current_alignment += item_size +
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
  // field.name fl_brake_temp
  {
    size_t item_size = sizeof(ros_message->fl_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_brake_temp
  {
    size_t item_size = sizeof(ros_message->fr_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_brake_temp
  {
    size_t item_size = sizeof(ros_message->rl_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_brake_temp
  {
    size_t item_size = sizeof(ros_message->rr_brake_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_switch_state
  {
    size_t item_size = sizeof(ros_message->safety_switch_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_switch_state
  {
    size_t item_size = sizeof(ros_message->mode_switch_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sys_state
  {
    size_t item_size = sizeof(ros_message->sys_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_pedal_input
  {
    size_t item_size = sizeof(ros_message->accel_pedal_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_pedal_output
  {
    size_t item_size = sizeof(ros_message->accel_pedal_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_brake_pressure
  {
    size_t item_size = sizeof(ros_message->front_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_brake_pressure
  {
    size_t item_size = sizeof(ros_message->rear_brake_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_wheel_angle
  {
    size_t item_size = sizeof(ros_message->steering_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_wheel_angle_cmd
  {
    size_t item_size = sizeof(ros_message->steering_wheel_angle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_wheel_torque
  {
    size_t item_size = sizeof(ros_message->steering_wheel_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ws_front_left
  {
    size_t item_size = sizeof(ros_message->ws_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ws_front_right
  {
    size_t item_size = sizeof(ros_message->ws_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ws_rear_left
  {
    size_t item_size = sizeof(ros_message->ws_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ws_rear_right
  {
    size_t item_size = sizeof(ros_message->ws_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autonoma_msgs__msg__VehicleData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autonoma_msgs
size_t max_serialized_size_autonoma_msgs__msg__VehicleData(
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
  // member: fl_tire_temperature
  {
    size_t array_size = 1;

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
    size_t array_size = 1;

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
    size_t array_size = 1;

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
    size_t array_size = 1;

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
  // member: fl_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_brake_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: safety_switch_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_switch_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sys_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_pedal_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_pedal_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_brake_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_wheel_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_wheel_angle_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_wheel_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ws_front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ws_front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ws_rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ws_rear_right
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
    using DataType = autonoma_msgs__msg__VehicleData;
    is_plain =
      (
      offsetof(DataType, ws_rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autonoma_msgs__msg__VehicleData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleData = {
  "autonoma_msgs::msg",
  "VehicleData",
  _VehicleData__cdr_serialize,
  _VehicleData__cdr_deserialize,
  _VehicleData__get_serialized_size,
  _VehicleData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autonoma_msgs, msg, VehicleData)() {
  return &_VehicleData__type_support;
}

#if defined(__cplusplus)
}
#endif
