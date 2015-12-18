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

#include "sipAPIQtCore.h"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qanimationgroup.sip"
#include <qanimationgroup.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qabstractanimation.sip"
#include <qabstractanimation.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 244 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 232 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 27 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 32 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 144 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQAnimationGroup.cpp"


class sipQAnimationGroup : public QAnimationGroup
{
public:
    sipQAnimationGroup(QObject*);
    virtual ~sipQAnimationGroup();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    void updateDirection(QAbstractAnimation::Direction);
    void updateState(QAbstractAnimation::State,QAbstractAnimation::State);
    void updateCurrentTime(int);
    int duration() const;
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAnimationGroup(const sipQAnimationGroup &);
    sipQAnimationGroup &operator = (const sipQAnimationGroup &);

    char sipPyMethods[11];
};

sipQAnimationGroup::sipQAnimationGroup(QObject*a0): QAnimationGroup(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAnimationGroup::~sipQAnimationGroup()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtCore_qt_metaobject(sipPySelf,sipType_QAnimationGroup);
}

int sipQAnimationGroup::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAnimationGroup::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QAnimationGroup,_c,_id,_a);

    return _id;
}

void *sipQAnimationGroup::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QAnimationGroup, _clname, &sipCpp) ? sipCpp : QAnimationGroup::qt_metacast(_clname));
}

