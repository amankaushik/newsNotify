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

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qsystemtrayicon.sip"
#include <qsystemtrayicon.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qmenu.sip"
#include <qmenu.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 84 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 87 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQSystemTrayIcon.cpp"


class sipQSystemTrayIcon : public QSystemTrayIcon
{
public:
    sipQSystemTrayIcon(QObject*);
    sipQSystemTrayIcon(const QIcon&,QObject*);
    virtual ~sipQSystemTrayIcon();

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
    sipQSystemTrayIcon(const sipQSystemTrayIcon &);
    sipQSystemTrayIcon &operator = (const sipQSystemTrayIcon &);

    char sipPyMethods[7];
};

sipQSystemTrayIcon::sipQSystemTrayIcon(QObject*a0): QSystemTrayIcon(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemTrayIcon::sipQSystemTrayIcon(const QIcon& a0,QObject*a1): QSystemTrayIcon(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemTrayIcon::~sipQSystemTrayIcon()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QSystemTrayIcon);
}

int sipQSystemTrayIcon::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QSystemTrayIcon,_c,_id,_a);

    return _id;
}

void *sipQSystemTrayIcon::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QSystemTrayIcon, _clname, &sipCpp) ? sipCpp : QSystemTrayIcon::qt_metacast(_clname));
}

void sipQSystemTrayIcon::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QSystemTrayIcon::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QSystemTrayIcon::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QSystemTrayIcon::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QSystemTrayIcon::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSystemTrayIcon::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QSystemTrayIcon::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQSystemTrayIcon::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QSystemTrayIcon::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQSystemTrayIcon::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QSystemTrayIcon::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setContextMenu, "QSystemTrayIcon.setContextMenu(QMenu)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setContextMenu(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setContextMenu(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMenu* a0;
        PyObject *a0Keep;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0Keep, sipType_QMenu, &a0))
        {
            sipCpp->setContextMenu(a0);

            sipKeepReference(sipSelf, -44, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setContextMenu, doc_QSystemTrayIcon_setContextMenu);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_contextMenu, "QSystemTrayIcon.contextMenu() -> QMenu");

