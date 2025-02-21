// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef moveit_ywf_msg__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef moveit_ywf_msg__module = {
  PyModuleDef_HEAD_INIT,
  "_moveit_ywf_msg_support",
  "_moveit_ywf_msg_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  moveit_ywf_msg__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
#include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
#include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__goal__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_Goal__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__goal__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_Goal * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_Goal *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_Goal__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__goal__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__goal__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_Goal);

int8_t
_register_msg_type__action__moveit_ywf_intf__goal(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__goal__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__goal",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__goal__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__goal",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__goal__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__goal",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__goal__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__goal",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_Goal),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__goal",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__result__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_Result__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__result__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_Result * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_Result *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_Result__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__result__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__result__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_Result);

int8_t
_register_msg_type__action__moveit_ywf_intf__result(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__result__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__result",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__result__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__result",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__result__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__result",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__result__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__result",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_Result),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__result",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__feedback__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_Feedback__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__feedback__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_Feedback * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_Feedback *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_Feedback__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__feedback__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__feedback__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_Feedback);

int8_t
_register_msg_type__action__moveit_ywf_intf__feedback(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__feedback",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__feedback",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__feedback",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__feedback",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_Feedback),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__feedback",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_SendGoal_Request);

int8_t
_register_msg_type__action__moveit_ywf_intf__send_goal__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__send_goal__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__send_goal__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__send_goal__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__send_goal__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_SendGoal_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__send_goal__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_SendGoal_Response);

int8_t
_register_msg_type__action__moveit_ywf_intf__send_goal__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__send_goal__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__send_goal__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__send_goal__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__send_goal__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__send_goal__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_SendGoal_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__send_goal__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_ywf_msg, action, MoveitYwfIntf_SendGoal)();

int8_t
_register_srv_type__action__moveit_ywf_intf__send_goal(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_ywf_msg, action, MoveitYwfIntf_SendGoal)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__action__moveit_ywf_intf__send_goal",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_GetResult_Request);

int8_t
_register_msg_type__action__moveit_ywf_intf__get_result__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__get_result__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__get_result__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__get_result__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__get_result__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_GetResult_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__get_result__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_GetResult_Response);

int8_t
_register_msg_type__action__moveit_ywf_intf__get_result__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__get_result__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__get_result__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__get_result__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__get_result__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__get_result__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_GetResult_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__get_result__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_ywf_msg, action, MoveitYwfIntf_GetResult)();

int8_t
_register_srv_type__action__moveit_ywf_intf__get_result(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_ywf_msg, action, MoveitYwfIntf_GetResult)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__action__moveit_ywf_intf__get_result",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__type_support.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__functions.h"

static void * moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__create_ros_message(void)
{
  return moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__create();
}

static void moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__destroy_ros_message(void * raw_ros_message)
{
  moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * ros_message = (moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage *)raw_ros_message;
  moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_FeedbackMessage);

int8_t
_register_msg_type__action__moveit_ywf_intf__feedback_message(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__action__moveit_ywf_intf__feedback_message",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__action__moveit_ywf_intf__feedback_message",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__action__moveit_ywf_intf__feedback_message",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&moveit_ywf_msg__action__moveit_ywf_intf__feedback_message__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__action__moveit_ywf_intf__feedback_message",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(moveit_ywf_msg, action, MoveitYwfIntf_FeedbackMessage),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__action__moveit_ywf_intf__feedback_message",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}


int8_t
_register_action_type__action__moveit_ywf_intf(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_c, moveit_ywf_msg, action, MoveitYwfIntf)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_action__action__moveit_ywf_intf",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_moveit_ywf_msg_s__rosidl_typesupport_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&moveit_ywf_msg__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__action__moveit_ywf_intf__goal(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__result(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__feedback(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__send_goal__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__send_goal__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__action__moveit_ywf_intf__send_goal(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__get_result__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__get_result__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__action__moveit_ywf_intf__get_result(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__action__moveit_ywf_intf__feedback_message(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_action_type__action__moveit_ywf_intf(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
