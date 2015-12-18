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

#line 815 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionComboBox.cpp"

#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionComboBox.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionComboBox.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionComboBox.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionComboBox.cpp"
#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtWidgets/sipQtWidgetsQStyleOptionComboBox.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionComboBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionComboBox(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionComboBox)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionComboBox *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionComboBox(void *, int);}
static void release_QStyleOptionComboBox(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionComboBox *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionComboBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionComboBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionComboBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionComboBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionComboBox(SIP_SSIZE_T);}
static void *array_QStyleOptionComboBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionComboBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionComboBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionComboBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionComboBox(reinterpret_cast<const QStyleOptionComboBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionComboBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionComboBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionComboBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionComboBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionComboBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionComboBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionComboBox();

            return sipCpp;
        }
    }

    {
        const QStyleOptionComboBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionComboBox, &a0))
        {
            sipCpp = new QStyleOptionComboBox(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionComboBox[] = {{320, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionComboBox[] = {
    {sipName_Type, static_cast<int>(QStyleOptionComboBox::Type), 318},
    {sipName_Version, static_cast<int>(QStyleOptionComboBox::Version), 319},
};


extern "C" {static PyObject *varget_QStyleOptionComboBox_currentIcon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_currentIcon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -72);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->currentIcon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -72, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionComboBox_currentIcon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_currentIcon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->currentIcon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_currentText(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_currentText(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -73);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->currentText;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -73, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionComboBox_currentText(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_currentText(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->currentText = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_editable(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_editable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = sipCpp->editable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionComboBox_editable(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_editable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->editable = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_frame(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_frame(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = sipCpp->frame;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionComboBox_frame(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_frame(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->frame = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_iconSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_iconSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -74);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->iconSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPySelf, -74, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionComboBox_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_popupRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_popupRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRect*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -75);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->popupRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, NULL);
    sipKeepReference(sipPySelf, -75, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionComboBox_popupRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_popupRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect*sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->popupRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionComboBox[] = {
    {InstanceVariable, sipName_currentIcon, (PyMethodDef *)varget_QStyleOptionComboBox_currentIcon, (PyMethodDef *)varset_QStyleOptionComboBox_currentIcon, NULL, NULL},
    {InstanceVariable, sipName_currentText, (PyMethodDef *)varget_QStyleOptionComboBox_currentText, (PyMethodDef *)varset_QStyleOptionComboBox_currentText, NULL, NULL},
    {InstanceVariable, sipName_editable, (PyMethodDef *)varget_QStyleOptionComboBox_editable, (PyMethodDef *)varset_QStyleOptionComboBox_editable, NULL, NULL},
    {InstanceVariable, sipName_frame, (PyMethodDef *)varget_QStyleOptionComboBox_frame, (PyMethodDef *)varset_QStyleOptionComboBox_frame, NULL, NULL},
    {InstanceVariable, sipName_iconSize, (PyMethodDef *)varget_QStyleOptionComboBox_iconSize, (PyMethodDef *)varset_QStyleOptionComboBox_iconSize, NULL, NULL},
    {InstanceVariable, sipName_popupRect, (PyMethodDef *)varget_QStyleOptionComboBox_popupRect, (PyMethodDef *)varset_QStyleOptionComboBox_popupRect, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionComboBox, "\1QStyleOptionComboBox()\n"
    "QStyleOptionComboBox(QStyleOptionComboBox)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionComboBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionComboBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionComboBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionComboBox,
        6, variables_QStyleOptionComboBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionComboBox,
    -1,
    -1,
    supers_QStyleOptionComboBox,
    0,
    init_type_QStyleOptionComboBox,
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
    dealloc_QStyleOptionComboBox,
    assign_QStyleOptionComboBox,
    array_QStyleOptionComboBox,
    copy_QStyleOptionComboBox,
    release_QStyleOptionComboBox,
    cast_QStyleOptionComboBox,
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
