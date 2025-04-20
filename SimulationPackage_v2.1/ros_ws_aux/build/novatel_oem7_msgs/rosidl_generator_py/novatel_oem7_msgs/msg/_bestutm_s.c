// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/BESTUTM.idl
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
#include "novatel_oem7_msgs/msg/detail/bestutm__struct.h"
#include "novatel_oem7_msgs/msg/detail/bestutm__functions.h"

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
bool novatel_oem7_msgs__msg__best_extended_solution_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__best_extended_solution_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__bestutm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("novatel_oem7_msgs.msg._bestutm.BESTUTM", full_classname_dest, 38) == 0);
  }
  novatel_oem7_msgs__msg__BESTUTM * ros_message = _ros_message;
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
  {  // lon_zone_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_zone_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lon_zone_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lat_zone_letter
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_zone_letter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lat_zone_letter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // northing
    PyObject * field = PyObject_GetAttrString(_pymsg, "northing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->northing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // easting
    PyObject * field = PyObject_GetAttrString(_pymsg, "easting");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->easting = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // datum_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "datum_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->datum_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // northing_stddev
    PyObject * field = PyObject_GetAttrString(_pymsg, "northing_stddev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->northing_stddev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // easting_stddev
    PyObject * field = PyObject_GetAttrString(_pymsg, "easting_stddev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->easting_stddev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_stddev
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_stddev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_stddev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stn_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "stn_id");
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
      int8_t * dest = ros_message->stn_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sol_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "sol_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sol_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_svs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_svs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_svs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sol_svs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sol_svs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sol_svs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sol_ggl1_svs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sol_ggl1_svs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sol_ggl1_svs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sol_multi_svs
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sol_multi_svs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sol_multi_svs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ext_sol_stat
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_sol_stat");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__best_extended_solution_status__convert_from_py(field, &ros_message->ext_sol_stat)) {
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
PyObject * novatel_oem7_msgs__msg__bestutm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BESTUTM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._bestutm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BESTUTM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__BESTUTM * ros_message = (novatel_oem7_msgs__msg__BESTUTM *)raw_ros_message;
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
  {  // lon_zone_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lon_zone_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_zone_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_zone_letter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lat_zone_letter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_zone_letter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // northing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->northing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "northing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // easting
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->easting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "easting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // datum_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->datum_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "datum_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // northing_stddev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->northing_stddev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "northing_stddev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // easting_stddev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->easting_stddev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "easting_stddev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_stddev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_stddev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_stddev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stn_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "stn_id");
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
    int8_t * src = &(ros_message->stn_id[0]);
    memcpy(dst, src, 4 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sol_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sol_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sol_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_svs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_svs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_svs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sol_svs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sol_svs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sol_svs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sol_ggl1_svs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sol_ggl1_svs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sol_ggl1_svs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sol_multi_svs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sol_multi_svs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sol_multi_svs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_sol_stat
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__best_extended_solution_status__convert_to_py(&ros_message->ext_sol_stat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_sol_stat", field);
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
