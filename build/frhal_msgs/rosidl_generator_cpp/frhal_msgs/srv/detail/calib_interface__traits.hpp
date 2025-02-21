// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from frhal_msgs:srv/CalibInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__TRAITS_HPP_
#define FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "frhal_msgs/srv/detail/calib_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace frhal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalibInterface_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: base_param
  {
    out << "base_param: ";
    rosidl_generator_traits::value_to_yaml(msg.base_param, out);
    out << ", ";
  }

  // member: x_step
  {
    out << "x_step: ";
    rosidl_generator_traits::value_to_yaml(msg.x_step, out);
    out << ", ";
  }

  // member: y_step
  {
    out << "y_step: ";
    rosidl_generator_traits::value_to_yaml(msg.y_step, out);
    out << ", ";
  }

  // member: angle_step
  {
    out << "angle_step: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_step, out);
    out << ", ";
  }

  // member: input_poses
  {
    if (msg.input_poses.size() == 0) {
      out << "input_poses: []";
    } else {
      out << "input_poses: [";
      size_t pending_items = msg.input_poses.size();
      for (auto item : msg.input_poses) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CalibInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: base_param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_param: ";
    rosidl_generator_traits::value_to_yaml(msg.base_param, out);
    out << "\n";
  }

  // member: x_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_step: ";
    rosidl_generator_traits::value_to_yaml(msg.x_step, out);
    out << "\n";
  }

  // member: y_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_step: ";
    rosidl_generator_traits::value_to_yaml(msg.y_step, out);
    out << "\n";
  }

  // member: angle_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_step: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_step, out);
    out << "\n";
  }

  // member: input_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_poses.size() == 0) {
      out << "input_poses: []\n";
    } else {
      out << "input_poses:\n";
      for (auto item : msg.input_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalibInterface_Request & msg, bool use_flow_style = false)
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
  const frhal_msgs::srv::CalibInterface_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  frhal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use frhal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const frhal_msgs::srv::CalibInterface_Request & msg)
{
  return frhal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<frhal_msgs::srv::CalibInterface_Request>()
{
  return "frhal_msgs::srv::CalibInterface_Request";
}

template<>
inline const char * name<frhal_msgs::srv::CalibInterface_Request>()
{
  return "frhal_msgs/srv/CalibInterface_Request";
}

template<>
struct has_fixed_size<frhal_msgs::srv::CalibInterface_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<frhal_msgs::srv::CalibInterface_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<frhal_msgs::srv::CalibInterface_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace frhal_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalibInterface_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_result
  {
    out << "cmd_result: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_result, out);
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << ", ";
  }

  // member: output_poses
  {
    if (msg.output_poses.size() == 0) {
      out << "output_poses: []";
    } else {
      out << "output_poses: [";
      size_t pending_items = msg.output_poses.size();
      for (auto item : msg.output_poses) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CalibInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_result: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_result, out);
    out << "\n";
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }

  // member: output_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_poses.size() == 0) {
      out << "output_poses: []\n";
    } else {
      out << "output_poses:\n";
      for (auto item : msg.output_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalibInterface_Response & msg, bool use_flow_style = false)
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
  const frhal_msgs::srv::CalibInterface_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  frhal_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use frhal_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const frhal_msgs::srv::CalibInterface_Response & msg)
{
  return frhal_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<frhal_msgs::srv::CalibInterface_Response>()
{
  return "frhal_msgs::srv::CalibInterface_Response";
}

template<>
inline const char * name<frhal_msgs::srv::CalibInterface_Response>()
{
  return "frhal_msgs/srv/CalibInterface_Response";
}

template<>
struct has_fixed_size<frhal_msgs::srv::CalibInterface_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<frhal_msgs::srv::CalibInterface_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<frhal_msgs::srv::CalibInterface_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<frhal_msgs::srv::CalibInterface>()
{
  return "frhal_msgs::srv::CalibInterface";
}

template<>
inline const char * name<frhal_msgs::srv::CalibInterface>()
{
  return "frhal_msgs/srv/CalibInterface";
}

template<>
struct has_fixed_size<frhal_msgs::srv::CalibInterface>
  : std::integral_constant<
    bool,
    has_fixed_size<frhal_msgs::srv::CalibInterface_Request>::value &&
    has_fixed_size<frhal_msgs::srv::CalibInterface_Response>::value
  >
{
};

template<>
struct has_bounded_size<frhal_msgs::srv::CalibInterface>
  : std::integral_constant<
    bool,
    has_bounded_size<frhal_msgs::srv::CalibInterface_Request>::value &&
    has_bounded_size<frhal_msgs::srv::CalibInterface_Response>::value
  >
{
};

template<>
struct is_service<frhal_msgs::srv::CalibInterface>
  : std::true_type
{
};

template<>
struct is_service_request<frhal_msgs::srv::CalibInterface_Request>
  : std::true_type
{
};

template<>
struct is_service_response<frhal_msgs::srv::CalibInterface_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__TRAITS_HPP_
