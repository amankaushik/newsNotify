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

#include "sipAPIQtDesigner.h"

#line 24 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtDesigner/qpydesignertaskmenuextension.sip"
#include <qpydesignertaskmenuextension.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 244 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 232 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 26 "sip/QtWidgets/qaction.sip"
#include <qaction.h>
#line 81 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 84 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"


class sipQPyDesignerTaskMenuExtension : public QPyDesignerTaskMenuExtension
{
public:
    sipQPyDesignerTaskMenuExtension(QObject*);
    virtual ~sipQPyDesignerTaskMenuExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QAction* preferredEditAction() const;
    QList<QAction*> taskActions() const;
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
    sipQPyDesignerTaskMenuExtension(const sipQPyDesignerTaskMenuExtension &);
    sipQPyDesignerTaskMenuExtension &operator = (const sipQPyDesignerTaskMenuExtension &);

    char sipPyMethods[9];
};

sipQPyDesignerTaskMenuExtension::sipQPyDesignerTaskMenuExtension(QObject*a0): QPyDesignerTaskMenuExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerTaskMenuExtension::~sipQPyDesignerTaskMenuExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerTaskMenuExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerTaskMenuExtension);
}

int sipQPyDesignerTaskMenuExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerTaskMenuExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerTaskMenuExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerTaskMenuExtension::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerTaskMenuExtension, _clname, &sipCpp) ? sipCpp : QPyDesignerTaskMenuExtension::qt_metacast(_clname));
}

QAction* sipQPyDesignerTaskMenuExtension::preferredEditAction() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_preferredEditAction);

    if (!sipMeth)
        return QPyDesignerTaskMenuExtension::preferredEditAction();

    extern QAction* sipVH_QtDesigner_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_0(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QList<QAction*> sipQPyDesignerTaskMenuExtension::taskActions() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPyDesignerTaskMenuExtension,sipName_taskActions);

    if (!sipMeth)
        return QList<QAction*>();

    extern QList<QAction*> sipVH_QtDesigner_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_1(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQPyDesignerTaskMenuExtension::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerTaskMenuExtension::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDesignerTaskMenuExtension::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerTaskMenuExtension::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDesignerTaskMenuExtension::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPyDesignerTaskMenuExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerTaskMenuExtension(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPyDesignerTaskMenuExtension)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QPyDesignerTaskMenuExtension *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QDesignerTaskMenuExtension)->ctd_cast((QDesignerTaskMenuExtension *)(QPyDesignerTaskMenuExtension *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerTaskMenuExtension(void *, int);}
static void release_QPyDesignerTaskMenuExtension(void *sipCppV,int)
{
    QPyDesignerTaskMenuExtension *sipCpp = reinterpret_cast<QPyDesignerTaskMenuExtension *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerTaskMenuExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerTaskMenuExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDesignerTaskMenuExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerTaskMenuExtension *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQPyDesignerTaskMenuExtension(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerTaskMenuExtension[] = {{160, 0, 0}, {21, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerTaskMenuExtension, "\1QPyDesignerTaskMenuExtension(QObject)");


pyqt5ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerTaskMenuExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerTaskMenuExtension,
    -1,
    -1,
    supers_QPyDesignerTaskMenuExtension,
    0,
    init_type_QPyDesignerTaskMenuExtension,
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
    dealloc_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    release_QPyDesignerTaskMenuExtension,
    cast_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDesignerTaskMenuExtension::staticMetaObject,
    0,
    0,
    0
};
