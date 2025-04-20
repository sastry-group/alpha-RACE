// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autonoma_msgs:msg/VehicleInputs.idl
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
#include "autonoma_msgs/msg/detail/vehicle_inputs__struct.h"
#include "autonoma_msgs/msg/detail/vehicle_inputs__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autonoma_msgs__msg__vehicle_inputs__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("autonoma_msgs.msg._vehicle_inputs.VehicleInputs", full_classname_dest, 47) == 0);
  }
  autonoma_msgs__msg__VehicleInputs * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // throttle_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_cmd_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_cmd_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->throttle_cmd_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brake_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_cmd_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_cmd_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_cmd_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steering_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_cmd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_cmd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_cmd_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_cmd_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_cmd_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_cmd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autonoma_msgs__msg__vehicle_inputs__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleInputs */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autonoma_msgs.msg._vehicle_inputs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleInputs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autonoma_msgs__msg__VehicleInputs * ros_message = (autonoma_msgs__msg__VehicleInputs *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_cmd_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->throttle_cmd_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_cmd_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_cmd_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_cmd_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_cmd_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_cmd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_cmd_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steering_cmd_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_cmd_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_cmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
