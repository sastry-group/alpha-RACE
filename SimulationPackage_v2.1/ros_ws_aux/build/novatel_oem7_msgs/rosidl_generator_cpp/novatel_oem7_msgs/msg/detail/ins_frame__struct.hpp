// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/INSFrame.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_FRAME__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__INSFrame __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__INSFrame __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct INSFrame_
{
  using Type = INSFrame_<ContainerAllocator>;

  explicit INSFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ul;
    }
  }

  explicit INSFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ul;
    }
  }

  // field types and members
  using _frame_type =
    uint32_t;
  _frame_type frame;

  // setters for named parameter idiom
  Type & set__frame(
    const uint32_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t IMUBODY =
    0u;
  static constexpr uint32_t VEHICLE =
    1u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSFrame
    std::shared_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__INSFrame
    std::shared_ptr<novatel_oem7_msgs::msg::INSFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const INSFrame_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const INSFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct INSFrame_

// alias to use template instance with default allocator
using INSFrame =
  novatel_oem7_msgs::msg::INSFrame_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSFrame_<ContainerAllocator>::IMUBODY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t INSFrame_<ContainerAllocator>::VEHICLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_FRAME__STRUCT_HPP_
