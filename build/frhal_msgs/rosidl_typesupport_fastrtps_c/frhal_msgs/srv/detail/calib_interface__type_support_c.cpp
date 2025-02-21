// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from frhal_msgs:srv/CalibInterface.idl
// generated code does not contain a copyright notice
#include "frhal_msgs/srv/detail/calib_interface__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "frhal_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "frhal_msgs/srv/detail/calib_interface__struct.h"
#include "frhal_msgs/srv/detail/calib_interface__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // input_poses
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // input_poses
#include "rosidl_runtime_c/string.h"  // base_param
#include "rosidl_runtime_c/string_functions.h"  // base_param

// forward declare type support functions


using _CalibInterface_Request__ros_msg_type = frhal_msgs__srv__CalibInterface_Request;

static bool _CalibInterface_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CalibInterface_Request__ros_msg_type * ros_message = static_cast<const _CalibInterface_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: model
  {
    cdr << ros_message->model;
  }

  // Field name: base_param
  {
    const rosidl_runtime_c__String * str = &ros_message->base_param;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: x_step
  {
    cdr << ros_message->x_step;
  }

  // Field name: y_step
  {
    cdr << ros_message->y_step;
  }

  // Field name: angle_step
  {
    cdr << ros_message->angle_step;
  }

  // Field name: input_poses
  {
    size_t size = ros_message->input_poses.size;
    auto array_ptr = ros_message->input_poses.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CalibInterface_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CalibInterface_Request__ros_msg_type * ros_message = static_cast<_CalibInterface_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: model
  {
    cdr >> ros_message->model;
  }

  // Field name: base_param
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->base_param.data) {
      rosidl_runtime_c__String__init(&ros_message->base_param);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->base_param,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'base_param'\n");
      return false;
    }
  }

  // Field name: x_step
  {
    cdr >> ros_message->x_step;
  }

  // Field name: y_step
  {
    cdr >> ros_message->y_step;
  }

  // Field name: angle_step
  {
    cdr >> ros_message->angle_step;
  }

  // Field name: input_poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->input_poses.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->input_poses);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->input_poses, size)) {
      fprintf(stderr, "failed to create array for field 'input_poses'");
      return false;
    }
    auto array_ptr = ros_message->input_poses.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_frhal_msgs
size_t get_serialized_size_frhal_msgs__srv__CalibInterface_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CalibInterface_Request__ros_msg_type * ros_message = static_cast<const _CalibInterface_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name model
  {
    size_t item_size = sizeof(ros_message->model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_param
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->base_param.size + 1);
  // field.name x_step
  {
    size_t item_size = sizeof(ros_message->x_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_step
  {
    size_t item_size = sizeof(ros_message->y_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_step
  {
    size_t item_size = sizeof(ros_message->angle_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_poses
  {
    size_t array_size = ros_message->input_poses.size;
    auto array_ptr = ros_message->input_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CalibInterface_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_frhal_msgs__srv__CalibInterface_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_frhal_msgs
size_t max_serialized_size_frhal_msgs__srv__CalibInterface_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: model
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: base_param
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: x_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: input_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = frhal_msgs__srv__CalibInterface_Request;
    is_plain =
      (
      offsetof(DataType, input_poses) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CalibInterface_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_frhal_msgs__srv__CalibInterface_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CalibInterface_Request = {
  "frhal_msgs::srv",
  "CalibInterface_Request",
  _CalibInterface_Request__cdr_serialize,
  _CalibInterface_Request__cdr_deserialize,
  _CalibInterface_Request__get_serialized_size,
  _CalibInterface_Request__max_serialized_size
};

static rosidl_message_type_support_t _CalibInterface_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CalibInterface_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, frhal_msgs, srv, CalibInterface_Request)() {
  return &_CalibInterface_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "frhal_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "frhal_msgs/srv/detail/calib_interface__struct.h"
// already included above
// #include "frhal_msgs/srv/detail/calib_interface__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // output_poses
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // output_poses
// already included above
// #include "rosidl_runtime_c/string.h"  // error_msg
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error_msg

// forward declare type support functions


using _CalibInterface_Response__ros_msg_type = frhal_msgs__srv__CalibInterface_Response;

static bool _CalibInterface_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CalibInterface_Response__ros_msg_type * ros_message = static_cast<const _CalibInterface_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_result
  {
    cdr << (ros_message->cmd_result ? true : false);
  }

  // Field name: error_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->error_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: output_poses
  {
    size_t size = ros_message->output_poses.size;
    auto array_ptr = ros_message->output_poses.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CalibInterface_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CalibInterface_Response__ros_msg_type * ros_message = static_cast<_CalibInterface_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cmd_result = tmp ? true : false;
  }

  // Field name: error_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->error_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_msg'\n");
      return false;
    }
  }

  // Field name: output_poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->output_poses.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->output_poses);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->output_poses, size)) {
      fprintf(stderr, "failed to create array for field 'output_poses'");
      return false;
    }
    auto array_ptr = ros_message->output_poses.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_frhal_msgs
size_t get_serialized_size_frhal_msgs__srv__CalibInterface_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CalibInterface_Response__ros_msg_type * ros_message = static_cast<const _CalibInterface_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_result
  {
    size_t item_size = sizeof(ros_message->cmd_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_msg.size + 1);
  // field.name output_poses
  {
    size_t array_size = ros_message->output_poses.size;
    auto array_ptr = ros_message->output_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CalibInterface_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_frhal_msgs__srv__CalibInterface_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_frhal_msgs
size_t max_serialized_size_frhal_msgs__srv__CalibInterface_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cmd_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: output_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = frhal_msgs__srv__CalibInterface_Response;
    is_plain =
      (
      offsetof(DataType, output_poses) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CalibInterface_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_frhal_msgs__srv__CalibInterface_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CalibInterface_Response = {
  "frhal_msgs::srv",
  "CalibInterface_Response",
  _CalibInterface_Response__cdr_serialize,
  _CalibInterface_Response__cdr_deserialize,
  _CalibInterface_Response__get_serialized_size,
  _CalibInterface_Response__max_serialized_size
};

static rosidl_message_type_support_t _CalibInterface_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CalibInterface_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, frhal_msgs, srv, CalibInterface_Response)() {
  return &_CalibInterface_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "frhal_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "frhal_msgs/srv/calib_interface.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CalibInterface__callbacks = {
  "frhal_msgs::srv",
  "CalibInterface",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, frhal_msgs, srv, CalibInterface_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, frhal_msgs, srv, CalibInterface_Response)(),
};

static rosidl_service_type_support_t CalibInterface__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CalibInterface__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, frhal_msgs, srv, CalibInterface)() {
  return &CalibInterface__handle;
}

#if defined(__cplusplus)
}
#endif
