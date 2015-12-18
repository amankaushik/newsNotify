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

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qsessionmanager.sip"
#include <qsessionmanager.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qguiapplication.sip"
#include <qguiapplication.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQSessionManager.cpp"


PyDoc_STRVAR(doc_QSessionManager_sessionId, "QSessionManager.sessionId() -> str");

extern "C" {static PyObject *meth_QSessionManager_sessionId(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_sessionId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->sessionId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_sessionId, doc_QSessionManager_sessionId);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_sessionKey, "QSessionManager.sessionKey() -> str");

extern "C" {static PyObject *meth_QSessionManager_sessionKey(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_sessionKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->sessionKey());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_sessionKey, doc_QSessionManager_sessionKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_allowsInteraction, "QSessionManager.allowsInteraction() -> bool");

extern "C" {static PyObject *meth_QSessionManager_allowsInteraction(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_allowsInteraction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->allowsInteraction();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_allowsInteraction, doc_QSessionManager_allowsInteraction);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_allowsErrorInteraction, "QSessionManager.allowsErrorInteraction() -> bool");

extern "C" {static PyObject *meth_QSessionManager_allowsErrorInteraction(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_allowsErrorInteraction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->allowsErrorInteraction();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_allowsErrorInteraction, doc_QSessionManager_allowsErrorInteraction);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_release, "QSessionManager.release()");

extern "C" {static PyObject *meth_QSessionManager_release(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            sipCpp->release();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_release, doc_QSessionManager_release);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_cancel, "QSessionManager.cancel()");

extern "C" {static PyObject *meth_QSessionManager_cancel(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_cancel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            sipCpp->cancel();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_cancel, doc_QSessionManager_cancel);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setRestartHint, "QSessionManager.setRestartHint(QSessionManager.RestartHint)");

extern "C" {static PyObject *meth_QSessionManager_setRestartHint(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setRestartHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager::RestartHint a0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QSessionManager_RestartHint, &a0))
        {
            sipCpp->setRestartHint(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setRestartHint, doc_QSessionManager_setRestartHint);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_restartHint, "QSessionManager.restartHint() -> QSessionManager.RestartHint");

extern "C" {static PyObject *meth_QSessionManager_restartHint(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_restartHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QSessionManager::RestartHint sipRes;

            sipRes = sipCpp->restartHint();

            return sipConvertFromEnum(sipRes,sipType_QSessionManager_RestartHint);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_restartHint, doc_QSessionManager_restartHint);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setRestartCommand, "QSessionManager.setRestartCommand(list-of-str)");

extern "C" {static PyObject *meth_QSessionManager_setRestartCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setRestartCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            sipCpp->setRestartCommand(*a0);
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setRestartCommand, doc_QSessionManager_setRestartCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_restartCommand, "QSessionManager.restartCommand() -> list-of-str");

extern "C" {static PyObject *meth_QSessionManager_restartCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_restartCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->restartCommand());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_restartCommand, doc_QSessionManager_restartCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setDiscardCommand, "QSessionManager.setDiscardCommand(list-of-str)");

extern "C" {static PyObject *meth_QSessionManager_setDiscardCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setDiscardCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            sipCpp->setDiscardCommand(*a0);
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setDiscardCommand, doc_QSessionManager_setDiscardCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_discardCommand, "QSessionManager.discardCommand() -> list-of-str");

extern "C" {static PyObject *meth_QSessionManager_discardCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_discardCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->discardCommand());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_discardCommand, doc_QSessionManager_discardCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setManagerProperty, "QSessionManager.setManagerProperty(str, str)\n"
    "QSessionManager.setManagerProperty(str, list-of-str)");

extern "C" {static PyObject *meth_QSessionManager_setManagerProperty(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setManagerProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->setManagerProperty(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QStringList* a1;
        int a1State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QString,&a0, &a0State, sipType_QStringList,&a1, &a1State))
        {
            sipCpp->setManagerProperty(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setManagerProperty, doc_QSessionManager_setManagerProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_isPhase2, "QSessionManager.isPhase2() -> bool");

extern "C" {static PyObject *meth_QSessionManager_isPhase2(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_isPhase2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isPhase2();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_isPhase2, doc_QSessionManager_isPhase2);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_requestPhase2, "QSessionManager.requestPhase2()");

extern "C" {static PyObject *meth_QSessionManager_requestPhase2(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_requestPhase2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            sipCpp->requestPhase2();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_requestPhase2, doc_QSessionManager_requestPhase2);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSessionManager(void *, const sipTypeDef *);}
static void *cast_QSessionManager(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSessionManager)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSessionManager *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSessionManager(void *, int);}
static void release_QSessionManager(void *,int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSessionManager[] = {{160, 0, 1}};


static PyMethodDef methods_QSessionManager[] = {
    {SIP_MLNAME_CAST(sipName_allowsErrorInteraction), meth_QSessionManager_allowsErrorInteraction, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_allowsErrorInteraction)},
    {SIP_MLNAME_CAST(sipName_allowsInteraction), meth_QSessionManager_allowsInteraction, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_allowsInteraction)},
    {SIP_MLNAME_CAST(sipName_cancel), meth_QSessionManager_cancel, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_cancel)},
    {SIP_MLNAME_CAST(sipName_discardCommand), meth_QSessionManager_discardCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_discardCommand)},
    {SIP_MLNAME_CAST(sipName_isPhase2), meth_QSessionManager_isPhase2, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_isPhase2)},
    {SIP_MLNAME_CAST(sipName_release), meth_QSessionManager_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_release)},
    {SIP_MLNAME_CAST(sipName_requestPhase2), meth_QSessionManager_requestPhase2, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_requestPhase2)},
    {SIP_MLNAME_CAST(sipName_restartCommand), meth_QSessionManager_restartCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_restartCommand)},
    {SIP_MLNAME_CAST(sipName_restartHint), meth_QSessionManager_restartHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_restartHint)},
    {SIP_MLNAME_CAST(sipName_sessionId), meth_QSessionManager_sessionId, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_sessionId)},
    {SIP_MLNAME_CAST(sipName_sessionKey), meth_QSessionManager_sessionKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_sessionKey)},
    {SIP_MLNAME_CAST(sipName_setDiscardCommand), meth_QSessionManager_setDiscardCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setDiscardCommand)},
    {SIP_MLNAME_CAST(sipName_setManagerProperty), meth_QSessionManager_setManagerProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setManagerProperty)},
    {SIP_MLNAME_CAST(sipName_setRestartCommand), meth_QSessionManager_setRestartCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setRestartCommand)},
    {SIP_MLNAME_CAST(sipName_setRestartHint), meth_QSessionManager_setRestartHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setRestartHint)}
};

static sipEnumMemberDef enummembers_QSessionManager[] = {
    {sipName_RestartAnyway, static_cast<int>(QSessionManager::RestartAnyway), 231},
    {sipName_RestartIfRunning, static_cast<int>(QSessionManager::RestartIfRunning), 231},
    {sipName_RestartImmediately, static_cast<int>(QSessionManager::RestartImmediately), 231},
    {sipName_RestartNever, static_cast<int>(QSessionManager::RestartNever), 231},
};


pyqt5ClassTypeDef sipTypeDef_QtGui_QSessionManager = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSessionManager,
        {0}
    },
    {
        sipNameNr_QSessionManager,
        {0, 0, 1},
        15, methods_QSessionManager,
        4, enummembers_QSessionManager,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSessionManager,
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
    0,
    0,
    0,
    0,
    release_QSessionManager,
    cast_QSessionManager,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QSessionManager::staticMetaObject,
    0,
    0,
    0
};
