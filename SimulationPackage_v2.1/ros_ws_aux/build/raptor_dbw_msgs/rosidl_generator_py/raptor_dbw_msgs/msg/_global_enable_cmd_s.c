// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
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
#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__struct.h"
#include "raptor_dbw_msgs/msg/detail/global_enable_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__global_enable_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("raptor_dbw_msgs.msg._global_enable_cmd.GlobalEnableCmd", full_classname_dest, 54) == 0);
  }
  raptor_dbw_msgs__msg__GlobalEnableCmd * ros_message = _ros_message;
  {  // global_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->global_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_joystick_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_joystick_limits");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_joystick_limits = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ecu_build_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecu_build_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ecu_build_number = (uint16_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__global_enable_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GlobalEnableCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._global_enable_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GlobalEnableCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__GlobalEnableCmd * ros_message = (raptor_dbw_msgs__msg__GlobalEnableCmd *)raw_ros_message;
  {  // global_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->global_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_joystick_limits
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_joystick_limits ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_joystick_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecu_build_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ecu_build_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecu_build_number", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
