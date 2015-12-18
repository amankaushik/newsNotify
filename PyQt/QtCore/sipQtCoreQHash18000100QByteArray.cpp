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

#line 266 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qhash.sip"
#include <qhash.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQHash18000100QByteArray.cpp"

#line 32 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQHash18000100QByteArray.cpp"


extern "C" {static void assign_QHash_1800_0100QByteArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QHash_1800_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHash<int,QByteArray> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHash<int,QByteArray> *>(sipSrc);
}


extern "C" {static void *array_QHash_1800_0100QByteArray(SIP_SSIZE_T);}
static void *array_QHash_1800_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QHash<int,QByteArray>[sipNrElem];
}


extern "C" {static void *copy_QHash_1800_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QHash_1800_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHash<int,QByteArray>(reinterpret_cast<const QHash<int,QByteArray> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QHash_1800_0100QByteArray(void *, int);}
static void release_QHash_1800_0100QByteArray(void *ptr, int)
{
    delete reinterpret_cast<QHash<int,QByteArray> *>(ptr);
}



extern "C" {static int convertTo_QHash_1800_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHash_1800_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QHash<int,QByteArray> **sipCppPtr = reinterpret_cast<QHash<int,QByteArray> **>(sipCppPtrV);

#line 321 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qhash.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QHash<int, QByteArray> *qh = new QHash<int, QByteArray>;

    SIP_SSIZE_T pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        PyErr_Clear();
        int k = SIPLong_AsLong(kobj);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict key has type '%s' but 'int' is expected",
                    Py_TYPE(kobj)->tp_name);

            delete qh;
            *sipIsErr = 1;

            return 0;
        }

        int vstate;
        QByteArray *v = reinterpret_cast<QByteArray *>(
                sipForceConvertToType(vobj, sipType_QByteArray, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict value has type '%s' but 'QByteArray' is expected",
                    Py_TYPE(vobj)->tp_name);

            delete qh;

            return 0;
        }

        qh->insert(k, *v);

        sipReleaseType(v, sipType_QByteArray, vstate);
    }
 
    *sipCppPtr = qh;
 
    return sipGetState(sipTransferObj);
#line 121 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQHash18000100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QHash_1800_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QHash_1800_0100QByteArray(void *sipCppV, PyObject *sipTransferObj)
{
   QHash<int,QByteArray> *sipCpp = reinterpret_cast<QHash<int,QByteArray> *>(sipCppV);

#line 270 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qhash.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QHash<int, QByteArray>::const_iterator it = sipCpp->constBegin();
    QHash<int, QByteArray>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *kobj = SIPLong_FromLong(it.key());

        if (!kobj)
        {
            Py_DECREF(d);

            return 0;
        }

        QByteArray *v = new QByteArray(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QByteArray,
                sipTransferObj);

        if (!vobj)
        {
            delete v;
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }

        ++it;
    }

    return d;
#line 179 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQHash18000100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QHash_1800_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_8735,
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
    assign_QHash_1800_0100QByteArray,
    array_QHash_1800_0100QByteArray,
    copy_QHash_1800_0100QByteArray,
    release_QHash_1800_0100QByteArray,
    convertTo_QHash_1800_0100QByteArray,
    convertFrom_QHash_1800_0100QByteArray
};
