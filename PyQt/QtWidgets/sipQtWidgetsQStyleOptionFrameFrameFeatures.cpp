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

#include "sipAPIQtWidgets.h"

#line 208 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"

#line 208 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"


extern "C" {static int slot_QStyleOptionFrame_FrameFeatures___bool__(PyObject *);}
static int slot_QStyleOptionFrame_FrameFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionFrame::FrameFeatures::Int() != 0);
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionFrame::FrameFeatures::Int() != a0->operator QStyleOptionFrame::FrameFeatures::Int());
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionFrame::FrameFeatures *>(a0),sipType_QStyleOptionFrame_FrameFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QStyleOptionFrame_FrameFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionFrame::FrameFeatures::Int() == a0->operator QStyleOptionFrame::FrameFeatures::Int());
#line 117 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionFrame::FrameFeatures *>(a0),sipType_QStyleOptionFrame_FrameFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QStyleOptionFrame_FrameFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionFrame::FrameFeatures*sipRes;

            sipRes = new QStyleOptionFrame::FrameFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrame_FrameFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionFrame::FrameFeatures*sipRes;

            sipRes = new QStyleOptionFrame::FrameFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrame_FrameFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;
        QStyleOptionFrame::FrameFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State, sipType_QStyleOptionFrame_FrameFeatures, &a1, &a1State))
        {
            QStyleOptionFrame::FrameFeatures*sipRes;

            sipRes = new QStyleOptionFrame::FrameFeatures((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionFrame_FrameFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrame_FrameFeatures,NULL);
        }
    }

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionFrame::FrameFeatures*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionFrame::FrameFeatures(*a0 ^ a1);
#line 220 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrame_FrameFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;
        QStyleOptionFrame::FrameFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State, sipType_QStyleOptionFrame_FrameFeatures, &a1, &a1State))
        {
            QStyleOptionFrame::FrameFeatures*sipRes;

            sipRes = new QStyleOptionFrame::FrameFeatures((*a0 | *a1));
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionFrame_FrameFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrame_FrameFeatures,NULL);
        }
    }

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionFrame::FrameFeatures*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionFrame::FrameFeatures(*a0 | a1);
#line 270 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrame_FrameFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

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


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionFrame_FrameFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionFrame::FrameFeatures::operator^=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionFrame_FrameFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionFrame::FrameFeatures::operator|=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionFrame_FrameFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionFrame_FrameFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionFrame_FrameFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionFrame_FrameFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionFrame::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrame_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStyleOptionFrame::FrameFeatures::operator&=(a0);

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
extern "C" {static void *cast_QStyleOptionFrame_FrameFeatures(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFrame_FrameFeatures(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleOptionFrame_FrameFeatures)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrame_FrameFeatures(void *, int);}
static void release_QStyleOptionFrame_FrameFeatures(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionFrame_FrameFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrame_FrameFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFrame::FrameFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrame_FrameFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionFrame_FrameFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFrame::FrameFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrame_FrameFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrame_FrameFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFrame::FrameFeatures(reinterpret_cast<const QStyleOptionFrame::FrameFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrame_FrameFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrame_FrameFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFrame_FrameFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionFrame_FrameFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFrame_FrameFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFrame::FrameFeatures *sipCpp = 0;

    {
        const QStyleOptionFrame::FrameFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionFrame_FrameFeatures, &a0, &a0State))
        {
            sipCpp = new QStyleOptionFrame::FrameFeatures(*a0);
            sipReleaseType(const_cast<QStyleOptionFrame::FrameFeatures *>(a0),sipType_QStyleOptionFrame_FrameFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStyleOptionFrame::FrameFeatures(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionFrame::FrameFeatures();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionFrame_FrameFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionFrame_FrameFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionFrame::FrameFeatures **sipCppPtr = reinterpret_cast<QStyleOptionFrame::FrameFeatures **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionFrame::FrameFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionFrame_FrameFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionFrame_FrameFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionFrame_FrameFeature)))
{
    *sipCppPtr = new QStyleOptionFrame::FrameFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionFrame_FrameFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionFrameFrameFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionFrame_FrameFeatures[] = {
    {(void *)slot_QStyleOptionFrame_FrameFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionFrame_FrameFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionFrame_FrameFeatures, "\1QStyleOptionFrame.FrameFeatures(QStyleOptionFrame.FrameFeatures)\n"
    "QStyleOptionFrame.FrameFeatures(int)\n"
    "QStyleOptionFrame.FrameFeatures()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionFrame_FrameFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrame__FrameFeatures,
        {0}
    },
    {
        sipNameNr_FrameFeatures,
        {329, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrame_FrameFeatures,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionFrame_FrameFeatures,
    init_type_QStyleOptionFrame_FrameFeatures,
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
    dealloc_QStyleOptionFrame_FrameFeatures,
    assign_QStyleOptionFrame_FrameFeatures,
    array_QStyleOptionFrame_FrameFeatures,
    copy_QStyleOptionFrame_FrameFeatures,
    release_QStyleOptionFrame_FrameFeatures,
    cast_QStyleOptionFrame_FrameFeatures,
    convertTo_QStyleOptionFrame_FrameFeatures,
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