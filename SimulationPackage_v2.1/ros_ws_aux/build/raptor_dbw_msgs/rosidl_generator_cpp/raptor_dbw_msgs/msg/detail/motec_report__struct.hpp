// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/MotecReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__MotecReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__MotecReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotecReport_
{
  using Type = MotecReport_<ContainerAllocator>;

  explicit MotecReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->engine_speed = 0;
      this->inlet_manifold_pressure = 0.0f;
      this->inlet_air_temperature = 0.0f;
      this->throttle_position = 0.0f;
      this->fuel_pressure_sensor = 0.0f;
      this->engine_efficiency = 0;
      this->throttle_pedal = 0;
      this->engine_load = 0.0f;
      this->engine_oil_temperature = 0.0f;
      this->ambient_temperature = 0;
      this->engine_oil_pressure = 0;
      this->boost_pressure = 0.0f;
      this->boost_aim = 0.0f;
      this->wheel_speed_front_left = 0.0f;
      this->wheel_speed_front_right = 0.0f;
      this->wheel_speed_rear_left = 0.0f;
      this->wheel_speed_rear_right = 0.0f;
      this->engine_run_time = 0;
      this->ecu_up_time = 0;
      this->ecu_battery_voltage = 0.0f;
      this->warning_source = 0;
      this->coolant_temperature = 0.0f;
      this->coolant_temperature_warning = false;
      this->coolant_pressure_warning = false;
      this->engine_speed_warning = false;
      this->engine_oil_temperature_warning = false;
      this->engine_oil_pressure_warning = false;
      this->crankcase_pressure_warning = false;
      this->fuel_pressure_warning = false;
      this->fuel_used = 0.0f;
      this->knock_warning = false;
      this->engine_state = 0.0f;
      this->fuel_pump_state = 0.0f;
      this->launch_state = 0.0f;
      this->boost_aim_state = 0.0f;
      this->knock_state = 0.0f;
      this->throttle_aim_state = 0.0f;
      this->engine_speed_reference_state = 0.0f;
      this->gear = 0.0f;
      this->engine_speed_limit_state = 0.0f;
      this->engine_run_time_total = 0.0f;
      this->driver_switch_1 = 0.0f;
      this->driver_switch_2 = 0.0f;
      this->driver_switch_3 = 0.0f;
      this->exhaust_lambda = 0.0f;
      this->fuel_pressure_direct_b1 = 0.0f;
      this->fuel_pressure_direct_b1_aim = 0.0f;
      this->fuel_pressure_direct_b1_control = 0.0f;
      this->vehicle_speed = 0.0f;
      this->gearratio = 0.0f;
      this->gear_100hz = 0.0f;
      this->gear_shift = 0.0f;
      this->gear_shift_req = 0.0f;
      this->torque_wheels = 0.0f;
      this->fr_wheel_speed_sensor_fault = 0.0f;
      this->fl_wheel_speed_sensor_fault = 0.0f;
      this->rr_wheel_speed_sensor_fault = 0.0f;
      this->rl_wheel_speed_sensor_fault = 0.0f;
    }
  }

  explicit MotecReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->engine_speed = 0;
      this->inlet_manifold_pressure = 0.0f;
      this->inlet_air_temperature = 0.0f;
      this->throttle_position = 0.0f;
      this->fuel_pressure_sensor = 0.0f;
      this->engine_efficiency = 0;
      this->throttle_pedal = 0;
      this->engine_load = 0.0f;
      this->engine_oil_temperature = 0.0f;
      this->ambient_temperature = 0;
      this->engine_oil_pressure = 0;
      this->boost_pressure = 0.0f;
      this->boost_aim = 0.0f;
      this->wheel_speed_front_left = 0.0f;
      this->wheel_speed_front_right = 0.0f;
      this->wheel_speed_rear_left = 0.0f;
      this->wheel_speed_rear_right = 0.0f;
      this->engine_run_time = 0;
      this->ecu_up_time = 0;
      this->ecu_battery_voltage = 0.0f;
      this->warning_source = 0;
      this->coolant_temperature = 0.0f;
      this->coolant_temperature_warning = false;
      this->coolant_pressure_warning = false;
      this->engine_speed_warning = false;
      this->engine_oil_temperature_warning = false;
      this->engine_oil_pressure_warning = false;
      this->crankcase_pressure_warning = false;
      this->fuel_pressure_warning = false;
      this->fuel_used = 0.0f;
      this->knock_warning = false;
      this->engine_state = 0.0f;
      this->fuel_pump_state = 0.0f;
      this->launch_state = 0.0f;
      this->boost_aim_state = 0.0f;
      this->knock_state = 0.0f;
      this->throttle_aim_state = 0.0f;
      this->engine_speed_reference_state = 0.0f;
      this->gear = 0.0f;
      this->engine_speed_limit_state = 0.0f;
      this->engine_run_time_total = 0.0f;
      this->driver_switch_1 = 0.0f;
      this->driver_switch_2 = 0.0f;
      this->driver_switch_3 = 0.0f;
      this->exhaust_lambda = 0.0f;
      this->fuel_pressure_direct_b1 = 0.0f;
      this->fuel_pressure_direct_b1_aim = 0.0f;
      this->fuel_pressure_direct_b1_control = 0.0f;
      this->vehicle_speed = 0.0f;
      this->gearratio = 0.0f;
      this->gear_100hz = 0.0f;
      this->gear_shift = 0.0f;
      this->gear_shift_req = 0.0f;
      this->torque_wheels = 0.0f;
      this->fr_wheel_speed_sensor_fault = 0.0f;
      this->fl_wheel_speed_sensor_fault = 0.0f;
      this->rr_wheel_speed_sensor_fault = 0.0f;
      this->rl_wheel_speed_sensor_fault = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _engine_speed_type =
    uint16_t;
  _engine_speed_type engine_speed;
  using _inlet_manifold_pressure_type =
    float;
  _inlet_manifold_pressure_type inlet_manifold_pressure;
  using _inlet_air_temperature_type =
    float;
  _inlet_air_temperature_type inlet_air_temperature;
  using _throttle_position_type =
    float;
  _throttle_position_type throttle_position;
  using _fuel_pressure_sensor_type =
    float;
  _fuel_pressure_sensor_type fuel_pressure_sensor;
  using _engine_efficiency_type =
    uint8_t;
  _engine_efficiency_type engine_efficiency;
  using _throttle_pedal_type =
    uint16_t;
  _throttle_pedal_type throttle_pedal;
  using _engine_load_type =
    float;
  _engine_load_type engine_load;
  using _engine_oil_temperature_type =
    float;
  _engine_oil_temperature_type engine_oil_temperature;
  using _ambient_temperature_type =
    uint8_t;
  _ambient_temperature_type ambient_temperature;
  using _engine_oil_pressure_type =
    uint16_t;
  _engine_oil_pressure_type engine_oil_pressure;
  using _boost_pressure_type =
    float;
  _boost_pressure_type boost_pressure;
  using _boost_aim_type =
    float;
  _boost_aim_type boost_aim;
  using _wheel_speed_front_left_type =
    float;
  _wheel_speed_front_left_type wheel_speed_front_left;
  using _wheel_speed_front_right_type =
    float;
  _wheel_speed_front_right_type wheel_speed_front_right;
  using _wheel_speed_rear_left_type =
    float;
  _wheel_speed_rear_left_type wheel_speed_rear_left;
  using _wheel_speed_rear_right_type =
    float;
  _wheel_speed_rear_right_type wheel_speed_rear_right;
  using _engine_run_time_type =
    uint16_t;
  _engine_run_time_type engine_run_time;
  using _ecu_up_time_type =
    uint16_t;
  _ecu_up_time_type ecu_up_time;
  using _ecu_battery_voltage_type =
    float;
  _ecu_battery_voltage_type ecu_battery_voltage;
  using _warning_source_type =
    uint8_t;
  _warning_source_type warning_source;
  using _coolant_temperature_type =
    float;
  _coolant_temperature_type coolant_temperature;
  using _coolant_temperature_warning_type =
    bool;
  _coolant_temperature_warning_type coolant_temperature_warning;
  using _coolant_pressure_warning_type =
    bool;
  _coolant_pressure_warning_type coolant_pressure_warning;
  using _engine_speed_warning_type =
    bool;
  _engine_speed_warning_type engine_speed_warning;
  using _engine_oil_temperature_warning_type =
    bool;
  _engine_oil_temperature_warning_type engine_oil_temperature_warning;
  using _engine_oil_pressure_warning_type =
    bool;
  _engine_oil_pressure_warning_type engine_oil_pressure_warning;
  using _crankcase_pressure_warning_type =
    bool;
  _crankcase_pressure_warning_type crankcase_pressure_warning;
  using _fuel_pressure_warning_type =
    bool;
  _fuel_pressure_warning_type fuel_pressure_warning;
  using _fuel_used_type =
    float;
  _fuel_used_type fuel_used;
  using _knock_warning_type =
    bool;
  _knock_warning_type knock_warning;
  using _engine_state_type =
    float;
  _engine_state_type engine_state;
  using _fuel_pump_state_type =
    float;
  _fuel_pump_state_type fuel_pump_state;
  using _launch_state_type =
    float;
  _launch_state_type launch_state;
  using _boost_aim_state_type =
    float;
  _boost_aim_state_type boost_aim_state;
  using _knock_state_type =
    float;
  _knock_state_type knock_state;
  using _throttle_aim_state_type =
    float;
  _throttle_aim_state_type throttle_aim_state;
  using _engine_speed_reference_state_type =
    float;
  _engine_speed_reference_state_type engine_speed_reference_state;
  using _gear_type =
    float;
  _gear_type gear;
  using _engine_speed_limit_state_type =
    float;
  _engine_speed_limit_state_type engine_speed_limit_state;
  using _engine_run_time_total_type =
    float;
  _engine_run_time_total_type engine_run_time_total;
  using _driver_switch_1_type =
    float;
  _driver_switch_1_type driver_switch_1;
  using _driver_switch_2_type =
    float;
  _driver_switch_2_type driver_switch_2;
  using _driver_switch_3_type =
    float;
  _driver_switch_3_type driver_switch_3;
  using _exhaust_lambda_type =
    float;
  _exhaust_lambda_type exhaust_lambda;
  using _fuel_pressure_direct_b1_type =
    float;
  _fuel_pressure_direct_b1_type fuel_pressure_direct_b1;
  using _fuel_pressure_direct_b1_aim_type =
    float;
  _fuel_pressure_direct_b1_aim_type fuel_pressure_direct_b1_aim;
  using _fuel_pressure_direct_b1_control_type =
    float;
  _fuel_pressure_direct_b1_control_type fuel_pressure_direct_b1_control;
  using _vehicle_speed_type =
    float;
  _vehicle_speed_type vehicle_speed;
  using _gearratio_type =
    float;
  _gearratio_type gearratio;
  using _gear_100hz_type =
    float;
  _gear_100hz_type gear_100hz;
  using _gear_shift_type =
    float;
  _gear_shift_type gear_shift;
  using _gear_shift_req_type =
    float;
  _gear_shift_req_type gear_shift_req;
  using _torque_wheels_type =
    float;
  _torque_wheels_type torque_wheels;
  using _fr_wheel_speed_sensor_fault_type =
    float;
  _fr_wheel_speed_sensor_fault_type fr_wheel_speed_sensor_fault;
  using _fl_wheel_speed_sensor_fault_type =
    float;
  _fl_wheel_speed_sensor_fault_type fl_wheel_speed_sensor_fault;
  using _rr_wheel_speed_sensor_fault_type =
    float;
  _rr_wheel_speed_sensor_fault_type rr_wheel_speed_sensor_fault;
  using _rl_wheel_speed_sensor_fault_type =
    float;
  _rl_wheel_speed_sensor_fault_type rl_wheel_speed_sensor_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__engine_speed(
    const uint16_t & _arg)
  {
    this->engine_speed = _arg;
    return *this;
  }
  Type & set__inlet_manifold_pressure(
    const float & _arg)
  {
    this->inlet_manifold_pressure = _arg;
    return *this;
  }
  Type & set__inlet_air_temperature(
    const float & _arg)
  {
    this->inlet_air_temperature = _arg;
    return *this;
  }
  Type & set__throttle_position(
    const float & _arg)
  {
    this->throttle_position = _arg;
    return *this;
  }
  Type & set__fuel_pressure_sensor(
    const float & _arg)
  {
    this->fuel_pressure_sensor = _arg;
    return *this;
  }
  Type & set__engine_efficiency(
    const uint8_t & _arg)
  {
    this->engine_efficiency = _arg;
    return *this;
  }
  Type & set__throttle_pedal(
    const uint16_t & _arg)
  {
    this->throttle_pedal = _arg;
    return *this;
  }
  Type & set__engine_load(
    const float & _arg)
  {
    this->engine_load = _arg;
    return *this;
  }
  Type & set__engine_oil_temperature(
    const float & _arg)
  {
    this->engine_oil_temperature = _arg;
    return *this;
  }
  Type & set__ambient_temperature(
    const uint8_t & _arg)
  {
    this->ambient_temperature = _arg;
    return *this;
  }
  Type & set__engine_oil_pressure(
    const uint16_t & _arg)
  {
    this->engine_oil_pressure = _arg;
    return *this;
  }
  Type & set__boost_pressure(
    const float & _arg)
  {
    this->boost_pressure = _arg;
    return *this;
  }
  Type & set__boost_aim(
    const float & _arg)
  {
    this->boost_aim = _arg;
    return *this;
  }
  Type & set__wheel_speed_front_left(
    const float & _arg)
  {
    this->wheel_speed_front_left = _arg;
    return *this;
  }
  Type & set__wheel_speed_front_right(
    const float & _arg)
  {
    this->wheel_speed_front_right = _arg;
    return *this;
  }
  Type & set__wheel_speed_rear_left(
    const float & _arg)
  {
    this->wheel_speed_rear_left = _arg;
    return *this;
  }
  Type & set__wheel_speed_rear_right(
    const float & _arg)
  {
    this->wheel_speed_rear_right = _arg;
    return *this;
  }
  Type & set__engine_run_time(
    const uint16_t & _arg)
  {
    this->engine_run_time = _arg;
    return *this;
  }
  Type & set__ecu_up_time(
    const uint16_t & _arg)
  {
    this->ecu_up_time = _arg;
    return *this;
  }
  Type & set__ecu_battery_voltage(
    const float & _arg)
  {
    this->ecu_battery_voltage = _arg;
    return *this;
  }
  Type & set__warning_source(
    const uint8_t & _arg)
  {
    this->warning_source = _arg;
    return *this;
  }
  Type & set__coolant_temperature(
    const float & _arg)
  {
    this->coolant_temperature = _arg;
    return *this;
  }
  Type & set__coolant_temperature_warning(
    const bool & _arg)
  {
    this->coolant_temperature_warning = _arg;
    return *this;
  }
  Type & set__coolant_pressure_warning(
    const bool & _arg)
  {
    this->coolant_pressure_warning = _arg;
    return *this;
  }
  Type & set__engine_speed_warning(
    const bool & _arg)
  {
    this->engine_speed_warning = _arg;
    return *this;
  }
  Type & set__engine_oil_temperature_warning(
    const bool & _arg)
  {
    this->engine_oil_temperature_warning = _arg;
    return *this;
  }
  Type & set__engine_oil_pressure_warning(
    const bool & _arg)
  {
    this->engine_oil_pressure_warning = _arg;
    return *this;
  }
  Type & set__crankcase_pressure_warning(
    const bool & _arg)
  {
    this->crankcase_pressure_warning = _arg;
    return *this;
  }
  Type & set__fuel_pressure_warning(
    const bool & _arg)
  {
    this->fuel_pressure_warning = _arg;
    return *this;
  }
  Type & set__fuel_used(
    const float & _arg)
  {
    this->fuel_used = _arg;
    return *this;
  }
  Type & set__knock_warning(
    const bool & _arg)
  {
    this->knock_warning = _arg;
    return *this;
  }
  Type & set__engine_state(
    const float & _arg)
  {
    this->engine_state = _arg;
    return *this;
  }
  Type & set__fuel_pump_state(
    const float & _arg)
  {
    this->fuel_pump_state = _arg;
    return *this;
  }
  Type & set__launch_state(
    const float & _arg)
  {
    this->launch_state = _arg;
    return *this;
  }
  Type & set__boost_aim_state(
    const float & _arg)
  {
    this->boost_aim_state = _arg;
    return *this;
  }
  Type & set__knock_state(
    const float & _arg)
  {
    this->knock_state = _arg;
    return *this;
  }
  Type & set__throttle_aim_state(
    const float & _arg)
  {
    this->throttle_aim_state = _arg;
    return *this;
  }
  Type & set__engine_speed_reference_state(
    const float & _arg)
  {
    this->engine_speed_reference_state = _arg;
    return *this;
  }
  Type & set__gear(
    const float & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__engine_speed_limit_state(
    const float & _arg)
  {
    this->engine_speed_limit_state = _arg;
    return *this;
  }
  Type & set__engine_run_time_total(
    const float & _arg)
  {
    this->engine_run_time_total = _arg;
    return *this;
  }
  Type & set__driver_switch_1(
    const float & _arg)
  {
    this->driver_switch_1 = _arg;
    return *this;
  }
  Type & set__driver_switch_2(
    const float & _arg)
  {
    this->driver_switch_2 = _arg;
    return *this;
  }
  Type & set__driver_switch_3(
    const float & _arg)
  {
    this->driver_switch_3 = _arg;
    return *this;
  }
  Type & set__exhaust_lambda(
    const float & _arg)
  {
    this->exhaust_lambda = _arg;
    return *this;
  }
  Type & set__fuel_pressure_direct_b1(
    const float & _arg)
  {
    this->fuel_pressure_direct_b1 = _arg;
    return *this;
  }
  Type & set__fuel_pressure_direct_b1_aim(
    const float & _arg)
  {
    this->fuel_pressure_direct_b1_aim = _arg;
    return *this;
  }
  Type & set__fuel_pressure_direct_b1_control(
    const float & _arg)
  {
    this->fuel_pressure_direct_b1_control = _arg;
    return *this;
  }
  Type & set__vehicle_speed(
    const float & _arg)
  {
    this->vehicle_speed = _arg;
    return *this;
  }
  Type & set__gearratio(
    const float & _arg)
  {
    this->gearratio = _arg;
    return *this;
  }
  Type & set__gear_100hz(
    const float & _arg)
  {
    this->gear_100hz = _arg;
    return *this;
  }
  Type & set__gear_shift(
    const float & _arg)
  {
    this->gear_shift = _arg;
    return *this;
  }
  Type & set__gear_shift_req(
    const float & _arg)
  {
    this->gear_shift_req = _arg;
    return *this;
  }
  Type & set__torque_wheels(
    const float & _arg)
  {
    this->torque_wheels = _arg;
    return *this;
  }
  Type & set__fr_wheel_speed_sensor_fault(
    const float & _arg)
  {
    this->fr_wheel_speed_sensor_fault = _arg;
    return *this;
  }
  Type & set__fl_wheel_speed_sensor_fault(
    const float & _arg)
  {
    this->fl_wheel_speed_sensor_fault = _arg;
    return *this;
  }
  Type & set__rr_wheel_speed_sensor_fault(
    const float & _arg)
  {
    this->rr_wheel_speed_sensor_fault = _arg;
    return *this;
  }
  Type & set__rl_wheel_speed_sensor_fault(
    const float & _arg)
  {
    this->rl_wheel_speed_sensor_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__MotecReport
    std::shared_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__MotecReport
    std::shared_ptr<raptor_dbw_msgs::msg::MotecReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotecReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->engine_speed != other.engine_speed) {
      return false;
    }
    if (this->inlet_manifold_pressure != other.inlet_manifold_pressure) {
      return false;
    }
    if (this->inlet_air_temperature != other.inlet_air_temperature) {
      return false;
    }
    if (this->throttle_position != other.throttle_position) {
      return false;
    }
    if (this->fuel_pressure_sensor != other.fuel_pressure_sensor) {
      return false;
    }
    if (this->engine_efficiency != other.engine_efficiency) {
      return false;
    }
    if (this->throttle_pedal != other.throttle_pedal) {
      return false;
    }
    if (this->engine_load != other.engine_load) {
      return false;
    }
    if (this->engine_oil_temperature != other.engine_oil_temperature) {
      return false;
    }
    if (this->ambient_temperature != other.ambient_temperature) {
      return false;
    }
    if (this->engine_oil_pressure != other.engine_oil_pressure) {
      return false;
    }
    if (this->boost_pressure != other.boost_pressure) {
      return false;
    }
    if (this->boost_aim != other.boost_aim) {
      return false;
    }
    if (this->wheel_speed_front_left != other.wheel_speed_front_left) {
      return false;
    }
    if (this->wheel_speed_front_right != other.wheel_speed_front_right) {
      return false;
    }
    if (this->wheel_speed_rear_left != other.wheel_speed_rear_left) {
      return false;
    }
    if (this->wheel_speed_rear_right != other.wheel_speed_rear_right) {
      return false;
    }
    if (this->engine_run_time != other.engine_run_time) {
      return false;
    }
    if (this->ecu_up_time != other.ecu_up_time) {
      return false;
    }
    if (this->ecu_battery_voltage != other.ecu_battery_voltage) {
      return false;
    }
    if (this->warning_source != other.warning_source) {
      return false;
    }
    if (this->coolant_temperature != other.coolant_temperature) {
      return false;
    }
    if (this->coolant_temperature_warning != other.coolant_temperature_warning) {
      return false;
    }
    if (this->coolant_pressure_warning != other.coolant_pressure_warning) {
      return false;
    }
    if (this->engine_speed_warning != other.engine_speed_warning) {
      return false;
    }
    if (this->engine_oil_temperature_warning != other.engine_oil_temperature_warning) {
      return false;
    }
    if (this->engine_oil_pressure_warning != other.engine_oil_pressure_warning) {
      return false;
    }
    if (this->crankcase_pressure_warning != other.crankcase_pressure_warning) {
      return false;
    }
    if (this->fuel_pressure_warning != other.fuel_pressure_warning) {
      return false;
    }
    if (this->fuel_used != other.fuel_used) {
      return false;
    }
    if (this->knock_warning != other.knock_warning) {
      return false;
    }
    if (this->engine_state != other.engine_state) {
      return false;
    }
    if (this->fuel_pump_state != other.fuel_pump_state) {
      return false;
    }
    if (this->launch_state != other.launch_state) {
      return false;
    }
    if (this->boost_aim_state != other.boost_aim_state) {
      return false;
    }
    if (this->knock_state != other.knock_state) {
      return false;
    }
    if (this->throttle_aim_state != other.throttle_aim_state) {
      return false;
    }
    if (this->engine_speed_reference_state != other.engine_speed_reference_state) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->engine_speed_limit_state != other.engine_speed_limit_state) {
      return false;
    }
    if (this->engine_run_time_total != other.engine_run_time_total) {
      return false;
    }
    if (this->driver_switch_1 != other.driver_switch_1) {
      return false;
    }
    if (this->driver_switch_2 != other.driver_switch_2) {
      return false;
    }
    if (this->driver_switch_3 != other.driver_switch_3) {
      return false;
    }
    if (this->exhaust_lambda != other.exhaust_lambda) {
      return false;
    }
    if (this->fuel_pressure_direct_b1 != other.fuel_pressure_direct_b1) {
      return false;
    }
    if (this->fuel_pressure_direct_b1_aim != other.fuel_pressure_direct_b1_aim) {
      return false;
    }
    if (this->fuel_pressure_direct_b1_control != other.fuel_pressure_direct_b1_control) {
      return false;
    }
    if (this->vehicle_speed != other.vehicle_speed) {
      return false;
    }
    if (this->gearratio != other.gearratio) {
      return false;
    }
    if (this->gear_100hz != other.gear_100hz) {
      return false;
    }
    if (this->gear_shift != other.gear_shift) {
      return false;
    }
    if (this->gear_shift_req != other.gear_shift_req) {
      return false;
    }
    if (this->torque_wheels != other.torque_wheels) {
      return false;
    }
    if (this->fr_wheel_speed_sensor_fault != other.fr_wheel_speed_sensor_fault) {
      return false;
    }
    if (this->fl_wheel_speed_sensor_fault != other.fl_wheel_speed_sensor_fault) {
      return false;
    }
    if (this->rr_wheel_speed_sensor_fault != other.rr_wheel_speed_sensor_fault) {
      return false;
    }
    if (this->rl_wheel_speed_sensor_fault != other.rl_wheel_speed_sensor_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotecReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotecReport_

// alias to use template instance with default allocator
using MotecReport =
  raptor_dbw_msgs::msg::MotecReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MOTEC_REPORT__STRUCT_HPP_
