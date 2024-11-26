// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hapthexa_msgs:srv/GetLegPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hapthexa_msgs/srv/get_leg_position.hpp"


#ifndef HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_POSITION__TRAITS_HPP_
#define HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hapthexa_msgs/srv/detail/get_leg_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hapthexa_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLegPosition_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLegPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLegPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hapthexa_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hapthexa_msgs::srv::GetLegPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hapthexa_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hapthexa_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hapthexa_msgs::srv::GetLegPosition_Request & msg)
{
  return hapthexa_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hapthexa_msgs::srv::GetLegPosition_Request>()
{
  return "hapthexa_msgs::srv::GetLegPosition_Request";
}

template<>
inline const char * name<hapthexa_msgs::srv::GetLegPosition_Request>()
{
  return "hapthexa_msgs/srv/GetLegPosition_Request";
}

template<>
struct has_fixed_size<hapthexa_msgs::srv::GetLegPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hapthexa_msgs::srv::GetLegPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hapthexa_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLegPosition_Response & msg,
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
  const GetLegPosition_Response & msg,
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

inline std::string to_yaml(const GetLegPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hapthexa_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hapthexa_msgs::srv::GetLegPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hapthexa_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hapthexa_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hapthexa_msgs::srv::GetLegPosition_Response & msg)
{
  return hapthexa_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hapthexa_msgs::srv::GetLegPosition_Response>()
{
  return "hapthexa_msgs::srv::GetLegPosition_Response";
}

template<>
inline const char * name<hapthexa_msgs::srv::GetLegPosition_Response>()
{
  return "hapthexa_msgs/srv/GetLegPosition_Response";
}

template<>
struct has_fixed_size<hapthexa_msgs::srv::GetLegPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hapthexa_msgs::srv::GetLegPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace hapthexa_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLegPosition_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLegPosition_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLegPosition_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hapthexa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hapthexa_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hapthexa_msgs::srv::GetLegPosition_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  hapthexa_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hapthexa_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hapthexa_msgs::srv::GetLegPosition_Event & msg)
{
  return hapthexa_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hapthexa_msgs::srv::GetLegPosition_Event>()
{
  return "hapthexa_msgs::srv::GetLegPosition_Event";
}

template<>
inline const char * name<hapthexa_msgs::srv::GetLegPosition_Event>()
{
  return "hapthexa_msgs/srv/GetLegPosition_Event";
}

template<>
struct has_fixed_size<hapthexa_msgs::srv::GetLegPosition_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Event>
  : std::integral_constant<bool, has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Request>::value && has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<hapthexa_msgs::srv::GetLegPosition_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hapthexa_msgs::srv::GetLegPosition>()
{
  return "hapthexa_msgs::srv::GetLegPosition";
}

template<>
inline const char * name<hapthexa_msgs::srv::GetLegPosition>()
{
  return "hapthexa_msgs/srv/GetLegPosition";
}

template<>
struct has_fixed_size<hapthexa_msgs::srv::GetLegPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<hapthexa_msgs::srv::GetLegPosition_Request>::value &&
    has_fixed_size<hapthexa_msgs::srv::GetLegPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<hapthexa_msgs::srv::GetLegPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Request>::value &&
    has_bounded_size<hapthexa_msgs::srv::GetLegPosition_Response>::value
  >
{
};

template<>
struct is_service<hapthexa_msgs::srv::GetLegPosition>
  : std::true_type
{
};

template<>
struct is_service_request<hapthexa_msgs::srv::GetLegPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hapthexa_msgs::srv::GetLegPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HAPTHEXA_MSGS__SRV__DETAIL__GET_LEG_POSITION__TRAITS_HPP_