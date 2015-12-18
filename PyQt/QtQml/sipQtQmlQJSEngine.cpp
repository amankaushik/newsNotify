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

#include "sipAPIQtQml.h"

#line 30 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQml/qjsengine.sip"
#include <qjsengine.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQml/qjsvalue.sip"
#include <qjsvalue.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQJSEngine.cpp"


class sipQJSEngine : public QJSEngine
{
public:
    sipQJSEngine();
    sipQJSEngine(QObject*);
    virtual ~sipQJSEngine();

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
    sipQJSEngine(const sipQJSEngine &);
    sipQJSEngine &operator = (const sipQJSEngine &);

    char sipPyMethods[7];
};

sipQJSEngine::sipQJSEngine(): QJSEngine(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQJSEngine::sipQJSEngine(QObject*a0): QJSEngine(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQJSEngine::~sipQJSEngine()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQJSEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQml_qt_metaobject(sipPySelf,sipType_QJSEngine);
}

int sipQJSEngine::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QJSEngine::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQml_qt_metacall(sipPySelf,sipType_QJSEngine,_c,_id,_a);

    return _id;
}

void *sipQJSEngine::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQml_qt_metacast(sipPySelf, sipType_QJSEngine, _clname, &sipCpp) ? sipCpp : QJSEngine::qt_metacast(_clname));
}

void sipQJSEngine::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QJSEngine::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQJSEngine::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QJSEngine::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQml_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQJSEngine::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QJSEngine::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQml_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQJSEngine::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QJSEngine::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQml_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQJSEngine::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QJSEngine::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQml_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQJSEngine::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QJSEngine::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQml_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQJSEngine::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QJSEngine::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQml_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QJSEngine_globalObject, "QJSEngine.globalObject() -> QJSValue");

extern "C" {static PyObject *meth_QJSEngine_globalObject(PyObject *, PyObject *);}
static PyObject *meth_QJSEngine_globalObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSEngine, &sipCpp))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->globalObject());

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSEngine, sipName_globalObject, doc_QJSEngine_globalObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJSEngine_evaluate, "QJSEngine.evaluate(str, str fileName=QString(), int lineNumber=1) -> QJSValue");

extern "C" {static PyObject *meth_QJSEngine_evaluate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJSEngine_evaluate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        int a2 = 1;
        QJSEngine *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_fileName,
            sipName_lineNumber,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1i", &sipSelf, sipType_QJSEngine, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            QJSValue*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QJSValue(sipCpp->evaluate(*a0,*a1,a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSEngine, sipName_evaluate, doc_QJSEngine_evaluate);

    return NULL;
}


PyDoc_STRVAR(doc_QJSEngine_newObject, "QJSEngine.newObject() -> QJSValue");

extern "C" {static PyObject *meth_QJSEngine_newObject(PyObject *, PyObject *);}
static PyObject *meth_QJSEngine_newObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QJSEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSEngine, &sipCpp))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->newObject());

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSEngine, sipName_newObject, doc_QJSEngine_newObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJSEngine_newArray, "QJSEngine.newArray(int length=0) -> QJSValue");

extern "C" {static PyObject *meth_QJSEngine_newArray(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJSEngine_newArray(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0 = 0;
        QJSEngine *sipCpp;

        static const char *sipKwdList[] = {
            sipName_length,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|u", &sipSelf, sipType_QJSEngine, &sipCpp, &a0))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->newArray(a0));

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSEngine, sipName_newArray, doc_QJSEngine_newArray);

    return NULL;
}


PyDoc_STRVAR(doc_QJSEngine_newQObject, "QJSEngine.newQObject(QObject) -> QJSValue");

extern "C" {static PyObject *meth_QJSEngine_newQObject(PyObject *, PyObject *);}
static PyObject *meth_QJSEngine_newQObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QJSEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QJSEngine, &sipCpp, sipType_QObject, &a0))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->newQObject(a0));

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSEngine, sipName_newQObject, doc_QJSEngine_newQObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJSEngine_collectGarbage, "QJSEngine.collectGarbage()");

extern "C" {static PyObject *meth_QJSEngine_collectGarbage(PyObject *, PyObject *);}
static PyObject *meth_QJSEngine_collectGarbage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QJSEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSEngine, &sipCpp))
        {
            sipCpp->collectGarbage();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSEngine, sipName_collectGarbage, doc_QJSEngine_collectGarbage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QJSEngine(void *, const sipTypeDef *);}
static void *cast_QJSEngine(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QJSEngine)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QJSEngine *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QJSEngine(void *, int);}
static void release_QJSEngine(void *sipCppV,int)
{
    QJSEngine *sipCpp = reinterpret_cast<QJSEngine *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QJSEngine(sipSimpleWrapper *);}
static void dealloc_QJSEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQJSEngine *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QJSEngine(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QJSEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QJSEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQJSEngine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQJSEngine();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQJSEngine(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QJSEngine[] = {{160, 0, 1}};


static PyMethodDef methods_QJSEngine[] = {
    {SIP_MLNAME_CAST(sipName_collectGarbage), meth_QJSEngine_collectGarbage, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSEngine_collectGarbage)},
    {SIP_MLNAME_CAST(sipName_evaluate), (PyCFunction)meth_QJSEngine_evaluate, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJSEngine_evaluate)},
    {SIP_MLNAME_CAST(sipName_globalObject), meth_QJSEngine_globalObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSEngine_globalObject)},
    {SIP_MLNAME_CAST(sipName_newArray), (PyCFunction)meth_QJSEngine_newArray, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJSEngine_newArray)},
    {SIP_MLNAME_CAST(sipName_newObject), meth_QJSEngine_newObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSEngine_newObject)},
    {SIP_MLNAME_CAST(sipName_newQObject), meth_QJSEngine_newQObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSEngine_newQObject)}
};

PyDoc_STRVAR(doc_QJSEngine, "\1QJSEngine()\n"
    "QJSEngine(QObject)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QJSEngine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QJSEngine,
        {0}
    },
    {
        sipNameNr_QJSEngine,
        {0, 0, 1},
        6, methods_QJSEngine,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QJSEngine,
    -1,
    -1,
    supers_QJSEngine,
    0,
    init_type_QJSEngine,
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
    dealloc_QJSEngine,
    0,
    0,
    0,
    release_QJSEngine,
    cast_QJSEngine,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QJSEngine::staticMetaObject,
    0,
    0,
    0
};
