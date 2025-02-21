// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from frhal_msgs:srv/CalibInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "frhal_msgs/srv/detail/calib_interface__rosidl_typesupport_introspection_c.h"
#include "frhal_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "frhal_msgs/srv/detail/calib_interface__functions.h"
#include "frhal_msgs/srv/detail/calib_interface__struct.h"


// Include directives for member types
// Member `base_param`
#include "rosidl_runtime_c/string_functions.h"
// Member `input_poses`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  frhal_msgs__srv__CalibInterface_Request__init(message_memory);
}

void frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_fini_function(void * message_memory)
{
  frhal_msgs__srv__CalibInterface_Request__fini(message_memory);
}

size_t frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__size_function__CalibInterface_Request__input_poses(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__get_const_function__CalibInterface_Request__input_poses(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__get_function__CalibInterface_Request__input_poses(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__fetch_function__CalibInterface_Request__input_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__get_const_function__CalibInterface_Request__input_poses(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__assign_function__CalibInterface_Request__input_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__get_function__CalibInterface_Request__input_poses(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__resize_function__CalibInterface_Request__input_poses(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_member_array[6] = {
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Request, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_param",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Request, base_param),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Request, x_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Request, y_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Request, angle_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Request, input_poses),  // bytes offset in struct
    NULL,  // default value
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__size_function__CalibInterface_Request__input_poses,  // size() function pointer
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__get_const_function__CalibInterface_Request__input_poses,  // get_const(index) function pointer
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__get_function__CalibInterface_Request__input_poses,  // get(index) function pointer
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__fetch_function__CalibInterface_Request__input_poses,  // fetch(index, &value) function pointer
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__assign_function__CalibInterface_Request__input_poses,  // assign(index, value) function pointer
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__resize_function__CalibInterface_Request__input_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_members = {
  "frhal_msgs__srv",  // message namespace
  "CalibInterface_Request",  // message name
  6,  // number of fields
  sizeof(frhal_msgs__srv__CalibInterface_Request),
  frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_member_array,  // message members
  frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_type_support_handle = {
  0,
  &frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_frhal_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface_Request)() {
  if (!frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_type_support_handle.typesupport_identifier) {
    frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &frhal_msgs__srv__CalibInterface_Request__rosidl_typesupport_introspection_c__CalibInterface_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "frhal_msgs/srv/detail/calib_interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "frhal_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "frhal_msgs/srv/detail/calib_interface__functions.h"
// already included above
// #include "frhal_msgs/srv/detail/calib_interface__struct.h"


// Include directives for member types
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `output_poses`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  frhal_msgs__srv__CalibInterface_Response__init(message_memory);
}

void frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_fini_function(void * message_memory)
{
  frhal_msgs__srv__CalibInterface_Response__fini(message_memory);
}

size_t frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__size_function__CalibInterface_Response__output_poses(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__get_const_function__CalibInterface_Response__output_poses(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__get_function__CalibInterface_Response__output_poses(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__fetch_function__CalibInterface_Response__output_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__get_const_function__CalibInterface_Response__output_poses(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__assign_function__CalibInterface_Response__output_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__get_function__CalibInterface_Response__output_poses(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__resize_function__CalibInterface_Response__output_poses(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_member_array[3] = {
  {
    "cmd_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Response, cmd_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Response, error_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(frhal_msgs__srv__CalibInterface_Response, output_poses),  // bytes offset in struct
    NULL,  // default value
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__size_function__CalibInterface_Response__output_poses,  // size() function pointer
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__get_const_function__CalibInterface_Response__output_poses,  // get_const(index) function pointer
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__get_function__CalibInterface_Response__output_poses,  // get(index) function pointer
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__fetch_function__CalibInterface_Response__output_poses,  // fetch(index, &value) function pointer
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__assign_function__CalibInterface_Response__output_poses,  // assign(index, value) function pointer
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__resize_function__CalibInterface_Response__output_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_members = {
  "frhal_msgs__srv",  // message namespace
  "CalibInterface_Response",  // message name
  3,  // number of fields
  sizeof(frhal_msgs__srv__CalibInterface_Response),
  frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_member_array,  // message members
  frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_type_support_handle = {
  0,
  &frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_frhal_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface_Response)() {
  if (!frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_type_support_handle.typesupport_identifier) {
    frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &frhal_msgs__srv__CalibInterface_Response__rosidl_typesupport_introspection_c__CalibInterface_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "frhal_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "frhal_msgs/srv/detail/calib_interface__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_members = {
  "frhal_msgs__srv",  // service namespace
  "CalibInterface",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_Request_message_type_support_handle,
  NULL  // response message
  // frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_Response_message_type_support_handle
};

static rosidl_service_type_support_t frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_type_support_handle = {
  0,
  &frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_frhal_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface)() {
  if (!frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_type_support_handle.typesupport_identifier) {
    frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, frhal_msgs, srv, CalibInterface_Response)()->data;
  }

  return &frhal_msgs__srv__detail__calib_interface__rosidl_typesupport_introspection_c__CalibInterface_service_type_support_handle;
}
