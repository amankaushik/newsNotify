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

#include "sipAPIQtPositioning.h"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtPositioning/qgeopositioninfo.sip"
#include <qgeopositioninfo.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtPositioning/sipQtPositioningQGeoPositionInfo.cpp"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtPositioning/sipQtPositioningQGeoPositionInfo.cpp"
#line 295 "sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtPositioning/sipQtPositioningQGeoPositionInfo.cpp"


PyDoc_STRVAR(doc_QGeoPositionInfo_isValid, "QGeoPositionInfo.isValid() -> bool");

extern "C" {static PyObject *meth_QGeoPositionInfo_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoPositionInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_isValid, doc_QGeoPositionInfo_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_setTimestamp, "QGeoPositionInfo.setTimestamp(QDateTime)");

extern "C" {static PyObject *meth_QGeoPositionInfo_setTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_setTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoPositionInfo, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            sipCpp->setTimestamp(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_setTimestamp, doc_QGeoPositionInfo_setTimestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_timestamp, "QGeoPositionInfo.timestamp() -> QDateTime");

extern "C" {static PyObject *meth_QGeoPositionInfo_timestamp(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_timestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoPositionInfo, &sipCpp))
        {
            QDateTime*sipRes;

            sipRes = new QDateTime(sipCpp->timestamp());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_timestamp, doc_QGeoPositionInfo_timestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_setCoordinate, "QGeoPositionInfo.setCoordinate(QGeoCoordinate)");

extern "C" {static PyObject *meth_QGeoPositionInfo_setCoordinate(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_setCoordinate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoCoordinate* a0;
        QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoPositionInfo, &sipCpp, sipType_QGeoCoordinate, &a0))
        {
            sipCpp->setCoordinate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_setCoordinate, doc_QGeoPositionInfo_setCoordinate);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_coordinate, "QGeoPositionInfo.coordinate() -> QGeoCoordinate");

extern "C" {static PyObject *meth_QGeoPositionInfo_coordinate(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_coordinate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoPositionInfo, &sipCpp))
        {
            QGeoCoordinate*sipRes;

            sipRes = new QGeoCoordinate(sipCpp->coordinate());

            return sipConvertFromNewType(sipRes,sipType_QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_coordinate, doc_QGeoPositionInfo_coordinate);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_setAttribute, "QGeoPositionInfo.setAttribute(QGeoPositionInfo.Attribute, float)");

