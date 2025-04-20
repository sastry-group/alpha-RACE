// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSUpdate.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSUpdate __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSUpdate __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSUpdate_
{
  using Type = INSUpdate_<ContainerAllocator>;

  explicit INSUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->update.begin(), this->update.end(), 0);
    }
  }

  explicit INSUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : update(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->update.begin(), this->update.end(), 0);
    }
  }

  // field types and members
  using _update_type =
    std::array<uint8_t, 4>;
  _update_type update;

  // setters for named parameter idiom
  Type & set__update(
    const std::array<uint8_t, 4> & _arg)
  {
    this->update = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSUpdate
    std::shared_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSUpdate
    std::shared_ptr<novatel_oem7_msgs::msg::INSUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSUpdate_ & other) const
  {
    if (this->update != other.update) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSUpdate_

// alias to use template instance with default allocator
using INSUpdate =
  novatel_oem7_msgs::msg::INSUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__STRUCT_HPP_
