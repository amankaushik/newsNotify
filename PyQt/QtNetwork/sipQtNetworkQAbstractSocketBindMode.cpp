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

#include "sipAPIQtNetwork.h"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"


extern "C" {static int slot_QAbstractSocket_BindMode___bool__(PyObject *);}
static int slot_QAbstractSocket_BindMode___bool__(PyObject *sipSelf)
{
    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSocket::BindMode::Int() != 0);
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_BindMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSocket::BindMode::Int() != a0->operator QAbstractSocket::BindMode::Int());
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"
            sipReleaseType(const_cast<QAbstractSocket::BindMode *>(a0),sipType_QAbstractSocket_BindMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QAbstractSocket_BindMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_BindMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSocket::BindMode::Int() == a0->operator QAbstractSocket::BindMode::Int());
#line 117 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"
            sipReleaseType(const_cast<QAbstractSocket::BindMode *>(a0),sipType_QAbstractSocket_BindMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QAbstractSocket_BindMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___invert__(PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___invert__(PyObject *sipSelf)
{
    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return 0;


    {
        {
            QAbstractSocket::BindMode*sipRes;

            sipRes = new QAbstractSocket::BindMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_BindMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSocket_BindMode, &a0, &a0State, &a1))
        {
            QAbstractSocket::BindMode*sipRes;

            sipRes = new QAbstractSocket::BindMode((*a0 & a1));
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_BindMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;
        QAbstractSocket::BindMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractSocket_BindMode, &a0, &a0State, sipType_QAbstractSocket_BindMode, &a1, &a1State))
        {
            QAbstractSocket::BindMode*sipRes;

            sipRes = new QAbstractSocket::BindMode((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);
            sipReleaseType(a1,sipType_QAbstractSocket_BindMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_BindMode,NULL);
        }
    }

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSocket_BindMode, &a0, &a0State, &a1))
        {
            QAbstractSocket::BindMode*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractSocket::BindMode(*a0 ^ a1);
#line 220 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_BindMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;
        QAbstractSocket::BindMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractSocket_BindMode, &a0, &a0State, sipType_QAbstractSocket_BindMode, &a1, &a1State))
        {
            QAbstractSocket::BindMode*sipRes;

            sipRes = new QAbstractSocket::BindMode((*a0 | *a1));
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);
            sipReleaseType(a1,sipType_QAbstractSocket_BindMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_BindMode,NULL);
        }
    }

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSocket_BindMode, &a0, &a0State, &a1))
        {
            QAbstractSocket::BindMode*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractSocket::BindMode(*a0 | a1);
#line 270 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_BindMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___int__(PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___int__(PyObject *sipSelf)
{
    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

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


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSocket_BindMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_BindMode, &a0, &a0State))
        {
            sipCpp->QAbstractSocket::BindMode::operator^=(*a0);
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);

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


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSocket_BindMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_BindMode, &a0, &a0State))
        {
            sipCpp->QAbstractSocket::BindMode::operator|=(*a0);
            sipReleaseType(a0,sipType_QAbstractSocket_BindMode,a0State);

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


extern "C" {static PyObject *slot_QAbstractSocket_BindMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_BindMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSocket_BindMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSocket::BindMode *sipCpp = reinterpret_cast<QAbstractSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QAbstractSocket::BindMode::operator&=(a0);

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
extern "C" {static void *cast_QAbstractSocket_BindMode(void *, const sipTypeDef *);}
static void *cast_QAbstractSocket_BindMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractSocket_BindMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractSocket_BindMode(void *, int);}
static void release_QAbstractSocket_BindMode(void *sipCppV,int)
{
    delete reinterpret_cast<QAbstractSocket::BindMode *>(sipCppV);
}


extern "C" {static void assign_QAbstractSocket_BindMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractSocket_BindMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractSocket::BindMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractSocket::BindMode *>(sipSrc);
}


extern "C" {static void *array_QAbstractSocket_BindMode(SIP_SSIZE_T);}
static void *array_QAbstractSocket_BindMode(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractSocket::BindMode[sipNrElem];
}


extern "C" {static void *copy_QAbstractSocket_BindMode(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractSocket_BindMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractSocket::BindMode(reinterpret_cast<const QAbstractSocket::BindMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractSocket_BindMode(sipSimpleWrapper *);}
static void dealloc_QAbstractSocket_BindMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractSocket_BindMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractSocket_BindMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractSocket_BindMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractSocket::BindMode *sipCpp = 0;

    {
        const QAbstractSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractSocket_BindMode, &a0, &a0State))
        {
            sipCpp = new QAbstractSocket::BindMode(*a0);
            sipReleaseType(const_cast<QAbstractSocket::BindMode *>(a0),sipType_QAbstractSocket_BindMode,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QAbstractSocket::BindMode(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QAbstractSocket::BindMode();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractSocket_BindMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractSocket_BindMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QAbstractSocket::BindMode **sipCppPtr = reinterpret_cast<QAbstractSocket::BindMode **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractSocket::BindMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSocket_BindFlag)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractSocket_BindMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSocket_BindFlag)))
{
    *sipCppPtr = new QAbstractSocket::BindMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractSocket::BindMode *>(sipConvertToType(sipPy, sipType_QAbstractSocket_BindMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtNetwork/sipQtNetworkQAbstractSocketBindMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractSocket_BindMode[] = {
    {(void *)slot_QAbstractSocket_BindMode___bool__, bool_slot},
    {(void *)slot_QAbstractSocket_BindMode___ne__, ne_slot},
    {(void *)slot_QAbstractSocket_BindMode___eq__, eq_slot},
    {(void *)slot_QAbstractSocket_BindMode___invert__, invert_slot},
    {(void *)slot_QAbstractSocket_BindMode___and__, and_slot},
    {(void *)slot_QAbstractSocket_BindMode___xor__, xor_slot},
    {(void *)slot_QAbstractSocket_BindMode___or__, or_slot},
    {(void *)slot_QAbstractSocket_BindMode___int__, int_slot},
    {(void *)slot_QAbstractSocket_BindMode___ixor__, ixor_slot},
    {(void *)slot_QAbstractSocket_BindMode___ior__, ior_slot},
    {(void *)slot_QAbstractSocket_BindMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractSocket_BindMode, "\1QAbstractSocket.BindMode(QAbstractSocket.BindMode)\n"
    "QAbstractSocket.BindMode(int)\n"
    "QAbstractSocket.BindMode()");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QAbstractSocket_BindMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractSocket__BindMode,
        {0}
    },
    {
        sipNameNr_BindMode,
        {1, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractSocket_BindMode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractSocket_BindMode,
    init_type_QAbstractSocket_BindMode,
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
    dealloc_QAbstractSocket_BindMode,
    assign_QAbstractSocket_BindMode,
    array_QAbstractSocket_BindMode,
    copy_QAbstractSocket_BindMode,
    release_QAbstractSocket_BindMode,
    cast_QAbstractSocket_BindMode,
    convertTo_QAbstractSocket_BindMode,
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
