// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
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
#include "raptor_dbw_msgs/msg/detail/low_voltage_system_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/low_voltage_system_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__low_voltage_system_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("raptor_dbw_msgs.msg._low_voltage_system_report.LowVoltageSystemReport", full_classname_dest, 69) == 0);
  }
  raptor_dbw_msgs__msg__LowVoltageSystemReport * ros_message = _ros_message;
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
  {  // dbw_battery_volts
    PyObject * field = PyObject_GetAttrString(_pymsg, "dbw_battery_volts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dbw_battery_volts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_battery_volts
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_battery_volts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_battery_volts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_battery_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_battery_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_battery_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_alternator_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_alternator_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_alternator_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dcdc_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dcdc_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alternator_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "alternator_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alternator_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux_inverter_contactor
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_inverter_contactor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aux_inverter_contactor = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__low_voltage_system_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LowVoltageSystemReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._low_voltage_system_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LowVoltageSystemReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__LowVoltageSystemReport * ros_message = (raptor_dbw_msgs__msg__LowVoltageSystemReport *)raw_ros_message;
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
  {  // dbw_battery_volts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dbw_battery_volts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dbw_battery_volts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_battery_volts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_battery_volts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_battery_volts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_battery_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_battery_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_battery_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_alternator_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_alternator_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_alternator_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dcdc_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alternator_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alternator_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alternator_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_inverter_contactor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aux_inverter_contactor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_inverter_contactor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
