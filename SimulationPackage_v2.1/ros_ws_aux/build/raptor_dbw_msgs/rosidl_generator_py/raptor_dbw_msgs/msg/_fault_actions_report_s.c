// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
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
#include "raptor_dbw_msgs/msg/detail/fault_actions_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/fault_actions_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__fault_actions_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("raptor_dbw_msgs.msg._fault_actions_report.FaultActionsReport", full_classname_dest, 60) == 0);
  }
  raptor_dbw_msgs__msg__FaultActionsReport * ros_message = _ros_message;
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
  {  // autonomous_disabled_no_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous_disabled_no_brakes");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous_disabled_no_brakes = (Py_True == field);
    Py_DECREF(field);
  }
  {  // autonomous_disabled_apply_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous_disabled_apply_brakes");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous_disabled_apply_brakes = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_gateway_disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_gateway_disabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_gateway_disabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // inverter_contactor_disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "inverter_contactor_disabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->inverter_contactor_disabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // prevent_enter_autonomous_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "prevent_enter_autonomous_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->prevent_enter_autonomous_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // warn_driver_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "warn_driver_only");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->warn_driver_only = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__fault_actions_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FaultActionsReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._fault_actions_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FaultActionsReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__FaultActionsReport * ros_message = (raptor_dbw_msgs__msg__FaultActionsReport *)raw_ros_message;
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
  {  // autonomous_disabled_no_brakes
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous_disabled_no_brakes ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous_disabled_no_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autonomous_disabled_apply_brakes
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous_disabled_apply_brakes ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous_disabled_apply_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_gateway_disabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_gateway_disabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_gateway_disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inverter_contactor_disabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->inverter_contactor_disabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inverter_contactor_disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prevent_enter_autonomous_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->prevent_enter_autonomous_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prevent_enter_autonomous_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warn_driver_only
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->warn_driver_only ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warn_driver_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
