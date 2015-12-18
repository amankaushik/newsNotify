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

#line 48 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtSensors/qmagnetometer.sip"
#include <qmagnetometer.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQMagnetometerFilter.cpp"

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtSensors/qmagnetometer.sip"
#include <qmagnetometer.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtSensors/sipQtSensorsQMagnetometerFilter.cpp"


class sipQMagnetometerFilter : public QMagnetometerFilter
{
public:
    sipQMagnetometerFilter();
    sipQMagnetometerFilter(const QMagnetometerFilter&);
    virtual ~sipQMagnetometerFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QMagnetometerReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMagnetometerFilter(const sipQMagnetometerFilter &);
    sipQMagnetometerFilter &operator = (const sipQMagnetometerFilter &);

    char sipPyMethods[1];
};

sipQMagnetometerFilter::sipQMagnetometerFilter(): QMagnetometerFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMagnetometerFilter::sipQMagnetometerFilter(const QMagnetometerFilter& a0): QMagnetometerFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMagnetometerFilter::~sipQMagnetometerFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQMagnetometerFilter::filter(QMagnetometerReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QMagnetometerFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QMagnetometerReading*);

    return sipVH_QtSensors_7(sipGILState, sipModuleAPI_QtSensors_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QMagnetometerFilter_filter, "QMagnetometerFilter.filter(QMagnetometerReading) -> bool");

extern "C" {static PyObject *meth_QMagnetometerFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QMagnetometerFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QMagnetometerReading* a0;
        QMagnetometerFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QMagnetometerFilter, &sipCpp, sipType_QMagnetometerReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMagnetometerFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMagnetometerFilter, sipName_filter, doc_QMagnetometerFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMagnetometerFilter(void *, const sipTypeDef *);}
static void *cast_QMagnetometerFilter(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QMagnetometerFilter)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorFilter)->ctd_cast((QSensorFilter *)(QMagnetometerFilter *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMagnetometerFilter(void *, int);}
static void release_QMagnetometerFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMagnetometerFilter *>(sipCppV);
    else
        delete reinterpret_cast<QMagnetometerFilter *>(sipCppV);
}


extern "C" {static void dealloc_QMagnetometerFilter(sipSimpleWrapper *);}
static void dealloc_QMagnetometerFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMagnetometerFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMagnetometerFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QMagnetometerFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMagnetometerFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMagnetometerFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQMagnetometerFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QMagnetometerFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMagnetometerFilter, &a0))
        {
            sipCpp = new sipQMagnetometerFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMagnetometerFilter[] = {{50, 255, 1}};


static PyMethodDef methods_QMagnetometerFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QMagnetometerFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QMagnetometerFilter_filter)}
};

PyDoc_STRVAR(doc_QMagnetometerFilter, "\1QMagnetometerFilter()\n"
    "QMagnetometerFilter(QMagnetometerFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QMagnetometerFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMagnetometerFilter,
        {0}
    },
    {
        sipNameNr_QMagnetometerFilter,
        {0, 0, 1},
        1, methods_QMagnetometerFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMagnetometerFilter,
    -1,
    -1,
    supers_QMagnetometerFilter,
    0,
    init_type_QMagnetometerFilter,
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
    dealloc_QMagnetometerFilter,
    0,
    0,
    0,
    release_QMagnetometerFilter,
    cast_QMagnetometerFilter,
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
