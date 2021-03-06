/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qmime.sip"
#include <qmime.h>
#line 39 "sipQtGuiQMimeSource.cpp"

#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 43 "sipQtGuiQMimeSource.cpp"


class sipQMimeSource : public QMimeSource
{
public:
    sipQMimeSource();
    sipQMimeSource(const QMimeSource&);
    virtual ~sipQMimeSource();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char * format(int) const;
    bool provides(const char *) const;
    QByteArray encodedData(const char *) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMimeSource(const sipQMimeSource &);
    sipQMimeSource &operator = (const sipQMimeSource &);

    char sipPyMethods[3];
};

sipQMimeSource::sipQMimeSource(): QMimeSource(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMimeSource::sipQMimeSource(const QMimeSource& a0): QMimeSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMimeSource::~sipQMimeSource()
{
    sipCommonDtor(sipPySelf);
}

const char * sipQMimeSource::format(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QMimeSource,sipName_format);

    if (!meth)
        return 0;

    extern const char * sipVH_QtGui_146(sip_gilstate_t,PyObject *,int,int,sipSimpleWrapper *);

    return sipVH_QtGui_146(sipGILState,meth,a0,-79,sipPySelf);
}

bool sipQMimeSource::provides(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_provides);

    if (!meth)
        return QMimeSource::provides(a0);

    extern bool sipVH_QtGui_145(sip_gilstate_t,PyObject *,const char *);

    return sipVH_QtGui_145(sipGILState,meth,a0);
}

QByteArray sipQMimeSource::encodedData(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QMimeSource,sipName_encodedData);

    if (!meth)
        return QByteArray();

    extern QByteArray sipVH_QtGui_144(sip_gilstate_t,PyObject *,const char *);

    return sipVH_QtGui_144(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QMimeSource_format(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMimeSource_format(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0 = 0;
        QMimeSource *sipCpp;

        static const char *sipKwdList[] = {
            sipName_i,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QMimeSource, &sipCpp, &a0))
        {
            const char *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMimeSource, sipName_format);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->format(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeSource, sipName_format, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMimeSource_provides(PyObject *, PyObject *);}
static PyObject *meth_QMimeSource_provides(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char * a0;
        QMimeSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QMimeSource, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QMimeSource::provides(a0) : sipCpp->provides(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeSource, sipName_provides, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMimeSource_encodedData(PyObject *, PyObject *);}
static PyObject *meth_QMimeSource_encodedData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char * a0;
        QMimeSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QMimeSource, &sipCpp, &a0))
        {
            QByteArray *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMimeSource, sipName_encodedData);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->encodedData(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMimeSource, sipName_encodedData, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMimeSource(void *, const sipTypeDef *);}
static void *cast_QMimeSource(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMimeSource)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMimeSource(void *, int);}
static void release_QMimeSource(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMimeSource *>(sipCppV);
    else
        delete reinterpret_cast<QMimeSource *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMimeSource(sipSimpleWrapper *);}
static void dealloc_QMimeSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMimeSource *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMimeSource(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QMimeSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMimeSource(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMimeSource *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMimeSource();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QMimeSource * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMimeSource, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMimeSource(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMimeSource[] = {
    {SIP_MLNAME_CAST(sipName_encodedData), meth_QMimeSource_encodedData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_format), (PyCFunction)meth_QMimeSource_format, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_provides), meth_QMimeSource_provides, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QMimeSource = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QMimeSource,
        {0}
    },
    {
        sipNameNr_QMimeSource,
        {0, 0, 1},
        3, methods_QMimeSource,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QMimeSource,
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
    dealloc_QMimeSource,
    0,
    0,
    0,
    release_QMimeSource,
    cast_QMimeSource,
    0,
    0,
    0
},
    0,
    0,
    0
};
