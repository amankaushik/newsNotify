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

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtSensors/qorientationsensor.sip"
#include <qorientationsensor.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQOrientationReading.cpp"


PyDoc_STRVAR(doc_QOrientationReading_orientation, "QOrientationReading.orientation() -> QOrientationReading.Orientation");

extern "C" {static PyObject *meth_QOrientationReading_orientation(PyObject *, PyObject *);}
static PyObject *meth_QOrientationReading_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOrientationReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOrientationReading, &sipCpp))
        {
            QOrientationReading::Orientation sipRes;

            sipRes = sipCpp->orientation();

            return sipConvertFromEnum(sipRes,sipType_QOrientationReading_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOrientationReading, sipName_orientation, doc_QOrientationReading_orientation);

    return NULL;
}


PyDoc_STRVAR(doc_QOrientationReading_setOrientation, "QOrientationReading.setOrientation(QOrientationReading.Orientation)");

extern "C" {static PyObject *meth_QOrientationReading_setOrientation(PyObject *, PyObject *);}
static PyObject *meth_QOrientationReading_setOrientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOrientationReading::Orientation a0;
        QOrientationReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QOrientationReading, &sipCpp, sipType_QOrientationReading_Orientation, &a0))
        {
            sipCpp->setOrientation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOrientationReading, sipName_setOrientation, doc_QOrientationReading_setOrientation);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QOrientationReading(void *, const sipTypeDef *);}
static void *cast_QOrientationReading(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QOrientationReading)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorReading)->ctd_cast((QSensorReading *)(QOrientationReading *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOrientationReading(void *, int);}
static void release_QOrientationReading(void *sipCppV,int)
{
    QOrientationReading *sipCpp = reinterpret_cast<QOrientationReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QOrientationReading(sipSimpleWrapper *);}
static void dealloc_QOrientationReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QOrientationReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOrientationReading[] = {{51, 255, 1}};


static PyMethodDef methods_QOrientationReading[] = {
    {SIP_MLNAME_CAST(sipName_orientation), meth_QOrientationReading_orientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QOrientationReading_orientation)},
    {SIP_MLNAME_CAST(sipName_setOrientation), meth_QOrientationReading_setOrientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QOrientationReading_setOrientation)}
};

static sipEnumMemberDef enummembers_QOrientationReading[] = {
    {sipName_FaceDown, static_cast<int>(QOrientationReading::FaceDown), 36},
    {sipName_FaceUp, static_cast<int>(QOrientationReading::FaceUp), 36},
    {sipName_LeftUp, static_cast<int>(QOrientationReading::LeftUp), 36},
    {sipName_RightUp, static_cast<int>(QOrientationReading::RightUp), 36},
    {sipName_TopDown, static_cast<int>(QOrientationReading::TopDown), 36},
    {sipName_TopUp, static_cast<int>(QOrientationReading::TopUp), 36},
    {sipName_Undefined, static_cast<int>(QOrientationReading::Undefined), 36},
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QOrientationReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOrientationReading,
        {0}
    },
    {
        sipNameNr_QOrientationReading,
        {0, 0, 1},
        2, methods_QOrientationReading,
        7, enummembers_QOrientationReading,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QOrientationReading,
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
    dealloc_QOrientationReading,
    0,
    0,
    0,
    release_QOrientationReading,
    cast_QOrientationReading,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QOrientationReading::staticMetaObject,
    0,
    0,
    0
};
