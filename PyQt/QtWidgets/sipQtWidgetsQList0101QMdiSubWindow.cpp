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

#include "sipAPIQtWidgets.h"

#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qmdisubwindow.sip"
#include <qmdisubwindow.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"


extern "C" {static void assign_QList_0101QMdiSubWindow(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QMdiSubWindow(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QMdiSubWindow*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QMdiSubWindow*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QMdiSubWindow(SIP_SSIZE_T);}
static void *array_QList_0101QMdiSubWindow(SIP_SSIZE_T sipNrElem)
{
    return new QList<QMdiSubWindow*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QMdiSubWindow(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QMdiSubWindow(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QMdiSubWindow*>(reinterpret_cast<const QList<QMdiSubWindow*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QMdiSubWindow(void *, int);}
static void release_QList_0101QMdiSubWindow(void *ptr, int)
{
    delete reinterpret_cast<QList<QMdiSubWindow*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QMdiSubWindow(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QMdiSubWindow(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QMdiSubWindow*> **sipCppPtr = reinterpret_cast<QList<QMdiSubWindow*> **>(sipCppPtrV);

#line 175 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QMdiSubWindow *> *ql = new QList<QMdiSubWindow *>;
 
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

        QMdiSubWindow *t = reinterpret_cast<QMdiSubWindow *>(
                sipForceConvertToType(itm, sipType_QMdiSubWindow, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QMdiSubWindow' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 140 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QMdiSubWindow(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QMdiSubWindow(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QMdiSubWindow*> *sipCpp = reinterpret_cast<QList<QMdiSubWindow*> *>(sipCppV);

#line 148 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QMdiSubWindow *t = sipCpp->at(i);

        // The explicit (void *) cast allows QMdiSubWindow to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QMdiSubWindow,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQList0101QMdiSubWindow.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QMdiSubWindow = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16787,
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
    assign_QList_0101QMdiSubWindow,
    array_QList_0101QMdiSubWindow,
    copy_QList_0101QMdiSubWindow,
    release_QList_0101QMdiSubWindow,
    convertTo_QList_0101QMdiSubWindow,
    convertFrom_QList_0101QMdiSubWindow
};
