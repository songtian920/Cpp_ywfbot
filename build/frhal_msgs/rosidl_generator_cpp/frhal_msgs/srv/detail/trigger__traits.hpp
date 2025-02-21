// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from frhal_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__TRIGGER__TRAITS_HPP_
#define FRHAL_MSGS__SRV__DETAIL__TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "frhal_msgs/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace frhal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Trigger_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trigger_Request & msg, bool use_flow_style = false)
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

}  // namespace frhal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use frhal_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const frhal_msgs::srv::Trigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  frhal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use frhal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const frhal_msgs::srv::Trigger_Request & msg)
{
  return frhal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<frhal_msgs::srv::Trigger_Request>()
{
  return "frhal_msgs::srv::Trigger_Request";
}

template<>
inline const char * name<frhal_msgs::srv::Trigger_Request>()
{
  return "frhal_msgs/srv/Trigger_Request";
}

template<>
struct has_fixed_size<frhal_msgs::srv::Trigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<frhal_msgs::srv::Trigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<frhal_msgs::srv::Trigger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace frhal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Trigger_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trigger_Response & msg, bool use_flow_style = false)
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

}  // namespace frhal_msgs

namespace rosidl_generator_traits
{

[[deprecated("use frhal_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const frhal_msgs::srv::Trigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  frhal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use frhal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const frhal_msgs::srv::Trigger_Response & msg)
{
  return frhal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<frhal_msgs::srv::Trigger_Response>()
{
  return "frhal_msgs::srv::Trigger_Response";
}

template<>
inline const char * name<frhal_msgs::srv::Trigger_Response>()
{
  return "frhal_msgs/srv/Trigger_Response";
}

template<>
struct has_fixed_size<frhal_msgs::srv::Trigger_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<frhal_msgs::srv::Trigger_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<frhal_msgs::srv::Trigger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<frhal_msgs::srv::Trigger>()
{
  return "frhal_msgs::srv::Trigger";
}

template<>
inline const char * name<frhal_msgs::srv::Trigger>()
{
  return "frhal_msgs/srv/Trigger";
}

template<>
struct has_fixed_size<frhal_msgs::srv::Trigger>
  : std::integral_constant<
    bool,
    has_fixed_size<frhal_msgs::srv::Trigger_Request>::value &&
    has_fixed_size<frhal_msgs::srv::Trigger_Response>::value
  >
{
};

template<>
struct has_bounded_size<frhal_msgs::srv::Trigger>
  : std::integral_constant<
    bool,
    has_bounded_size<frhal_msgs::srv::Trigger_Request>::value &&
    has_bounded_size<frhal_msgs::srv::Trigger_Response>::value
  >
{
};

template<>
struct is_service<frhal_msgs::srv::Trigger>
  : std::true_type
{
};

template<>
struct is_service_request<frhal_msgs::srv::Trigger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<frhal_msgs::srv::Trigger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRHAL_MSGS__SRV__DETAIL__TRIGGER__TRAITS_HPP_
