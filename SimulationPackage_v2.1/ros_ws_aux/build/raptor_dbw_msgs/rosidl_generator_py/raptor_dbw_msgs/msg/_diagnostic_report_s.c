// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
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
#include "raptor_dbw_msgs/msg/detail/diagnostic_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/diagnostic_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__diagnostic_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("raptor_dbw_msgs.msg._diagnostic_report.DiagnosticReport", full_classname_dest, 55) == 0);
  }
  raptor_dbw_msgs__msg__DiagnosticReport * ros_message = _ros_message;
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
  {  // sd_system_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_system_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_system_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_system_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_system_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_system_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_brake_warning1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_brake_warning1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_brake_warning1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_brake_warning2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_brake_warning2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_brake_warning2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_brake_warning3
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_brake_warning3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_brake_warning3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_steer_warning1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_steer_warning1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_steer_warning1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_steer_warning2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_steer_warning2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_steer_warning2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_steer_warning3
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_steer_warning3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_steer_warning3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motec_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "motec_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motec_warning = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_brk_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_brk_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->front_brk_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rear_brk_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_brk_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rear_brk_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_eng_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_eng_speed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_eng_speed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_comms_loss
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_comms_loss");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_comms_loss = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motec_comms_loss
    PyObject * field = PyObject_GetAttrString(_pymsg, "motec_comms_loss");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motec_comms_loss = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_ebrake
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_ebrake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_ebrake = (Py_True == field);
    Py_DECREF(field);
  }
  {  // adlink_hb_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "adlink_hb_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->adlink_hb_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_lost = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__diagnostic_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagnosticReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._diagnostic_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__DiagnosticReport * ros_message = (raptor_dbw_msgs__msg__DiagnosticReport *)raw_ros_message;
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
  {  // sd_system_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_system_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_system_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_system_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_system_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_system_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_brake_warning1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_brake_warning1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_brake_warning1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_brake_warning2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_brake_warning2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_brake_warning2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_brake_warning3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_brake_warning3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_brake_warning3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_steer_warning1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_steer_warning1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_steer_warning1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_steer_warning2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_steer_warning2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_steer_warning2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_steer_warning3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_steer_warning3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_steer_warning3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motec_warning
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motec_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motec_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_brk_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->front_brk_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_brk_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_brk_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rear_brk_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_brk_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_eng_speed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_eng_speed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_eng_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_comms_loss
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_comms_loss ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_comms_loss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motec_comms_loss
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motec_comms_loss ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motec_comms_loss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_ebrake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_ebrake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_ebrake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adlink_hb_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->adlink_hb_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adlink_hb_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
