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

#line 28 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qpagesize.sip"
#include <qpagesize.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQPageSize.cpp"

#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQPageSize.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQPageSize.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQPageSize.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQPageSize.cpp"
#line 161 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQPageSize.cpp"


PyDoc_STRVAR(doc_QPageSize_swap, "QPageSize.swap(QPageSize)");

extern "C" {static PyObject *meth_QPageSize_swap(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageSize* a0;
        QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPageSize, &sipCpp, sipType_QPageSize, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_swap, doc_QPageSize_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_isEquivalentTo, "QPageSize.isEquivalentTo(QPageSize) -> bool");

extern "C" {static PyObject *meth_QPageSize_isEquivalentTo(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_isEquivalentTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize* a0;
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPageSize, &sipCpp, sipType_QPageSize, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isEquivalentTo(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_isEquivalentTo, doc_QPageSize_isEquivalentTo);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_isValid, "QPageSize.isValid() -> bool");

extern "C" {static PyObject *meth_QPageSize_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_isValid, doc_QPageSize_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_key, "QPageSize.key() -> str\n"
    "QPageSize.key(QPageSize.PageSizeId) -> str");

extern "C" {static PyObject *meth_QPageSize_key(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->key());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            QString*sipRes;

            sipRes = new QString(QPageSize::key(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_key, doc_QPageSize_key);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_name, "QPageSize.name() -> str\n"
    "QPageSize.name(QPageSize.PageSizeId) -> str");

extern "C" {static PyObject *meth_QPageSize_name(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            QString*sipRes;

            sipRes = new QString(QPageSize::name(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_name, doc_QPageSize_name);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_id, "QPageSize.id() -> QPageSize.PageSizeId\n"
    "QPageSize.id(QSize, QPageSize.SizeMatchPolicy matchPolicy=QPageSize.FuzzyMatch) -> QPageSize.PageSizeId\n"
    "QPageSize.id(QSizeF, QPageSize.Unit, QPageSize.SizeMatchPolicy matchPolicy=QPageSize.FuzzyMatch) -> QPageSize.PageSizeId\n"
    "QPageSize.id(int) -> QPageSize.PageSizeId");

extern "C" {static PyObject *meth_QPageSize_id(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPageSize_id(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QPageSize::PageSizeId sipRes;

            sipRes = sipCpp->id();

            return sipConvertFromEnum(sipRes,sipType_QPageSize_PageSizeId);
        }
    }

    {
        const QSize* a0;
        QPageSize::SizeMatchPolicy a1 = QPageSize::FuzzyMatch;

        static const char *sipKwdList[] = {
            NULL,
            sipName_matchPolicy,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9|E", sipType_QSize, &a0, sipType_QPageSize_SizeMatchPolicy, &a1))
        {
            QPageSize::PageSizeId sipRes;

            sipRes = QPageSize::id(*a0,a1);

            return sipConvertFromEnum(sipRes,sipType_QPageSize_PageSizeId);
        }
    }

    {
        const QSizeF* a0;
        QPageSize::Unit a1;
        QPageSize::SizeMatchPolicy a2 = QPageSize::FuzzyMatch;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_matchPolicy,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9E|E", sipType_QSizeF, &a0, sipType_QPageSize_Unit, &a1, sipType_QPageSize_SizeMatchPolicy, &a2))
        {
            QPageSize::PageSizeId sipRes;

            sipRes = QPageSize::id(*a0,a1,a2);

            return sipConvertFromEnum(sipRes,sipType_QPageSize_PageSizeId);
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "i", &a0))
        {
            QPageSize::PageSizeId sipRes;

            sipRes = QPageSize::id(a0);

            return sipConvertFromEnum(sipRes,sipType_QPageSize_PageSizeId);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_id, doc_QPageSize_id);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_windowsId, "QPageSize.windowsId() -> int\n"
    "QPageSize.windowsId(QPageSize.PageSizeId) -> int");

extern "C" {static PyObject *meth_QPageSize_windowsId(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_windowsId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->windowsId();

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            int sipRes;

            sipRes = QPageSize::windowsId(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_windowsId, doc_QPageSize_windowsId);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_definitionSize, "QPageSize.definitionSize() -> QSizeF\n"
    "QPageSize.definitionSize(QPageSize.PageSizeId) -> QSizeF");

extern "C" {static PyObject *meth_QPageSize_definitionSize(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_definitionSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->definitionSize());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(QPageSize::definitionSize(a0));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_definitionSize, doc_QPageSize_definitionSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_definitionUnits, "QPageSize.definitionUnits() -> QPageSize.Unit\n"
    "QPageSize.definitionUnits(QPageSize.PageSizeId) -> QPageSize.Unit");

extern "C" {static PyObject *meth_QPageSize_definitionUnits(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_definitionUnits(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QPageSize::Unit sipRes;

            sipRes = sipCpp->definitionUnits();

            return sipConvertFromEnum(sipRes,sipType_QPageSize_Unit);
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            QPageSize::Unit sipRes;

            sipRes = QPageSize::definitionUnits(a0);

            return sipConvertFromEnum(sipRes,sipType_QPageSize_Unit);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_definitionUnits, doc_QPageSize_definitionUnits);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_size, "QPageSize.size(QPageSize.Unit) -> QSizeF\n"
    "QPageSize.size(QPageSize.PageSizeId, QPageSize.Unit) -> QSizeF");

extern "C" {static PyObject *meth_QPageSize_size(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageSize::Unit a0;
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageSize, &sipCpp, sipType_QPageSize_Unit, &a0))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->size(a0));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    {
        QPageSize::PageSizeId a0;
        QPageSize::Unit a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "EE", sipType_QPageSize_PageSizeId, &a0, sipType_QPageSize_Unit, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(QPageSize::size(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_size, doc_QPageSize_size);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_sizePoints, "QPageSize.sizePoints() -> QSize\n"
    "QPageSize.sizePoints(QPageSize.PageSizeId) -> QSize");

extern "C" {static PyObject *meth_QPageSize_sizePoints(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_sizePoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->sizePoints());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            QSize*sipRes;

            sipRes = new QSize(QPageSize::sizePoints(a0));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_sizePoints, doc_QPageSize_sizePoints);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_sizePixels, "QPageSize.sizePixels(int) -> QSize\n"
    "QPageSize.sizePixels(QPageSize.PageSizeId, int) -> QSize");

extern "C" {static PyObject *meth_QPageSize_sizePixels(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_sizePixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPageSize, &sipCpp, &a0))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->sizePixels(a0));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    {
        QPageSize::PageSizeId a0;
        int a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "Ei", sipType_QPageSize_PageSizeId, &a0, &a1))
        {
            QSize*sipRes;

            sipRes = new QSize(QPageSize::sizePixels(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_sizePixels, doc_QPageSize_sizePixels);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_rect, "QPageSize.rect(QPageSize.Unit) -> QRectF");

extern "C" {static PyObject *meth_QPageSize_rect(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageSize::Unit a0;
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageSize, &sipCpp, sipType_QPageSize_Unit, &a0))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->rect(a0));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_rect, doc_QPageSize_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_rectPoints, "QPageSize.rectPoints() -> QRect");

extern "C" {static PyObject *meth_QPageSize_rectPoints(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_rectPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageSize, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->rectPoints());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_rectPoints, doc_QPageSize_rectPoints);

    return NULL;
}


PyDoc_STRVAR(doc_QPageSize_rectPixels, "QPageSize.rectPixels(int) -> QRect");

extern "C" {static PyObject *meth_QPageSize_rectPixels(PyObject *, PyObject *);}
static PyObject *meth_QPageSize_rectPixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPageSize *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPageSize, &sipCpp, &a0))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->rectPixels(a0));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageSize, sipName_rectPixels, doc_QPageSize_rectPixels);

    return NULL;
}


