// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/Brake2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__STRUCT_HPP_

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
# define DEPRECATED__raptor_dbw_msgs__msg__Brake2Report __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__Brake2Report __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Brake2Report_
{
  using Type = Brake2Report_<ContainerAllocator>;

  explicit Brake2Report_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_brake_pressure = 0.0f;
      this->rear_brake_pressure = 0.0f;
      this->rolling_counter = 0;
      this->estimated_road_slope = 0.0f;
      this->speed_set_point = 0.0f;
    }
  }

  explicit Brake2Report_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_brake_pressure = 0.0f;
      this->rear_brake_pressure = 0.0f;
      this->rolling_counter = 0;
      this->estimated_road_slope = 0.0f;
      this->speed_set_point = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _front_brake_pressure_type =
    float;
  _front_brake_pressure_type front_brake_pressure;
  using _rear_brake_pressure_type =
    float;
  _rear_brake_pressure_type rear_brake_pressure;
  using _rolling_counter_type =
    uint8_t;
  _rolling_counter_type rolling_counter;
  using _estimated_road_slope_type =
    float;
  _estimated_road_slope_type estimated_road_slope;
  using _speed_set_point_type =
    float;
  _speed_set_point_type speed_set_point;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__rolling_counter(
    const uint8_t & _arg)
  {
    this->rolling_counter = _arg;
    return *this;
  }
  Type & set__estimated_road_slope(
    const float & _arg)
  {
    this->estimated_road_slope = _arg;
    return *this;
  }
  Type & set__speed_set_point(
    const float & _arg)
  {
    this->speed_set_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__Brake2Report
    std::shared_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__Brake2Report
    std::shared_ptr<raptor_dbw_msgs::msg::Brake2Report_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Brake2Report_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->front_brake_pressure != other.front_brake_pressure) {
      return false;
    }
    if (this->rear_brake_pressure != other.rear_brake_pressure) {
      return false;
    }
    if (this->rolling_counter != other.rolling_counter) {
      return false;
    }
    if (this->estimated_road_slope != other.estimated_road_slope) {
      return false;
    }
    if (this->speed_set_point != other.speed_set_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Brake2Report_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Brake2Report_

// alias to use template instance with default allocator
using Brake2Report =
  raptor_dbw_msgs::msg::Brake2Report_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE2_REPORT__STRUCT_HPP_
