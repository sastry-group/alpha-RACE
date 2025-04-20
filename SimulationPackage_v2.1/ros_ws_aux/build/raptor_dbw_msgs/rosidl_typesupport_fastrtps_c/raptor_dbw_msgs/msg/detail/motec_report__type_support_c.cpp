// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/motec_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "raptor_dbw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/motec_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/motec_report__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MotecReport__ros_msg_type = raptor_dbw_msgs__msg__MotecReport;

static bool _MotecReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotecReport__ros_msg_type * ros_message = static_cast<const _MotecReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: engine_speed
  {
    cdr << ros_message->engine_speed;
  }

  // Field name: inlet_manifold_pressure
  {
    cdr << ros_message->inlet_manifold_pressure;
  }

  // Field name: inlet_air_temperature
  {
    cdr << ros_message->inlet_air_temperature;
  }

  // Field name: throttle_position
  {
    cdr << ros_message->throttle_position;
  }

  // Field name: fuel_pressure_sensor
  {
    cdr << ros_message->fuel_pressure_sensor;
  }

  // Field name: engine_efficiency
  {
    cdr << ros_message->engine_efficiency;
  }

  // Field name: throttle_pedal
  {
    cdr << ros_message->throttle_pedal;
  }

  // Field name: engine_load
  {
    cdr << ros_message->engine_load;
  }

  // Field name: engine_oil_temperature
  {
    cdr << ros_message->engine_oil_temperature;
  }

  // Field name: ambient_temperature
  {
    cdr << ros_message->ambient_temperature;
  }

  // Field name: engine_oil_pressure
  {
    cdr << ros_message->engine_oil_pressure;
  }

  // Field name: boost_pressure
  {
    cdr << ros_message->boost_pressure;
  }

  // Field name: boost_aim
  {
    cdr << ros_message->boost_aim;
  }

  // Field name: wheel_speed_front_left
  {
    cdr << ros_message->wheel_speed_front_left;
  }

  // Field name: wheel_speed_front_right
  {
    cdr << ros_message->wheel_speed_front_right;
  }

  // Field name: wheel_speed_rear_left
  {
    cdr << ros_message->wheel_speed_rear_left;
  }

  // Field name: wheel_speed_rear_right
  {
    cdr << ros_message->wheel_speed_rear_right;
  }

  // Field name: engine_run_time
  {
    cdr << ros_message->engine_run_time;
  }

  // Field name: ecu_up_time
  {
    cdr << ros_message->ecu_up_time;
  }

  // Field name: ecu_battery_voltage
  {
    cdr << ros_message->ecu_battery_voltage;
  }

  // Field name: warning_source
  {
    cdr << ros_message->warning_source;
  }

  // Field name: coolant_temperature
  {
    cdr << ros_message->coolant_temperature;
  }

  // Field name: coolant_temperature_warning
  {
    cdr << (ros_message->coolant_temperature_warning ? true : false);
  }

  // Field name: coolant_pressure_warning
  {
    cdr << (ros_message->coolant_pressure_warning ? true : false);
  }

  // Field name: engine_speed_warning
  {
    cdr << (ros_message->engine_speed_warning ? true : false);
  }

  // Field name: engine_oil_temperature_warning
  {
    cdr << (ros_message->engine_oil_temperature_warning ? true : false);
  }

  // Field name: engine_oil_pressure_warning
  {
    cdr << (ros_message->engine_oil_pressure_warning ? true : false);
  }

  // Field name: crankcase_pressure_warning
  {
    cdr << (ros_message->crankcase_pressure_warning ? true : false);
  }

  // Field name: fuel_pressure_warning
  {
    cdr << (ros_message->fuel_pressure_warning ? true : false);
  }

  // Field name: fuel_used
  {
    cdr << ros_message->fuel_used;
  }

  // Field name: knock_warning
  {
    cdr << (ros_message->knock_warning ? true : false);
  }

  // Field name: engine_state
  {
    cdr << ros_message->engine_state;
  }

  // Field name: fuel_pump_state
  {
    cdr << ros_message->fuel_pump_state;
  }

  // Field name: launch_state
  {
    cdr << ros_message->launch_state;
  }

  // Field name: boost_aim_state
  {
    cdr << ros_message->boost_aim_state;
  }

  // Field name: knock_state
  {
    cdr << ros_message->knock_state;
  }

  // Field name: throttle_aim_state
  {
    cdr << ros_message->throttle_aim_state;
  }

  // Field name: engine_speed_reference_state
  {
    cdr << ros_message->engine_speed_reference_state;
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: engine_speed_limit_state
  {
    cdr << ros_message->engine_speed_limit_state;
  }

  // Field name: engine_run_time_total
  {
    cdr << ros_message->engine_run_time_total;
  }

  // Field name: driver_switch_1
  {
    cdr << ros_message->driver_switch_1;
  }

  // Field name: driver_switch_2
  {
    cdr << ros_message->driver_switch_2;
  }

  // Field name: driver_switch_3
  {
    cdr << ros_message->driver_switch_3;
  }

  // Field name: exhaust_lambda
  {
    cdr << ros_message->exhaust_lambda;
  }

  // Field name: fuel_pressure_direct_b1
  {
    cdr << ros_message->fuel_pressure_direct_b1;
  }

  // Field name: fuel_pressure_direct_b1_aim
  {
    cdr << ros_message->fuel_pressure_direct_b1_aim;
  }

  // Field name: fuel_pressure_direct_b1_control
  {
    cdr << ros_message->fuel_pressure_direct_b1_control;
  }

  // Field name: vehicle_speed
  {
    cdr << ros_message->vehicle_speed;
  }

  // Field name: gearratio
  {
    cdr << ros_message->gearratio;
  }

  // Field name: gear_100hz
  {
    cdr << ros_message->gear_100hz;
  }

  // Field name: gear_shift
  {
    cdr << ros_message->gear_shift;
  }

  // Field name: gear_shift_req
  {
    cdr << ros_message->gear_shift_req;
  }

  // Field name: torque_wheels
  {
    cdr << ros_message->torque_wheels;
  }

  // Field name: fr_wheel_speed_sensor_fault
  {
    cdr << ros_message->fr_wheel_speed_sensor_fault;
  }

  // Field name: fl_wheel_speed_sensor_fault
  {
    cdr << ros_message->fl_wheel_speed_sensor_fault;
  }

  // Field name: rr_wheel_speed_sensor_fault
  {
    cdr << ros_message->rr_wheel_speed_sensor_fault;
  }

  // Field name: rl_wheel_speed_sensor_fault
  {
    cdr << ros_message->rl_wheel_speed_sensor_fault;
  }

  return true;
}

