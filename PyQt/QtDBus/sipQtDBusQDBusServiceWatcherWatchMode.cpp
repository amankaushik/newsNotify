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

#include "sipAPIQtDBus.h"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtDBus/qdbusservicewatcher.sip"
#include <qdbusservicewatcher.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtDBus/qdbusservicewatcher.sip"
#include <qdbusservicewatcher.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"


extern "C" {static int slot_QDBusServiceWatcher_WatchMode___bool__(PyObject *);}
static int slot_QDBusServiceWatcher_WatchMode___bool__(PyObject *sipSelf)
{
    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusServiceWatcher::WatchMode::Int() != 0);
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusServiceWatcher::WatchMode::Int() != a0->operator QDBusServiceWatcher::WatchMode::Int());
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"
            sipReleaseType(const_cast<QDBusServiceWatcher::WatchMode *>(a0),sipType_QDBusServiceWatcher_WatchMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,ne_slot,sipType_QDBusServiceWatcher_WatchMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusServiceWatcher::WatchMode::Int() == a0->operator QDBusServiceWatcher::WatchMode::Int());
#line 117 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"
            sipReleaseType(const_cast<QDBusServiceWatcher::WatchMode *>(a0),sipType_QDBusServiceWatcher_WatchMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,eq_slot,sipType_QDBusServiceWatcher_WatchMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___invert__(PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___invert__(PyObject *sipSelf)
{
    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return 0;


    {
        {
            QDBusServiceWatcher::WatchMode*sipRes;

            sipRes = new QDBusServiceWatcher::WatchMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State, &a1))
        {
            QDBusServiceWatcher::WatchMode*sipRes;

            sipRes = new QDBusServiceWatcher::WatchMode((*a0 & a1));
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;
        QDBusServiceWatcher::WatchMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State, sipType_QDBusServiceWatcher_WatchMode, &a1, &a1State))
        {
            QDBusServiceWatcher::WatchMode*sipRes;

            sipRes = new QDBusServiceWatcher::WatchMode((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);
            sipReleaseType(a1,sipType_QDBusServiceWatcher_WatchMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State, &a1))
        {
            QDBusServiceWatcher::WatchMode*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QDBusServiceWatcher::WatchMode(*a0 ^ a1);
#line 220 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;
        QDBusServiceWatcher::WatchMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State, sipType_QDBusServiceWatcher_WatchMode, &a1, &a1State))
        {
            QDBusServiceWatcher::WatchMode*sipRes;

            sipRes = new QDBusServiceWatcher::WatchMode((*a0 | *a1));
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);
            sipReleaseType(a1,sipType_QDBusServiceWatcher_WatchMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State, &a1))
        {
            QDBusServiceWatcher::WatchMode*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QDBusServiceWatcher::WatchMode(*a0 | a1);
#line 270 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___int__(PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___int__(PyObject *sipSelf)
{
    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

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


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusServiceWatcher_WatchMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State))
        {
            sipCpp->QDBusServiceWatcher::WatchMode::operator^=(*a0);
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);

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


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusServiceWatcher_WatchMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State))
        {
            sipCpp->QDBusServiceWatcher::WatchMode::operator|=(*a0);
            sipReleaseType(a0,sipType_QDBusServiceWatcher_WatchMode,a0State);

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


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusServiceWatcher_WatchMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDBusServiceWatcher::WatchMode *sipCpp = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusServiceWatcher_WatchMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QDBusServiceWatcher::WatchMode::operator&=(a0);

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
extern "C" {static void *cast_QDBusServiceWatcher_WatchMode(void *, const sipTypeDef *);}
static void *cast_QDBusServiceWatcher_WatchMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDBusServiceWatcher_WatchMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusServiceWatcher_WatchMode(void *, int);}
static void release_QDBusServiceWatcher_WatchMode(void *sipCppV,int)
{
    delete reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipCppV);
}


extern "C" {static void assign_QDBusServiceWatcher_WatchMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusServiceWatcher_WatchMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusServiceWatcher::WatchMode *>(sipSrc);
}


extern "C" {static void *array_QDBusServiceWatcher_WatchMode(SIP_SSIZE_T);}
static void *array_QDBusServiceWatcher_WatchMode(SIP_SSIZE_T sipNrElem)
{
    return new QDBusServiceWatcher::WatchMode[sipNrElem];
}


extern "C" {static void *copy_QDBusServiceWatcher_WatchMode(const void *, SIP_SSIZE_T);}
static void *copy_QDBusServiceWatcher_WatchMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusServiceWatcher::WatchMode(reinterpret_cast<const QDBusServiceWatcher::WatchMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusServiceWatcher_WatchMode(sipSimpleWrapper *);}
static void dealloc_QDBusServiceWatcher_WatchMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusServiceWatcher_WatchMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusServiceWatcher_WatchMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusServiceWatcher_WatchMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusServiceWatcher::WatchMode *sipCpp = 0;

    {
        const QDBusServiceWatcher::WatchMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDBusServiceWatcher_WatchMode, &a0, &a0State))
        {
            sipCpp = new QDBusServiceWatcher::WatchMode(*a0);
            sipReleaseType(const_cast<QDBusServiceWatcher::WatchMode *>(a0),sipType_QDBusServiceWatcher_WatchMode,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QDBusServiceWatcher::WatchMode(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDBusServiceWatcher::WatchMode();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDBusServiceWatcher_WatchMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusServiceWatcher_WatchMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDBusServiceWatcher::WatchMode **sipCppPtr = reinterpret_cast<QDBusServiceWatcher::WatchMode **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDBusServiceWatcher::WatchMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDBusServiceWatcher_WatchModeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QDBusServiceWatcher_WatchMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDBusServiceWatcher_WatchModeFlag)))
{
    *sipCppPtr = new QDBusServiceWatcher::WatchMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDBusServiceWatcher::WatchMode *>(sipConvertToType(sipPy, sipType_QDBusServiceWatcher_WatchMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusServiceWatcherWatchMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusServiceWatcher_WatchMode[] = {
    {(void *)slot_QDBusServiceWatcher_WatchMode___bool__, bool_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___ne__, ne_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___eq__, eq_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___invert__, invert_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___and__, and_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___xor__, xor_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___or__, or_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___int__, int_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___ixor__, ixor_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___ior__, ior_slot},
    {(void *)slot_QDBusServiceWatcher_WatchMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDBusServiceWatcher_WatchMode, "\1QDBusServiceWatcher.WatchMode(QDBusServiceWatcher.WatchMode)\n"
    "QDBusServiceWatcher.WatchMode(int)\n"
    "QDBusServiceWatcher.WatchMode()");


pyqt5ClassTypeDef sipTypeDef_QtDBus_QDBusServiceWatcher_WatchMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDBusServiceWatcher__WatchMode,
        {0}
    },
    {
        sipNameNr_WatchMode,
        {30, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusServiceWatcher_WatchMode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusServiceWatcher_WatchMode,
    init_type_QDBusServiceWatcher_WatchMode,
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
    dealloc_QDBusServiceWatcher_WatchMode,
    assign_QDBusServiceWatcher_WatchMode,
    array_QDBusServiceWatcher_WatchMode,
    copy_QDBusServiceWatcher_WatchMode,
    release_QDBusServiceWatcher_WatchMode,
    cast_QDBusServiceWatcher_WatchMode,
    convertTo_QDBusServiceWatcher_WatchMode,
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
