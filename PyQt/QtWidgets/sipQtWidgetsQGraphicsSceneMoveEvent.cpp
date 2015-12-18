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

#line 240 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"
#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQGraphicsSceneMoveEvent.cpp"


class sipQGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent
{
public:
    sipQGraphicsSceneMoveEvent();
    ~sipQGraphicsSceneMoveEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsSceneMoveEvent(const sipQGraphicsSceneMoveEvent &);
    sipQGraphicsSceneMoveEvent &operator = (const sipQGraphicsSceneMoveEvent &);
};

sipQGraphicsSceneMoveEvent::sipQGraphicsSceneMoveEvent(): QGraphicsSceneMoveEvent(), sipPySelf(0)
{
}

sipQGraphicsSceneMoveEvent::~sipQGraphicsSceneMoveEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QGraphicsSceneMoveEvent_oldPos, "QGraphicsSceneMoveEvent.oldPos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMoveEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMoveEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMoveEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->oldPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMoveEvent, sipName_oldPos, doc_QGraphicsSceneMoveEvent_oldPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMoveEvent_newPos, "QGraphicsSceneMoveEvent.newPos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMoveEvent_newPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMoveEvent_newPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMoveEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->newPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMoveEvent, sipName_newPos, doc_QGraphicsSceneMoveEvent_newPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneMoveEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneMoveEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneMoveEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneMoveEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneMoveEvent(void *, int);}
static void release_QGraphicsSceneMoveEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsSceneMoveEvent *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsSceneMoveEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneMoveEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneMoveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsSceneMoveEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneMoveEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGraphicsSceneMoveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsSceneMoveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGraphicsSceneMoveEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQGraphicsSceneMoveEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneMoveEvent[] = {{149, 255, 1}};


static PyMethodDef methods_QGraphicsSceneMoveEvent[] = {
    {SIP_MLNAME_CAST(sipName_newPos), meth_QGraphicsSceneMoveEvent_newPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMoveEvent_newPos)},
    {SIP_MLNAME_CAST(sipName_oldPos), meth_QGraphicsSceneMoveEvent_oldPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMoveEvent_oldPos)}
};

PyDoc_STRVAR(doc_QGraphicsSceneMoveEvent, "\1QGraphicsSceneMoveEvent()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneMoveEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneMoveEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneMoveEvent,
        {0, 0, 1},
        2, methods_QGraphicsSceneMoveEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsSceneMoveEvent,
    -1,
    -1,
    supers_QGraphicsSceneMoveEvent,
    0,
    init_type_QGraphicsSceneMoveEvent,
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
    dealloc_QGraphicsSceneMoveEvent,
    0,
    0,
    0,
    release_QGraphicsSceneMoveEvent,
    cast_QGraphicsSceneMoveEvent,
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