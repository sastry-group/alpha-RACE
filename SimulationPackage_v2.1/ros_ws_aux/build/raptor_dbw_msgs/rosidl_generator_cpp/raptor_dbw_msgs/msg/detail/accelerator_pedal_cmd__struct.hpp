// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcceleratorPedalCmd_
{
  using Type = AcceleratorPedalCmd_<ContainerAllocator>;

  explicit AcceleratorPedalCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_cmd = 0.0f;
      this->torque_cmd = 0.0f;
      this->speed_cmd = 0.0f;
      this->enable = false;
      this->ignore = false;
      this->rolling_counter = 0;
      this->road_slope = 0.0f;
      this->accel_limit = 0.0f;
      this->accel_positive_jerk_limit = 0.0f;
    }
  }

  explicit AcceleratorPedalCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pedal_cmd = 0.0f;
      this->torque_cmd = 0.0f;
      this->speed_cmd = 0.0f;
      this->enable = false;
      this->ignore = false;
      this->rolling_counter = 0;
      this->road_slope = 0.0f;
      this->accel_limit = 0.0f;
      this->accel_positive_jerk_limit = 0.0f;
    }
  }

  // field types and members
  using _pedal_cmd_type =
    float;
  _pedal_cmd_type pedal_cmd;
  using _torque_cmd_type =
    float;
  _torque_cmd_type torque_cmd;
  using _speed_cmd_type =
    float;
  _speed_cmd_type speed_cmd;
  using _enable_type =
    bool;
  _enable_type enable;
  using _ignore_type =
    bool;
  _ignore_type ignore;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _road_slope_type =
    float;
  _road_slope_type road_slope;
  using _control_type_type =
    raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator>;
  _control_type_type control_type;
  using _accel_limit_type =
    float;
  _accel_limit_type accel_limit;
  using _accel_positive_jerk_limit_type =
    float;
  _accel_positive_jerk_limit_type accel_positive_jerk_limit;

  // setters for named parameter idiom
  Type & set__pedal_cmd(
    const float & _arg)
  {
    this->pedal_cmd = _arg;
    return *this;
  }
  Type & set__torque_cmd(
    const float & _arg)
  {
    this->torque_cmd = _arg;
    return *this;
  }
  Type & set__speed_cmd(
    const float & _arg)
  {
    this->speed_cmd = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__ignore(
    const bool & _arg)
  {
    this->ignore = _arg;
    return *this;
  }
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }
  Type & set__road_slope(
    const float & _arg)
  {
    this->road_slope = _arg;
    return *this;
  }
  Type & set__control_type(
    const raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator> & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__accel_limit(
    const float & _arg)
  {
    this->accel_limit = _arg;
    return *this;
  }
  Type & set__accel_positive_jerk_limit(
    const float & _arg)
  {
    this->accel_positive_jerk_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalCmd
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__AcceleratorPedalCmd
    std::shared_ptr<raptor_dbw_msgs::msg::AcceleratorPedalCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcceleratorPedalCmd_ & other) const
  {
    if (this->pedal_cmd != other.pedal_cmd) {
      return false;
    }
    if (this->torque_cmd != other.torque_cmd) {
      return false;
    }
    if (this->speed_cmd != other.speed_cmd) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    if (this->ignore != other.ignore) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    if (this->road_slope != other.road_slope) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->accel_limit != other.accel_limit) {
      return false;
    }
    if (this->accel_positive_jerk_limit != other.accel_positive_jerk_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcceleratorPedalCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcceleratorPedalCmd_

// alias to use template instance with default allocator
using AcceleratorPedalCmd =
  raptor_dbw_msgs::msg::AcceleratorPedalCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_CMD__STRUCT_HPP_
