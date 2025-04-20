// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
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
#include "raptor_dbw_msgs/msg/detail/surround_report__struct.h"
#include "raptor_dbw_msgs/msg/detail/surround_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(void * raw_ros_message);
bool raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool raptor_dbw_msgs__msg__surround_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("raptor_dbw_msgs.msg._surround_report.SurroundReport", full_classname_dest, 51) == 0);
  }
  raptor_dbw_msgs__msg__SurroundReport * ros_message = _ros_message;
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
  {  // front_radar_object_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_radar_object_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_radar_object_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_radar_object_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_radar_object_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_radar_object_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_right");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(field, &ros_message->rear_right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_left");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(field, &ros_message->rear_left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_center");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(field, &ros_message->rear_center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(field, &ros_message->front_right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(field, &ros_message->front_left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_center");
    if (!field) {
      return false;
    }
    if (!raptor_dbw_msgs__msg__sonar_arc_num__convert_from_py(field, &ros_message->front_center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_radar_distance_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_radar_distance_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->front_radar_distance_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parking_sonar_data_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_sonar_data_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parking_sonar_data_valid = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raptor_dbw_msgs__msg__surround_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SurroundReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raptor_dbw_msgs.msg._surround_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SurroundReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raptor_dbw_msgs__msg__SurroundReport * ros_message = (raptor_dbw_msgs__msg__SurroundReport *)raw_ros_message;
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
  {  // front_radar_object_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_radar_object_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_radar_object_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_radar_object_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_radar_object_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_radar_object_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_right
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(&ros_message->rear_right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_left
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(&ros_message->rear_left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_center
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(&ros_message->rear_center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(&ros_message->front_right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_left
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(&ros_message->front_left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_center
    PyObject * field = NULL;
    field = raptor_dbw_msgs__msg__sonar_arc_num__convert_to_py(&ros_message->front_center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_radar_distance_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->front_radar_distance_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_radar_distance_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_sonar_data_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parking_sonar_data_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_sonar_data_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
