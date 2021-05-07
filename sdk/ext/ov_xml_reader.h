/*
Copyright (c) 2016 Red Hat, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef __OV_XML_READER_H__
#define __OV_XML_READER_H__

#include <Python.h>

/* Initialization function: */
#ifdef Py_mod_exec
extern int ov_xml_reader_define(PyObject* module);
#else
extern void ov_xml_reader_define();
#endif
#endif
