// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hapthexa_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/leg_position.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__TRAITS_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hapthexa_msgs/msg/detail/leg_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hapthexa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LegPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LegPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LegPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hapthexa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hapthexa_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hapthexa_msgs::msg::LegPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  hapthexa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hapthexa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hapthexa_msgs::msg::LegPosition & msg)
{
  return hapthexa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hapthexa_msgs::msg::LegPosition>()
{
  return "hapthexa_msgs::msg::LegPosition";
}

template<>
inline const char * name<hapthexa_msgs::msg::LegPosition>()
{
  return "hapthexa_msgs/msg/LegPosition";
}

template<>
struct has_fixed_size<hapthexa_msgs::msg::LegPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hapthexa_msgs::msg::LegPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hapthexa_msgs::msg::LegPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__LEG_POSITION__TRAITS_HPP_
