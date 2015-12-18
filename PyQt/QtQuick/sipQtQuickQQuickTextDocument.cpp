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

#include "sipAPIQtQuick.h"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQuick/qquicktextdocument.sip"
#include <qquicktextdocument.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQuick/qquickitem.sip"
#include <qquickitem.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 36 "sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQQuickTextDocument.cpp"


class sipQQuickTextDocument : public QQuickTextDocument
{
public:
    sipQQuickTextDocument(QQuickItem*);
    virtual ~sipQQuickTextDocument();

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
    sipQQuickTextDocument(const sipQQuickTextDocument &);
    sipQQuickTextDocument &operator = (const sipQQuickTextDocument &);

    char sipPyMethods[7];
};

sipQQuickTextDocument::sipQQuickTextDocument(QQuickItem*a0): QQuickTextDocument(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickTextDocument::~sipQQuickTextDocument()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQQuickTextDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQuick_qt_metaobject(sipPySelf,sipType_QQuickTextDocument);
}

int sipQQuickTextDocument::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QQuickTextDocument::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQuick_qt_metacall(sipPySelf,sipType_QQuickTextDocument,_c,_id,_a);

    return _id;
}

void *sipQQuickTextDocument::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQuick_qt_metacast(sipPySelf, sipType_QQuickTextDocument, _clname, &sipCpp) ? sipCpp : QQuickTextDocument::qt_metacast(_clname));
}

void sipQQuickTextDocument::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QQuickTextDocument::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickTextDocument::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QQuickTextDocument::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickTextDocument::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QQuickTextDocument::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickTextDocument::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QQuickTextDocument::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickTextDocument::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QQuickTextDocument::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQQuickTextDocument::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QQuickTextDocument::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQQuickTextDocument::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QQuickTextDocument::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQuickTextDocument_textDocument, "QQuickTextDocument.textDocument() -> QTextDocument");

extern "C" {static PyObject *meth_QQuickTextDocument_textDocument(PyObject *, PyObject *);}
static PyObject *meth_QQuickTextDocument_textDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQuickTextDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickTextDocument, &sipCpp))
        {
            QTextDocument*sipRes;

            sipRes = sipCpp->textDocument();

            return sipConvertFromType(sipRes,sipType_QTextDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickTextDocument, sipName_textDocument, doc_QQuickTextDocument_textDocument);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickTextDocument(void *, const sipTypeDef *);}
static void *cast_QQuickTextDocument(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QQuickTextDocument)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QQuickTextDocument *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickTextDocument(void *, int);}
static void release_QQuickTextDocument(void *sipCppV,int)
{
    QQuickTextDocument *sipCpp = reinterpret_cast<QQuickTextDocument *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQuickTextDocument(sipSimpleWrapper *);}
static void dealloc_QQuickTextDocument(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQuickTextDocument *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickTextDocument(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQuickTextDocument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickTextDocument(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQQuickTextDocument *sipCpp = 0;

    {
        QQuickItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QQuickItem, &a0, sipOwner))
        {
            sipCpp = new sipQQuickTextDocument(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQuickTextDocument[] = {{160, 0, 1}};


static PyMethodDef methods_QQuickTextDocument[] = {
    {SIP_MLNAME_CAST(sipName_textDocument), meth_QQuickTextDocument_textDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickTextDocument_textDocument)}
};

PyDoc_STRVAR(doc_QQuickTextDocument, "\1QQuickTextDocument(QQuickItem)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickTextDocument = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickTextDocument,
        {0}
    },
    {
        sipNameNr_QQuickTextDocument,
        {0, 0, 1},
        1, methods_QQuickTextDocument,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickTextDocument,
    -1,
    -1,
    supers_QQuickTextDocument,
    0,
    init_type_QQuickTextDocument,
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
    dealloc_QQuickTextDocument,
    0,
    0,
    0,
    release_QQuickTextDocument,
    cast_QQuickTextDocument,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQuickTextDocument::staticMetaObject,
    0,
    0,
    0
};
