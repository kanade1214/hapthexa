// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/msg/force_sensor.hpp"


#ifndef HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__TRAITS_HPP_
#define HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hapthexa_msgs/msg/detail/force_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hapthexa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ForceSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: loadcell1
  {
    out << "loadcell1: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell1, out);
    out << ", ";
  }

  // member: loadcell2
  {
    out << "loadcell2: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell2, out);
    out << ", ";
  }

  // member: piezo
  {
    out << "piezo: ";
    rosidl_generator_traits::value_to_yaml(msg.piezo, out);
    out << ", ";
  }

  // member: radial_direction
  {
    out << "radial_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_direction, out);
    out << ", ";
  }

  // member: radial_magnitude
  {
    out << "radial_magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_magnitude, out);
    out << ", ";
  }

  // member: loadcell1_raw
  {
    out << "loadcell1_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell1_raw, out);
    out << ", ";
  }

  // member: loadcell2_raw
  {
    out << "loadcell2_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell2_raw, out);
    out << ", ";
  }

  // member: piezo_raw
  {
    out << "piezo_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.piezo_raw, out);
    out << ", ";
  }

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
  const ForceSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: loadcell1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loadcell1: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell1, out);
    out << "\n";
  }

  // member: loadcell2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loadcell2: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell2, out);
    out << "\n";
  }

  // member: piezo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "piezo: ";
    rosidl_generator_traits::value_to_yaml(msg.piezo, out);
    out << "\n";
  }

  // member: radial_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radial_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_direction, out);
    out << "\n";
  }

  // member: radial_magnitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radial_magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_magnitude, out);
    out << "\n";
  }

  // member: loadcell1_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loadcell1_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell1_raw, out);
    out << "\n";
  }

  // member: loadcell2_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loadcell2_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.loadcell2_raw, out);
    out << "\n";
  }

  // member: piezo_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "piezo_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.piezo_raw, out);
    out << "\n";
  }

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

inline std::string to_yaml(const ForceSensor & msg, bool use_flow_style = false)
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
  const hapthexa_msgs::msg::ForceSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  hapthexa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hapthexa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hapthexa_msgs::msg::ForceSensor & msg)
{
  return hapthexa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hapthexa_msgs::msg::ForceSensor>()
{
  return "hapthexa_msgs::msg::ForceSensor";
}

template<>
inline const char * name<hapthexa_msgs::msg::ForceSensor>()
{
  return "hapthexa_msgs/msg/ForceSensor";
}

template<>
struct has_fixed_size<hapthexa_msgs::msg::ForceSensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hapthexa_msgs::msg::ForceSensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hapthexa_msgs::msg::ForceSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAPTHEXA_MSGS__MSG__DETAIL__FORCE_SENSOR__TRAITS_HPP_
