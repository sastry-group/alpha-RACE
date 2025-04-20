// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autonoma_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_

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
# define DEPRECATED__autonoma_msgs__msg__VehicleData __attribute__((deprecated))
#else
# define DEPRECATED__autonoma_msgs__msg__VehicleData __declspec(deprecated)
#endif

namespace autonoma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleData_
{
  using Type = VehicleData_<ContainerAllocator>;

  explicit VehicleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_tire_temperature = 0.0f;
      this->fl_damper_linear_potentiometer = 0.0f;
      this->fl_tire_pressure = 0.0f;
      this->fl_tire_pressure_gauge = 0.0f;
      this->fl_wheel_load = 0.0f;
      this->fr_tire_temperature = 0.0f;
      this->fr_damper_linear_potentiometer = 0.0f;
      this->fr_tire_pressure = 0.0f;
      this->fr_tire_pressure_gauge = 0.0f;
      this->fr_wheel_load = 0.0f;
      this->rl_tire_temperature = 0.0f;
      this->rl_damper_linear_potentiometer = 0.0f;
      this->rl_tire_pressure = 0.0f;
      this->rl_tire_pressure_gauge = 0.0f;
      this->rl_wheel_load = 0.0f;
      this->rr_tire_temperature = 0.0f;
      this->rr_damper_linear_potentiometer = 0.0f;
      this->rr_tire_pressure = 0.0f;
      this->rr_tire_pressure_gauge = 0.0f;
      this->rr_wheel_load = 0.0f;
      this->fl_brake_temp = 0.0f;
      this->fr_brake_temp = 0.0f;
      this->rl_brake_temp = 0.0f;
      this->rr_brake_temp = 0.0f;
      this->battery_voltage = 0.0f;
      this->safety_switch_state = 0;
      this->mode_switch_state = false;
      this->sys_state = 0;
      this->accel_pedal_input = 0.0f;
      this->accel_pedal_output = 0.0f;
      this->front_brake_pressure = 0.0f;
      this->rear_brake_pressure = 0.0f;
      this->steering_wheel_angle = 0.0f;
      this->steering_wheel_angle_cmd = 0.0f;
      this->steering_wheel_torque = 0.0f;
      this->ws_front_left = 0.0f;
      this->ws_front_right = 0.0f;
      this->ws_rear_left = 0.0f;
      this->ws_rear_right = 0.0f;
    }
  }

  explicit VehicleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_tire_temperature = 0.0f;
      this->fl_damper_linear_potentiometer = 0.0f;
      this->fl_tire_pressure = 0.0f;
      this->fl_tire_pressure_gauge = 0.0f;
      this->fl_wheel_load = 0.0f;
      this->fr_tire_temperature = 0.0f;
      this->fr_damper_linear_potentiometer = 0.0f;
      this->fr_tire_pressure = 0.0f;
      this->fr_tire_pressure_gauge = 0.0f;
      this->fr_wheel_load = 0.0f;
      this->rl_tire_temperature = 0.0f;
      this->rl_damper_linear_potentiometer = 0.0f;
      this->rl_tire_pressure = 0.0f;
      this->rl_tire_pressure_gauge = 0.0f;
      this->rl_wheel_load = 0.0f;
      this->rr_tire_temperature = 0.0f;
      this->rr_damper_linear_potentiometer = 0.0f;
      this->rr_tire_pressure = 0.0f;
      this->rr_tire_pressure_gauge = 0.0f;
      this->rr_wheel_load = 0.0f;
      this->fl_brake_temp = 0.0f;
      this->fr_brake_temp = 0.0f;
      this->rl_brake_temp = 0.0f;
      this->rr_brake_temp = 0.0f;
      this->battery_voltage = 0.0f;
      this->safety_switch_state = 0;
      this->mode_switch_state = false;
      this->sys_state = 0;
      this->accel_pedal_input = 0.0f;
      this->accel_pedal_output = 0.0f;
      this->front_brake_pressure = 0.0f;
      this->rear_brake_pressure = 0.0f;
      this->steering_wheel_angle = 0.0f;
      this->steering_wheel_angle_cmd = 0.0f;
      this->steering_wheel_torque = 0.0f;
      this->ws_front_left = 0.0f;
      this->ws_front_right = 0.0f;
      this->ws_rear_left = 0.0f;
      this->ws_rear_right = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fl_tire_temperature_type =
    float;
  _fl_tire_temperature_type fl_tire_temperature;
  using _fl_damper_linear_potentiometer_type =
    float;
  _fl_damper_linear_potentiometer_type fl_damper_linear_potentiometer;
  using _fl_tire_pressure_type =
    float;
  _fl_tire_pressure_type fl_tire_pressure;
  using _fl_tire_pressure_gauge_type =
    float;
  _fl_tire_pressure_gauge_type fl_tire_pressure_gauge;
  using _fl_wheel_load_type =
    float;
  _fl_wheel_load_type fl_wheel_load;
  using _fr_tire_temperature_type =
    float;
  _fr_tire_temperature_type fr_tire_temperature;
  using _fr_damper_linear_potentiometer_type =
    float;
  _fr_damper_linear_potentiometer_type fr_damper_linear_potentiometer;
  using _fr_tire_pressure_type =
    float;
  _fr_tire_pressure_type fr_tire_pressure;
  using _fr_tire_pressure_gauge_type =
    float;
  _fr_tire_pressure_gauge_type fr_tire_pressure_gauge;
  using _fr_wheel_load_type =
    float;
  _fr_wheel_load_type fr_wheel_load;
  using _rl_tire_temperature_type =
    float;
  _rl_tire_temperature_type rl_tire_temperature;
  using _rl_damper_linear_potentiometer_type =
    float;
  _rl_damper_linear_potentiometer_type rl_damper_linear_potentiometer;
  using _rl_tire_pressure_type =
    float;
  _rl_tire_pressure_type rl_tire_pressure;
  using _rl_tire_pressure_gauge_type =
    float;
  _rl_tire_pressure_gauge_type rl_tire_pressure_gauge;
  using _rl_wheel_load_type =
    float;
  _rl_wheel_load_type rl_wheel_load;
  using _rr_tire_temperature_type =
    float;
  _rr_tire_temperature_type rr_tire_temperature;
  using _rr_damper_linear_potentiometer_type =
    float;
  _rr_damper_linear_potentiometer_type rr_damper_linear_potentiometer;
  using _rr_tire_pressure_type =
    float;
  _rr_tire_pressure_type rr_tire_pressure;
  using _rr_tire_pressure_gauge_type =
    float;
  _rr_tire_pressure_gauge_type rr_tire_pressure_gauge;
  using _rr_wheel_load_type =
    float;
  _rr_wheel_load_type rr_wheel_load;
  using _fl_brake_temp_type =
    float;
  _fl_brake_temp_type fl_brake_temp;
  using _fr_brake_temp_type =
    float;
  _fr_brake_temp_type fr_brake_temp;
  using _rl_brake_temp_type =
    float;
  _rl_brake_temp_type rl_brake_temp;
  using _rr_brake_temp_type =
    float;
  _rr_brake_temp_type rr_brake_temp;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _safety_switch_state_type =
    uint8_t;
  _safety_switch_state_type safety_switch_state;
  using _mode_switch_state_type =
    bool;
  _mode_switch_state_type mode_switch_state;
  using _sys_state_type =
    uint8_t;
  _sys_state_type sys_state;
  using _accel_pedal_input_type =
    float;
  _accel_pedal_input_type accel_pedal_input;
  using _accel_pedal_output_type =
    float;
  _accel_pedal_output_type accel_pedal_output;
  using _front_brake_pressure_type =
    float;
  _front_brake_pressure_type front_brake_pressure;
  using _rear_brake_pressure_type =
    float;
  _rear_brake_pressure_type rear_brake_pressure;
  using _steering_wheel_angle_type =
    float;
  _steering_wheel_angle_type steering_wheel_angle;
  using _steering_wheel_angle_cmd_type =
    float;
  _steering_wheel_angle_cmd_type steering_wheel_angle_cmd;
  using _steering_wheel_torque_type =
    float;
  _steering_wheel_torque_type steering_wheel_torque;
  using _ws_front_left_type =
    float;
  _ws_front_left_type ws_front_left;
  using _ws_front_right_type =
    float;
  _ws_front_right_type ws_front_right;
  using _ws_rear_left_type =
    float;
  _ws_rear_left_type ws_rear_left;
  using _ws_rear_right_type =
    float;
  _ws_rear_right_type ws_rear_right;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fl_tire_temperature(
    const float & _arg)
  {
    this->fl_tire_temperature = _arg;
    return *this;
  }
  Type & set__fl_damper_linear_potentiometer(
    const float & _arg)
  {
    this->fl_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__fl_tire_pressure(
    const float & _arg)
  {
    this->fl_tire_pressure = _arg;
    return *this;
  }
  Type & set__fl_tire_pressure_gauge(
    const float & _arg)
  {
    this->fl_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__fl_wheel_load(
    const float & _arg)
  {
    this->fl_wheel_load = _arg;
    return *this;
  }
  Type & set__fr_tire_temperature(
    const float & _arg)
  {
    this->fr_tire_temperature = _arg;
    return *this;
  }
  Type & set__fr_damper_linear_potentiometer(
    const float & _arg)
  {
    this->fr_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__fr_tire_pressure(
    const float & _arg)
  {
    this->fr_tire_pressure = _arg;
    return *this;
  }
  Type & set__fr_tire_pressure_gauge(
    const float & _arg)
  {
    this->fr_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__fr_wheel_load(
    const float & _arg)
  {
    this->fr_wheel_load = _arg;
    return *this;
  }
  Type & set__rl_tire_temperature(
    const float & _arg)
  {
    this->rl_tire_temperature = _arg;
    return *this;
  }
  Type & set__rl_damper_linear_potentiometer(
    const float & _arg)
  {
    this->rl_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__rl_tire_pressure(
    const float & _arg)
  {
    this->rl_tire_pressure = _arg;
    return *this;
  }
  Type & set__rl_tire_pressure_gauge(
    const float & _arg)
  {
    this->rl_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__rl_wheel_load(
    const float & _arg)
  {
    this->rl_wheel_load = _arg;
    return *this;
  }
  Type & set__rr_tire_temperature(
    const float & _arg)
  {
    this->rr_tire_temperature = _arg;
    return *this;
  }
  Type & set__rr_damper_linear_potentiometer(
    const float & _arg)
  {
    this->rr_damper_linear_potentiometer = _arg;
    return *this;
  }
  Type & set__rr_tire_pressure(
    const float & _arg)
  {
    this->rr_tire_pressure = _arg;
    return *this;
  }
  Type & set__rr_tire_pressure_gauge(
    const float & _arg)
  {
    this->rr_tire_pressure_gauge = _arg;
    return *this;
  }
  Type & set__rr_wheel_load(
    const float & _arg)
  {
    this->rr_wheel_load = _arg;
    return *this;
  }
  Type & set__fl_brake_temp(
    const float & _arg)
  {
    this->fl_brake_temp = _arg;
    return *this;
  }
  Type & set__fr_brake_temp(
    const float & _arg)
  {
    this->fr_brake_temp = _arg;
    return *this;
  }
  Type & set__rl_brake_temp(
    const float & _arg)
  {
    this->rl_brake_temp = _arg;
    return *this;
  }
  Type & set__rr_brake_temp(
    const float & _arg)
  {
    this->rr_brake_temp = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__safety_switch_state(
    const uint8_t & _arg)
  {
    this->safety_switch_state = _arg;
    return *this;
  }
  Type & set__mode_switch_state(
    const bool & _arg)
  {
    this->mode_switch_state = _arg;
    return *this;
  }
  Type & set__sys_state(
    const uint8_t & _arg)
  {
    this->sys_state = _arg;
    return *this;
  }
  Type & set__accel_pedal_input(
    const float & _arg)
  {
    this->accel_pedal_input = _arg;
    return *this;
  }
  Type & set__accel_pedal_output(
    const float & _arg)
  {
    this->accel_pedal_output = _arg;
    return *this;
  }
  Type & set__front_brake_pressure(
    const float & _arg)
  {
    this->front_brake_pressure = _arg;
    return *this;
  }
  Type & set__rear_brake_pressure(
    const float & _arg)
  {
    this->rear_brake_pressure = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle(
    const float & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle_cmd(
    const float & _arg)
  {
    this->steering_wheel_angle_cmd = _arg;
    return *this;
  }
  Type & set__steering_wheel_torque(
    const float & _arg)
  {
    this->steering_wheel_torque = _arg;
    return *this;
  }
  Type & set__ws_front_left(
    const float & _arg)
  {
    this->ws_front_left = _arg;
    return *this;
  }
  Type & set__ws_front_right(
    const float & _arg)
  {
    this->ws_front_right = _arg;
    return *this;
  }
  Type & set__ws_rear_left(
    const float & _arg)
  {
    this->ws_rear_left = _arg;
    return *this;
  }
  Type & set__ws_rear_right(
    const float & _arg)
  {
    this->ws_rear_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autonoma_msgs::msg::VehicleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const autonoma_msgs::msg::VehicleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::VehicleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::VehicleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autonoma_msgs__msg__VehicleData
    std::shared_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autonoma_msgs__msg__VehicleData
    std::shared_ptr<autonoma_msgs::msg::VehicleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fl_tire_temperature != other.fl_tire_temperature) {
      return false;
    }
    if (this->fl_damper_linear_potentiometer != other.fl_damper_linear_potentiometer) {
      return false;
    }
    if (this->fl_tire_pressure != other.fl_tire_pressure) {
      return false;
    }
    if (this->fl_tire_pressure_gauge != other.fl_tire_pressure_gauge) {
      return false;
    }
    if (this->fl_wheel_load != other.fl_wheel_load) {
      return false;
    }
    if (this->fr_tire_temperature != other.fr_tire_temperature) {
      return false;
    }
    if (this->fr_damper_linear_potentiometer != other.fr_damper_linear_potentiometer) {
      return false;
    }
    if (this->fr_tire_pressure != other.fr_tire_pressure) {
      return false;
    }
    if (this->fr_tire_pressure_gauge != other.fr_tire_pressure_gauge) {
      return false;
    }
    if (this->fr_wheel_load != other.fr_wheel_load) {
      return false;
    }
    if (this->rl_tire_temperature != other.rl_tire_temperature) {
      return false;
    }
    if (this->rl_damper_linear_potentiometer != other.rl_damper_linear_potentiometer) {
      return false;
    }
    if (this->rl_tire_pressure != other.rl_tire_pressure) {
      return false;
    }
    if (this->rl_tire_pressure_gauge != other.rl_tire_pressure_gauge) {
      return false;
    }
    if (this->rl_wheel_load != other.rl_wheel_load) {
      return false;
    }
    if (this->rr_tire_temperature != other.rr_tire_temperature) {
      return false;
    }
    if (this->rr_damper_linear_potentiometer != other.rr_damper_linear_potentiometer) {
      return false;
    }
    if (this->rr_tire_pressure != other.rr_tire_pressure) {
      return false;
    }
    if (this->rr_tire_pressure_gauge != other.rr_tire_pressure_gauge) {
      return false;
    }
    if (this->rr_wheel_load != other.rr_wheel_load) {
      return false;
    }
    if (this->fl_brake_temp != other.fl_brake_temp) {
      return false;
    }
    if (this->fr_brake_temp != other.fr_brake_temp) {
      return false;
    }
    if (this->rl_brake_temp != other.rl_brake_temp) {
      return false;
    }
    if (this->rr_brake_temp != other.rr_brake_temp) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->safety_switch_state != other.safety_switch_state) {
      return false;
    }
    if (this->mode_switch_state != other.mode_switch_state) {
      return false;
    }
    if (this->sys_state != other.sys_state) {
      return false;
    }
    if (this->accel_pedal_input != other.accel_pedal_input) {
      return false;
    }
    if (this->accel_pedal_output != other.accel_pedal_output) {
      return false;
    }
    if (this->front_brake_pressure != other.front_brake_pressure) {
      return false;
    }
    if (this->rear_brake_pressure != other.rear_brake_pressure) {
      return false;
    }
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    if (this->steering_wheel_angle_cmd != other.steering_wheel_angle_cmd) {
      return false;
    }
    if (this->steering_wheel_torque != other.steering_wheel_torque) {
      return false;
    }
    if (this->ws_front_left != other.ws_front_left) {
      return false;
    }
    if (this->ws_front_right != other.ws_front_right) {
      return false;
    }
    if (this->ws_rear_left != other.ws_rear_left) {
      return false;
    }
    if (this->ws_rear_right != other.ws_rear_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleData_

// alias to use template instance with default allocator
using VehicleData =
  autonoma_msgs::msg::VehicleData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