static bool _MotecReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotecReport__ros_msg_type * ros_message = static_cast<_MotecReport__ros_msg_type *>(untyped_ros_message);
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

  // Field name: engine_speed
  {
    cdr >> ros_message->engine_speed;
  }

  // Field name: inlet_manifold_pressure
  {
    cdr >> ros_message->inlet_manifold_pressure;
  }

  // Field name: inlet_air_temperature
  {
    cdr >> ros_message->inlet_air_temperature;
  }

  // Field name: throttle_position
  {
    cdr >> ros_message->throttle_position;
  }

  // Field name: fuel_pressure_sensor
  {
    cdr >> ros_message->fuel_pressure_sensor;
  }

  // Field name: engine_efficiency
  {
    cdr >> ros_message->engine_efficiency;
  }

  // Field name: throttle_pedal
  {
    cdr >> ros_message->throttle_pedal;
  }

  // Field name: engine_load
  {
    cdr >> ros_message->engine_load;
  }

  // Field name: engine_oil_temperature
  {
    cdr >> ros_message->engine_oil_temperature;
  }

  // Field name: ambient_temperature
  {
    cdr >> ros_message->ambient_temperature;
  }

  // Field name: engine_oil_pressure
  {
    cdr >> ros_message->engine_oil_pressure;
  }

  // Field name: boost_pressure
  {
    cdr >> ros_message->boost_pressure;
  }

  // Field name: boost_aim
  {
    cdr >> ros_message->boost_aim;
  }

  // Field name: wheel_speed_front_left
  {
    cdr >> ros_message->wheel_speed_front_left;
  }

  // Field name: wheel_speed_front_right
  {
    cdr >> ros_message->wheel_speed_front_right;
  }

  // Field name: wheel_speed_rear_left
  {
    cdr >> ros_message->wheel_speed_rear_left;
  }

  // Field name: wheel_speed_rear_right
  {
    cdr >> ros_message->wheel_speed_rear_right;
  }

  // Field name: engine_run_time
  {
    cdr >> ros_message->engine_run_time;
  }

  // Field name: ecu_up_time
  {
    cdr >> ros_message->ecu_up_time;
  }

  // Field name: ecu_battery_voltage
  {
    cdr >> ros_message->ecu_battery_voltage;
  }

  // Field name: warning_source
  {
    cdr >> ros_message->warning_source;
  }

  // Field name: coolant_temperature
  {
    cdr >> ros_message->coolant_temperature;
  }

  // Field name: coolant_temperature_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->coolant_temperature_warning = tmp ? true : false;
  }

  // Field name: coolant_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->coolant_pressure_warning = tmp ? true : false;
  }

  // Field name: engine_speed_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_speed_warning = tmp ? true : false;
  }

  // Field name: engine_oil_temperature_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_oil_temperature_warning = tmp ? true : false;
  }

  // Field name: engine_oil_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_oil_pressure_warning = tmp ? true : false;
  }

  // Field name: crankcase_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->crankcase_pressure_warning = tmp ? true : false;
  }

  // Field name: fuel_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fuel_pressure_warning = tmp ? true : false;
  }

  // Field name: fuel_used
  {
    cdr >> ros_message->fuel_used;
  }

  // Field name: knock_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->knock_warning = tmp ? true : false;
  }

  // Field name: engine_state
  {
    cdr >> ros_message->engine_state;
  }

  // Field name: fuel_pump_state
  {
    cdr >> ros_message->fuel_pump_state;
  }

  // Field name: launch_state
  {
    cdr >> ros_message->launch_state;
  }

  // Field name: boost_aim_state
  {
    cdr >> ros_message->boost_aim_state;
  }

  // Field name: knock_state
  {
    cdr >> ros_message->knock_state;
  }

  // Field name: throttle_aim_state
  {
    cdr >> ros_message->throttle_aim_state;
  }

  // Field name: engine_speed_reference_state
  {
    cdr >> ros_message->engine_speed_reference_state;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: engine_speed_limit_state
  {
    cdr >> ros_message->engine_speed_limit_state;
  }

  // Field name: engine_run_time_total
  {
    cdr >> ros_message->engine_run_time_total;
  }

  // Field name: driver_switch_1
  {
    cdr >> ros_message->driver_switch_1;
  }

  // Field name: driver_switch_2
  {
    cdr >> ros_message->driver_switch_2;
  }

  // Field name: driver_switch_3
  {
    cdr >> ros_message->driver_switch_3;
  }

  // Field name: exhaust_lambda
  {
    cdr >> ros_message->exhaust_lambda;
  }

  // Field name: fuel_pressure_direct_b1
  {
    cdr >> ros_message->fuel_pressure_direct_b1;
  }

  // Field name: fuel_pressure_direct_b1_aim
  {
    cdr >> ros_message->fuel_pressure_direct_b1_aim;
  }

  // Field name: fuel_pressure_direct_b1_control
  {
    cdr >> ros_message->fuel_pressure_direct_b1_control;
  }

  // Field name: vehicle_speed
  {
    cdr >> ros_message->vehicle_speed;
  }

  // Field name: gearratio
  {
    cdr >> ros_message->gearratio;
  }

  // Field name: gear_100hz
  {
    cdr >> ros_message->gear_100hz;
  }

  // Field name: gear_shift
  {
    cdr >> ros_message->gear_shift;
  }

  // Field name: gear_shift_req
  {
    cdr >> ros_message->gear_shift_req;
  }

  // Field name: torque_wheels
  {
    cdr >> ros_message->torque_wheels;
  }

  // Field name: fr_wheel_speed_sensor_fault
  {
    cdr >> ros_message->fr_wheel_speed_sensor_fault;
  }

  // Field name: fl_wheel_speed_sensor_fault
  {
    cdr >> ros_message->fl_wheel_speed_sensor_fault;
  }

  // Field name: rr_wheel_speed_sensor_fault
  {
    cdr >> ros_message->rr_wheel_speed_sensor_fault;
  }

  // Field name: rl_wheel_speed_sensor_fault
  {
    cdr >> ros_message->rl_wheel_speed_sensor_fault;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t get_serialized_size_raptor_dbw_msgs__msg__MotecReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotecReport__ros_msg_type * ros_message = static_cast<const _MotecReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name engine_speed
  {
    size_t item_size = sizeof(ros_message->engine_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inlet_manifold_pressure
  {
    size_t item_size = sizeof(ros_message->inlet_manifold_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inlet_air_temperature
  {
    size_t item_size = sizeof(ros_message->inlet_air_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_position
  {
    size_t item_size = sizeof(ros_message->throttle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure_sensor
  {
    size_t item_size = sizeof(ros_message->fuel_pressure_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_efficiency
  {
    size_t item_size = sizeof(ros_message->engine_efficiency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_pedal
  {
    size_t item_size = sizeof(ros_message->throttle_pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_load
  {
    size_t item_size = sizeof(ros_message->engine_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_temperature
  {
    size_t item_size = sizeof(ros_message->engine_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ambient_temperature
  {
    size_t item_size = sizeof(ros_message->ambient_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_pressure
  {
    size_t item_size = sizeof(ros_message->engine_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boost_pressure
  {
    size_t item_size = sizeof(ros_message->boost_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boost_aim
  {
    size_t item_size = sizeof(ros_message->boost_aim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_speed_front_left
  {
    size_t item_size = sizeof(ros_message->wheel_speed_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_speed_front_right
  {
    size_t item_size = sizeof(ros_message->wheel_speed_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_speed_rear_left
  {
    size_t item_size = sizeof(ros_message->wheel_speed_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_speed_rear_right
  {
    size_t item_size = sizeof(ros_message->wheel_speed_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_run_time
  {
    size_t item_size = sizeof(ros_message->engine_run_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecu_up_time
  {
    size_t item_size = sizeof(ros_message->ecu_up_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecu_battery_voltage
  {
    size_t item_size = sizeof(ros_message->ecu_battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name warning_source
  {
    size_t item_size = sizeof(ros_message->warning_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coolant_temperature
  {
    size_t item_size = sizeof(ros_message->coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coolant_temperature_warning
  {
    size_t item_size = sizeof(ros_message->coolant_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coolant_pressure_warning
  {
    size_t item_size = sizeof(ros_message->coolant_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_speed_warning
  {
    size_t item_size = sizeof(ros_message->engine_speed_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_temperature_warning
  {
    size_t item_size = sizeof(ros_message->engine_oil_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_oil_pressure_warning
  {
    size_t item_size = sizeof(ros_message->engine_oil_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crankcase_pressure_warning
  {
    size_t item_size = sizeof(ros_message->crankcase_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure_warning
  {
    size_t item_size = sizeof(ros_message->fuel_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_used
  {
    size_t item_size = sizeof(ros_message->fuel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name knock_warning
  {
    size_t item_size = sizeof(ros_message->knock_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_state
  {
    size_t item_size = sizeof(ros_message->engine_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pump_state
  {
    size_t item_size = sizeof(ros_message->fuel_pump_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name launch_state
  {
    size_t item_size = sizeof(ros_message->launch_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boost_aim_state
  {
    size_t item_size = sizeof(ros_message->boost_aim_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name knock_state
  {
    size_t item_size = sizeof(ros_message->knock_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_aim_state
  {
    size_t item_size = sizeof(ros_message->throttle_aim_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_speed_reference_state
  {
    size_t item_size = sizeof(ros_message->engine_speed_reference_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_speed_limit_state
  {
    size_t item_size = sizeof(ros_message->engine_speed_limit_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_run_time_total
  {
    size_t item_size = sizeof(ros_message->engine_run_time_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_switch_1
  {
    size_t item_size = sizeof(ros_message->driver_switch_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_switch_2
  {
    size_t item_size = sizeof(ros_message->driver_switch_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name driver_switch_3
  {
    size_t item_size = sizeof(ros_message->driver_switch_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exhaust_lambda
  {
    size_t item_size = sizeof(ros_message->exhaust_lambda);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure_direct_b1
  {
    size_t item_size = sizeof(ros_message->fuel_pressure_direct_b1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure_direct_b1_aim
  {
    size_t item_size = sizeof(ros_message->fuel_pressure_direct_b1_aim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure_direct_b1_control
  {
    size_t item_size = sizeof(ros_message->fuel_pressure_direct_b1_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed
  {
    size_t item_size = sizeof(ros_message->vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gearratio
  {
    size_t item_size = sizeof(ros_message->gearratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_100hz
  {
    size_t item_size = sizeof(ros_message->gear_100hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_shift
  {
    size_t item_size = sizeof(ros_message->gear_shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_shift_req
  {
    size_t item_size = sizeof(ros_message->gear_shift_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_wheels
  {
    size_t item_size = sizeof(ros_message->torque_wheels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message->fr_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fl_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message->fl_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message->rr_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message->rl_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotecReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_raptor_dbw_msgs__msg__MotecReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_raptor_dbw_msgs
size_t max_serialized_size_raptor_dbw_msgs__msg__MotecReport(
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
  // member: engine_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: inlet_manifold_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: inlet_air_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure_sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_efficiency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_pedal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: engine_load
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
  // member: ambient_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: boost_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: boost_aim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_speed_front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_speed_front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_speed_rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_speed_rear_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_run_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ecu_up_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ecu_battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: warning_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: coolant_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: coolant_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: coolant_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_speed_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_oil_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_oil_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crankcase_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fuel_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fuel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: knock_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pump_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: launch_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: boost_aim_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: knock_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_aim_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_speed_reference_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_speed_limit_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_run_time_total
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driver_switch_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driver_switch_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: driver_switch_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: exhaust_lambda
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure_direct_b1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure_direct_b1_aim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure_direct_b1_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gearratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_100hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_shift_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_wheels
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_wheel_speed_sensor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fl_wheel_speed_sensor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_wheel_speed_sensor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_wheel_speed_sensor_fault
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
    using DataType = raptor_dbw_msgs__msg__MotecReport;
    is_plain =
      (
      offsetof(DataType, rl_wheel_speed_sensor_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotecReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_raptor_dbw_msgs__msg__MotecReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotecReport = {
  "raptor_dbw_msgs::msg",
  "MotecReport",
  _MotecReport__cdr_serialize,
  _MotecReport__cdr_deserialize,
  _MotecReport__get_serialized_size,
  _MotecReport__max_serialized_size
};

static rosidl_message_type_support_t _MotecReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotecReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, raptor_dbw_msgs, msg, MotecReport)() {
  return &_MotecReport__type_support;
}

#if defined(__cplusplus)
}
#endif
