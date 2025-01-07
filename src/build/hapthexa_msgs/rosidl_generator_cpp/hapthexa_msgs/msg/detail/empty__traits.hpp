// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hapthexa_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/empty.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hapthexa_msgs/msg/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hapthexa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Empty & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty & msg, bool use_flow_style = false)
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
  const hapthexa_msgs::msg::Empty & msg,
  std::ostream & out, size_t indentation = 0)
{
  hapthexa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hapthexa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hapthexa_msgs::msg::Empty & msg)
{
  return hapthexa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hapthexa_msgs::msg::Empty>()
{
  return "hapthexa_msgs::msg::Empty";
}

template<>
inline const char * name<hapthexa_msgs::msg::Empty>()
{
  return "hapthexa_msgs/msg/Empty";
}

template<>
struct has_fixed_size<hapthexa_msgs::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hapthexa_msgs::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hapthexa_msgs::msg::Empty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_
