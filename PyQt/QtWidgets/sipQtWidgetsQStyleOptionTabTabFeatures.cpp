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

#line 388 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"

#line 388 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"


extern "C" {static int slot_QStyleOptionTab_TabFeatures___bool__(PyObject *);}
static int slot_QStyleOptionTab_TabFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionTab::TabFeatures::Int() != 0);
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionTab::TabFeatures::Int() != a0->operator QStyleOptionTab::TabFeatures::Int());
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionTab::TabFeatures *>(a0),sipType_QStyleOptionTab_TabFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QStyleOptionTab_TabFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyleOptionTab::TabFeatures::Int() == a0->operator QStyleOptionTab::TabFeatures::Int());
#line 117 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionTab::TabFeatures *>(a0),sipType_QStyleOptionTab_TabFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QStyleOptionTab_TabFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionTab::TabFeatures*sipRes;

            sipRes = new QStyleOptionTab::TabFeatures(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_TabFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionTab::TabFeatures*sipRes;

            sipRes = new QStyleOptionTab::TabFeatures((*a0 & a1));
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_TabFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;
        QStyleOptionTab::TabFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State, sipType_QStyleOptionTab_TabFeatures, &a1, &a1State))
        {
            QStyleOptionTab::TabFeatures*sipRes;

            sipRes = new QStyleOptionTab::TabFeatures((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionTab_TabFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_TabFeatures,NULL);
        }
    }

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionTab::TabFeatures*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionTab::TabFeatures(*a0 ^ a1);
#line 220 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_TabFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;
        QStyleOptionTab::TabFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State, sipType_QStyleOptionTab_TabFeatures, &a1, &a1State))
        {
            QStyleOptionTab::TabFeatures*sipRes;

            sipRes = new QStyleOptionTab::TabFeatures((*a0 | *a1));
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionTab_TabFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_TabFeatures,NULL);
        }
    }

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionTab::TabFeatures*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionTab::TabFeatures(*a0 | a1);
#line 270 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_TabFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

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


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_TabFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionTab::TabFeatures::operator^=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_TabFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State))
        {
            sipCpp->QStyleOptionTab::TabFeatures::operator|=(*a0);
            sipReleaseType(a0,sipType_QStyleOptionTab_TabFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionTab_TabFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_TabFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_TabFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::TabFeatures *sipCpp = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_TabFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QStyleOptionTab::TabFeatures::operator&=(a0);

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
extern "C" {static void *cast_QStyleOptionTab_TabFeatures(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTab_TabFeatures(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleOptionTab_TabFeatures)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTab_TabFeatures(void *, int);}
static void release_QStyleOptionTab_TabFeatures(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionTab_TabFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTab_TabFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTab::TabFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTab_TabFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionTab_TabFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTab::TabFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTab_TabFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTab_TabFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTab::TabFeatures(reinterpret_cast<const QStyleOptionTab::TabFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTab_TabFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTab_TabFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTab_TabFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTab_TabFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTab_TabFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTab::TabFeatures *sipCpp = 0;

    {
        const QStyleOptionTab::TabFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionTab_TabFeatures, &a0, &a0State))
        {
            sipCpp = new QStyleOptionTab::TabFeatures(*a0);
            sipReleaseType(const_cast<QStyleOptionTab::TabFeatures *>(a0),sipType_QStyleOptionTab_TabFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QStyleOptionTab::TabFeatures(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionTab::TabFeatures();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionTab_TabFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionTab_TabFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionTab::TabFeatures **sipCppPtr = reinterpret_cast<QStyleOptionTab::TabFeatures **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionTab::TabFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_TabFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionTab_TabFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_TabFeature)))
{
    *sipCppPtr = new QStyleOptionTab::TabFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionTab_TabFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionTabTabFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionTab_TabFeatures[] = {
    {(void *)slot_QStyleOptionTab_TabFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionTab_TabFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionTab_TabFeatures, "\1QStyleOptionTab.TabFeatures(QStyleOptionTab.TabFeatures)\n"
    "QStyleOptionTab.TabFeatures(int)\n"
    "QStyleOptionTab.TabFeatures()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionTab_TabFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTab__TabFeatures,
        {0}
    },
    {
        sipNameNr_TabFeatures,
        {366, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTab_TabFeatures,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionTab_TabFeatures,
    init_type_QStyleOptionTab_TabFeatures,
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
    dealloc_QStyleOptionTab_TabFeatures,
    assign_QStyleOptionTab_TabFeatures,
    array_QStyleOptionTab_TabFeatures,
    copy_QStyleOptionTab_TabFeatures,
    release_QStyleOptionTab_TabFeatures,
    cast_QStyleOptionTab_TabFeatures,
    convertTo_QStyleOptionTab_TabFeatures,
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
