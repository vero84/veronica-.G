/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:18 2012
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

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 39 "sipQtGuiQIconEngine.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQIconEngine.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 46 "sipQtGuiQIconEngine.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 49 "sipQtGuiQIconEngine.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 52 "sipQtGuiQIconEngine.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 611 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 57 "sipQtGuiQIconEngine.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 60 "sipQtGuiQIconEngine.cpp"


class sipQIconEngine : public QIconEngine
{
public:
    sipQIconEngine();
    sipQIconEngine(const QIconEngine&);
    virtual ~sipQIconEngine();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void paint(QPainter *,const QRect&,QIcon::Mode,QIcon::State);
    QSize actualSize(const QSize&,QIcon::Mode,QIcon::State);
    QPixmap pixmap(const QSize&,QIcon::Mode,QIcon::State);
    void addPixmap(const QPixmap&,QIcon::Mode,QIcon::State);
    void addFile(const QString&,const QSize&,QIcon::Mode,QIcon::State);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconEngine(const sipQIconEngine &);
    sipQIconEngine &operator = (const sipQIconEngine &);

    char sipPyMethods[5];
};

sipQIconEngine::sipQIconEngine(): QIconEngine(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::sipQIconEngine(const QIconEngine& a0): QIconEngine(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::~sipQIconEngine()
{
    sipCommonDtor(sipPySelf);
}

void sipQIconEngine::paint(QPainter *a0,const QRect& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QIconEngine,sipName_paint);

    if (!meth)
        return;

    extern void sipVH_QtGui_182(sip_gilstate_t,PyObject *,QPainter *,const QRect&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_182(sipGILState,meth,a0,a1,a2,a3);
}

QSize sipQIconEngine::actualSize(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_actualSize);

    if (!meth)
        return QIconEngine::actualSize(a0,a1,a2);

    extern QSize sipVH_QtGui_181(sip_gilstate_t,PyObject *,const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_181(sipGILState,meth,a0,a1,a2);
}

QPixmap sipQIconEngine::pixmap(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_pixmap);

    if (!meth)
        return QIconEngine::pixmap(a0,a1,a2);

    extern QPixmap sipVH_QtGui_180(sip_gilstate_t,PyObject *,const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_180(sipGILState,meth,a0,a1,a2);
}

void sipQIconEngine::addPixmap(const QPixmap& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_addPixmap);

    if (!meth)
    {
        QIconEngine::addPixmap(a0,a1,a2);
        return;
    }

    extern void sipVH_QtGui_179(sip_gilstate_t,PyObject *,const QPixmap&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_179(sipGILState,meth,a0,a1,a2);
}

void sipQIconEngine::addFile(const QString& a0,const QSize& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_addFile);

    if (!meth)
    {
        QIconEngine::addFile(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_178(sip_gilstate_t,PyObject *,const QString&,const QSize&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_178(sipGILState,meth,a0,a1,a2,a3);
}


extern "C" {static PyObject *meth_QIconEngine_paint(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_paint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPainter * a0;
        const QRect * a1;
        QIcon::Mode a2;
        QIcon::State a3;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPainter, &a0, sipType_QRect, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIconEngine, sipName_paint);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->paint(a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_paint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QIconEngine_actualSize(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_actualSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize * a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((sipSelfWasArg ? sipCpp->QIconEngine::actualSize(*a0,a1,a2) : sipCpp->actualSize(*a0,a1,a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_actualSize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QIconEngine_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize * a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QPixmap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap((sipSelfWasArg ? sipCpp->QIconEngine::pixmap(*a0,a1,a2) : sipCpp->pixmap(*a0,a1,a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_pixmap, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QIconEngine_addPixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QPixmap * a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPixmap, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QIconEngine::addPixmap(*a0,a1,a2) : sipCpp->addPixmap(*a0,a1,a2));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addPixmap, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QIconEngine_addFile(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        const QSize * a1;
        QIcon::Mode a2;
        QIcon::State a3;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QIconEngine::addFile(*a0,*a1,a2,a3) : sipCpp->addFile(*a0,*a1,a2,a3));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addFile, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QIconEngine(void *, const sipTypeDef *);}
static void *cast_QIconEngine(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QIconEngine)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngine(void *, int);}
static void release_QIconEngine(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconEngine *>(sipCppV);
    else
        delete reinterpret_cast<QIconEngine *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QIconEngine(sipSimpleWrapper *);}
static void dealloc_QIconEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQIconEngine *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QIconEngine(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QIconEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QIconEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconEngine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQIconEngine();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIconEngine * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQIconEngine(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QIconEngine[] = {
    {SIP_MLNAME_CAST(sipName_actualSize), meth_QIconEngine_actualSize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addFile), meth_QIconEngine_addFile, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addPixmap), meth_QIconEngine_addPixmap, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_paint), meth_QIconEngine_paint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QIconEngine_pixmap, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QIconEngine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QIconEngine,
        {0}
    },
    {
        sipNameNr_QIconEngine,
        {0, 0, 1},
        5, methods_QIconEngine,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QIconEngine,
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
    dealloc_QIconEngine,
    0,
    0,
    0,
    release_QIconEngine,
    cast_QIconEngine,
    0,
    0,
    0
},
    0,
    0,
    0
};
