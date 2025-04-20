// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
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
#include "raptor_dbw_msgs/msg/detail/misc_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/misc_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__misc_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("raptor_dbw_msgs.msg._misc_report.MiscReport", full_classname_dest, 43) == 0);
  }
  raptor_dbw_msgs__msg__MiscReport * ros_message = _ros_message;
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
  {  // fuel_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drive_by_wire_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_by_wire_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drive_by_wire_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // software_build_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_build_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_build_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // general_actuator_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "general_actuator_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->general_actuator_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // by_wire_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "by_wire_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->by_wire_ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // general_driver_activity
    PyObject * field = PyObject_GetAttrString(_pymsg, "general_driver_activity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->general_driver_activity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // comms_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "comms_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->comms_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ambient_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ambient_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ambient_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__misc_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MiscReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._misc_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MiscReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__MiscReport * ros_message = (raptor_dbw_msgs__msg__MiscReport *)raw_ros_message;
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
  {  // fuel_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_by_wire_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drive_by_wire_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_by_wire_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_build_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_build_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_build_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // general_actuator_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->general_actuator_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "general_actuator_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // by_wire_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->by_wire_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "by_wire_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // general_driver_activity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->general_driver_activity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "general_driver_activity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comms_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->comms_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comms_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ambient_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ambient_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ambient_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
