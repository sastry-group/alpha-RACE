// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from foxglove_msgs:msg/GeoJSON.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__GEO_JSON__BUILDER_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__GEO_JSON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "foxglove_msgs/msg/detail/geo_json__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace foxglove_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoJSON_geojson
{
public:
  Init_GeoJSON_geojson()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::foxglove_msgs::msg::GeoJSON geojson(::foxglove_msgs::msg::GeoJSON::_geojson_type arg)
  {
    msg_.geojson = std::move(arg);
    return std::move(msg_);
  }

private:
  ::foxglove_msgs::msg::GeoJSON msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::foxglove_msgs::msg::GeoJSON>()
{
  return foxglove_msgs::msg::builder::Init_GeoJSON_geojson();
}

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__GEO_JSON__BUILDER_HPP_
