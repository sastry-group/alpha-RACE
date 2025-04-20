// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
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
#include "novatel_oem7_msgs/msg/detail/heading2__struct.h"
#include "novatel_oem7_msgs/msg/detail/heading2__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__solution_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__solution_status__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__position_or_velocity_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__position_or_velocity_type__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__solution_source__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__solution_source__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__best_extended_solution_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__best_extended_solution_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__heading2__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("novatel_oem7_msgs.msg._heading2.HEADING2", full_classname_dest, 40) == 0);
  }
  novatel_oem7_msgs__msg__HEADING2 * ros_message = _ros_message;
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
  {  // nov_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "nov_header");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__oem7_header__convert_from_py(field, &ros_message->nov_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sol_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sol_status");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__solution_status__convert_from_py(field, &ros_message->sol_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_type");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__position_or_velocity_type__convert_from_py(field, &ros_message->pos_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reserved = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rover_stn_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_stn_id");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT8);
      Py_ssize_t size = 4;
      int8_t * dest = ros_message->rover_stn_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // master_stn_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "master_stn_id");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT8);
      Py_ssize_t size = 4;
      int8_t * dest = ros_message->master_stn_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // num_sv_tracked
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv_tracked");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv_tracked = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sv_in_sol
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv_in_sol");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv_in_sol = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sv_obs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv_obs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv_obs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sv_multi
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv_multi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv_multi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sol_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "sol_source");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__solution_source__convert_from_py(field, &ros_message->sol_source)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ext_sol_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_sol_status");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__best_extended_solution_status__convert_from_py(field, &ros_message->ext_sol_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // galileo_beidou_sig_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "galileo_beidou_sig_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->galileo_beidou_sig_mask = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_glonass_sig_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_glonass_sig_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_glonass_sig_mask = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__heading2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HEADING2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._heading2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HEADING2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__HEADING2 * ros_message = (novatel_oem7_msgs__msg__HEADING2 *)raw_ros_message;
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
  {  // nov_header
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__oem7_header__convert_to_py(&ros_message->nov_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nov_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sol_status
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__solution_status__convert_to_py(&ros_message->sol_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sol_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_type
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__position_or_velocity_type__convert_to_py(&ros_message->pos_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_stn_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rover_stn_id");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->rover_stn_id[0]);
    memcpy(dst, src, 4 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // master_stn_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "master_stn_id");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->master_stn_id[0]);
    memcpy(dst, src, 4 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // num_sv_tracked
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv_tracked);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv_tracked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sv_in_sol
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv_in_sol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv_in_sol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sv_obs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv_obs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv_obs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sv_multi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv_multi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv_multi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sol_source
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__solution_source__convert_to_py(&ros_message->sol_source);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sol_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_sol_status
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__best_extended_solution_status__convert_to_py(&ros_message->ext_sol_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_sol_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // galileo_beidou_sig_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->galileo_beidou_sig_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "galileo_beidou_sig_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_glonass_sig_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_glonass_sig_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_glonass_sig_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
