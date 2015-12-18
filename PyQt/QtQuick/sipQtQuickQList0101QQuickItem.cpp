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

#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQList0101QQuickItem.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtQuick/qquickitem.sip"
#include <qquickitem.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQList0101QQuickItem.cpp"


extern "C" {static void assign_QList_0101QQuickItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QQuickItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QQuickItem*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QQuickItem*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QQuickItem(SIP_SSIZE_T);}
static void *array_QList_0101QQuickItem(SIP_SSIZE_T sipNrElem)
{
    return new QList<QQuickItem*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QQuickItem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QQuickItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QQuickItem*>(reinterpret_cast<const QList<QQuickItem*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QQuickItem(void *, int);}
static void release_QList_0101QQuickItem(void *ptr, int)
{
    delete reinterpret_cast<QList<QQuickItem*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QQuickItem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QQuickItem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QQuickItem*> **sipCppPtr = reinterpret_cast<QList<QQuickItem*> **>(sipCppPtrV);

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

    QList<QQuickItem *> *ql = new QList<QQuickItem *>;
 
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

        QQuickItem *t = reinterpret_cast<QQuickItem *>(
                sipForceConvertToType(itm, sipType_QQuickItem, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QQuickItem' is expected",
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
#line 140 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQList0101QQuickItem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QQuickItem(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QQuickItem(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QQuickItem*> *sipCpp = reinterpret_cast<QList<QQuickItem*> *>(sipCppV);

#line 148 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QQuickItem *t = sipCpp->at(i);

        // The explicit (void *) cast allows QQuickItem to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QQuickItem,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtQuick/sipQtQuickQList0101QQuickItem.cpp"
}


sipMappedTypeDef sipTypeDef_QtQuick_QList_0101QQuickItem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2832,
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
    assign_QList_0101QQuickItem,
    array_QList_0101QQuickItem,
    copy_QList_0101QQuickItem,
    release_QList_0101QQuickItem,
    convertTo_QList_0101QQuickItem,
    convertFrom_QList_0101QQuickItem
};
