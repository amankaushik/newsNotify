/*
 * Interface wrapper code.
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

#include "sipAPIQtCore.h"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstandardpaths.sip"
#include <qstandardpaths.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstandardpaths.sip"
#include <qstandardpaths.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"


extern "C" {static int slot_QStandardPaths_LocateOptions___bool__(PyObject *);}
static int slot_QStandardPaths_LocateOptions___bool__(PyObject *sipSelf)
{
    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStandardPaths::LocateOptions::Int() != 0);
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStandardPaths::LocateOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStandardPaths::LocateOptions::Int() != a0->operator QStandardPaths::LocateOptions::Int());
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"
            sipReleaseType(const_cast<QStandardPaths::LocateOptions *>(a0),sipType_QStandardPaths_LocateOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QStandardPaths_LocateOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStandardPaths::LocateOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStandardPaths::LocateOptions::Int() == a0->operator QStandardPaths::LocateOptions::Int());
#line 117 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"
            sipReleaseType(const_cast<QStandardPaths::LocateOptions *>(a0),sipType_QStandardPaths_LocateOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QStandardPaths_LocateOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___invert__(PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___invert__(PyObject *sipSelf)
{
    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QStandardPaths::LocateOptions*sipRes;

            sipRes = new QStandardPaths::LocateOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStandardPaths_LocateOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStandardPaths_LocateOptions, &a0, &a0State, &a1))
        {
            QStandardPaths::LocateOptions*sipRes;

            sipRes = new QStandardPaths::LocateOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStandardPaths_LocateOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;
        QStandardPaths::LocateOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State, sipType_QStandardPaths_LocateOptions, &a1, &a1State))
        {
            QStandardPaths::LocateOptions*sipRes;

            sipRes = new QStandardPaths::LocateOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);
            sipReleaseType(a1,sipType_QStandardPaths_LocateOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStandardPaths_LocateOptions,NULL);
        }
    }

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStandardPaths_LocateOptions, &a0, &a0State, &a1))
        {
            QStandardPaths::LocateOptions*sipRes = 0;

#line 103 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qglobal.sip"
        sipRes = new QStandardPaths::LocateOptions(*a0 ^ a1);
#line 220 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStandardPaths_LocateOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;
        QStandardPaths::LocateOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State, sipType_QStandardPaths_LocateOptions, &a1, &a1State))
        {
            QStandardPaths::LocateOptions*sipRes;

            sipRes = new QStandardPaths::LocateOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);
            sipReleaseType(a1,sipType_QStandardPaths_LocateOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStandardPaths_LocateOptions,NULL);
        }
    }

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStandardPaths_LocateOptions, &a0, &a0State, &a1))
        {
            QStandardPaths::LocateOptions*sipRes = 0;

#line 98 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qglobal.sip"
        sipRes = new QStandardPaths::LocateOptions(*a0 | a1);
#line 270 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStandardPaths_LocateOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___int__(PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___int__(PyObject *sipSelf)
{
    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStandardPaths_LocateOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State))
        {
            sipCpp->QStandardPaths::LocateOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStandardPaths_LocateOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStandardPaths::LocateOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State))
        {
            sipCpp->QStandardPaths::LocateOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QStandardPaths_LocateOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStandardPaths_LocateOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStandardPaths_LocateOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStandardPaths_LocateOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStandardPaths::LocateOptions *sipCpp = reinterpret_cast<QStandardPaths::LocateOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStandardPaths_LocateOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStandardPaths::LocateOptions::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStandardPaths_LocateOptions(void *, const sipTypeDef *);}
static void *cast_QStandardPaths_LocateOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStandardPaths_LocateOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStandardPaths_LocateOptions(void *, int);}
static void release_QStandardPaths_LocateOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QStandardPaths::LocateOptions *>(sipCppV);
}


extern "C" {static void assign_QStandardPaths_LocateOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QStandardPaths_LocateOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStandardPaths::LocateOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStandardPaths::LocateOptions *>(sipSrc);
}


extern "C" {static void *array_QStandardPaths_LocateOptions(SIP_SSIZE_T);}
static void *array_QStandardPaths_LocateOptions(SIP_SSIZE_T sipNrElem)
{
    return new QStandardPaths::LocateOptions[sipNrElem];
}


extern "C" {static void *copy_QStandardPaths_LocateOptions(const void *, SIP_SSIZE_T);}
static void *copy_QStandardPaths_LocateOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStandardPaths::LocateOptions(reinterpret_cast<const QStandardPaths::LocateOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStandardPaths_LocateOptions(sipSimpleWrapper *);}
static void dealloc_QStandardPaths_LocateOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStandardPaths_LocateOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStandardPaths_LocateOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStandardPaths_LocateOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStandardPaths::LocateOptions *sipCpp = 0;

    {
        const QStandardPaths::LocateOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStandardPaths_LocateOptions, &a0, &a0State))
        {
            sipCpp = new QStandardPaths::LocateOptions(*a0);
            sipReleaseType(const_cast<QStandardPaths::LocateOptions *>(a0),sipType_QStandardPaths_LocateOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStandardPaths::LocateOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStandardPaths::LocateOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStandardPaths_LocateOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStandardPaths_LocateOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStandardPaths::LocateOptions **sipCppPtr = reinterpret_cast<QStandardPaths::LocateOptions **>(sipCppPtrV);

#line 124 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStandardPaths::LocateOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStandardPaths_LocateOption)) ||
            sipCanConvertToType(sipPy, sipType_QStandardPaths_LocateOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStandardPaths_LocateOption)))
{
    *sipCppPtr = new QStandardPaths::LocateOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStandardPaths::LocateOptions *>(sipConvertToType(sipPy, sipType_QStandardPaths_LocateOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQStandardPathsLocateOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStandardPaths_LocateOptions[] = {
    {(void *)slot_QStandardPaths_LocateOptions___bool__, bool_slot},
    {(void *)slot_QStandardPaths_LocateOptions___ne__, ne_slot},
    {(void *)slot_QStandardPaths_LocateOptions___eq__, eq_slot},
    {(void *)slot_QStandardPaths_LocateOptions___invert__, invert_slot},
    {(void *)slot_QStandardPaths_LocateOptions___and__, and_slot},
    {(void *)slot_QStandardPaths_LocateOptions___xor__, xor_slot},
    {(void *)slot_QStandardPaths_LocateOptions___or__, or_slot},
    {(void *)slot_QStandardPaths_LocateOptions___int__, int_slot},
    {(void *)slot_QStandardPaths_LocateOptions___ixor__, ixor_slot},
    {(void *)slot_QStandardPaths_LocateOptions___ior__, ior_slot},
    {(void *)slot_QStandardPaths_LocateOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStandardPaths_LocateOptions, "\1QStandardPaths.LocateOptions(QStandardPaths.LocateOptions)\n"
    "QStandardPaths.LocateOptions(int)\n"
    "QStandardPaths.LocateOptions()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QStandardPaths_LocateOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStandardPaths__LocateOptions,
        {0}
    },
    {
        sipNameNr_LocateOptions,
        {215, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStandardPaths_LocateOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStandardPaths_LocateOptions,
    init_type_QStandardPaths_LocateOptions,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QStandardPaths_LocateOptions,
    assign_QStandardPaths_LocateOptions,
    array_QStandardPaths_LocateOptions,
    copy_QStandardPaths_LocateOptions,
    release_QStandardPaths_LocateOptions,
    cast_QStandardPaths_LocateOptions,
    convertTo_QStandardPaths_LocateOptions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
