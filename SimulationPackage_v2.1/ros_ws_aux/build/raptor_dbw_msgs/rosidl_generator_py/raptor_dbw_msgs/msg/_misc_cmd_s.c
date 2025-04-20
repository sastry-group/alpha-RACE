// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__struct.h"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__functions.h"

bool raptor_dbw_msgs__msg__turn_signal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__turn_signal__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__door_request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__door_request__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__high_beam__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__high_beam__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__wiper_front__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__wiper_front__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__wiper_rear__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__wiper_rear__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__ignition__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__ignition__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__door_request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__door_request__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__door_request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__door_request__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__low_beam__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__low_beam__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__misc_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("raptor_dbw_msgs.msg._misc_cmd.MiscCmd", full_classname_dest, 37) == 0);
  }
  raptor_dbw_msgs__msg__MiscCmd * ros_message = _ros_message;
  {  // cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__turn_signal__convert_from_py(field, &ros_message->cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // door_request_right_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_request_right_rear");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__door_request__convert_from_py(field, &ros_message->door_request_right_rear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rolling_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // high_beam_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam_cmd");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__high_beam__convert_from_py(field, &ros_message->high_beam_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_wiper_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wiper_cmd");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__wiper_front__convert_from_py(field, &ros_message->front_wiper_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_wiper_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wiper_cmd");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__wiper_rear__convert_from_py(field, &ros_message->rear_wiper_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ignition_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignition_cmd");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__ignition__convert_from_py(field, &ros_message->ignition_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // door_request_left_rear
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_request_left_rear");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__door_request__convert_from_py(field, &ros_message->door_request_left_rear)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // door_request_lift_gate
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_request_lift_gate");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__door_request__convert_from_py(field, &ros_message->door_request_lift_gate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // block_standard_cruise_buttons
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_standard_cruise_buttons");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->block_standard_cruise_buttons = (Py_True == field);
    Py_DECREF(field);
  }
  {  // block_adaptive_cruise_buttons
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_adaptive_cruise_buttons");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->block_adaptive_cruise_buttons = (Py_True == field);
    Py_DECREF(field);
  }
  {  // block_turn_signal_stalk
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_turn_signal_stalk");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->block_turn_signal_stalk = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horn_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->horn_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_beam_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_beam_cmd");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__low_beam__convert_from_py(field, &ros_message->low_beam_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__misc_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MiscCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._misc_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MiscCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__MiscCmd * ros_message = (raptor_dbw_msgs__msg__MiscCmd *)raw_ros_message;
  {  // cmd
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__turn_signal__convert_to_py(&ros_message->cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_request_right_rear
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__door_request__convert_to_py(&ros_message->door_request_right_rear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_request_right_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam_cmd
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__high_beam__convert_to_py(&ros_message->high_beam_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wiper_cmd
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__wiper_front__convert_to_py(&ros_message->front_wiper_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wiper_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wiper_cmd
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__wiper_rear__convert_to_py(&ros_message->rear_wiper_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wiper_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignition_cmd
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__ignition__convert_to_py(&ros_message->ignition_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignition_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_request_left_rear
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__door_request__convert_to_py(&ros_message->door_request_left_rear);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_request_left_rear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_request_lift_gate
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__door_request__convert_to_py(&ros_message->door_request_lift_gate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_request_lift_gate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_standard_cruise_buttons
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->block_standard_cruise_buttons ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_standard_cruise_buttons", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_adaptive_cruise_buttons
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->block_adaptive_cruise_buttons ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_adaptive_cruise_buttons", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_turn_signal_stalk
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->block_turn_signal_stalk ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_turn_signal_stalk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->horn_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_beam_cmd
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__low_beam__convert_to_py(&ros_message->low_beam_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_beam_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