extern "C" {static PyObject *slot_QPageSize___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPageSize___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPageSize *sipCpp = reinterpret_cast<QPageSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPageSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPageSize* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPageSize, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPageSize,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPageSize___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPageSize___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPageSize *sipCpp = reinterpret_cast<QPageSize *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPageSize));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPageSize* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPageSize, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPageSize,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPageSize(void *, const sipTypeDef *);}
static void *cast_QPageSize(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPageSize)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPageSize(void *, int);}
static void release_QPageSize(void *sipCppV,int)
{
    delete reinterpret_cast<QPageSize *>(sipCppV);
}


extern "C" {static void assign_QPageSize(void *, SIP_SSIZE_T, const void *);}
static void assign_QPageSize(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPageSize *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPageSize *>(sipSrc);
}


extern "C" {static void *array_QPageSize(SIP_SSIZE_T);}
static void *array_QPageSize(SIP_SSIZE_T sipNrElem)
{
    return new QPageSize[sipNrElem];
}


extern "C" {static void *copy_QPageSize(const void *, SIP_SSIZE_T);}
static void *copy_QPageSize(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPageSize(reinterpret_cast<const QPageSize *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPageSize(sipSimpleWrapper *);}
static void dealloc_QPageSize(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPageSize(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPageSize(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPageSize(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPageSize *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPageSize();

            return sipCpp;
        }
    }

    {
        QPageSize::PageSizeId a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QPageSize_PageSizeId, &a0))
        {
            sipCpp = new QPageSize(a0);

            return sipCpp;
        }
    }

    {
        const QSize* a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        QPageSize::SizeMatchPolicy a2 = QPageSize::FuzzyMatch;

        static const char *sipKwdList[] = {
            NULL,
            sipName_name,
            sipName_matchPolicy,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|J1E", sipType_QSize, &a0, sipType_QString,&a1, &a1State, sipType_QPageSize_SizeMatchPolicy, &a2))
        {
            sipCpp = new QPageSize(*a0,*a1,a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const QSizeF* a0;
        QPageSize::Unit a1;
        const QString& a2def = QString();
        const QString* a2 = &a2def;
        int a2State = 0;
        QPageSize::SizeMatchPolicy a3 = QPageSize::FuzzyMatch;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_name,
            sipName_matchPolicy,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9E|J1E", sipType_QSizeF, &a0, sipType_QPageSize_Unit, &a1, sipType_QString,&a2, &a2State, sipType_QPageSize_SizeMatchPolicy, &a3))
        {
            sipCpp = new QPageSize(*a0,a1,*a2,a3);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipCpp;
        }
    }

    {
        const QPageSize* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPageSize, &a0))
        {
            sipCpp = new QPageSize(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPageSize[] = {
    {(void *)slot_QPageSize___eq__, eq_slot},
    {(void *)slot_QPageSize___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPageSize[] = {
    {SIP_MLNAME_CAST(sipName_definitionSize), meth_QPageSize_definitionSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_definitionSize)},
    {SIP_MLNAME_CAST(sipName_definitionUnits), meth_QPageSize_definitionUnits, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_definitionUnits)},
    {SIP_MLNAME_CAST(sipName_id), (PyCFunction)meth_QPageSize_id, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPageSize_id)},
    {SIP_MLNAME_CAST(sipName_isEquivalentTo), meth_QPageSize_isEquivalentTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_isEquivalentTo)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QPageSize_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_isValid)},
    {SIP_MLNAME_CAST(sipName_key), meth_QPageSize_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_key)},
    {SIP_MLNAME_CAST(sipName_name), meth_QPageSize_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_name)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QPageSize_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_rect)},
    {SIP_MLNAME_CAST(sipName_rectPixels), meth_QPageSize_rectPixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_rectPixels)},
    {SIP_MLNAME_CAST(sipName_rectPoints), meth_QPageSize_rectPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_rectPoints)},
    {SIP_MLNAME_CAST(sipName_size), meth_QPageSize_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_size)},
    {SIP_MLNAME_CAST(sipName_sizePixels), meth_QPageSize_sizePixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_sizePixels)},
    {SIP_MLNAME_CAST(sipName_sizePoints), meth_QPageSize_sizePoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_sizePoints)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QPageSize_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_swap)},
    {SIP_MLNAME_CAST(sipName_windowsId), meth_QPageSize_windowsId, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageSize_windowsId)}
};

