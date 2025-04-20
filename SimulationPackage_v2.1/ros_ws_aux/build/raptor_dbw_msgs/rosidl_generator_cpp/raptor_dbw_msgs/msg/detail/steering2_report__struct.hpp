// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__Steering2Report __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__Steering2Report __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Steering2Report_
{
  using Type = Steering2Report_<ContainerAllocator>;

  explicit Steering2Report_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_curvature_actual = 0.0f;
      this->max_torque_driver = 0.0f;
      this->max_torque_motor = 0.0f;
    }
  }

  explicit Steering2Report_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_curvature_actual = 0.0f;
      this->max_torque_driver = 0.0f;
      this->max_torque_motor = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_curvature_actual_type =
    float;
  _vehicle_curvature_actual_type vehicle_curvature_actual;
  using _max_torque_driver_type =
    float;
  _max_torque_driver_type max_torque_driver;
  using _max_torque_motor_type =
    float;
  _max_torque_motor_type max_torque_motor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_curvature_actual(
    const float & _arg)
  {
    this->vehicle_curvature_actual = _arg;
    return *this;
  }
  Type & set__max_torque_driver(
    const float & _arg)
  {
    this->max_torque_driver = _arg;
    return *this;
  }
  Type & set__max_torque_motor(
    const float & _arg)
  {
    this->max_torque_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__Steering2Report
    std::shared_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__Steering2Report
    std::shared_ptr<raptor_dbw_msgs::msg::Steering2Report_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Steering2Report_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_curvature_actual != other.vehicle_curvature_actual) {
      return false;
    }
    if (this->max_torque_driver != other.max_torque_driver) {
      return false;
    }
    if (this->max_torque_motor != other.max_torque_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const Steering2Report_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Steering2Report_

// alias to use template instance with default allocator
using Steering2Report =
  raptor_dbw_msgs::msg::Steering2Report_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__STRUCT_HPP_
