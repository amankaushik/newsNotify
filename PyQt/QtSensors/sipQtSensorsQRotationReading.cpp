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

#include "sipAPIQtSensors.h"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtSensors/qrotationsensor.sip"
#include <qrotationsensor.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQRotationReading.cpp"


PyDoc_STRVAR(doc_QRotationReading_x, "QRotationReading.x() -> float");

extern "C" {static PyObject *meth_QRotationReading_x(PyObject *, PyObject *);}
static PyObject *meth_QRotationReading_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRotationReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRotationReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->x();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRotationReading, sipName_x, doc_QRotationReading_x);

    return NULL;
}


PyDoc_STRVAR(doc_QRotationReading_y, "QRotationReading.y() -> float");

extern "C" {static PyObject *meth_QRotationReading_y(PyObject *, PyObject *);}
static PyObject *meth_QRotationReading_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRotationReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRotationReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->y();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRotationReading, sipName_y, doc_QRotationReading_y);

    return NULL;
}


PyDoc_STRVAR(doc_QRotationReading_z, "QRotationReading.z() -> float");

extern "C" {static PyObject *meth_QRotationReading_z(PyObject *, PyObject *);}
static PyObject *meth_QRotationReading_z(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRotationReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRotationReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->z();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRotationReading, sipName_z, doc_QRotationReading_z);

    return NULL;
}


PyDoc_STRVAR(doc_QRotationReading_setFromEuler, "QRotationReading.setFromEuler(float, float, float)");

extern "C" {static PyObject *meth_QRotationReading_setFromEuler(PyObject *, PyObject *);}
static PyObject *meth_QRotationReading_setFromEuler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2;
        QRotationReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bddd", &sipSelf, sipType_QRotationReading, &sipCpp, &a0, &a1, &a2))
        {
            sipCpp->setFromEuler(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRotationReading, sipName_setFromEuler, doc_QRotationReading_setFromEuler);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QRotationReading(void *, const sipTypeDef *);}
static void *cast_QRotationReading(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QRotationReading)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorReading)->ctd_cast((QSensorReading *)(QRotationReading *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRotationReading(void *, int);}
static void release_QRotationReading(void *sipCppV,int)
{
    QRotationReading *sipCpp = reinterpret_cast<QRotationReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QRotationReading(sipSimpleWrapper *);}
static void dealloc_QRotationReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRotationReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QRotationReading[] = {{51, 255, 1}};


static PyMethodDef methods_QRotationReading[] = {
    {SIP_MLNAME_CAST(sipName_setFromEuler), meth_QRotationReading_setFromEuler, METH_VARARGS, SIP_MLDOC_CAST(doc_QRotationReading_setFromEuler)},
    {SIP_MLNAME_CAST(sipName_x), meth_QRotationReading_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QRotationReading_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QRotationReading_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QRotationReading_y)},
    {SIP_MLNAME_CAST(sipName_z), meth_QRotationReading_z, METH_VARARGS, SIP_MLDOC_CAST(doc_QRotationReading_z)}
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QRotationReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRotationReading,
        {0}
    },
    {
        sipNameNr_QRotationReading,
        {0, 0, 1},
        4, methods_QRotationReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QRotationReading,
    0,
    0,
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
    dealloc_QRotationReading,
    0,
    0,
    0,
    release_QRotationReading,
    cast_QRotationReading,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QRotationReading::staticMetaObject,
    0,
    0,
    0
};