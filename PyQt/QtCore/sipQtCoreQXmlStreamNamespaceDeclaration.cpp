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

#line 238 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQXmlStreamNamespaceDeclaration.cpp"

#line 27 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQXmlStreamNamespaceDeclaration.cpp"
#line 68 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQXmlStreamNamespaceDeclaration.cpp"


PyDoc_STRVAR(doc_QXmlStreamNamespaceDeclaration_prefix, "QXmlStreamNamespaceDeclaration.prefix() -> QStringRef");

extern "C" {static PyObject *meth_QXmlStreamNamespaceDeclaration_prefix(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamNamespaceDeclaration_prefix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNamespaceDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamNamespaceDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->prefix());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamNamespaceDeclaration, sipName_prefix, doc_QXmlStreamNamespaceDeclaration_prefix);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamNamespaceDeclaration_namespaceUri, "QXmlStreamNamespaceDeclaration.namespaceUri() -> QStringRef");

extern "C" {static PyObject *meth_QXmlStreamNamespaceDeclaration_namespaceUri(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamNamespaceDeclaration_namespaceUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNamespaceDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamNamespaceDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            sipRes = new QStringRef(sipCpp->namespaceUri());

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamNamespaceDeclaration, sipName_namespaceUri, doc_QXmlStreamNamespaceDeclaration_namespaceUri);

    return NULL;
}


extern "C" {static PyObject *slot_QXmlStreamNamespaceDeclaration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamNamespaceDeclaration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamNamespaceDeclaration *sipCpp = reinterpret_cast<QXmlStreamNamespaceDeclaration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamNamespaceDeclaration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNamespaceDeclaration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamNamespaceDeclaration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlStreamNamespaceDeclaration::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QXmlStreamNamespaceDeclaration,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlStreamNamespaceDeclaration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamNamespaceDeclaration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamNamespaceDeclaration *sipCpp = reinterpret_cast<QXmlStreamNamespaceDeclaration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamNamespaceDeclaration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNamespaceDeclaration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamNamespaceDeclaration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QXmlStreamNamespaceDeclaration::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QXmlStreamNamespaceDeclaration,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlStreamNamespaceDeclaration(void *, const sipTypeDef *);}
static void *cast_QXmlStreamNamespaceDeclaration(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlStreamNamespaceDeclaration)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamNamespaceDeclaration(void *, int);}
static void release_QXmlStreamNamespaceDeclaration(void *sipCppV,int)
{
    delete reinterpret_cast<QXmlStreamNamespaceDeclaration *>(sipCppV);
}


extern "C" {static void assign_QXmlStreamNamespaceDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlStreamNamespaceDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlStreamNamespaceDeclaration *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlStreamNamespaceDeclaration *>(sipSrc);
}


extern "C" {static void *array_QXmlStreamNamespaceDeclaration(SIP_SSIZE_T);}
static void *array_QXmlStreamNamespaceDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QXmlStreamNamespaceDeclaration[sipNrElem];
}


extern "C" {static void *copy_QXmlStreamNamespaceDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QXmlStreamNamespaceDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlStreamNamespaceDeclaration(reinterpret_cast<const QXmlStreamNamespaceDeclaration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlStreamNamespaceDeclaration(sipSimpleWrapper *);}
static void dealloc_QXmlStreamNamespaceDeclaration(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlStreamNamespaceDeclaration(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlStreamNamespaceDeclaration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlStreamNamespaceDeclaration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlStreamNamespaceDeclaration *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QXmlStreamNamespaceDeclaration();

            return sipCpp;
        }
    }

    {
        const QXmlStreamNamespaceDeclaration* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlStreamNamespaceDeclaration, &a0))
        {
            sipCpp = new QXmlStreamNamespaceDeclaration(*a0);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp = new QXmlStreamNamespaceDeclaration(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlStreamNamespaceDeclaration[] = {
    {(void *)slot_QXmlStreamNamespaceDeclaration___ne__, ne_slot},
    {(void *)slot_QXmlStreamNamespaceDeclaration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlStreamNamespaceDeclaration[] = {
    {SIP_MLNAME_CAST(sipName_namespaceUri), meth_QXmlStreamNamespaceDeclaration_namespaceUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamNamespaceDeclaration_namespaceUri)},
    {SIP_MLNAME_CAST(sipName_prefix), meth_QXmlStreamNamespaceDeclaration_prefix, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamNamespaceDeclaration_prefix)}
};

PyDoc_STRVAR(doc_QXmlStreamNamespaceDeclaration, "\1QXmlStreamNamespaceDeclaration()\n"
    "QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration)\n"
    "QXmlStreamNamespaceDeclaration(str, str)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QXmlStreamNamespaceDeclaration = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamNamespaceDeclaration,
        {0}
    },
    {
        sipNameNr_QXmlStreamNamespaceDeclaration,
        {0, 0, 1},
        2, methods_QXmlStreamNamespaceDeclaration,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlStreamNamespaceDeclaration,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlStreamNamespaceDeclaration,
    init_type_QXmlStreamNamespaceDeclaration,
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
    dealloc_QXmlStreamNamespaceDeclaration,
    assign_QXmlStreamNamespaceDeclaration,
    array_QXmlStreamNamespaceDeclaration,
    copy_QXmlStreamNamespaceDeclaration,
    release_QXmlStreamNamespaceDeclaration,
    cast_QXmlStreamNamespaceDeclaration,
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