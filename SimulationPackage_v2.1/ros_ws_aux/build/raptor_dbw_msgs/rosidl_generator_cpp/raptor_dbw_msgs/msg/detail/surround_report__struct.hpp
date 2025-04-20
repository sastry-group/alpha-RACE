// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_HPP_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_HPP_

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
// Member 'rear_right'
// Member 'rear_left'
// Member 'rear_center'
// Member 'front_right'
// Member 'front_left'
// Member 'front_center'
#include "raptor_dbw_msgs/msg/detail/sonar_arc_num__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__raptor_dbw_msgs__msg__SurroundReport __attribute__((deprecated))
#else
# define DEPRECATED__raptor_dbw_msgs__msg__SurroundReport __declspec(deprecated)
#endif

namespace raptor_dbw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SurroundReport_
{
  using Type = SurroundReport_<ContainerAllocator>;

  explicit SurroundReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    rear_right(_init),
    rear_left(_init),
    rear_center(_init),
    front_right(_init),
    front_left(_init),
    front_center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_radar_object_distance = 0.0f;
      this->rear_radar_object_distance = 0.0f;
      this->front_radar_distance_valid = false;
      this->parking_sonar_data_valid = false;
    }
  }

  explicit SurroundReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rear_right(_alloc, _init),
    rear_left(_alloc, _init),
    rear_center(_alloc, _init),
    front_right(_alloc, _init),
    front_left(_alloc, _init),
    front_center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_radar_object_distance = 0.0f;
      this->rear_radar_object_distance = 0.0f;
      this->front_radar_distance_valid = false;
      this->parking_sonar_data_valid = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _front_radar_object_distance_type =
    float;
  _front_radar_object_distance_type front_radar_object_distance;
  using _rear_radar_object_distance_type =
    float;
  _rear_radar_object_distance_type rear_radar_object_distance;
  using _rear_right_type =
    raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator>;
  _rear_right_type rear_right;
  using _rear_left_type =
    raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator>;
  _rear_left_type rear_left;
  using _rear_center_type =
    raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator>;
  _rear_center_type rear_center;
  using _front_right_type =
    raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator>;
  _front_right_type front_right;
  using _front_left_type =
    raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator>;
  _front_left_type front_left;
  using _front_center_type =
    raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator>;
  _front_center_type front_center;
  using _front_radar_distance_valid_type =
    bool;
  _front_radar_distance_valid_type front_radar_distance_valid;
  using _parking_sonar_data_valid_type =
    bool;
  _parking_sonar_data_valid_type parking_sonar_data_valid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__front_radar_object_distance(
    const float & _arg)
  {
    this->front_radar_object_distance = _arg;
    return *this;
  }
  Type & set__rear_radar_object_distance(
    const float & _arg)
  {
    this->rear_radar_object_distance = _arg;
    return *this;
  }
  Type & set__rear_right(
    const raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator> & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator> & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_center(
    const raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator> & _arg)
  {
    this->rear_center = _arg;
    return *this;
  }
  Type & set__front_right(
    const raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator> & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__front_left(
    const raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator> & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_center(
    const raptor_dbw_msgs::msg::SonarArcNum_<ContainerAllocator> & _arg)
  {
    this->front_center = _arg;
    return *this;
  }
  Type & set__front_radar_distance_valid(
    const bool & _arg)
  {
    this->front_radar_distance_valid = _arg;
    return *this;
  }
  Type & set__parking_sonar_data_valid(
    const bool & _arg)
  {
    this->parking_sonar_data_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raptor_dbw_msgs__msg__SurroundReport
    std::shared_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raptor_dbw_msgs__msg__SurroundReport
    std::shared_ptr<raptor_dbw_msgs::msg::SurroundReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SurroundReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->front_radar_object_distance != other.front_radar_object_distance) {
      return false;
    }
    if (this->rear_radar_object_distance != other.rear_radar_object_distance) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_center != other.rear_center) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_center != other.front_center) {
      return false;
    }
    if (this->front_radar_distance_valid != other.front_radar_distance_valid) {
      return false;
    }
    if (this->parking_sonar_data_valid != other.parking_sonar_data_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SurroundReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SurroundReport_

// alias to use template instance with default allocator
using SurroundReport =
  raptor_dbw_msgs::msg::SurroundReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raptor_dbw_msgs

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_HPP_
