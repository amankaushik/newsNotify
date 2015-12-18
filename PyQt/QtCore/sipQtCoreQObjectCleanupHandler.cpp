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

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qobjectcleanuphandler.sip"
#include <qobjectcleanuphandler.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 244 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 232 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 27 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 32 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 144 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQObjectCleanupHandler.cpp"


class sipQObjectCleanupHandler : public QObjectCleanupHandler
{
public:
    sipQObjectCleanupHandler();
    virtual ~sipQObjectCleanupHandler();

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
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQObjectCleanupHandler(const sipQObjectCleanupHandler &);
    sipQObjectCleanupHandler &operator = (const sipQObjectCleanupHandler &);

    char sipPyMethods[7];
};

sipQObjectCleanupHandler::sipQObjectCleanupHandler(): QObjectCleanupHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQObjectCleanupHandler::~sipQObjectCleanupHandler()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQObjectCleanupHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtCore_qt_metaobject(sipPySelf,sipType_QObjectCleanupHandler);
}

int sipQObjectCleanupHandler::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QObjectCleanupHandler::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QObjectCleanupHandler,_c,_id,_a);

    return _id;
}

void *sipQObjectCleanupHandler::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QObjectCleanupHandler, _clname, &sipCpp) ? sipCpp : QObjectCleanupHandler::qt_metacast(_clname));
}

void sipQObjectCleanupHandler::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QObjectCleanupHandler::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_46(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QObjectCleanupHandler::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_46(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QObjectCleanupHandler::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_25(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QObjectCleanupHandler::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_47(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_47(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QObjectCleanupHandler::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_9(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

bool sipQObjectCleanupHandler::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QObjectCleanupHandler::eventFilter(a0,a1);

    extern bool sipVH_QtCore_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_26(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1);
}

bool sipQObjectCleanupHandler::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QObjectCleanupHandler::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_5(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_add, "QObjectCleanupHandler.add(QObject) -> QObject");

extern "C" {static PyObject *meth_QObjectCleanupHandler_add(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QObject, &a0))
        {
            QObject*sipRes;

            sipRes = sipCpp->add(a0);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_add, doc_QObjectCleanupHandler_add);

    return NULL;
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_remove, "QObjectCleanupHandler.remove(QObject)");

extern "C" {static PyObject *meth_QObjectCleanupHandler_remove(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QObject, &a0))
        {
            sipCpp->remove(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_remove, doc_QObjectCleanupHandler_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_isEmpty, "QObjectCleanupHandler.isEmpty() -> bool");

extern "C" {static PyObject *meth_QObjectCleanupHandler_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_isEmpty, doc_QObjectCleanupHandler_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_clear, "QObjectCleanupHandler.clear()");

extern "C" {static PyObject *meth_QObjectCleanupHandler_clear(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_clear, doc_QObjectCleanupHandler_clear);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QObjectCleanupHandler(void *, const sipTypeDef *);}
static void *cast_QObjectCleanupHandler(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QObjectCleanupHandler)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QObjectCleanupHandler *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QObjectCleanupHandler(void *, int);}
static void release_QObjectCleanupHandler(void *sipCppV,int)
{
    QObjectCleanupHandler *sipCpp = reinterpret_cast<QObjectCleanupHandler *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QObjectCleanupHandler(sipSimpleWrapper *);}
static void dealloc_QObjectCleanupHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQObjectCleanupHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QObjectCleanupHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QObjectCleanupHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QObjectCleanupHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQObjectCleanupHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQObjectCleanupHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QObjectCleanupHandler[] = {{160, 255, 1}};


static PyMethodDef methods_QObjectCleanupHandler[] = {
    {SIP_MLNAME_CAST(sipName_add), meth_QObjectCleanupHandler_add, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_add)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QObjectCleanupHandler_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_clear)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QObjectCleanupHandler_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_isEmpty)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QObjectCleanupHandler_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_remove)}
};

PyDoc_STRVAR(doc_QObjectCleanupHandler, "\1QObjectCleanupHandler()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QObjectCleanupHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QObjectCleanupHandler,
        {0}
    },
    {
        sipNameNr_QObjectCleanupHandler,
        {0, 0, 1},
        4, methods_QObjectCleanupHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QObjectCleanupHandler,
    -1,
    -1,
    supers_QObjectCleanupHandler,
    0,
    init_type_QObjectCleanupHandler,
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
    dealloc_QObjectCleanupHandler,
    0,
    0,
    0,
    release_QObjectCleanupHandler,
    cast_QObjectCleanupHandler,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QObjectCleanupHandler::staticMetaObject,
    0,
    0,
    0
};
