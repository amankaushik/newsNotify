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

#line 26 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQVector0100QLine.cpp"

#line 26 "sip/QtCore/qline.sip"
#include <qline.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQVector0100QLine.cpp"


extern "C" {static void assign_QVector_0100QLine(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QLine(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QLine> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QLine> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QLine(SIP_SSIZE_T);}
static void *array_QVector_0100QLine(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QLine>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QLine(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QLine(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QLine>(reinterpret_cast<const QVector<QLine> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QLine(void *, int);}
static void release_QVector_0100QLine(void *ptr, int)
{
    delete reinterpret_cast<QVector<QLine> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QLine(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QLine(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QLine> **sipCppPtr = reinterpret_cast<QVector<QLine> **>(sipCppPtrV);

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

    QVector<QLine> *qv = new QVector<QLine>;
 
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
        QLine *t = reinterpret_cast<QLine *>(
                sipForceConvertToType(itm, sipType_QLine, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QLine' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QLine, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQVector0100QLine.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QLine(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QLine(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QLine> *sipCpp = reinterpret_cast<QVector<QLine> *>(sipCppV);

#line 30 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QLine *t = new QLine(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QLine,
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
#line 175 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQVector0100QLine.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QLine = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_20834,
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
    assign_QVector_0100QLine,
    array_QVector_0100QLine,
    copy_QVector_0100QLine,
    release_QVector_0100QLine,
    convertTo_QVector_0100QLine,
    convertFrom_QVector_0100QLine
};
