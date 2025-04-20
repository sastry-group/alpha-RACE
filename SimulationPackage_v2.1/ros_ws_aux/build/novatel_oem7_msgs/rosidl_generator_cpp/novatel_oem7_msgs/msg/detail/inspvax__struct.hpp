// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSPVAX.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__STRUCT_HPP_

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
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.hpp"
// Member 'ins_status'
#include "novatel_oem7_msgs/msg/detail/inertial_solution_status__struct.hpp"
// Member 'pos_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.hpp"
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSPVAX __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSPVAX __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSPVAX_
{
  using Type = INSPVAX_<ContainerAllocator>;

  explicit INSPVAX_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    nov_header(_init),
    ins_status(_init),
    pos_type(_init),
    ext_sol_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->north_velocity = 0.0;
      this->east_velocity = 0.0;
      this->up_velocity = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->azimuth = 0.0;
      this->latitude_stdev = 0.0f;
      this->longitude_stdev = 0.0f;
      this->height_stdev = 0.0f;
      this->north_velocity_stdev = 0.0f;
      this->east_velocity_stdev = 0.0f;
      this->up_velocity_stdev = 0.0f;
      this->roll_stdev = 0.0f;
      this->pitch_stdev = 0.0f;
      this->azimuth_stdev = 0.0f;
      this->time_since_update = 0;
    }
  }

  explicit INSPVAX_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    nov_header(_alloc, _init),
    ins_status(_alloc, _init),
    pos_type(_alloc, _init),
    ext_sol_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->north_velocity = 0.0;
      this->east_velocity = 0.0;
      this->up_velocity = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->azimuth = 0.0;
      this->latitude_stdev = 0.0f;
      this->longitude_stdev = 0.0f;
      this->height_stdev = 0.0f;
      this->north_velocity_stdev = 0.0f;
      this->east_velocity_stdev = 0.0f;
      this->up_velocity_stdev = 0.0f;
      this->roll_stdev = 0.0f;
      this->pitch_stdev = 0.0f;
      this->azimuth_stdev = 0.0f;
      this->time_since_update = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nov_header_type =
    novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator>;
  _nov_header_type nov_header;
  using _ins_status_type =
    novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator>;
  _ins_status_type ins_status;
  using _pos_type_type =
    novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>;
  _pos_type_type pos_type;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_type =
    double;
  _height_type height;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _north_velocity_type =
    double;
  _north_velocity_type north_velocity;
  using _east_velocity_type =
    double;
  _east_velocity_type east_velocity;
  using _up_velocity_type =
    double;
  _up_velocity_type up_velocity;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _azimuth_type =
    double;
  _azimuth_type azimuth;
  using _latitude_stdev_type =
    float;
  _latitude_stdev_type latitude_stdev;
  using _longitude_stdev_type =
    float;
  _longitude_stdev_type longitude_stdev;
  using _height_stdev_type =
    float;
  _height_stdev_type height_stdev;
  using _north_velocity_stdev_type =
    float;
  _north_velocity_stdev_type north_velocity_stdev;
  using _east_velocity_stdev_type =
    float;
  _east_velocity_stdev_type east_velocity_stdev;
  using _up_velocity_stdev_type =
    float;
  _up_velocity_stdev_type up_velocity_stdev;
  using _roll_stdev_type =
    float;
  _roll_stdev_type roll_stdev;
  using _pitch_stdev_type =
    float;
  _pitch_stdev_type pitch_stdev;
  using _azimuth_stdev_type =
    float;
  _azimuth_stdev_type azimuth_stdev;
  using _ext_sol_status_type =
    novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator>;
  _ext_sol_status_type ext_sol_status;
  using _time_since_update_type =
    uint16_t;
  _time_since_update_type time_since_update;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nov_header(
    const novatel_oem7_msgs::msg::Oem7Header_<ContainerAllocator> & _arg)
  {
    this->nov_header = _arg;
    return *this;
  }
  Type & set__ins_status(
    const novatel_oem7_msgs::msg::InertialSolutionStatus_<ContainerAllocator> & _arg)
  {
    this->ins_status = _arg;
    return *this;
  }
  Type & set__pos_type(
    const novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> & _arg)
  {
    this->pos_type = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__north_velocity(
    const double & _arg)
  {
    this->north_velocity = _arg;
    return *this;
  }
  Type & set__east_velocity(
    const double & _arg)
  {
    this->east_velocity = _arg;
    return *this;
  }
  Type & set__up_velocity(
    const double & _arg)
  {
    this->up_velocity = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__azimuth(
    const double & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__latitude_stdev(
    const float & _arg)
  {
    this->latitude_stdev = _arg;
    return *this;
  }
  Type & set__longitude_stdev(
    const float & _arg)
  {
    this->longitude_stdev = _arg;
    return *this;
  }
  Type & set__height_stdev(
    const float & _arg)
  {
    this->height_stdev = _arg;
    return *this;
  }
  Type & set__north_velocity_stdev(
    const float & _arg)
  {
    this->north_velocity_stdev = _arg;
    return *this;
  }
  Type & set__east_velocity_stdev(
    const float & _arg)
  {
    this->east_velocity_stdev = _arg;
    return *this;
  }
  Type & set__up_velocity_stdev(
    const float & _arg)
  {
    this->up_velocity_stdev = _arg;
    return *this;
  }
  Type & set__roll_stdev(
    const float & _arg)
  {
    this->roll_stdev = _arg;
    return *this;
  }
  Type & set__pitch_stdev(
    const float & _arg)
  {
    this->pitch_stdev = _arg;
    return *this;
  }
  Type & set__azimuth_stdev(
    const float & _arg)
  {
    this->azimuth_stdev = _arg;
    return *this;
  }
  Type & set__ext_sol_status(
    const novatel_oem7_msgs::msg::INSExtendedSolutionStatus_<ContainerAllocator> & _arg)
  {
    this->ext_sol_status = _arg;
    return *this;
  }
  Type & set__time_since_update(
    const uint16_t & _arg)
  {
    this->time_since_update = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSPVAX
    std::shared_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSPVAX
    std::shared_ptr<novatel_oem7_msgs::msg::INSPVAX_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSPVAX_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nov_header != other.nov_header) {
      return false;
    }
    if (this->ins_status != other.ins_status) {
      return false;
    }
    if (this->pos_type != other.pos_type) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->north_velocity != other.north_velocity) {
      return false;
    }
    if (this->east_velocity != other.east_velocity) {
      return false;
    }
    if (this->up_velocity != other.up_velocity) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->latitude_stdev != other.latitude_stdev) {
      return false;
    }
    if (this->longitude_stdev != other.longitude_stdev) {
      return false;
    }
    if (this->height_stdev != other.height_stdev) {
      return false;
    }
    if (this->north_velocity_stdev != other.north_velocity_stdev) {
      return false;
    }
    if (this->east_velocity_stdev != other.east_velocity_stdev) {
      return false;
    }
    if (this->up_velocity_stdev != other.up_velocity_stdev) {
      return false;
    }
    if (this->roll_stdev != other.roll_stdev) {
      return false;
    }
    if (this->pitch_stdev != other.pitch_stdev) {
      return false;
    }
    if (this->azimuth_stdev != other.azimuth_stdev) {
      return false;
    }
    if (this->ext_sol_status != other.ext_sol_status) {
      return false;
    }
    if (this->time_since_update != other.time_since_update) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSPVAX_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSPVAX_

// alias to use template instance with default allocator
using INSPVAX =
  novatel_oem7_msgs::msg::INSPVAX_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__STRUCT_HPP_
