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

#include "sipAPIQtBluetooth.h"

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtBluetooth/sipQtBluetoothQList0100QBluetoothAddress.cpp"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtBluetooth/qbluetoothaddress.sip"
#include <qbluetoothaddress.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtBluetooth/sipQtBluetoothQList0100QBluetoothAddress.cpp"


extern "C" {static void assign_QList_0100QBluetoothAddress(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QBluetoothAddress(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QBluetoothAddress> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QBluetoothAddress> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QBluetoothAddress(SIP_SSIZE_T);}
static void *array_QList_0100QBluetoothAddress(SIP_SSIZE_T sipNrElem)
{
    return new QList<QBluetoothAddress>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QBluetoothAddress(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QBluetoothAddress(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QBluetoothAddress>(reinterpret_cast<const QList<QBluetoothAddress> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QBluetoothAddress(void *, int);}
static void release_QList_0100QBluetoothAddress(void *ptr, int)
{
    delete reinterpret_cast<QList<QBluetoothAddress> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QBluetoothAddress(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QBluetoothAddress(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QBluetoothAddress> **sipCppPtr = reinterpret_cast<QList<QBluetoothAddress> **>(sipCppPtrV);

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

    QList<QBluetoothAddress> *ql = new QList<QBluetoothAddress>;
 
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
        QBluetoothAddress *t = reinterpret_cast<QBluetoothAddress *>(
                sipForceConvertToType(itm, sipType_QBluetoothAddress, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QBluetoothAddress' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QBluetoothAddress, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtBluetooth/sipQtBluetoothQList0100QBluetoothAddress.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QBluetoothAddress(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QBluetoothAddress(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QBluetoothAddress> *sipCpp = reinterpret_cast<QList<QBluetoothAddress> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QBluetoothAddress *t = new QBluetoothAddress(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QBluetoothAddress,
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
#line 175 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtBluetooth/sipQtBluetoothQList0100QBluetoothAddress.cpp"
}


sipMappedTypeDef sipTypeDef_QtBluetooth_QList_0100QBluetoothAddress = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2085,
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
    assign_QList_0100QBluetoothAddress,
    array_QList_0100QBluetoothAddress,
    copy_QList_0100QBluetoothAddress,
    release_QList_0100QBluetoothAddress,
    convertTo_QList_0100QBluetoothAddress,
    convertFrom_QList_0100QBluetoothAddress
};