void sipQAnimationGroup::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QAnimationGroup::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_46(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQAnimationGroup::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QAnimationGroup::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_46(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQAnimationGroup::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QAnimationGroup::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_25(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQAnimationGroup::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QAnimationGroup::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_47(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_47(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQAnimationGroup::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QAnimationGroup::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_9(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

bool sipQAnimationGroup::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QAnimationGroup::eventFilter(a0,a1);

    extern bool sipVH_QtCore_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_26(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1);
}

void sipQAnimationGroup::updateDirection(QAbstractAnimation::Direction a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_updateDirection);

    if (!sipMeth)
    {
        QAnimationGroup::updateDirection(a0);
        return;
    }

    extern void sipVH_QtCore_41(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractAnimation::Direction);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_41(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQAnimationGroup::updateState(QAbstractAnimation::State a0,QAbstractAnimation::State a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_updateState);

    if (!sipMeth)
    {
        QAnimationGroup::updateState(a0,a1);
        return;
    }

    extern void sipVH_QtCore_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractAnimation::State,QAbstractAnimation::State);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_3(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1);
}

void sipQAnimationGroup::updateCurrentTime(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QAnimationGroup,sipName_updateCurrentTime);

    if (!sipMeth)
        return;

    extern void sipVH_QtCore_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_4(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

int sipQAnimationGroup::duration() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QAnimationGroup,sipName_duration);

    if (!sipMeth)
        return 0;

    extern int sipVH_QtCore_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_6(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth);
}

bool sipQAnimationGroup::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QAnimationGroup::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_5(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAnimationGroup_animationAt, "QAnimationGroup.animationAt(int) -> QAbstractAnimation");

extern "C" {static PyObject *meth_QAnimationGroup_animationAt(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_animationAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAnimationGroup, &sipCpp, &a0))
        {
            QAbstractAnimation*sipRes;

            sipRes = sipCpp->animationAt(a0);

            return sipConvertFromType(sipRes,sipType_QAbstractAnimation,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_animationAt, doc_QAnimationGroup_animationAt);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_animationCount, "QAnimationGroup.animationCount() -> int");

extern "C" {static PyObject *meth_QAnimationGroup_animationCount(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_animationCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAnimationGroup, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->animationCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_animationCount, doc_QAnimationGroup_animationCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_indexOfAnimation, "QAnimationGroup.indexOfAnimation(QAbstractAnimation) -> int");

extern "C" {static PyObject *meth_QAnimationGroup_indexOfAnimation(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_indexOfAnimation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractAnimation* a0;
        const QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAnimationGroup, &sipCpp, sipType_QAbstractAnimation, &a0))
        {
            int sipRes;

            sipRes = sipCpp->indexOfAnimation(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_indexOfAnimation, doc_QAnimationGroup_indexOfAnimation);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_addAnimation, "QAnimationGroup.addAnimation(QAbstractAnimation)");

extern "C" {static PyObject *meth_QAnimationGroup_addAnimation(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_addAnimation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractAnimation* a0;
        QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QAnimationGroup, &sipCpp, sipType_QAbstractAnimation, &a0))
        {
            sipCpp->addAnimation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_addAnimation, doc_QAnimationGroup_addAnimation);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_insertAnimation, "QAnimationGroup.insertAnimation(int, QAbstractAnimation)");

extern "C" {static PyObject *meth_QAnimationGroup_insertAnimation(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_insertAnimation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAbstractAnimation* a1;
        QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ:", &sipSelf, sipType_QAnimationGroup, &sipCpp, &a0, sipType_QAbstractAnimation, &a1))
        {
            sipCpp->insertAnimation(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_insertAnimation, doc_QAnimationGroup_insertAnimation);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_removeAnimation, "QAnimationGroup.removeAnimation(QAbstractAnimation)");

extern "C" {static PyObject *meth_QAnimationGroup_removeAnimation(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_removeAnimation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractAnimation* a0;
        QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ<", &sipSelf, sipType_QAnimationGroup, &sipCpp, sipType_QAbstractAnimation, &a0))
        {
            sipCpp->removeAnimation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_removeAnimation, doc_QAnimationGroup_removeAnimation);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_takeAnimation, "QAnimationGroup.takeAnimation(int) -> QAbstractAnimation");

extern "C" {static PyObject *meth_QAnimationGroup_takeAnimation(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_takeAnimation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAnimationGroup, &sipCpp, &a0))
        {
            QAbstractAnimation*sipRes;

            sipRes = sipCpp->takeAnimation(a0);

            return sipConvertFromType(sipRes,sipType_QAbstractAnimation,Py_None);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_takeAnimation, doc_QAnimationGroup_takeAnimation);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_clear, "QAnimationGroup.clear()");

extern "C" {static PyObject *meth_QAnimationGroup_clear(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAnimationGroup, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_clear, doc_QAnimationGroup_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QAnimationGroup_event, "QAnimationGroup.event(QEvent) -> bool");

extern "C" {static PyObject *meth_QAnimationGroup_event(PyObject *, PyObject *);}
static PyObject *meth_QAnimationGroup_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        QAnimationGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QAnimationGroup, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QAnimationGroup::event(a0) : sipCpp->event(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAnimationGroup, sipName_event, doc_QAnimationGroup_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAnimationGroup(void *, const sipTypeDef *);}
static void *cast_QAnimationGroup(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAnimationGroup)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractAnimation)->ctd_cast((QAbstractAnimation *)(QAnimationGroup *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAnimationGroup(void *, int);}
static void release_QAnimationGroup(void *sipCppV,int)
{
    QAnimationGroup *sipCpp = reinterpret_cast<QAnimationGroup *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QAnimationGroup(sipSimpleWrapper *);}
static void dealloc_QAnimationGroup(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAnimationGroup *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAnimationGroup(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAnimationGroup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAnimationGroup(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAnimationGroup *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQAnimationGroup(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAnimationGroup[] = {{0, 255, 1}};


static PyMethodDef methods_QAnimationGroup[] = {
    {SIP_MLNAME_CAST(sipName_addAnimation), meth_QAnimationGroup_addAnimation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_addAnimation)},
    {SIP_MLNAME_CAST(sipName_animationAt), meth_QAnimationGroup_animationAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_animationAt)},
    {SIP_MLNAME_CAST(sipName_animationCount), meth_QAnimationGroup_animationCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_animationCount)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QAnimationGroup_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_clear)},
    {SIP_MLNAME_CAST(sipName_event), meth_QAnimationGroup_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_event)},
    {SIP_MLNAME_CAST(sipName_indexOfAnimation), meth_QAnimationGroup_indexOfAnimation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_indexOfAnimation)},
    {SIP_MLNAME_CAST(sipName_insertAnimation), meth_QAnimationGroup_insertAnimation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_insertAnimation)},
    {SIP_MLNAME_CAST(sipName_removeAnimation), meth_QAnimationGroup_removeAnimation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_removeAnimation)},
    {SIP_MLNAME_CAST(sipName_takeAnimation), meth_QAnimationGroup_takeAnimation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAnimationGroup_takeAnimation)}
};

PyDoc_STRVAR(doc_QAnimationGroup, "\1QAnimationGroup(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QAnimationGroup = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAnimationGroup,
        {0}
    },
    {
        sipNameNr_QAnimationGroup,
        {0, 0, 1},
        9, methods_QAnimationGroup,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAnimationGroup,
    -1,
    -1,
    supers_QAnimationGroup,
    0,
    init_type_QAnimationGroup,
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
    dealloc_QAnimationGroup,
    0,
    0,
    0,
    release_QAnimationGroup,
    cast_QAnimationGroup,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QAnimationGroup::staticMetaObject,
    0,
    0,
    0
};
