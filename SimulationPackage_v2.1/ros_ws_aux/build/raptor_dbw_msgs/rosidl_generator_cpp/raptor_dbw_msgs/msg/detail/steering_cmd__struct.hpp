// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/SteeringCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__SteeringCmd __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__SteeringCmd __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringCmd_
{
  using Type = SteeringCmd_<ContainerAllocator>;

  explicit SteeringCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_cmd = 0.0f;
      this->angle_velocity = 0.0f;
      this->enable = false;
      this->ignore = false;
      this->rolling_counter = 0;
      this->torque_cmd = 0.0f;
      this->vehicle_curvature_cmd = 0.0f;
    }
  }

  explicit SteeringCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_cmd = 0.0f;
      this->angle_velocity = 0.0f;
      this->enable = false;
      this->ignore = false;
      this->rolling_counter = 0;
      this->torque_cmd = 0.0f;
      this->vehicle_curvature_cmd = 0.0f;
    }
  }

  // field types and members
  using _angle_cmd_type =
    float;
  _angle_cmd_type angle_cmd;
  using _angle_velocity_type =
    float;
  _angle_velocity_type angle_velocity;
  using _enable_type =
    bool;
  _enable_type enable;
  using _ignore_type =
    bool;
  _ignore_type ignore;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _torque_cmd_type =
    float;
  _torque_cmd_type torque_cmd;
  using _vehicle_curvature_cmd_type =
    float;
  _vehicle_curvature_cmd_type vehicle_curvature_cmd;
  using _control_type_type =
    raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator>;
  _control_type_type control_type;

  // setters for named parameter idiom
  Type & set__angle_cmd(
    const float & _arg)
  {
    this->angle_cmd = _arg;
    return *this;
  }
  Type & set__angle_velocity(
    const float & _arg)
  {
    this->angle_velocity = _arg;
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
  Type & set__torque_cmd(
    const float & _arg)
  {
    this->torque_cmd = _arg;
    return *this;
  }
  Type & set__vehicle_curvature_cmd(
    const float & _arg)
  {
    this->vehicle_curvature_cmd = _arg;
    return *this;
  }
  Type & set__control_type(
    const raptor_dbw_msgs::msg::ActuatorControlMode_<ContainerAllocator> & _arg)
  {
    this->control_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__SteeringCmd
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__SteeringCmd
    std::shared_ptr<raptor_dbw_msgs::msg::SteeringCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringCmd_ & other) const
  {
    if (this->angle_cmd != other.angle_cmd) {
      return false;
    }
    if (this->angle_velocity != other.angle_velocity) {
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
    if (this->torque_cmd != other.torque_cmd) {
      return false;
    }
    if (this->vehicle_curvature_cmd != other.vehicle_curvature_cmd) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringCmd_

// alias to use template instance with default allocator
using SteeringCmd =
  raptor_dbw_msgs::msg::SteeringCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_
