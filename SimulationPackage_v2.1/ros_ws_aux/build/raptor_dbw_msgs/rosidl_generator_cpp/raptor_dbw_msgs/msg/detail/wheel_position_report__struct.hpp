// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/WheelPositionReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__WheelPositionReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__WheelPositionReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelPositionReport_
{
  using Type = WheelPositionReport_<ContainerAllocator>;

  explicit WheelPositionReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0;
      this->front_right = 0;
      this->rear_left = 0;
      this->rear_right = 0;
      this->wheel_pulses_per_rev = 0.0f;
    }
  }

  explicit WheelPositionReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0;
      this->front_right = 0;
      this->rear_left = 0;
      this->rear_right = 0;
      this->wheel_pulses_per_rev = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _front_left_type =
    int16_t;
  _front_left_type front_left;
  using _front_right_type =
    int16_t;
  _front_right_type front_right;
  using _rear_left_type =
    int16_t;
  _rear_left_type rear_left;
  using _rear_right_type =
    int16_t;
  _rear_right_type rear_right;
  using _wheel_pulses_per_rev_type =
    float;
  _wheel_pulses_per_rev_type wheel_pulses_per_rev;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__front_left(
    const int16_t & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const int16_t & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const int16_t & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_right(
    const int16_t & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }
  Type & set__wheel_pulses_per_rev(
    const float & _arg)
  {
    this->wheel_pulses_per_rev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__WheelPositionReport
    std::shared_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__WheelPositionReport
    std::shared_ptr<raptor_dbw_msgs::msg::WheelPositionReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelPositionReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    if (this->wheel_pulses_per_rev != other.wheel_pulses_per_rev) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelPositionReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelPositionReport_

// alias to use template instance with default allocator
using WheelPositionReport =
  raptor_dbw_msgs::msg::WheelPositionReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_POSITION_REPORT__STRUCT_HPP_
