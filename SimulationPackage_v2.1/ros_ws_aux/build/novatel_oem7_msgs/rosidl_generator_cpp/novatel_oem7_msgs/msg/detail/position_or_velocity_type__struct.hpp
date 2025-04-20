// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:msg/PositionOrVelocityType.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__msg__PositionOrVelocityType __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__msg__PositionOrVelocityType __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionOrVelocityType_
{
  using Type = PositionOrVelocityType_<ContainerAllocator>;

  explicit PositionOrVelocityType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
    }
  }

  explicit PositionOrVelocityType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
    }
  }

  // field types and members
  using _type_type =
    uint32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t NONE =
    0u;
  static constexpr uint32_t FIXEDPOS =
    1u;
  static constexpr uint32_t FIXEDHEIGHT =
    2u;
  static constexpr uint32_t DOPPLER_VELOCITY =
    8u;
  static constexpr uint32_t SINGLE =
    16u;
  static constexpr uint32_t PSRDIFF =
    17u;
  static constexpr uint32_t WAAS =
    18u;
  static constexpr uint32_t PROPAGATED =
    19u;
  static constexpr uint32_t L1_FLOAT =
    32u;
  static constexpr uint32_t NARROW_FLOAT =
    34u;
  static constexpr uint32_t L1_INT =
    48u;
  static constexpr uint32_t WIDE_INT =
    49u;
  static constexpr uint32_t NARROW_INT =
    50u;
  static constexpr uint32_t RTK_DIRECT_INS =
    51u;
  static constexpr uint32_t INS_SBAS =
    52u;
  static constexpr uint32_t INS_PSRSP =
    53u;
  static constexpr uint32_t INS_PSRDIFF =
    54u;
  static constexpr uint32_t INS_RTKFLOAT =
    55u;
  static constexpr uint32_t INS_RTKFIXED =
    56u;
  static constexpr uint32_t PPP_CONVERGING =
    68u;
  static constexpr uint32_t PPP =
    69u;
  static constexpr uint32_t OPERATIONAL =
    70u;
  static constexpr uint32_t WARNING =
    71u;
  static constexpr uint32_t OUT_OF_BOUNDS =
    72u;
  static constexpr uint32_t INS_PPP_CONVERGING =
    73u;
  static constexpr uint32_t INS_PPP =
    74u;
  static constexpr uint32_t PPP_BASIC_CONVERGING =
    77u;
  static constexpr uint32_t PPP_BASIC =
    78u;
  static constexpr uint32_t INS_PPP_BASIC_CONVERGING =
    79u;
  static constexpr uint32_t INS_PPP_BASIC =
    80u;

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__msg__PositionOrVelocityType
    std::shared_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__msg__PositionOrVelocityType
    std::shared_ptr<novatel_oem7_msgs::msg::PositionOrVelocityType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionOrVelocityType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionOrVelocityType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionOrVelocityType_

// alias to use template instance with default allocator
using PositionOrVelocityType =
  novatel_oem7_msgs::msg::PositionOrVelocityType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::FIXEDPOS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::FIXEDHEIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::DOPPLER_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::SINGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::PSRDIFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::WAAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::PROPAGATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::L1_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::NARROW_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::L1_INT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::WIDE_INT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::NARROW_INT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::RTK_DIRECT_INS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_SBAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_PSRSP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_PSRDIFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_RTKFLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_RTKFIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::PPP_CONVERGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::PPP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::OPERATIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::OUT_OF_BOUNDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_PPP_CONVERGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_PPP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::PPP_BASIC_CONVERGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::PPP_BASIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_PPP_BASIC_CONVERGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t PositionOrVelocityType_<ContainerAllocator>::INS_PPP_BASIC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__POSITION_OR_VELOCITY_TYPE__STRUCT_HPP_
