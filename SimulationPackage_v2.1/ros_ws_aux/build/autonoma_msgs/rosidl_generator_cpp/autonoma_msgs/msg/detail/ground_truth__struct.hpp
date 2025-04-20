// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autonoma_msgs:msg/GroundTruth.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__STRUCT_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__STRUCT_HPP_

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
# define DEPRECATED__autonoma_msgs__msg__GroundTruth __attribute__((deprecated))
#else
# define DEPRECATED__autonoma_msgs__msg__GroundTruth __declspec(deprecated)
#endif

namespace autonoma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroundTruth_
{
  using Type = GroundTruth_<ContainerAllocator>;

  explicit GroundTruth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->car_num = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->hgt = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->del_x = 0.0;
      this->del_y = 0.0;
      this->del_z = 0.0;
    }
  }

  explicit GroundTruth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->car_num = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->hgt = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->del_x = 0.0;
      this->del_y = 0.0;
      this->del_z = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _car_num_type =
    uint8_t;
  _car_num_type car_num;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _hgt_type =
    double;
  _hgt_type hgt;
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _vz_type =
    double;
  _vz_type vz;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _del_x_type =
    double;
  _del_x_type del_x;
  using _del_y_type =
    double;
  _del_y_type del_y;
  using _del_z_type =
    double;
  _del_z_type del_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__car_num(
    const uint8_t & _arg)
  {
    this->car_num = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__hgt(
    const double & _arg)
  {
    this->hgt = _arg;
    return *this;
  }
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__del_x(
    const double & _arg)
  {
    this->del_x = _arg;
    return *this;
  }
  Type & set__del_y(
    const double & _arg)
  {
    this->del_y = _arg;
    return *this;
  }
  Type & set__del_z(
    const double & _arg)
  {
    this->del_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autonoma_msgs::msg::GroundTruth_<ContainerAllocator> *;
  using ConstRawPtr =
    const autonoma_msgs::msg::GroundTruth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autonoma_msgs__msg__GroundTruth
    std::shared_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autonoma_msgs__msg__GroundTruth
    std::shared_ptr<autonoma_msgs::msg::GroundTruth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundTruth_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->car_num != other.car_num) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->hgt != other.hgt) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->del_x != other.del_x) {
      return false;
    }
    if (this->del_y != other.del_y) {
      return false;
    }
    if (this->del_z != other.del_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundTruth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundTruth_

// alias to use template instance with default allocator
using GroundTruth =
  autonoma_msgs::msg::GroundTruth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__STRUCT_HPP_
