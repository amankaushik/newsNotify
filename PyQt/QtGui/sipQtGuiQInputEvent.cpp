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

#include "sipAPIQtGui.h"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQInputEvent.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQInputEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQInputEvent.cpp"


PyDoc_STRVAR(doc_QInputEvent_modifiers, "QInputEvent.modifiers() -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QInputEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QInputEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputEvent, sipName_modifiers, doc_QInputEvent_modifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QInputEvent_timestamp, "QInputEvent.timestamp() -> int");

extern "C" {static PyObject *meth_QInputEvent_timestamp(PyObject *, PyObject *);}
static PyObject *meth_QInputEvent_timestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputEvent, &sipCpp))
        {
            ulong sipRes;

            sipRes = sipCpp->timestamp();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputEvent, sipName_timestamp, doc_QInputEvent_timestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QInputEvent_setTimestamp, "QInputEvent.setTimestamp(int)");

extern "C" {static PyObject *meth_QInputEvent_setTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QInputEvent_setTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        ulong a0;
        QInputEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_QInputEvent, &sipCpp, &a0))
        {
            sipCpp->setTimestamp(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputEvent, sipName_setTimestamp, doc_QInputEvent_setTimestamp);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QInputEvent(void *, const sipTypeDef *);}
static void *cast_QInputEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QInputEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QInputEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputEvent(void *, int);}
static void release_QInputEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QInputEvent *>(sipCppV);
}


extern "C" {static void dealloc_QInputEvent(sipSimpleWrapper *);}
static void dealloc_QInputEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QInputEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QInputEvent[] = {{53, 0, 1}};


static PyMethodDef methods_QInputEvent[] = {
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QInputEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_setTimestamp), meth_QInputEvent_setTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputEvent_setTimestamp)},
    {SIP_MLNAME_CAST(sipName_timestamp), meth_QInputEvent_timestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputEvent_timestamp)}
};


pyqt5ClassTypeDef sipTypeDef_QtGui_QInputEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QInputEvent,
        {0}
    },
    {
        sipNameNr_QInputEvent,
        {0, 0, 1},
        3, methods_QInputEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QInputEvent,
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
    dealloc_QInputEvent,
    0,
    0,
    0,
    release_QInputEvent,
    cast_QInputEvent,
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
