/*
 * Module code.
 *
 * Generated by SIP 4.17
 *
 * Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtX11Extras.h"


/* Define the strings used by this module. */
const char sipStrings_QtX11Extras[] = {
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'X', '1', '1', 'E', 'x', 't', 'r', 'a', 's', 0,
    'x', 'c', 'b', '_', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', '_', 't', 0,
    's', 'e', 't', 'A', 'p', 'p', 'U', 's', 'e', 'r', 'T', 'i', 'm', 'e', 0,
    'a', 'p', 'p', 'R', 'o', 'o', 't', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'i', 's', 'P', 'l', 'a', 't', 'f', 'o', 'r', 'm', 'X', '1', '1', 0,
    'g', 'e', 't', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 0,
    'a', 'p', 'p', 'U', 's', 'e', 'r', 'T', 'i', 'm', 'e', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'A', 'p', 'p', 'T', 'i', 'm', 'e', 0,
    'a', 'p', 'p', 'S', 'c', 'r', 'e', 'e', 'n', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'Q', 'X', '1', '1', 'I', 'n', 'f', 'o', 0,
    'n', 'a', 'm', 'e', 'T', 'y', 'p', 'e', 0,
    'd', 'i', 's', 'p', 'l', 'a', 'y', 0,
    'a', 'p', 'p', 'T', 'i', 'm', 'e', 0,
    'a', 'p', 'p', 'D', 'p', 'i', 'Y', 0,
    'a', 'p', 'p', 'D', 'p', 'i', 'X', 0,
    'D', 'i', 's', 'p', 'l', 'a', 'y', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    's', 'c', 'r', 'e', 'e', 'n', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtX11Extras_Display.super.ctd_base,
    &sipTypeDef_QtX11Extras_QX11Info.super.ctd_base,
    &sipTypeDef_QtX11Extras_xcb_connection_t.super.ctd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", 1, NULL},
    {NULL, -1, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtX11Extras = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt5_QtX11Extras,
    0,
    -1,
    sipStrings_QtX11Extras,
    importsTable,
    NULL,
    3,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    NULL,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtX11Extras;
const sipExportedModuleDef *sipModuleAPI_QtX11Extras_QtCore;

sip_qt_metaobject_func sip_QtX11Extras_qt_metaobject;
sip_qt_metacall_func sip_QtX11Extras_qt_metacall;
sip_qt_metacast_func sip_QtX11Extras_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtX11Extras
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtX11Extras
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.QtX11Extras",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt5_QtX11Extras, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt5_QtX11Extras), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtX11Extras = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtX11Extras = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtX11Extras == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtX11Extras,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtX11Extras_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtX11Extras_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtX11Extras_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtX11Extras_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtX11Extras,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtX11Extras_QtCore = sipModuleAPI_QtX11Extras.em_imports[0].im_module;

    SIP_MODULE_RETURN(sipModule);
}
