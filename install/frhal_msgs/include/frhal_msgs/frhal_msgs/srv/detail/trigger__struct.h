// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from frhal_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__TRIGGER__STRUCT_H_
#define FRHAL_MSGS__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Trigger in the package frhal_msgs.
typedef struct frhal_msgs__srv__Trigger_Request
{
  uint8_t request;
} frhal_msgs__srv__Trigger_Request;

// Struct for a sequence of frhal_msgs__srv__Trigger_Request.
typedef struct frhal_msgs__srv__Trigger_Request__Sequence
{
  frhal_msgs__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__Trigger_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Trigger in the package frhal_msgs.
typedef struct frhal_msgs__srv__Trigger_Response
{
  bool result;
} frhal_msgs__srv__Trigger_Response;

// Struct for a sequence of frhal_msgs__srv__Trigger_Response.
typedef struct frhal_msgs__srv__Trigger_Response__Sequence
{
  frhal_msgs__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__Trigger_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__SRV__DETAIL__TRIGGER__STRUCT_H_
