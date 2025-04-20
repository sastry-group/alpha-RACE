// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_HPP_

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
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__SteeringReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__SteeringReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringReport_
{
  using Type = SteeringReport_<ContainerAllocator>;

  explicit SteeringReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    control_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_wheel_angle = 0.0f;
      this->steering_wheel_angle_cmd = 0.0f;
      this->steering_wheel_torque = 0.0f;
      this->enabled = false;
      this->driver_activity = false;
      this->fault_steering_system = false;
      this->overheat_prevention_mode = false;
      this->rolling_counter = 0;
      this->steering_overheat_warning = false;
    }
  }

  explicit SteeringReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    control_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steering_wheel_angle = 0.0f;
      this->steering_wheel_angle_cmd = 0.0f;
      this->steering_wheel_torque = 0.0f;
      this->enabled = false;
      this->driver_activity = false;
      this->fault_steering_system = false;
      this->overheat_prevention_mode = false;
      this->rolling_counter = 0;
      this->steering_overheat_warning = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _steering_wheel_angle_type =
    float;
  _steering_wheel_angle_type steering_wheel_angle;
  using _steering_wheel_angle_cmd_type =
    float;
  _steering_wheel_angle_cmd_type steering_wheel_angle_cmd;
  using _steering_wheel_torque_type =
    float;
  _steering_wheel_torque_type steering_wheel_torque;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _driver_activity_type =
    bool;
  _driver_activity_type driver_activity;
  using _fault_steering_system_type =
    bool;
  _fault_steering_system_type fault_steering_system;
  using _overheat_prevention_mode_type =
    bool;
  _overheat_prevention_mode_type overheat_prevention_mode;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _control_type_type =
    raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator>;
  _control_type_type control_type;
  using _steering_overheat_warning_type =
    bool;
  _steering_overheat_warning_type steering_overheat_warning;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__driver_activity(
    const bool & _arg)
  {
    this->driver_activity = _arg;
    return *this;
  }
  Type & set__fault_steering_system(
    const bool & _arg)
  {
    this->fault_steering_system = _arg;
    return *this;
  }
  Type & set__overheat_prevention_mode(
    const bool & _arg)
  {
    this->overheat_prevention_mode = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }
  Type & set__control_type(
    const raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator> & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__steering_overheat_warning(
    const bool & _arg)
  {
    this->steering_overheat_warning = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__SteeringReport
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__SteeringReport
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringReport_ & other) const
  {
    if (this->header != other.header) {
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
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->driver_activity != other.driver_activity) {
      return false;
    }
    if (this->fault_steering_system != other.fault_steering_system) {
      return false;
    }
    if (this->overheat_prevention_mode != other.overheat_prevention_mode) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->steering_overheat_warning != other.steering_overheat_warning) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringReport_

// alias to use template instance with default allocator
using SteeringReport =
  raptor_dbw_msgs::msg::SteeringReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_HPP_