extern "C" {static PyObject *meth_QSystemTrayIcon_contextMenu(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_contextMenu(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QMenu*sipRes;

            sipRes = sipCpp->contextMenu();

            return sipConvertFromType(sipRes,sipType_QMenu,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_contextMenu, doc_QSystemTrayIcon_contextMenu);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_geometry, "QSystemTrayIcon.geometry() -> QRect");

extern "C" {static PyObject *meth_QSystemTrayIcon_geometry(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->geometry());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_geometry, doc_QSystemTrayIcon_geometry);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_icon, "QSystemTrayIcon.icon() -> QIcon");

extern "C" {static PyObject *meth_QSystemTrayIcon_icon(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QIcon*sipRes;

            sipRes = new QIcon(sipCpp->icon());

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_icon, doc_QSystemTrayIcon_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setIcon, "QSystemTrayIcon.setIcon(QIcon)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setIcon(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setIcon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon* a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QIcon, &a0))
        {
            sipCpp->setIcon(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setIcon, doc_QSystemTrayIcon_setIcon);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_toolTip, "QSystemTrayIcon.toolTip() -> str");

extern "C" {static PyObject *meth_QSystemTrayIcon_toolTip(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_toolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toolTip());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_toolTip, doc_QSystemTrayIcon_toolTip);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setToolTip, "QSystemTrayIcon.setToolTip(str)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setToolTip(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setToolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setToolTip(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setToolTip, doc_QSystemTrayIcon_setToolTip);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_isSystemTrayAvailable, "QSystemTrayIcon.isSystemTrayAvailable() -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_isSystemTrayAvailable(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_isSystemTrayAvailable(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QSystemTrayIcon::isSystemTrayAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_isSystemTrayAvailable, doc_QSystemTrayIcon_isSystemTrayAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_supportsMessages, "QSystemTrayIcon.supportsMessages() -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_supportsMessages(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_supportsMessages(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QSystemTrayIcon::supportsMessages();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_supportsMessages, doc_QSystemTrayIcon_supportsMessages);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_showMessage, "QSystemTrayIcon.showMessage(str, str, QSystemTrayIcon.MessageIcon icon=QSystemTrayIcon.Information, int msecs=10000)");

extern "C" {static PyObject *meth_QSystemTrayIcon_showMessage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_showMessage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QSystemTrayIcon::MessageIcon a2 = QSystemTrayIcon::Information;
        int a3 = 10000;
        QSystemTrayIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_icon,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1J1|Ei", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QSystemTrayIcon_MessageIcon, &a2, &a3))
        {
            sipCpp->showMessage(*a0,*a1,a2,a3);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_showMessage, doc_QSystemTrayIcon_showMessage);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_isVisible, "QSystemTrayIcon.isVisible() -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_isVisible, doc_QSystemTrayIcon_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_hide, "QSystemTrayIcon.hide()");

extern "C" {static PyObject *meth_QSystemTrayIcon_hide(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_hide(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            sipCpp->hide();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_hide, doc_QSystemTrayIcon_hide);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_setVisible, "QSystemTrayIcon.setVisible(bool)");

extern "C" {static PyObject *meth_QSystemTrayIcon_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, &a0))
        {
            sipCpp->setVisible(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_setVisible, doc_QSystemTrayIcon_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_show, "QSystemTrayIcon.show()");

extern "C" {static PyObject *meth_QSystemTrayIcon_show(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_show(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemTrayIcon, &sipCpp))
        {
            sipCpp->show();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_show, doc_QSystemTrayIcon_show);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemTrayIcon_event, "QSystemTrayIcon.event(QEvent) -> bool");

extern "C" {static PyObject *meth_QSystemTrayIcon_event(PyObject *, PyObject *);}
static PyObject *meth_QSystemTrayIcon_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        QSystemTrayIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QSystemTrayIcon, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSystemTrayIcon::event(a0) : sipCpp->event(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemTrayIcon, sipName_event, doc_QSystemTrayIcon_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSystemTrayIcon(void *, const sipTypeDef *);}
static void *cast_QSystemTrayIcon(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSystemTrayIcon)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSystemTrayIcon *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSystemTrayIcon(void *, int);}
static void release_QSystemTrayIcon(void *sipCppV,int)
{
    QSystemTrayIcon *sipCpp = reinterpret_cast<QSystemTrayIcon *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QSystemTrayIcon(sipSimpleWrapper *);}
static void dealloc_QSystemTrayIcon(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSystemTrayIcon *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSystemTrayIcon(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSystemTrayIcon(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSystemTrayIcon(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSystemTrayIcon *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQSystemTrayIcon(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIcon* a0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|JH", sipType_QIcon, &a0, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQSystemTrayIcon(*a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSystemTrayIcon[] = {{160, 0, 1}};


static PyMethodDef methods_QSystemTrayIcon[] = {
    {SIP_MLNAME_CAST(sipName_contextMenu), meth_QSystemTrayIcon_contextMenu, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_contextMenu)},
    {SIP_MLNAME_CAST(sipName_event), meth_QSystemTrayIcon_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_event)},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QSystemTrayIcon_geometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_geometry)},
    {SIP_MLNAME_CAST(sipName_hide), meth_QSystemTrayIcon_hide, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_hide)},
    {SIP_MLNAME_CAST(sipName_icon), meth_QSystemTrayIcon_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_icon)},
    {SIP_MLNAME_CAST(sipName_isSystemTrayAvailable), meth_QSystemTrayIcon_isSystemTrayAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_isSystemTrayAvailable)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QSystemTrayIcon_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_isVisible)},
    {SIP_MLNAME_CAST(sipName_setContextMenu), meth_QSystemTrayIcon_setContextMenu, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setContextMenu)},
    {SIP_MLNAME_CAST(sipName_setIcon), meth_QSystemTrayIcon_setIcon, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setIcon)},
    {SIP_MLNAME_CAST(sipName_setToolTip), meth_QSystemTrayIcon_setToolTip, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setToolTip)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QSystemTrayIcon_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_setVisible)},
    {SIP_MLNAME_CAST(sipName_show), meth_QSystemTrayIcon_show, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_show)},
    {SIP_MLNAME_CAST(sipName_showMessage), (PyCFunction)meth_QSystemTrayIcon_showMessage, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_showMessage)},
    {SIP_MLNAME_CAST(sipName_supportsMessages), meth_QSystemTrayIcon_supportsMessages, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_supportsMessages)},
    {SIP_MLNAME_CAST(sipName_toolTip), meth_QSystemTrayIcon_toolTip, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemTrayIcon_toolTip)}
};

static sipEnumMemberDef enummembers_QSystemTrayIcon[] = {
    {sipName_Context, static_cast<int>(QSystemTrayIcon::Context), 412},
    {sipName_Critical, static_cast<int>(QSystemTrayIcon::Critical), 413},
    {sipName_DoubleClick, static_cast<int>(QSystemTrayIcon::DoubleClick), 412},
    {sipName_Information, static_cast<int>(QSystemTrayIcon::Information), 413},
    {sipName_MiddleClick, static_cast<int>(QSystemTrayIcon::MiddleClick), 412},
    {sipName_NoIcon, static_cast<int>(QSystemTrayIcon::NoIcon), 413},
    {sipName_Trigger, static_cast<int>(QSystemTrayIcon::Trigger), 412},
    {sipName_Unknown, static_cast<int>(QSystemTrayIcon::Unknown), 412},
    {sipName_Warning, static_cast<int>(QSystemTrayIcon::Warning), 413},
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QSystemTrayIcon[] = {
    {"messageClicked()", "\1QSystemTrayIcon.messageClicked", 0, 0},
    {"activated(QSystemTrayIcon::ActivationReason)", "\1QSystemTrayIcon.activated[QSystemTrayIcon.ActivationReason]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QSystemTrayIcon, "\1QSystemTrayIcon(QObject parent=None)\n"
    "QSystemTrayIcon(QIcon, QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QSystemTrayIcon = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSystemTrayIcon,
        {0}
    },
    {
        sipNameNr_QSystemTrayIcon,
        {0, 0, 1},
        15, methods_QSystemTrayIcon,
        9, enummembers_QSystemTrayIcon,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSystemTrayIcon,
    -1,
    -1,
    supers_QSystemTrayIcon,
    0,
    init_type_QSystemTrayIcon,
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
    dealloc_QSystemTrayIcon,
    0,
    0,
    0,
    release_QSystemTrayIcon,
    cast_QSystemTrayIcon,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QSystemTrayIcon::staticMetaObject,
    0,
    signals_QSystemTrayIcon,
    0
};
