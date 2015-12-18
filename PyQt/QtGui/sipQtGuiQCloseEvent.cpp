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

#line 416 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQCloseEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQCloseEvent.cpp"


class sipQCloseEvent : public QCloseEvent
{
public:
    sipQCloseEvent();
    sipQCloseEvent(const QCloseEvent&);
    ~sipQCloseEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQCloseEvent(const sipQCloseEvent &);
    sipQCloseEvent &operator = (const sipQCloseEvent &);
};

sipQCloseEvent::sipQCloseEvent(): QCloseEvent(), sipPySelf(0)
{
}

sipQCloseEvent::sipQCloseEvent(const QCloseEvent& a0): QCloseEvent(a0), sipPySelf(0)
{
}

sipQCloseEvent::~sipQCloseEvent()
{
    sipCommonDtor(sipPySelf);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCloseEvent(void *, const sipTypeDef *);}
static void *cast_QCloseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QCloseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QCloseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCloseEvent(void *, int);}
static void release_QCloseEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQCloseEvent *>(sipCppV);
    else
        delete reinterpret_cast<QCloseEvent *>(sipCppV);
}


extern "C" {static void assign_QCloseEvent(void *, SIP_SSIZE_T, const void *);}
static void assign_QCloseEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCloseEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCloseEvent *>(sipSrc);
}


extern "C" {static void *array_QCloseEvent(SIP_SSIZE_T);}
static void *array_QCloseEvent(SIP_SSIZE_T sipNrElem)
{
    return new QCloseEvent[sipNrElem];
}


extern "C" {static void *copy_QCloseEvent(const void *, SIP_SSIZE_T);}
static void *copy_QCloseEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCloseEvent(reinterpret_cast<const QCloseEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCloseEvent(sipSimpleWrapper *);}
static void dealloc_QCloseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQCloseEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QCloseEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QCloseEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCloseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQCloseEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQCloseEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QCloseEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCloseEvent, &a0))
        {
            sipCpp = new sipQCloseEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QCloseEvent[] = {{53, 0, 1}};

PyDoc_STRVAR(doc_QCloseEvent, "\1QCloseEvent()\n"
    "QCloseEvent(QCloseEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QCloseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCloseEvent,
        {0}
    },
    {
        sipNameNr_QCloseEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCloseEvent,
    -1,
    -1,
    supers_QCloseEvent,
    0,
    init_type_QCloseEvent,
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
    dealloc_QCloseEvent,
    assign_QCloseEvent,
    array_QCloseEvent,
    copy_QCloseEvent,
    release_QCloseEvent,
    cast_QCloseEvent,
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
