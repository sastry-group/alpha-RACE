// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/motec_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/motec_report__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace raptor_dbw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::MotecReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: engine_speed
  cdr << ros_message.engine_speed;
  // Member: inlet_manifold_pressure
  cdr << ros_message.inlet_manifold_pressure;
  // Member: inlet_air_temperature
  cdr << ros_message.inlet_air_temperature;
  // Member: throttle_position
  cdr << ros_message.throttle_position;
  // Member: fuel_pressure_sensor
  cdr << ros_message.fuel_pressure_sensor;
  // Member: engine_efficiency
  cdr << ros_message.engine_efficiency;
  // Member: throttle_pedal
  cdr << ros_message.throttle_pedal;
  // Member: engine_load
  cdr << ros_message.engine_load;
  // Member: engine_oil_temperature
  cdr << ros_message.engine_oil_temperature;
  // Member: ambient_temperature
  cdr << ros_message.ambient_temperature;
  // Member: engine_oil_pressure
  cdr << ros_message.engine_oil_pressure;
  // Member: boost_pressure
  cdr << ros_message.boost_pressure;
  // Member: boost_aim
  cdr << ros_message.boost_aim;
  // Member: wheel_speed_front_left
  cdr << ros_message.wheel_speed_front_left;
  // Member: wheel_speed_front_right
  cdr << ros_message.wheel_speed_front_right;
  // Member: wheel_speed_rear_left
  cdr << ros_message.wheel_speed_rear_left;
  // Member: wheel_speed_rear_right
  cdr << ros_message.wheel_speed_rear_right;
  // Member: engine_run_time
  cdr << ros_message.engine_run_time;
  // Member: ecu_up_time
  cdr << ros_message.ecu_up_time;
  // Member: ecu_battery_voltage
  cdr << ros_message.ecu_battery_voltage;
  // Member: warning_source
  cdr << ros_message.warning_source;
  // Member: coolant_temperature
  cdr << ros_message.coolant_temperature;
  // Member: coolant_temperature_warning
  cdr << (ros_message.coolant_temperature_warning ? true : false);
  // Member: coolant_pressure_warning
  cdr << (ros_message.coolant_pressure_warning ? true : false);
  // Member: engine_speed_warning
  cdr << (ros_message.engine_speed_warning ? true : false);
  // Member: engine_oil_temperature_warning
  cdr << (ros_message.engine_oil_temperature_warning ? true : false);
  // Member: engine_oil_pressure_warning
  cdr << (ros_message.engine_oil_pressure_warning ? true : false);
  // Member: crankcase_pressure_warning
  cdr << (ros_message.crankcase_pressure_warning ? true : false);
  // Member: fuel_pressure_warning
  cdr << (ros_message.fuel_pressure_warning ? true : false);
  // Member: fuel_used
  cdr << ros_message.fuel_used;
  // Member: knock_warning
  cdr << (ros_message.knock_warning ? true : false);
  // Member: engine_state
  cdr << ros_message.engine_state;
  // Member: fuel_pump_state
  cdr << ros_message.fuel_pump_state;
  // Member: launch_state
  cdr << ros_message.launch_state;
  // Member: boost_aim_state
  cdr << ros_message.boost_aim_state;
  // Member: knock_state
  cdr << ros_message.knock_state;
  // Member: throttle_aim_state
  cdr << ros_message.throttle_aim_state;
  // Member: engine_speed_reference_state
  cdr << ros_message.engine_speed_reference_state;
  // Member: gear
  cdr << ros_message.gear;
  // Member: engine_speed_limit_state
  cdr << ros_message.engine_speed_limit_state;
  // Member: engine_run_time_total
  cdr << ros_message.engine_run_time_total;
  // Member: driver_switch_1
  cdr << ros_message.driver_switch_1;
  // Member: driver_switch_2
  cdr << ros_message.driver_switch_2;
  // Member: driver_switch_3
  cdr << ros_message.driver_switch_3;
  // Member: exhaust_lambda
  cdr << ros_message.exhaust_lambda;
  // Member: fuel_pressure_direct_b1
  cdr << ros_message.fuel_pressure_direct_b1;
  // Member: fuel_pressure_direct_b1_aim
  cdr << ros_message.fuel_pressure_direct_b1_aim;
  // Member: fuel_pressure_direct_b1_control
  cdr << ros_message.fuel_pressure_direct_b1_control;
  // Member: vehicle_speed
  cdr << ros_message.vehicle_speed;
  // Member: gearratio
  cdr << ros_message.gearratio;
  // Member: gear_100hz
  cdr << ros_message.gear_100hz;
  // Member: gear_shift
  cdr << ros_message.gear_shift;
  // Member: gear_shift_req
  cdr << ros_message.gear_shift_req;
  // Member: torque_wheels
  cdr << ros_message.torque_wheels;
  // Member: fr_wheel_speed_sensor_fault
  cdr << ros_message.fr_wheel_speed_sensor_fault;
  // Member: fl_wheel_speed_sensor_fault
  cdr << ros_message.fl_wheel_speed_sensor_fault;
  // Member: rr_wheel_speed_sensor_fault
  cdr << ros_message.rr_wheel_speed_sensor_fault;
  // Member: rl_wheel_speed_sensor_fault
  cdr << ros_message.rl_wheel_speed_sensor_fault;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::MotecReport & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: engine_speed
  cdr >> ros_message.engine_speed;

  // Member: inlet_manifold_pressure
  cdr >> ros_message.inlet_manifold_pressure;

  // Member: inlet_air_temperature
  cdr >> ros_message.inlet_air_temperature;

  // Member: throttle_position
  cdr >> ros_message.throttle_position;

  // Member: fuel_pressure_sensor
  cdr >> ros_message.fuel_pressure_sensor;

  // Member: engine_efficiency
  cdr >> ros_message.engine_efficiency;

  // Member: throttle_pedal
  cdr >> ros_message.throttle_pedal;

  // Member: engine_load
  cdr >> ros_message.engine_load;

  // Member: engine_oil_temperature
  cdr >> ros_message.engine_oil_temperature;

  // Member: ambient_temperature
  cdr >> ros_message.ambient_temperature;

  // Member: engine_oil_pressure
  cdr >> ros_message.engine_oil_pressure;

  // Member: boost_pressure
  cdr >> ros_message.boost_pressure;

  // Member: boost_aim
  cdr >> ros_message.boost_aim;

  // Member: wheel_speed_front_left
  cdr >> ros_message.wheel_speed_front_left;

  // Member: wheel_speed_front_right
  cdr >> ros_message.wheel_speed_front_right;

  // Member: wheel_speed_rear_left
  cdr >> ros_message.wheel_speed_rear_left;

  // Member: wheel_speed_rear_right
  cdr >> ros_message.wheel_speed_rear_right;

  // Member: engine_run_time
  cdr >> ros_message.engine_run_time;

  // Member: ecu_up_time
  cdr >> ros_message.ecu_up_time;

  // Member: ecu_battery_voltage
  cdr >> ros_message.ecu_battery_voltage;

  // Member: warning_source
  cdr >> ros_message.warning_source;

  // Member: coolant_temperature
  cdr >> ros_message.coolant_temperature;

  // Member: coolant_temperature_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.coolant_temperature_warning = tmp ? true : false;
  }

  // Member: coolant_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.coolant_pressure_warning = tmp ? true : false;
  }

  // Member: engine_speed_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_speed_warning = tmp ? true : false;
  }

  // Member: engine_oil_temperature_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_oil_temperature_warning = tmp ? true : false;
  }

  // Member: engine_oil_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_oil_pressure_warning = tmp ? true : false;
  }

  // Member: crankcase_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.crankcase_pressure_warning = tmp ? true : false;
  }

  // Member: fuel_pressure_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fuel_pressure_warning = tmp ? true : false;
  }

  // Member: fuel_used
  cdr >> ros_message.fuel_used;

  // Member: knock_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.knock_warning = tmp ? true : false;
  }

  // Member: engine_state
  cdr >> ros_message.engine_state;

  // Member: fuel_pump_state
  cdr >> ros_message.fuel_pump_state;

  // Member: launch_state
  cdr >> ros_message.launch_state;

  // Member: boost_aim_state
  cdr >> ros_message.boost_aim_state;

  // Member: knock_state
  cdr >> ros_message.knock_state;

  // Member: throttle_aim_state
  cdr >> ros_message.throttle_aim_state;

  // Member: engine_speed_reference_state
  cdr >> ros_message.engine_speed_reference_state;

  // Member: gear
  cdr >> ros_message.gear;

  // Member: engine_speed_limit_state
  cdr >> ros_message.engine_speed_limit_state;

  // Member: engine_run_time_total
  cdr >> ros_message.engine_run_time_total;

  // Member: driver_switch_1
  cdr >> ros_message.driver_switch_1;

  // Member: driver_switch_2
  cdr >> ros_message.driver_switch_2;

  // Member: driver_switch_3
  cdr >> ros_message.driver_switch_3;

  // Member: exhaust_lambda
  cdr >> ros_message.exhaust_lambda;

  // Member: fuel_pressure_direct_b1
  cdr >> ros_message.fuel_pressure_direct_b1;

  // Member: fuel_pressure_direct_b1_aim
  cdr >> ros_message.fuel_pressure_direct_b1_aim;

  // Member: fuel_pressure_direct_b1_control
  cdr >> ros_message.fuel_pressure_direct_b1_control;

  // Member: vehicle_speed
  cdr >> ros_message.vehicle_speed;

  // Member: gearratio
  cdr >> ros_message.gearratio;

  // Member: gear_100hz
  cdr >> ros_message.gear_100hz;

  // Member: gear_shift
  cdr >> ros_message.gear_shift;

  // Member: gear_shift_req
  cdr >> ros_message.gear_shift_req;

  // Member: torque_wheels
  cdr >> ros_message.torque_wheels;

  // Member: fr_wheel_speed_sensor_fault
  cdr >> ros_message.fr_wheel_speed_sensor_fault;

  // Member: fl_wheel_speed_sensor_fault
  cdr >> ros_message.fl_wheel_speed_sensor_fault;

  // Member: rr_wheel_speed_sensor_fault
  cdr >> ros_message.rr_wheel_speed_sensor_fault;

  // Member: rl_wheel_speed_sensor_fault
  cdr >> ros_message.rl_wheel_speed_sensor_fault;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::MotecReport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: engine_speed
  {
    size_t item_size = sizeof(ros_message.engine_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inlet_manifold_pressure
  {
    size_t item_size = sizeof(ros_message.inlet_manifold_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: inlet_air_temperature
  {
    size_t item_size = sizeof(ros_message.inlet_air_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_position
  {
    size_t item_size = sizeof(ros_message.throttle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure_sensor
  {
    size_t item_size = sizeof(ros_message.fuel_pressure_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_efficiency
  {
    size_t item_size = sizeof(ros_message.engine_efficiency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_pedal
  {
    size_t item_size = sizeof(ros_message.throttle_pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_load
  {
    size_t item_size = sizeof(ros_message.engine_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_temperature
  {
    size_t item_size = sizeof(ros_message.engine_oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ambient_temperature
  {
    size_t item_size = sizeof(ros_message.ambient_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_pressure
  {
    size_t item_size = sizeof(ros_message.engine_oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boost_pressure
  {
    size_t item_size = sizeof(ros_message.boost_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boost_aim
  {
    size_t item_size = sizeof(ros_message.boost_aim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_speed_front_left
  {
    size_t item_size = sizeof(ros_message.wheel_speed_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_speed_front_right
  {
    size_t item_size = sizeof(ros_message.wheel_speed_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_speed_rear_left
  {
    size_t item_size = sizeof(ros_message.wheel_speed_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_speed_rear_right
  {
    size_t item_size = sizeof(ros_message.wheel_speed_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_run_time
  {
    size_t item_size = sizeof(ros_message.engine_run_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecu_up_time
  {
    size_t item_size = sizeof(ros_message.ecu_up_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecu_battery_voltage
  {
    size_t item_size = sizeof(ros_message.ecu_battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: warning_source
  {
    size_t item_size = sizeof(ros_message.warning_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coolant_temperature
  {
    size_t item_size = sizeof(ros_message.coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coolant_temperature_warning
  {
    size_t item_size = sizeof(ros_message.coolant_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coolant_pressure_warning
  {
    size_t item_size = sizeof(ros_message.coolant_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_speed_warning
  {
    size_t item_size = sizeof(ros_message.engine_speed_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_temperature_warning
  {
    size_t item_size = sizeof(ros_message.engine_oil_temperature_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_oil_pressure_warning
  {
    size_t item_size = sizeof(ros_message.engine_oil_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crankcase_pressure_warning
  {
    size_t item_size = sizeof(ros_message.crankcase_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure_warning
  {
    size_t item_size = sizeof(ros_message.fuel_pressure_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_used
  {
    size_t item_size = sizeof(ros_message.fuel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: knock_warning
  {
    size_t item_size = sizeof(ros_message.knock_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_state
  {
    size_t item_size = sizeof(ros_message.engine_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pump_state
  {
    size_t item_size = sizeof(ros_message.fuel_pump_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: launch_state
  {
    size_t item_size = sizeof(ros_message.launch_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boost_aim_state
  {
    size_t item_size = sizeof(ros_message.boost_aim_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: knock_state
  {
    size_t item_size = sizeof(ros_message.knock_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_aim_state
  {
    size_t item_size = sizeof(ros_message.throttle_aim_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_speed_reference_state
  {
    size_t item_size = sizeof(ros_message.engine_speed_reference_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear
  {
    size_t item_size = sizeof(ros_message.gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_speed_limit_state
  {
    size_t item_size = sizeof(ros_message.engine_speed_limit_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_run_time_total
  {
    size_t item_size = sizeof(ros_message.engine_run_time_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_switch_1
  {
    size_t item_size = sizeof(ros_message.driver_switch_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_switch_2
  {
    size_t item_size = sizeof(ros_message.driver_switch_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_switch_3
  {
    size_t item_size = sizeof(ros_message.driver_switch_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exhaust_lambda
  {
    size_t item_size = sizeof(ros_message.exhaust_lambda);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure_direct_b1
  {
    size_t item_size = sizeof(ros_message.fuel_pressure_direct_b1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure_direct_b1_aim
  {
    size_t item_size = sizeof(ros_message.fuel_pressure_direct_b1_aim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure_direct_b1_control
  {
    size_t item_size = sizeof(ros_message.fuel_pressure_direct_b1_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_speed
  {
    size_t item_size = sizeof(ros_message.vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gearratio
  {
    size_t item_size = sizeof(ros_message.gearratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_100hz
  {
    size_t item_size = sizeof(ros_message.gear_100hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_shift
  {
    size_t item_size = sizeof(ros_message.gear_shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_shift_req
  {
    size_t item_size = sizeof(ros_message.gear_shift_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_wheels
  {
    size_t item_size = sizeof(ros_message.torque_wheels);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fr_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message.fr_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fl_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message.fl_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message.rr_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_wheel_speed_sensor_fault
  {
    size_t item_size = sizeof(ros_message.rl_wheel_speed_sensor_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_MotecReport(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: engine_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: inlet_manifold_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: inlet_air_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure_sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_efficiency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_pedal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: engine_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ambient_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: boost_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: boost_aim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_speed_front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_speed_front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_speed_rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_speed_rear_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_run_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ecu_up_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ecu_battery_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: warning_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: coolant_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: coolant_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: coolant_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_speed_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_oil_temperature_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_oil_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crankcase_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fuel_pressure_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fuel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: knock_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pump_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: launch_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: boost_aim_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: knock_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_aim_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_speed_reference_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_speed_limit_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_run_time_total
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driver_switch_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driver_switch_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: driver_switch_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: exhaust_lambda
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure_direct_b1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure_direct_b1_aim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure_direct_b1_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gearratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_100hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_shift_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torque_wheels
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fr_wheel_speed_sensor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fl_wheel_speed_sensor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rr_wheel_speed_sensor_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rl_wheel_speed_sensor_fault
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
    using DataType = raptor_dbw_msgs::msg::MotecReport;
    is_plain =
      (
      offsetof(DataType, rl_wheel_speed_sensor_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotecReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::MotecReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotecReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::MotecReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotecReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::MotecReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotecReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotecReport(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotecReport__callbacks = {
  "raptor_dbw_msgs::msg",
  "MotecReport",
  _MotecReport__cdr_serialize,
  _MotecReport__cdr_deserialize,
  _MotecReport__get_serialized_size,
  _MotecReport__max_serialized_size
};

static rosidl_message_type_support_t _MotecReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotecReport__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace raptor_dbw_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<raptor_dbw_msgs::msg::MotecReport>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_MotecReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, MotecReport)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_MotecReport__handle;
}

#ifdef __cplusplus
}
#endif