extern "C" {static PyObject *meth_QGeoPositionInfo_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoPositionInfo::Attribute a0;
        qreal a1;
        QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEd", &sipSelf, sipType_QGeoPositionInfo, &sipCpp, sipType_QGeoPositionInfo_Attribute, &a0, &a1))
        {
            sipCpp->setAttribute(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_setAttribute, doc_QGeoPositionInfo_setAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_attribute, "QGeoPositionInfo.attribute(QGeoPositionInfo.Attribute) -> float");

extern "C" {static PyObject *meth_QGeoPositionInfo_attribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoPositionInfo::Attribute a0;
        const QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoPositionInfo, &sipCpp, sipType_QGeoPositionInfo_Attribute, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->attribute(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_attribute, doc_QGeoPositionInfo_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_removeAttribute, "QGeoPositionInfo.removeAttribute(QGeoPositionInfo.Attribute)");

extern "C" {static PyObject *meth_QGeoPositionInfo_removeAttribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_removeAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoPositionInfo::Attribute a0;
        QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoPositionInfo, &sipCpp, sipType_QGeoPositionInfo_Attribute, &a0))
        {
            sipCpp->removeAttribute(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_removeAttribute, doc_QGeoPositionInfo_removeAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoPositionInfo_hasAttribute, "QGeoPositionInfo.hasAttribute(QGeoPositionInfo.Attribute) -> bool");

extern "C" {static PyObject *meth_QGeoPositionInfo_hasAttribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoPositionInfo_hasAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoPositionInfo::Attribute a0;
        const QGeoPositionInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoPositionInfo, &sipCpp, sipType_QGeoPositionInfo_Attribute, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->hasAttribute(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoPositionInfo, sipName_hasAttribute, doc_QGeoPositionInfo_hasAttribute);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoPositionInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoPositionInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoPositionInfo *sipCpp = reinterpret_cast<QGeoPositionInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoPositionInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoPositionInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoPositionInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoPositionInfo::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoPositionInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoPositionInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoPositionInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoPositionInfo *sipCpp = reinterpret_cast<QGeoPositionInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoPositionInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoPositionInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoPositionInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoPositionInfo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoPositionInfo,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGeoPositionInfo(void *, const sipTypeDef *);}
static void *cast_QGeoPositionInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGeoPositionInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoPositionInfo(void *, int);}
static void release_QGeoPositionInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoPositionInfo *>(sipCppV);
}


extern "C" {static void assign_QGeoPositionInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoPositionInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoPositionInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoPositionInfo *>(sipSrc);
}


extern "C" {static void *array_QGeoPositionInfo(SIP_SSIZE_T);}
static void *array_QGeoPositionInfo(SIP_SSIZE_T sipNrElem)
{
    return new QGeoPositionInfo[sipNrElem];
}


extern "C" {static void *copy_QGeoPositionInfo(const void *, SIP_SSIZE_T);}
static void *copy_QGeoPositionInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoPositionInfo(reinterpret_cast<const QGeoPositionInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoPositionInfo(sipSimpleWrapper *);}
static void dealloc_QGeoPositionInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoPositionInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoPositionInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoPositionInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoPositionInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoPositionInfo();

            return sipCpp;
        }
    }

    {
        const QGeoCoordinate* a0;
        const QDateTime* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J1", sipType_QGeoCoordinate, &a0, sipType_QDateTime, &a1, &a1State))
        {
            sipCpp = new QGeoPositionInfo(*a0,*a1);
            sipReleaseType(const_cast<QDateTime *>(a1),sipType_QDateTime,a1State);

            return sipCpp;
        }
    }

    {
        const QGeoPositionInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoPositionInfo, &a0))
        {
            sipCpp = new QGeoPositionInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoPositionInfo[] = {
    {(void *)slot_QGeoPositionInfo___ne__, ne_slot},
    {(void *)slot_QGeoPositionInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoPositionInfo[] = {
    {SIP_MLNAME_CAST(sipName_attribute), meth_QGeoPositionInfo_attribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_attribute)},
    {SIP_MLNAME_CAST(sipName_coordinate), meth_QGeoPositionInfo_coordinate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_coordinate)},
    {SIP_MLNAME_CAST(sipName_hasAttribute), meth_QGeoPositionInfo_hasAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_hasAttribute)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGeoPositionInfo_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_isValid)},
    {SIP_MLNAME_CAST(sipName_removeAttribute), meth_QGeoPositionInfo_removeAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_removeAttribute)},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QGeoPositionInfo_setAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_setAttribute)},
    {SIP_MLNAME_CAST(sipName_setCoordinate), meth_QGeoPositionInfo_setCoordinate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_setCoordinate)},
    {SIP_MLNAME_CAST(sipName_setTimestamp), meth_QGeoPositionInfo_setTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_setTimestamp)},
    {SIP_MLNAME_CAST(sipName_timestamp), meth_QGeoPositionInfo_timestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoPositionInfo_timestamp)}
};

static sipEnumMemberDef enummembers_QGeoPositionInfo[] = {
    {sipName_Direction, static_cast<int>(QGeoPositionInfo::Direction), 12},
    {sipName_GroundSpeed, static_cast<int>(QGeoPositionInfo::GroundSpeed), 12},
    {sipName_HorizontalAccuracy, static_cast<int>(QGeoPositionInfo::HorizontalAccuracy), 12},
    {sipName_MagneticVariation, static_cast<int>(QGeoPositionInfo::MagneticVariation), 12},
    {sipName_VerticalAccuracy, static_cast<int>(QGeoPositionInfo::VerticalAccuracy), 12},
    {sipName_VerticalSpeed, static_cast<int>(QGeoPositionInfo::VerticalSpeed), 12},
};

PyDoc_STRVAR(doc_QGeoPositionInfo, "\1QGeoPositionInfo()\n"
    "QGeoPositionInfo(QGeoCoordinate, QDateTime)\n"
    "QGeoPositionInfo(QGeoPositionInfo)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoPositionInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoPositionInfo,
        {0}
    },
    {
        sipNameNr_QGeoPositionInfo,
        {0, 0, 1},
        9, methods_QGeoPositionInfo,
        6, enummembers_QGeoPositionInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoPositionInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QGeoPositionInfo,
    init_type_QGeoPositionInfo,
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
    dealloc_QGeoPositionInfo,
    assign_QGeoPositionInfo,
    array_QGeoPositionInfo,
    copy_QGeoPositionInfo,
    release_QGeoPositionInfo,
    cast_QGeoPositionInfo,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
