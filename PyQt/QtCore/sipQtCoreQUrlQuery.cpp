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

#line 26 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qurlquery.sip"
#include <qurlquery.h>
#line 29 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"

#line 96 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"
#line 27 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"
#line 27 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 39 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"
#line 34 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"
#line 96 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 45 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"
#line 252 "/home/amankaushik/pyProjects/newsnotify/PyQt/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 49 "/home/amankaushik/pyProjects/newsnotify/PyQt/QtCore/sipQtCoreQUrlQuery.cpp"


PyDoc_STRVAR(doc_QUrlQuery_swap, "QUrlQuery.swap(QUrlQuery)");

extern "C" {static PyObject *meth_QUrlQuery_swap(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUrlQuery* a0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrlQuery, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_swap, doc_QUrlQuery_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_isEmpty, "QUrlQuery.isEmpty() -> bool");

extern "C" {static PyObject *meth_QUrlQuery_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_isEmpty, doc_QUrlQuery_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_isDetached, "QUrlQuery.isDetached() -> bool");

extern "C" {static PyObject *meth_QUrlQuery_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDetached();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_isDetached, doc_QUrlQuery_isDetached);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_clear, "QUrlQuery.clear()");

extern "C" {static PyObject *meth_QUrlQuery_clear(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_clear, doc_QUrlQuery_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_query, "QUrlQuery.query(QUrl.ComponentFormattingOptions options=QUrl.PrettyDecoded) -> str");

extern "C" {static PyObject *meth_QUrlQuery_query(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_query(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions a0def = QUrl::PrettyDecoded;
        QUrl::ComponentFormattingOptions* a0 = &a0def;
        int a0State = 0;
        const QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->query(*a0));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_query, doc_QUrlQuery_query);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_setQuery, "QUrlQuery.setQuery(str)");

extern "C" {static PyObject *meth_QUrlQuery_setQuery(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_setQuery(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setQuery(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_setQuery, doc_QUrlQuery_setQuery);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_toString, "QUrlQuery.toString(QUrl.ComponentFormattingOptions options=QUrl.PrettyDecoded) -> str");

extern "C" {static PyObject *meth_QUrlQuery_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions a0def = QUrl::PrettyDecoded;
        QUrl::ComponentFormattingOptions* a0 = &a0def;
        int a0State = 0;
        const QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString(*a0));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_toString, doc_QUrlQuery_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_setQueryDelimiters, "QUrlQuery.setQueryDelimiters(str, str)");

extern "C" {static PyObject *meth_QUrlQuery_setQueryDelimiters(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_setQueryDelimiters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        QChar* a1;
        int a1State = 0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QChar,&a0, &a0State, sipType_QChar,&a1, &a1State))
        {
            sipCpp->setQueryDelimiters(*a0,*a1);
            sipReleaseType(a0,sipType_QChar,a0State);
            sipReleaseType(a1,sipType_QChar,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_setQueryDelimiters, doc_QUrlQuery_setQueryDelimiters);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_queryValueDelimiter, "QUrlQuery.queryValueDelimiter() -> str");

extern "C" {static PyObject *meth_QUrlQuery_queryValueDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryValueDelimiter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            QChar*sipRes;

            sipRes = new QChar(sipCpp->queryValueDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryValueDelimiter, doc_QUrlQuery_queryValueDelimiter);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_queryPairDelimiter, "QUrlQuery.queryPairDelimiter() -> str");

extern "C" {static PyObject *meth_QUrlQuery_queryPairDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryPairDelimiter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUrlQuery, &sipCpp))
        {
            QChar*sipRes;

            sipRes = new QChar(sipCpp->queryPairDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryPairDelimiter, doc_QUrlQuery_queryPairDelimiter);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_setQueryItems, "QUrlQuery.setQueryItems(list-of-tuple-of-QString-QString)");

extern "C" {static PyObject *meth_QUrlQuery_setQueryItems(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_setQueryItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QPair<QString,QString> >* a0;
        int a0State = 0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QList_0600QPair_0100QString_0100QString,&a0, &a0State))
        {
            sipCpp->setQueryItems(*a0);
            sipReleaseType(const_cast<QList<QPair<QString,QString> > *>(a0),sipType_QList_0600QPair_0100QString_0100QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_setQueryItems, doc_QUrlQuery_setQueryItems);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_queryItems, "QUrlQuery.queryItems(QUrl.ComponentFormattingOptions options=QUrl.PrettyDecoded) -> list-of-tuple-of-QString-QString");

extern "C" {static PyObject *meth_QUrlQuery_queryItems(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryItems(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions a0def = QUrl::PrettyDecoded;
        QUrl::ComponentFormattingOptions* a0 = &a0def;
        int a0State = 0;
        const QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            QList<QPair<QString,QString> >*sipRes;

            sipRes = new QList<QPair<QString,QString> >(sipCpp->queryItems(*a0));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QString_0100QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryItems, doc_QUrlQuery_queryItems);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_hasQueryItem, "QUrlQuery.hasQueryItem(str) -> bool");

extern "C" {static PyObject *meth_QUrlQuery_hasQueryItem(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_hasQueryItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasQueryItem(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_hasQueryItem, doc_QUrlQuery_hasQueryItem);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_addQueryItem, "QUrlQuery.addQueryItem(str, str)");

extern "C" {static PyObject *meth_QUrlQuery_addQueryItem(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_addQueryItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->addQueryItem(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_addQueryItem, doc_QUrlQuery_addQueryItem);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_removeQueryItem, "QUrlQuery.removeQueryItem(str)");

extern "C" {static PyObject *meth_QUrlQuery_removeQueryItem(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_removeQueryItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->removeQueryItem(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_removeQueryItem, doc_QUrlQuery_removeQueryItem);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_queryItemValue, "QUrlQuery.queryItemValue(str, QUrl.ComponentFormattingOptions options=QUrl.PrettyDecoded) -> str");

extern "C" {static PyObject *meth_QUrlQuery_queryItemValue(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_queryItemValue(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUrl::ComponentFormattingOptions a1def = QUrl::PrettyDecoded;
        QUrl::ComponentFormattingOptions* a1 = &a1def;
        int a1State = 0;
        const QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QUrl_ComponentFormattingOptions, &a1, &a1State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->queryItemValue(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QUrl_ComponentFormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_queryItemValue, doc_QUrlQuery_queryItemValue);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_allQueryItemValues, "QUrlQuery.allQueryItemValues(str, QUrl.ComponentFormattingOptions options=QUrl.PrettyDecoded) -> list-of-str");

extern "C" {static PyObject *meth_QUrlQuery_allQueryItemValues(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_allQueryItemValues(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUrl::ComponentFormattingOptions a1def = QUrl::PrettyDecoded;
        QUrl::ComponentFormattingOptions* a1 = &a1def;
        int a1State = 0;
        const QUrlQuery *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_options,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QUrl_ComponentFormattingOptions, &a1, &a1State))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->allQueryItemValues(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QUrl_ComponentFormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_allQueryItemValues, doc_QUrlQuery_allQueryItemValues);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_removeAllQueryItems, "QUrlQuery.removeAllQueryItems(str)");

extern "C" {static PyObject *meth_QUrlQuery_removeAllQueryItems(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_removeAllQueryItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUrlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUrlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->removeAllQueryItems(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_removeAllQueryItems, doc_QUrlQuery_removeAllQueryItems);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_defaultQueryValueDelimiter, "QUrlQuery.defaultQueryValueDelimiter() -> str");

extern "C" {static PyObject *meth_QUrlQuery_defaultQueryValueDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_defaultQueryValueDelimiter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QChar*sipRes;

            sipRes = new QChar(QUrlQuery::defaultQueryValueDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_defaultQueryValueDelimiter, doc_QUrlQuery_defaultQueryValueDelimiter);

    return NULL;
}


PyDoc_STRVAR(doc_QUrlQuery_defaultQueryPairDelimiter, "QUrlQuery.defaultQueryPairDelimiter() -> str");

extern "C" {static PyObject *meth_QUrlQuery_defaultQueryPairDelimiter(PyObject *, PyObject *);}
static PyObject *meth_QUrlQuery_defaultQueryPairDelimiter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QChar*sipRes;

            sipRes = new QChar(QUrlQuery::defaultQueryPairDelimiter());

            return sipConvertFromNewType(sipRes,sipType_QChar,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUrlQuery, sipName_defaultQueryPairDelimiter, doc_QUrlQuery_defaultQueryPairDelimiter);

    return NULL;
}


extern "C" {static PyObject *slot_QUrlQuery___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUrlQuery___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrlQuery *sipCpp = reinterpret_cast<QUrlQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrlQuery));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrlQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUrlQuery, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QUrlQuery::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUrlQuery,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrlQuery___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUrlQuery___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrlQuery *sipCpp = reinterpret_cast<QUrlQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrlQuery));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrlQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUrlQuery, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QUrlQuery::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUrlQuery,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QUrlQuery(void *, const sipTypeDef *);}
static void *cast_QUrlQuery(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUrlQuery)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUrlQuery(void *, int);}
static void release_QUrlQuery(void *sipCppV,int)
{
    delete reinterpret_cast<QUrlQuery *>(sipCppV);
}


extern "C" {static void assign_QUrlQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QUrlQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUrlQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUrlQuery *>(sipSrc);
}


extern "C" {static void *array_QUrlQuery(SIP_SSIZE_T);}
static void *array_QUrlQuery(SIP_SSIZE_T sipNrElem)
{
    return new QUrlQuery[sipNrElem];
}


extern "C" {static void *copy_QUrlQuery(const void *, SIP_SSIZE_T);}
static void *copy_QUrlQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUrlQuery(reinterpret_cast<const QUrlQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUrlQuery(sipSimpleWrapper *);}
static void dealloc_QUrlQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUrlQuery(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QUrlQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUrlQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QUrlQuery *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QUrlQuery();

            return sipCpp;
        }
    }

    {
        const QUrl* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QUrl, &a0))
        {
            sipCpp = new QUrlQuery(*a0);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QUrlQuery(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QUrlQuery* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QUrlQuery, &a0))
        {
            sipCpp = new QUrlQuery(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUrlQuery[] = {
    {(void *)slot_QUrlQuery___ne__, ne_slot},
    {(void *)slot_QUrlQuery___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QUrlQuery[] = {
    {SIP_MLNAME_CAST(sipName_addQueryItem), meth_QUrlQuery_addQueryItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_addQueryItem)},
    {SIP_MLNAME_CAST(sipName_allQueryItemValues), (PyCFunction)meth_QUrlQuery_allQueryItemValues, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUrlQuery_allQueryItemValues)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QUrlQuery_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_clear)},
    {SIP_MLNAME_CAST(sipName_defaultQueryPairDelimiter), meth_QUrlQuery_defaultQueryPairDelimiter, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_defaultQueryPairDelimiter)},
    {SIP_MLNAME_CAST(sipName_defaultQueryValueDelimiter), meth_QUrlQuery_defaultQueryValueDelimiter, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_defaultQueryValueDelimiter)},
    {SIP_MLNAME_CAST(sipName_hasQueryItem), meth_QUrlQuery_hasQueryItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_hasQueryItem)},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QUrlQuery_isDetached, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_isDetached)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QUrlQuery_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_isEmpty)},
    {SIP_MLNAME_CAST(sipName_query), (PyCFunction)meth_QUrlQuery_query, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUrlQuery_query)},
    {SIP_MLNAME_CAST(sipName_queryItemValue), (PyCFunction)meth_QUrlQuery_queryItemValue, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUrlQuery_queryItemValue)},
    {SIP_MLNAME_CAST(sipName_queryItems), (PyCFunction)meth_QUrlQuery_queryItems, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUrlQuery_queryItems)},
    {SIP_MLNAME_CAST(sipName_queryPairDelimiter), meth_QUrlQuery_queryPairDelimiter, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_queryPairDelimiter)},
    {SIP_MLNAME_CAST(sipName_queryValueDelimiter), meth_QUrlQuery_queryValueDelimiter, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_queryValueDelimiter)},
    {SIP_MLNAME_CAST(sipName_removeAllQueryItems), meth_QUrlQuery_removeAllQueryItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_removeAllQueryItems)},
    {SIP_MLNAME_CAST(sipName_removeQueryItem), meth_QUrlQuery_removeQueryItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_removeQueryItem)},
    {SIP_MLNAME_CAST(sipName_setQuery), meth_QUrlQuery_setQuery, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_setQuery)},
    {SIP_MLNAME_CAST(sipName_setQueryDelimiters), meth_QUrlQuery_setQueryDelimiters, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_setQueryDelimiters)},
    {SIP_MLNAME_CAST(sipName_setQueryItems), meth_QUrlQuery_setQueryItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_setQueryItems)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QUrlQuery_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QUrlQuery_swap)},
    {SIP_MLNAME_CAST(sipName_toString), (PyCFunction)meth_QUrlQuery_toString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUrlQuery_toString)}
};

PyDoc_STRVAR(doc_QUrlQuery, "\1QUrlQuery()\n"
    "QUrlQuery(QUrl)\n"
    "QUrlQuery(str)\n"
    "QUrlQuery(QUrlQuery)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QUrlQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QUrlQuery,
        {0}
    },
    {
        sipNameNr_QUrlQuery,
        {0, 0, 1},
        20, methods_QUrlQuery,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUrlQuery,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUrlQuery,
    init_type_QUrlQuery,
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
    dealloc_QUrlQuery,
    assign_QUrlQuery,
    array_QUrlQuery,
    copy_QUrlQuery,
    release_QUrlQuery,
    cast_QUrlQuery,
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
