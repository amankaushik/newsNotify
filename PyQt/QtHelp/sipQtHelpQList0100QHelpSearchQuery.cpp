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

#include "sipAPIQtHelp.h"

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtHelp/sipQtHelpQList0100QHelpSearchQuery.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtHelp/qhelpsearchengine.sip"
#include <qhelpsearchengine.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtHelp/sipQtHelpQList0100QHelpSearchQuery.cpp"


extern "C" {static void assign_QList_0100QHelpSearchQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QHelpSearchQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QHelpSearchQuery> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QHelpSearchQuery> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QHelpSearchQuery(SIP_SSIZE_T);}
static void *array_QList_0100QHelpSearchQuery(SIP_SSIZE_T sipNrElem)
{
    return new QList<QHelpSearchQuery>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QHelpSearchQuery(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QHelpSearchQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QHelpSearchQuery>(reinterpret_cast<const QList<QHelpSearchQuery> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QHelpSearchQuery(void *, int);}
static void release_QList_0100QHelpSearchQuery(void *ptr, int)
{
    delete reinterpret_cast<QList<QHelpSearchQuery> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QHelpSearchQuery(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QHelpSearchQuery(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QHelpSearchQuery> **sipCppPtr = reinterpret_cast<QList<QHelpSearchQuery> **>(sipCppPtrV);

#line 66 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QHelpSearchQuery> *ql = new QList<QHelpSearchQuery>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QHelpSearchQuery *t = reinterpret_cast<QHelpSearchQuery *>(
                sipForceConvertToType(itm, sipType_QHelpSearchQuery, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QHelpSearchQuery' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QHelpSearchQuery, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtHelp/sipQtHelpQList0100QHelpSearchQuery.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QHelpSearchQuery(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QHelpSearchQuery(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QHelpSearchQuery> *sipCpp = reinterpret_cast<QList<QHelpSearchQuery> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QHelpSearchQuery *t = new QHelpSearchQuery(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QHelpSearchQuery,
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
#line 175 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtHelp/sipQtHelpQList0100QHelpSearchQuery.cpp"
}


sipMappedTypeDef sipTypeDef_QtHelp_QList_0100QHelpSearchQuery = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_82,
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
    assign_QList_0100QHelpSearchQuery,
    array_QList_0100QHelpSearchQuery,
    copy_QList_0100QHelpSearchQuery,
    release_QList_0100QHelpSearchQuery,
    convertTo_QList_0100QHelpSearchQuery,
    convertFrom_QList_0100QHelpSearchQuery
};
