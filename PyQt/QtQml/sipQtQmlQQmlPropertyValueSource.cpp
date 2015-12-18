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

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQml/qqmlpropertyvaluesource.sip"
#include <qqmlpropertyvaluesource.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQQmlPropertyValueSource.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQml/qqmlproperty.sip"
#include <qqmlproperty.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQml/sipQtQmlQQmlPropertyValueSource.cpp"


class sipQQmlPropertyValueSource : public QQmlPropertyValueSource
{
public:
    sipQQmlPropertyValueSource();
    sipQQmlPropertyValueSource(const QQmlPropertyValueSource&);
    virtual ~sipQQmlPropertyValueSource();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setTarget(const QQmlProperty&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlPropertyValueSource(const sipQQmlPropertyValueSource &);
    sipQQmlPropertyValueSource &operator = (const sipQQmlPropertyValueSource &);

    char sipPyMethods[1];
};

sipQQmlPropertyValueSource::sipQQmlPropertyValueSource(): QQmlPropertyValueSource(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlPropertyValueSource::sipQQmlPropertyValueSource(const QQmlPropertyValueSource& a0): QQmlPropertyValueSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlPropertyValueSource::~sipQQmlPropertyValueSource()
{
    sipCommonDtor(sipPySelf);
}

void sipQQmlPropertyValueSource::setTarget(const QQmlProperty& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QQmlPropertyValueSource,sipName_setTarget);

    if (!sipMeth)
        return;

    extern void sipVH_QtQml_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QQmlProperty&);

    sipVH_QtQml_0(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQmlPropertyValueSource_setTarget, "QQmlPropertyValueSource.setTarget(QQmlProperty)");

extern "C" {static PyObject *meth_QQmlPropertyValueSource_setTarget(PyObject *, PyObject *);}
static PyObject *meth_QQmlPropertyValueSource_setTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QQmlProperty* a0;
        QQmlPropertyValueSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlPropertyValueSource, &sipCpp, sipType_QQmlProperty, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QQmlPropertyValueSource, sipName_setTarget);
                return NULL;
            }

            sipCpp->setTarget(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlPropertyValueSource, sipName_setTarget, doc_QQmlPropertyValueSource_setTarget);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlPropertyValueSource(void *, const sipTypeDef *);}
static void *cast_QQmlPropertyValueSource(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQmlPropertyValueSource)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlPropertyValueSource(void *, int);}
static void release_QQmlPropertyValueSource(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQmlPropertyValueSource *>(sipCppV);
    else
        delete reinterpret_cast<QQmlPropertyValueSource *>(sipCppV);
}


extern "C" {static int mixin_QQmlPropertyValueSource(PyObject *, PyObject *, PyObject *);}
static int mixin_QQmlPropertyValueSource(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    return sipInitMixin(sipSelf, sipArgs, sipKwds, (sipClassTypeDef *)&sipTypeDef_QtQml_QQmlPropertyValueSource);
}


extern "C" {static void dealloc_QQmlPropertyValueSource(sipSimpleWrapper *);}
static void dealloc_QQmlPropertyValueSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlPropertyValueSource *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlPropertyValueSource(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlPropertyValueSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlPropertyValueSource(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQmlPropertyValueSource *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQQmlPropertyValueSource();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QQmlPropertyValueSource* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlPropertyValueSource, &a0))
        {
            sipCpp = new sipQQmlPropertyValueSource(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQmlPropertyValueSource[] = {
    {SIP_MLNAME_CAST(sipName_setTarget), meth_QQmlPropertyValueSource_setTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlPropertyValueSource_setTarget)}
};

PyDoc_STRVAR(doc_QQmlPropertyValueSource, "\1QQmlPropertyValueSource()\n"
    "QQmlPropertyValueSource(QQmlPropertyValueSource)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlPropertyValueSource = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlPropertyValueSource,
        {0}
    },
    {
        sipNameNr_QQmlPropertyValueSource,
        {0, 0, 1},
        1, methods_QQmlPropertyValueSource,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlPropertyValueSource,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlPropertyValueSource,
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
    dealloc_QQmlPropertyValueSource,
    0,
    0,
    0,
    release_QQmlPropertyValueSource,
    cast_QQmlPropertyValueSource,
    0,
    0,
    0,
    0,
    0,
    mixin_QQmlPropertyValueSource
},
    0,
    0,
    0,
    "org.qt-project.Qt.QQmlPropertyValueSource"
};