static sipEnumMemberDef enummembers_QPageSize[] = {
    {sipName_A0, static_cast<int>(QPageSize::A0), 173},
    {sipName_A1, static_cast<int>(QPageSize::A1), 173},
    {sipName_A10, static_cast<int>(QPageSize::A10), 173},
    {sipName_A2, static_cast<int>(QPageSize::A2), 173},
    {sipName_A3, static_cast<int>(QPageSize::A3), 173},
    {sipName_A3Extra, static_cast<int>(QPageSize::A3Extra), 173},
    {sipName_A4, static_cast<int>(QPageSize::A4), 173},
    {sipName_A4Extra, static_cast<int>(QPageSize::A4Extra), 173},
    {sipName_A4Plus, static_cast<int>(QPageSize::A4Plus), 173},
    {sipName_A4Small, static_cast<int>(QPageSize::A4Small), 173},
    {sipName_A5, static_cast<int>(QPageSize::A5), 173},
    {sipName_A5Extra, static_cast<int>(QPageSize::A5Extra), 173},
    {sipName_A6, static_cast<int>(QPageSize::A6), 173},
    {sipName_A7, static_cast<int>(QPageSize::A7), 173},
    {sipName_A8, static_cast<int>(QPageSize::A8), 173},
    {sipName_A9, static_cast<int>(QPageSize::A9), 173},
    {sipName_AnsiA, static_cast<int>(QPageSize::AnsiA), 173},
    {sipName_AnsiB, static_cast<int>(QPageSize::AnsiB), 173},
    {sipName_AnsiC, static_cast<int>(QPageSize::AnsiC), 173},
    {sipName_AnsiD, static_cast<int>(QPageSize::AnsiD), 173},
    {sipName_AnsiE, static_cast<int>(QPageSize::AnsiE), 173},
    {sipName_ArchA, static_cast<int>(QPageSize::ArchA), 173},
    {sipName_ArchB, static_cast<int>(QPageSize::ArchB), 173},
    {sipName_ArchC, static_cast<int>(QPageSize::ArchC), 173},
    {sipName_ArchD, static_cast<int>(QPageSize::ArchD), 173},
    {sipName_ArchE, static_cast<int>(QPageSize::ArchE), 173},
    {sipName_B0, static_cast<int>(QPageSize::B0), 173},
    {sipName_B1, static_cast<int>(QPageSize::B1), 173},
    {sipName_B10, static_cast<int>(QPageSize::B10), 173},
    {sipName_B2, static_cast<int>(QPageSize::B2), 173},
    {sipName_B3, static_cast<int>(QPageSize::B3), 173},
    {sipName_B4, static_cast<int>(QPageSize::B4), 173},
    {sipName_B5, static_cast<int>(QPageSize::B5), 173},
    {sipName_B5Extra, static_cast<int>(QPageSize::B5Extra), 173},
    {sipName_B6, static_cast<int>(QPageSize::B6), 173},
    {sipName_B7, static_cast<int>(QPageSize::B7), 173},
    {sipName_B8, static_cast<int>(QPageSize::B8), 173},
    {sipName_B9, static_cast<int>(QPageSize::B9), 173},
    {sipName_C5E, static_cast<int>(QPageSize::C5E), 173},
    {sipName_Cicero, static_cast<int>(QPageSize::Cicero), 175},
    {sipName_Comm10E, static_cast<int>(QPageSize::Comm10E), 173},
    {sipName_Custom, static_cast<int>(QPageSize::Custom), 173},
    {sipName_DLE, static_cast<int>(QPageSize::DLE), 173},
    {sipName_Didot, static_cast<int>(QPageSize::Didot), 175},
    {sipName_DoublePostcard, static_cast<int>(QPageSize::DoublePostcard), 173},
    {sipName_Envelope10, static_cast<int>(QPageSize::Envelope10), 173},
    {sipName_Envelope11, static_cast<int>(QPageSize::Envelope11), 173},
    {sipName_Envelope12, static_cast<int>(QPageSize::Envelope12), 173},
    {sipName_Envelope14, static_cast<int>(QPageSize::Envelope14), 173},
    {sipName_Envelope9, static_cast<int>(QPageSize::Envelope9), 173},
    {sipName_EnvelopeB4, static_cast<int>(QPageSize::EnvelopeB4), 173},
    {sipName_EnvelopeB5, static_cast<int>(QPageSize::EnvelopeB5), 173},
    {sipName_EnvelopeB6, static_cast<int>(QPageSize::EnvelopeB6), 173},
    {sipName_EnvelopeC0, static_cast<int>(QPageSize::EnvelopeC0), 173},
    {sipName_EnvelopeC1, static_cast<int>(QPageSize::EnvelopeC1), 173},
    {sipName_EnvelopeC2, static_cast<int>(QPageSize::EnvelopeC2), 173},
    {sipName_EnvelopeC3, static_cast<int>(QPageSize::EnvelopeC3), 173},
    {sipName_EnvelopeC4, static_cast<int>(QPageSize::EnvelopeC4), 173},
    {sipName_EnvelopeC5, static_cast<int>(QPageSize::EnvelopeC5), 173},
    {sipName_EnvelopeC6, static_cast<int>(QPageSize::EnvelopeC6), 173},
    {sipName_EnvelopeC65, static_cast<int>(QPageSize::EnvelopeC65), 173},
    {sipName_EnvelopeC7, static_cast<int>(QPageSize::EnvelopeC7), 173},
    {sipName_EnvelopeChou3, static_cast<int>(QPageSize::EnvelopeChou3), 173},
    {sipName_EnvelopeChou4, static_cast<int>(QPageSize::EnvelopeChou4), 173},
    {sipName_EnvelopeDL, static_cast<int>(QPageSize::EnvelopeDL), 173},
    {sipName_EnvelopeInvite, static_cast<int>(QPageSize::EnvelopeInvite), 173},
    {sipName_EnvelopeItalian, static_cast<int>(QPageSize::EnvelopeItalian), 173},
    {sipName_EnvelopeKaku2, static_cast<int>(QPageSize::EnvelopeKaku2), 173},
    {sipName_EnvelopeKaku3, static_cast<int>(QPageSize::EnvelopeKaku3), 173},
    {sipName_EnvelopeMonarch, static_cast<int>(QPageSize::EnvelopeMonarch), 173},
    {sipName_EnvelopePersonal, static_cast<int>(QPageSize::EnvelopePersonal), 173},
    {sipName_EnvelopePrc1, static_cast<int>(QPageSize::EnvelopePrc1), 173},
    {sipName_EnvelopePrc10, static_cast<int>(QPageSize::EnvelopePrc10), 173},
    {sipName_EnvelopePrc2, static_cast<int>(QPageSize::EnvelopePrc2), 173},
    {sipName_EnvelopePrc3, static_cast<int>(QPageSize::EnvelopePrc3), 173},
    {sipName_EnvelopePrc4, static_cast<int>(QPageSize::EnvelopePrc4), 173},
    {sipName_EnvelopePrc5, static_cast<int>(QPageSize::EnvelopePrc5), 173},
    {sipName_EnvelopePrc6, static_cast<int>(QPageSize::EnvelopePrc6), 173},
    {sipName_EnvelopePrc7, static_cast<int>(QPageSize::EnvelopePrc7), 173},
    {sipName_EnvelopePrc8, static_cast<int>(QPageSize::EnvelopePrc8), 173},
    {sipName_EnvelopePrc9, static_cast<int>(QPageSize::EnvelopePrc9), 173},
    {sipName_EnvelopeYou4, static_cast<int>(QPageSize::EnvelopeYou4), 173},
    {sipName_ExactMatch, static_cast<int>(QPageSize::ExactMatch), 174},
    {sipName_Executive, static_cast<int>(QPageSize::Executive), 173},
    {sipName_ExecutiveStandard, static_cast<int>(QPageSize::ExecutiveStandard), 173},
    {sipName_FanFoldGerman, static_cast<int>(QPageSize::FanFoldGerman), 173},
    {sipName_FanFoldGermanLegal, static_cast<int>(QPageSize::FanFoldGermanLegal), 173},
    {sipName_FanFoldUS, static_cast<int>(QPageSize::FanFoldUS), 173},
    {sipName_Folio, static_cast<int>(QPageSize::Folio), 173},
    {sipName_FuzzyMatch, static_cast<int>(QPageSize::FuzzyMatch), 174},
    {sipName_FuzzyOrientationMatch, static_cast<int>(QPageSize::FuzzyOrientationMatch), 174},
    {sipName_Imperial10x11, static_cast<int>(QPageSize::Imperial10x11), 173},
    {sipName_Imperial10x13, static_cast<int>(QPageSize::Imperial10x13), 173},
    {sipName_Imperial10x14, static_cast<int>(QPageSize::Imperial10x14), 173},
    {sipName_Imperial12x11, static_cast<int>(QPageSize::Imperial12x11), 173},
    {sipName_Imperial15x11, static_cast<int>(QPageSize::Imperial15x11), 173},
    {sipName_Imperial7x9, static_cast<int>(QPageSize::Imperial7x9), 173},
    {sipName_Imperial8x10, static_cast<int>(QPageSize::Imperial8x10), 173},
    {sipName_Imperial9x11, static_cast<int>(QPageSize::Imperial9x11), 173},
    {sipName_Imperial9x12, static_cast<int>(QPageSize::Imperial9x12), 173},
    {sipName_Inch, static_cast<int>(QPageSize::Inch), 175},
    {sipName_JisB0, static_cast<int>(QPageSize::JisB0), 173},
    {sipName_JisB1, static_cast<int>(QPageSize::JisB1), 173},
    {sipName_JisB10, static_cast<int>(QPageSize::JisB10), 173},
    {sipName_JisB2, static_cast<int>(QPageSize::JisB2), 173},
    {sipName_JisB3, static_cast<int>(QPageSize::JisB3), 173},
    {sipName_JisB4, static_cast<int>(QPageSize::JisB4), 173},
    {sipName_JisB5, static_cast<int>(QPageSize::JisB5), 173},
    {sipName_JisB6, static_cast<int>(QPageSize::JisB6), 173},
    {sipName_JisB7, static_cast<int>(QPageSize::JisB7), 173},
    {sipName_JisB8, static_cast<int>(QPageSize::JisB8), 173},
    {sipName_JisB9, static_cast<int>(QPageSize::JisB9), 173},
    {sipName_LastPageSize, static_cast<int>(QPageSize::LastPageSize), 173},
    {sipName_Ledger, static_cast<int>(QPageSize::Ledger), 173},
    {sipName_Legal, static_cast<int>(QPageSize::Legal), 173},
    {sipName_LegalExtra, static_cast<int>(QPageSize::LegalExtra), 173},
    {sipName_Letter, static_cast<int>(QPageSize::Letter), 173},
    {sipName_LetterExtra, static_cast<int>(QPageSize::LetterExtra), 173},
    {sipName_LetterPlus, static_cast<int>(QPageSize::LetterPlus), 173},
    {sipName_LetterSmall, static_cast<int>(QPageSize::LetterSmall), 173},
    {sipName_Millimeter, static_cast<int>(QPageSize::Millimeter), 175},
    {sipName_NPageSize, static_cast<int>(QPageSize::NPageSize), 173},
    {sipName_NPaperSize, static_cast<int>(QPageSize::NPaperSize), 173},
    {sipName_Note, static_cast<int>(QPageSize::Note), 173},
    {sipName_Pica, static_cast<int>(QPageSize::Pica), 175},
    {sipName_Point, static_cast<int>(QPageSize::Point), 175},
    {sipName_Postcard, static_cast<int>(QPageSize::Postcard), 173},
    {sipName_Prc16K, static_cast<int>(QPageSize::Prc16K), 173},
    {sipName_Prc32K, static_cast<int>(QPageSize::Prc32K), 173},
    {sipName_Prc32KBig, static_cast<int>(QPageSize::Prc32KBig), 173},
    {sipName_Quarto, static_cast<int>(QPageSize::Quarto), 173},
    {sipName_Statement, static_cast<int>(QPageSize::Statement), 173},
    {sipName_SuperA, static_cast<int>(QPageSize::SuperA), 173},
    {sipName_SuperB, static_cast<int>(QPageSize::SuperB), 173},
    {sipName_Tabloid, static_cast<int>(QPageSize::Tabloid), 173},
    {sipName_TabloidExtra, static_cast<int>(QPageSize::TabloidExtra), 173},
};

PyDoc_STRVAR(doc_QPageSize, "\1QPageSize()\n"
    "QPageSize(QPageSize.PageSizeId)\n"
    "QPageSize(QSize, str name=QString(), QPageSize.SizeMatchPolicy matchPolicy=QPageSize.FuzzyMatch)\n"
    "QPageSize(QSizeF, QPageSize.Unit, str name=QString(), QPageSize.SizeMatchPolicy matchPolicy=QPageSize.FuzzyMatch)\n"
    "QPageSize(QPageSize)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPageSize = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPageSize,
        {0}
    },
    {
        sipNameNr_QPageSize,
        {0, 0, 1},
        15, methods_QPageSize,
        136, enummembers_QPageSize,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPageSize,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPageSize,
    init_type_QPageSize,
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
    dealloc_QPageSize,
    assign_QPageSize,
    array_QPageSize,
    copy_QPageSize,
    release_QPageSize,
    cast_QPageSize,
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
