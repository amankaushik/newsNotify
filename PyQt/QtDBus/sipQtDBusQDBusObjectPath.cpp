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

#include "sipAPIQtDBus.h"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusObjectPath.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusObjectPath.cpp"


PyDoc_STRVAR(doc_QDBusObjectPath_path, "QDBusObjectPath.path() -> str");

extern "C" {static PyObject *meth_QDBusObjectPath_path(PyObject *, PyObject *);}
static PyObject *meth_QDBusObjectPath_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusObjectPath *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusObjectPath, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->path());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusObjectPath, sipName_path, doc_QDBusObjectPath_path);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusObjectPath_setPath, "QDBusObjectPath.setPath(str)");

extern "C" {static PyObject *meth_QDBusObjectPath_setPath(PyObject *, PyObject *);}
static PyObject *meth_QDBusObjectPath_setPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QDBusObjectPath *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDBusObjectPath, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPath(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusObjectPath, sipName_setPath, doc_QDBusObjectPath_setPath);

    return NULL;
}


extern "C" {static PyObject *slot_QDBusObjectPath___ge__(PyObject *,PyObject *);}
static PyObject *slot_QDBusObjectPath___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusObjectPath *sipCpp = reinterpret_cast<QDBusObjectPath *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusObjectPath));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusObjectPath* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusObjectPath, &a0))
        {
            bool sipRes;

            sipRes = !operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,ge_slot,sipType_QDBusObjectPath,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusObjectPath___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDBusObjectPath___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusObjectPath *sipCpp = reinterpret_cast<QDBusObjectPath *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusObjectPath));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusObjectPath* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusObjectPath, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,eq_slot,sipType_QDBusObjectPath,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusObjectPath___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDBusObjectPath___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusObjectPath *sipCpp = reinterpret_cast<QDBusObjectPath *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusObjectPath));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusObjectPath* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusObjectPath, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,ne_slot,sipType_QDBusObjectPath,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusObjectPath___lt__(PyObject *,PyObject *);}
static PyObject *slot_QDBusObjectPath___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusObjectPath *sipCpp = reinterpret_cast<QDBusObjectPath *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusObjectPath));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusObjectPath* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusObjectPath, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,lt_slot,sipType_QDBusObjectPath,sipSelf,sipArg);
}


extern "C" {static long slot_QDBusObjectPath___hash__(PyObject *);}
static long slot_QDBusObjectPath___hash__(PyObject *sipSelf)
{
    QDBusObjectPath *sipCpp = reinterpret_cast<QDBusObjectPath *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusObjectPath));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtDBus/qdbusextratypes.sip"
        sipRes = qHash(*sipCpp, 0);
#line 235 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtDBus/sipQtDBusQDBusObjectPath.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDBusObjectPath(void *, const sipTypeDef *);}
static void *cast_QDBusObjectPath(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDBusObjectPath)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusObjectPath(void *, int);}
static void release_QDBusObjectPath(void *sipCppV,int)
{
    delete reinterpret_cast<QDBusObjectPath *>(sipCppV);
}


extern "C" {static void assign_QDBusObjectPath(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusObjectPath(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusObjectPath *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusObjectPath *>(sipSrc);
}


extern "C" {static void *array_QDBusObjectPath(SIP_SSIZE_T);}
static void *array_QDBusObjectPath(SIP_SSIZE_T sipNrElem)
{
    return new QDBusObjectPath[sipNrElem];
}


extern "C" {static void *copy_QDBusObjectPath(const void *, SIP_SSIZE_T);}
static void *copy_QDBusObjectPath(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusObjectPath(reinterpret_cast<const QDBusObjectPath *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusObjectPath(sipSimpleWrapper *);}
static void dealloc_QDBusObjectPath(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusObjectPath(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusObjectPath(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusObjectPath(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusObjectPath *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDBusObjectPath();

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QDBusObjectPath(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QDBusObjectPath* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusObjectPath, &a0))
        {
            sipCpp = new QDBusObjectPath(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusObjectPath[] = {
    {(void *)slot_QDBusObjectPath___ge__, ge_slot},
    {(void *)slot_QDBusObjectPath___eq__, eq_slot},
    {(void *)slot_QDBusObjectPath___ne__, ne_slot},
    {(void *)slot_QDBusObjectPath___lt__, lt_slot},
    {(void *)slot_QDBusObjectPath___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDBusObjectPath[] = {
    {SIP_MLNAME_CAST(sipName_path), meth_QDBusObjectPath_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusObjectPath_path)},
    {SIP_MLNAME_CAST(sipName_setPath), meth_QDBusObjectPath_setPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusObjectPath_setPath)}
};

PyDoc_STRVAR(doc_QDBusObjectPath, "\1QDBusObjectPath()\n"
    "QDBusObjectPath(str)\n"
    "QDBusObjectPath(QDBusObjectPath)");


pyqt5ClassTypeDef sipTypeDef_QtDBus_QDBusObjectPath = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDBusObjectPath,
        {0}
    },
    {
        sipNameNr_QDBusObjectPath,
        {0, 0, 1},
        2, methods_QDBusObjectPath,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusObjectPath,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusObjectPath,
    init_type_QDBusObjectPath,
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
    dealloc_QDBusObjectPath,
    assign_QDBusObjectPath,
    array_QDBusObjectPath,
    copy_QDBusObjectPath,
    release_QDBusObjectPath,
    cast_QDBusObjectPath,
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
