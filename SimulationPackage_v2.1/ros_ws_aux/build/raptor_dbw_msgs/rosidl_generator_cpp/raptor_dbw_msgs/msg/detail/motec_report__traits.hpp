// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__TRAITS_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raptor_dbw_msgs/msg/detail/motec_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace raptor_dbw_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotecReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: engine_speed
  {
    out << "engine_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed, out);
    out << ", ";
  }

  // member: inlet_manifold_pressure
  {
    out << "inlet_manifold_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.inlet_manifold_pressure, out);
    out << ", ";
  }

  // member: inlet_air_temperature
  {
    out << "inlet_air_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.inlet_air_temperature, out);
    out << ", ";
  }

  // member: throttle_position
  {
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << ", ";
  }

  // member: fuel_pressure_sensor
  {
    out << "fuel_pressure_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_sensor, out);
    out << ", ";
  }

  // member: engine_efficiency
  {
    out << "engine_efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_efficiency, out);
    out << ", ";
  }

  // member: throttle_pedal
  {
    out << "throttle_pedal: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_pedal, out);
    out << ", ";
  }

  // member: engine_load
  {
    out << "engine_load: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_load, out);
    out << ", ";
  }

  // member: engine_oil_temperature
  {
    out << "engine_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature, out);
    out << ", ";
  }

  // member: ambient_temperature
  {
    out << "ambient_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temperature, out);
    out << ", ";
  }

  // member: engine_oil_pressure
  {
    out << "engine_oil_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_pressure, out);
    out << ", ";
  }

  // member: boost_pressure
  {
    out << "boost_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.boost_pressure, out);
    out << ", ";
  }

  // member: boost_aim
  {
    out << "boost_aim: ";
    rosidl_generator_traits::value_to_yaml(msg.boost_aim, out);
    out << ", ";
  }

  // member: wheel_speed_front_left
  {
    out << "wheel_speed_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_front_left, out);
    out << ", ";
  }

  // member: wheel_speed_front_right
  {
    out << "wheel_speed_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_front_right, out);
    out << ", ";
  }

  // member: wheel_speed_rear_left
  {
    out << "wheel_speed_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rear_left, out);
    out << ", ";
  }

  // member: wheel_speed_rear_right
  {
    out << "wheel_speed_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rear_right, out);
    out << ", ";
  }

  // member: engine_run_time
  {
    out << "engine_run_time: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_run_time, out);
    out << ", ";
  }

  // member: ecu_up_time
  {
    out << "ecu_up_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ecu_up_time, out);
    out << ", ";
  }

  // member: ecu_battery_voltage
  {
    out << "ecu_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.ecu_battery_voltage, out);
    out << ", ";
  }

  // member: warning_source
  {
    out << "warning_source: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_source, out);
    out << ", ";
  }

  // member: coolant_temperature
  {
    out << "coolant_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temperature, out);
    out << ", ";
  }

  // member: coolant_temperature_warning
  {
    out << "coolant_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temperature_warning, out);
    out << ", ";
  }

  // member: coolant_pressure_warning
  {
    out << "coolant_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_pressure_warning, out);
    out << ", ";
  }

  // member: engine_speed_warning
  {
    out << "engine_speed_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_warning, out);
    out << ", ";
  }

  // member: engine_oil_temperature_warning
  {
    out << "engine_oil_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature_warning, out);
    out << ", ";
  }

  // member: engine_oil_pressure_warning
  {
    out << "engine_oil_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_pressure_warning, out);
    out << ", ";
  }

  // member: crankcase_pressure_warning
  {
    out << "crankcase_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.crankcase_pressure_warning, out);
    out << ", ";
  }

  // member: fuel_pressure_warning
  {
    out << "fuel_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_warning, out);
    out << ", ";
  }

  // member: fuel_used
  {
    out << "fuel_used: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_used, out);
    out << ", ";
  }

  // member: knock_warning
  {
    out << "knock_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.knock_warning, out);
    out << ", ";
  }

  // member: engine_state
  {
    out << "engine_state: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_state, out);
    out << ", ";
  }

  // member: fuel_pump_state
  {
    out << "fuel_pump_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pump_state, out);
    out << ", ";
  }

  // member: launch_state
  {
    out << "launch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.launch_state, out);
    out << ", ";
  }

  // member: boost_aim_state
  {
    out << "boost_aim_state: ";
    rosidl_generator_traits::value_to_yaml(msg.boost_aim_state, out);
    out << ", ";
  }

  // member: knock_state
  {
    out << "knock_state: ";
    rosidl_generator_traits::value_to_yaml(msg.knock_state, out);
    out << ", ";
  }

  // member: throttle_aim_state
  {
    out << "throttle_aim_state: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_aim_state, out);
    out << ", ";
  }

  // member: engine_speed_reference_state
  {
    out << "engine_speed_reference_state: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_reference_state, out);
    out << ", ";
  }

  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: engine_speed_limit_state
  {
    out << "engine_speed_limit_state: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_limit_state, out);
    out << ", ";
  }

  // member: engine_run_time_total
  {
    out << "engine_run_time_total: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_run_time_total, out);
    out << ", ";
  }

  // member: driver_switch_1
  {
    out << "driver_switch_1: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_switch_1, out);
    out << ", ";
  }

  // member: driver_switch_2
  {
    out << "driver_switch_2: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_switch_2, out);
    out << ", ";
  }

  // member: driver_switch_3
  {
    out << "driver_switch_3: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_switch_3, out);
    out << ", ";
  }

  // member: exhaust_lambda
  {
    out << "exhaust_lambda: ";
    rosidl_generator_traits::value_to_yaml(msg.exhaust_lambda, out);
    out << ", ";
  }

  // member: fuel_pressure_direct_b1
  {
    out << "fuel_pressure_direct_b1: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_direct_b1, out);
    out << ", ";
  }

  // member: fuel_pressure_direct_b1_aim
  {
    out << "fuel_pressure_direct_b1_aim: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_direct_b1_aim, out);
    out << ", ";
  }

  // member: fuel_pressure_direct_b1_control
  {
    out << "fuel_pressure_direct_b1_control: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_direct_b1_control, out);
    out << ", ";
  }

  // member: vehicle_speed
  {
    out << "vehicle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed, out);
    out << ", ";
  }

  // member: gearratio
  {
    out << "gearratio: ";
    rosidl_generator_traits::value_to_yaml(msg.gearratio, out);
    out << ", ";
  }

  // member: gear_100hz
  {
    out << "gear_100hz: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_100hz, out);
    out << ", ";
  }

  // member: gear_shift
  {
    out << "gear_shift: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_shift, out);
    out << ", ";
  }

  // member: gear_shift_req
  {
    out << "gear_shift_req: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_shift_req, out);
    out << ", ";
  }

  // member: torque_wheels
  {
    out << "torque_wheels: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_wheels, out);
    out << ", ";
  }

  // member: fr_wheel_speed_sensor_fault
  {
    out << "fr_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_wheel_speed_sensor_fault, out);
    out << ", ";
  }

  // member: fl_wheel_speed_sensor_fault
  {
    out << "fl_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_wheel_speed_sensor_fault, out);
    out << ", ";
  }

  // member: rr_wheel_speed_sensor_fault
  {
    out << "rr_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_wheel_speed_sensor_fault, out);
    out << ", ";
  }

  // member: rl_wheel_speed_sensor_fault
  {
    out << "rl_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_wheel_speed_sensor_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotecReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: engine_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed, out);
    out << "\n";
  }

  // member: inlet_manifold_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inlet_manifold_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.inlet_manifold_pressure, out);
    out << "\n";
  }

  // member: inlet_air_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inlet_air_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.inlet_air_temperature, out);
    out << "\n";
  }

  // member: throttle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << "\n";
  }

  // member: fuel_pressure_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_sensor, out);
    out << "\n";
  }

  // member: engine_efficiency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_efficiency, out);
    out << "\n";
  }

  // member: throttle_pedal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_pedal: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_pedal, out);
    out << "\n";
  }

  // member: engine_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_load: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_load, out);
    out << "\n";
  }

  // member: engine_oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature, out);
    out << "\n";
  }

  // member: ambient_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambient_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temperature, out);
    out << "\n";
  }

  // member: engine_oil_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_pressure, out);
    out << "\n";
  }

  // member: boost_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boost_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.boost_pressure, out);
    out << "\n";
  }

  // member: boost_aim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boost_aim: ";
    rosidl_generator_traits::value_to_yaml(msg.boost_aim, out);
    out << "\n";
  }

  // member: wheel_speed_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_front_left, out);
    out << "\n";
  }

  // member: wheel_speed_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_front_right, out);
    out << "\n";
  }

  // member: wheel_speed_rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rear_left, out);
    out << "\n";
  }

  // member: wheel_speed_rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rear_right, out);
    out << "\n";
  }

  // member: engine_run_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_run_time: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_run_time, out);
    out << "\n";
  }

  // member: ecu_up_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecu_up_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ecu_up_time, out);
    out << "\n";
  }

  // member: ecu_battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ecu_battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.ecu_battery_voltage, out);
    out << "\n";
  }

  // member: warning_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_source: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_source, out);
    out << "\n";
  }

  // member: coolant_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coolant_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temperature, out);
    out << "\n";
  }

  // member: coolant_temperature_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coolant_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temperature_warning, out);
    out << "\n";
  }

  // member: coolant_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coolant_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_pressure_warning, out);
    out << "\n";
  }

  // member: engine_speed_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_warning, out);
    out << "\n";
  }

  // member: engine_oil_temperature_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_temperature_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature_warning, out);
    out << "\n";
  }

  // member: engine_oil_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_pressure_warning, out);
    out << "\n";
  }

  // member: crankcase_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crankcase_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.crankcase_pressure_warning, out);
    out << "\n";
  }

  // member: fuel_pressure_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_warning, out);
    out << "\n";
  }

  // member: fuel_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_used: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_used, out);
    out << "\n";
  }

  // member: knock_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "knock_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.knock_warning, out);
    out << "\n";
  }

  // member: engine_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_state: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_state, out);
    out << "\n";
  }

  // member: fuel_pump_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pump_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pump_state, out);
    out << "\n";
  }

  // member: launch_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "launch_state: ";
    rosidl_generator_traits::value_to_yaml(msg.launch_state, out);
    out << "\n";
  }

  // member: boost_aim_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boost_aim_state: ";
    rosidl_generator_traits::value_to_yaml(msg.boost_aim_state, out);
    out << "\n";
  }

  // member: knock_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "knock_state: ";
    rosidl_generator_traits::value_to_yaml(msg.knock_state, out);
    out << "\n";
  }

  // member: throttle_aim_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_aim_state: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_aim_state, out);
    out << "\n";
  }

  // member: engine_speed_reference_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed_reference_state: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_reference_state, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: engine_speed_limit_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_speed_limit_state: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_speed_limit_state, out);
    out << "\n";
  }

  // member: engine_run_time_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_run_time_total: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_run_time_total, out);
    out << "\n";
  }

  // member: driver_switch_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_switch_1: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_switch_1, out);
    out << "\n";
  }

  // member: driver_switch_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_switch_2: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_switch_2, out);
    out << "\n";
  }

  // member: driver_switch_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_switch_3: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_switch_3, out);
    out << "\n";
  }

  // member: exhaust_lambda
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exhaust_lambda: ";
    rosidl_generator_traits::value_to_yaml(msg.exhaust_lambda, out);
    out << "\n";
  }

  // member: fuel_pressure_direct_b1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure_direct_b1: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_direct_b1, out);
    out << "\n";
  }

  // member: fuel_pressure_direct_b1_aim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure_direct_b1_aim: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_direct_b1_aim, out);
    out << "\n";
  }

  // member: fuel_pressure_direct_b1_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_pressure_direct_b1_control: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_pressure_direct_b1_control, out);
    out << "\n";
  }

  // member: vehicle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_speed, out);
    out << "\n";
  }

  // member: gearratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gearratio: ";
    rosidl_generator_traits::value_to_yaml(msg.gearratio, out);
    out << "\n";
  }

  // member: gear_100hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_100hz: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_100hz, out);
    out << "\n";
  }

  // member: gear_shift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_shift: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_shift, out);
    out << "\n";
  }

  // member: gear_shift_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_shift_req: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_shift_req, out);
    out << "\n";
  }

  // member: torque_wheels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_wheels: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_wheels, out);
    out << "\n";
  }

  // member: fr_wheel_speed_sensor_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_wheel_speed_sensor_fault, out);
    out << "\n";
  }

  // member: fl_wheel_speed_sensor_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_wheel_speed_sensor_fault, out);
    out << "\n";
  }

  // member: rr_wheel_speed_sensor_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_wheel_speed_sensor_fault, out);
    out << "\n";
  }

  // member: rl_wheel_speed_sensor_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_wheel_speed_sensor_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_wheel_speed_sensor_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotecReport & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace raptor_dbw_msgs

namespace rosidl_generator_traits
{

[[deprecated("use raptor_dbw_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const raptor_dbw_msgs::msg::MotecReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  raptor_dbw_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raptor_dbw_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const raptor_dbw_msgs::msg::MotecReport & msg)
{
  return raptor_dbw_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raptor_dbw_msgs::msg::MotecReport>()
{
  return "raptor_dbw_msgs::msg::MotecReport";
}

template<>
inline const char * name<raptor_dbw_msgs::msg::MotecReport>()
{
  return "raptor_dbw_msgs/msg/MotecReport";
}

template<>
struct has_fixed_size<raptor_dbw_msgs::msg::MotecReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<raptor_dbw_msgs::msg::MotecReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<raptor_dbw_msgs::msg::MotecReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__TRAITS_HPP_
