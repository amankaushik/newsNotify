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

#include "sipAPIQtSensors.h"

#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQList0101QSensorFilter.cpp"

#line 71 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtSensors/qsensor.sip"
#include <qsensor.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQList0101QSensorFilter.cpp"


extern "C" {static void assign_QList_0101QSensorFilter(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QSensorFilter(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QSensorFilter*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QSensorFilter*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QSensorFilter(SIP_SSIZE_T);}
static void *array_QList_0101QSensorFilter(SIP_SSIZE_T sipNrElem)
{
    return new QList<QSensorFilter*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QSensorFilter(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QSensorFilter(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QSensorFilter*>(reinterpret_cast<const QList<QSensorFilter*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QSensorFilter(void *, int);}
static void release_QList_0101QSensorFilter(void *ptr, int)
{
    delete reinterpret_cast<QList<QSensorFilter*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QSensorFilter(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QSensorFilter(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QSensorFilter*> **sipCppPtr = reinterpret_cast<QList<QSensorFilter*> **>(sipCppPtrV);

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

    QList<QSensorFilter *> *ql = new QList<QSensorFilter *>;
 
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

        QSensorFilter *t = reinterpret_cast<QSensorFilter *>(
                sipForceConvertToType(itm, sipType_QSensorFilter, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QSensorFilter' is expected",
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
#line 140 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQList0101QSensorFilter.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QSensorFilter(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QSensorFilter(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QSensorFilter*> *sipCpp = reinterpret_cast<QList<QSensorFilter*> *>(sipCppV);

#line 148 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QSensorFilter *t = sipCpp->at(i);

        // The explicit (void *) cast allows QSensorFilter to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QSensorFilter,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQList0101QSensorFilter.cpp"
}


sipMappedTypeDef sipTypeDef_QtSensors_QList_0101QSensorFilter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_562,
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
    assign_QList_0101QSensorFilter,
    array_QList_0101QSensorFilter,
    copy_QList_0101QSensorFilter,
    release_QList_0101QSensorFilter,
    convertTo_QList_0101QSensorFilter,
    convertFrom_QList_0101QSensorFilter
};
