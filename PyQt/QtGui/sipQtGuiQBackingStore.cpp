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

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qbackingstore.sip"
#include <qbackingstore.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQBackingStore.cpp"

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qwindow.sip"
#include <qwindow.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQBackingStore.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQBackingStore.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQBackingStore.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQBackingStore.cpp"
#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtGui/sipQtGuiQBackingStore.cpp"


PyDoc_STRVAR(doc_QBackingStore_window, "QBackingStore.window() -> QWindow");

extern "C" {static PyObject *meth_QBackingStore_window(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_window(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBackingStore, &sipCpp))
        {
            QWindow*sipRes;

            sipRes = sipCpp->window();

            return sipConvertFromType(sipRes,sipType_QWindow,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_window, doc_QBackingStore_window);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_paintDevice, "QBackingStore.paintDevice() -> QPaintDevice");

extern "C" {static PyObject *meth_QBackingStore_paintDevice(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_paintDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBackingStore, &sipCpp))
        {
            QPaintDevice*sipRes;

            sipRes = sipCpp->paintDevice();

            return sipConvertFromType(sipRes,sipType_QPaintDevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_paintDevice, doc_QBackingStore_paintDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_flush, "QBackingStore.flush(QRegion, QWindow window=None, QPoint offset=QPoint())");

extern "C" {static PyObject *meth_QBackingStore_flush(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_flush(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegion* a0;
        QWindow* a1 = 0;
        const QPoint& a2def = QPoint();
        const QPoint* a2 = &a2def;
        QBackingStore *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_window,
            sipName_offset,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|J8J9", &sipSelf, sipType_QBackingStore, &sipCpp, sipType_QRegion, &a0, sipType_QWindow, &a1, sipType_QPoint, &a2))
        {
            sipCpp->flush(*a0,a1,*a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_flush, doc_QBackingStore_flush);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_resize, "QBackingStore.resize(QSize)");

extern "C" {static PyObject *meth_QBackingStore_resize(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBackingStore, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->resize(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_resize, doc_QBackingStore_resize);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_size, "QBackingStore.size() -> QSize");

extern "C" {static PyObject *meth_QBackingStore_size(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBackingStore, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_size, doc_QBackingStore_size);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_scroll, "QBackingStore.scroll(QRegion, int, int) -> bool");

extern "C" {static PyObject *meth_QBackingStore_scroll(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_scroll(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegion* a0;
        int a1;
        int a2;
        QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9ii", &sipSelf, sipType_QBackingStore, &sipCpp, sipType_QRegion, &a0, &a1, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->scroll(*a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_scroll, doc_QBackingStore_scroll);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_beginPaint, "QBackingStore.beginPaint(QRegion)");

extern "C" {static PyObject *meth_QBackingStore_beginPaint(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_beginPaint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegion* a0;
        QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBackingStore, &sipCpp, sipType_QRegion, &a0))
        {
            sipCpp->beginPaint(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_beginPaint, doc_QBackingStore_beginPaint);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_endPaint, "QBackingStore.endPaint()");

extern "C" {static PyObject *meth_QBackingStore_endPaint(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_endPaint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBackingStore, &sipCpp))
        {
            sipCpp->endPaint();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_endPaint, doc_QBackingStore_endPaint);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_setStaticContents, "QBackingStore.setStaticContents(QRegion)");

extern "C" {static PyObject *meth_QBackingStore_setStaticContents(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_setStaticContents(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegion* a0;
        QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBackingStore, &sipCpp, sipType_QRegion, &a0))
        {
            sipCpp->setStaticContents(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_setStaticContents, doc_QBackingStore_setStaticContents);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_staticContents, "QBackingStore.staticContents() -> QRegion");

extern "C" {static PyObject *meth_QBackingStore_staticContents(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_staticContents(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBackingStore, &sipCpp))
        {
            QRegion*sipRes;

            sipRes = new QRegion(sipCpp->staticContents());

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_staticContents, doc_QBackingStore_staticContents);

    return NULL;
}


PyDoc_STRVAR(doc_QBackingStore_hasStaticContents, "QBackingStore.hasStaticContents() -> bool");

extern "C" {static PyObject *meth_QBackingStore_hasStaticContents(PyObject *, PyObject *);}
static PyObject *meth_QBackingStore_hasStaticContents(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBackingStore *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBackingStore, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasStaticContents();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBackingStore, sipName_hasStaticContents, doc_QBackingStore_hasStaticContents);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBackingStore(void *, const sipTypeDef *);}
static void *cast_QBackingStore(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBackingStore)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBackingStore(void *, int);}
static void release_QBackingStore(void *sipCppV,int)
{
    delete reinterpret_cast<QBackingStore *>(sipCppV);
}


extern "C" {static void dealloc_QBackingStore(sipSimpleWrapper *);}
static void dealloc_QBackingStore(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBackingStore(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBackingStore(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBackingStore(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBackingStore *sipCpp = 0;

    {
        QWindow* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QWindow, &a0))
        {
            sipCpp = new QBackingStore(a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QBackingStore[] = {
    {SIP_MLNAME_CAST(sipName_beginPaint), meth_QBackingStore_beginPaint, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_beginPaint)},
    {SIP_MLNAME_CAST(sipName_endPaint), meth_QBackingStore_endPaint, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_endPaint)},
    {SIP_MLNAME_CAST(sipName_flush), (PyCFunction)meth_QBackingStore_flush, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QBackingStore_flush)},
    {SIP_MLNAME_CAST(sipName_hasStaticContents), meth_QBackingStore_hasStaticContents, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_hasStaticContents)},
    {SIP_MLNAME_CAST(sipName_paintDevice), meth_QBackingStore_paintDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_paintDevice)},
    {SIP_MLNAME_CAST(sipName_resize), meth_QBackingStore_resize, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_resize)},
    {SIP_MLNAME_CAST(sipName_scroll), meth_QBackingStore_scroll, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_scroll)},
    {SIP_MLNAME_CAST(sipName_setStaticContents), meth_QBackingStore_setStaticContents, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_setStaticContents)},
    {SIP_MLNAME_CAST(sipName_size), meth_QBackingStore_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_size)},
    {SIP_MLNAME_CAST(sipName_staticContents), meth_QBackingStore_staticContents, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_staticContents)},
    {SIP_MLNAME_CAST(sipName_window), meth_QBackingStore_window, METH_VARARGS, SIP_MLDOC_CAST(doc_QBackingStore_window)}
};

PyDoc_STRVAR(doc_QBackingStore, "\1QBackingStore(QWindow)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QBackingStore = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBackingStore,
        {0}
    },
    {
        sipNameNr_QBackingStore,
        {0, 0, 1},
        11, methods_QBackingStore,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBackingStore,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QBackingStore,
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
    dealloc_QBackingStore,
    0,
    0,
    0,
    release_QBackingStore,
    cast_QBackingStore,
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
