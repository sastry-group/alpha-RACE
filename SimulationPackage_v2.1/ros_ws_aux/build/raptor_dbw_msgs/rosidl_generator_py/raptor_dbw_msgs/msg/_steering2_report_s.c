// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
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
#include "raptor_dbw_msgs/msg/detail/steering2_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/steering2_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__steering2_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("raptor_dbw_msgs.msg._steering2_report.Steering2Report", full_classname_dest, 53) == 0);
  }
  raptor_dbw_msgs__msg__Steering2Report * ros_message = _ros_message;
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
  {  // vehicle_curvature_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_curvature_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_curvature_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_torque_driver
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque_driver");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_torque_driver = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_torque_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque_motor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_torque_motor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__steering2_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Steering2Report */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._steering2_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Steering2Report");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__Steering2Report * ros_message = (raptor_dbw_msgs__msg__Steering2Report *)raw_ros_message;
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
  {  // vehicle_curvature_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_curvature_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_curvature_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque_driver
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_torque_driver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque_driver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_torque_motor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_torque_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
