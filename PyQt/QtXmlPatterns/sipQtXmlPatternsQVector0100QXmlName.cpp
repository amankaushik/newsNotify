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

#include "sipAPIQtXmlPatterns.h"

#line 26 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"


extern "C" {static void assign_QVector_0100QXmlName(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QXmlName(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QXmlName> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QXmlName> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlName(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlName(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QXmlName>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlName(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlName(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QXmlName>(reinterpret_cast<const QVector<QXmlName> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlName(void *, int);}
static void release_QVector_0100QXmlName(void *ptr, int)
{
    delete reinterpret_cast<QVector<QXmlName> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QXmlName(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlName(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QXmlName> **sipCppPtr = reinterpret_cast<QVector<QXmlName> **>(sipCppPtrV);

#line 56 "sip/QtCore/qpycore_qvector.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QVector<QXmlName> *qv = new QVector<QXmlName>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QXmlName *t = reinterpret_cast<QXmlName *>(
                sipForceConvertToType(itm, sipType_QXmlName, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QXmlName' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlName, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlName(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlName(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QXmlName> *sipCpp = reinterpret_cast<QVector<QXmlName> *>(sipCppV);

#line 30 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlName *t = new QXmlName(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QXmlName,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 175 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtXmlPatterns/sipQtXmlPatternsQVector0100QXmlName.cpp"
}


sipMappedTypeDef sipTypeDef_QtXmlPatterns_QVector_0100QXmlName = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_538,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVector_0100QXmlName,
    array_QVector_0100QXmlName,
    copy_QVector_0100QXmlName,
    release_QVector_0100QXmlName,
    convertTo_QVector_0100QXmlName,
    convertFrom_QVector_0100QXmlName
};
