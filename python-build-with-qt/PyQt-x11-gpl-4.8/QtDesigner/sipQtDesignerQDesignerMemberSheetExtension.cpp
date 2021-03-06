/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:10 2012
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

#include "sipAPIQtDesigner.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtDesigner/membersheet.sip"
#include <membersheet.h>
#line 39 "sipQtDesignerQDesignerMemberSheetExtension.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 43 "sipQtDesignerQDesignerMemberSheetExtension.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 46 "sipQtDesignerQDesignerMemberSheetExtension.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtDesignerQDesignerMemberSheetExtension.cpp"


class sipQDesignerMemberSheetExtension : public QDesignerMemberSheetExtension
{
public:
    sipQDesignerMemberSheetExtension();
    sipQDesignerMemberSheetExtension(const QDesignerMemberSheetExtension&);
    virtual ~sipQDesignerMemberSheetExtension();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int count() const;
    int indexOf(const QString&) const;
    QString memberName(int) const;
    QString memberGroup(int) const;
    void setMemberGroup(int,const QString&);
    bool isVisible(int) const;
    void setVisible(int,bool);
    bool isSignal(int) const;
    bool isSlot(int) const;
    bool inheritedFromWidget(int) const;
    QString declaredInClass(int) const;
    QString signature(int) const;
    QList<QByteArray> parameterTypes(int) const;
    QList<QByteArray> parameterNames(int) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerMemberSheetExtension(const sipQDesignerMemberSheetExtension &);
    sipQDesignerMemberSheetExtension &operator = (const sipQDesignerMemberSheetExtension &);

    char sipPyMethods[14];
};

sipQDesignerMemberSheetExtension::sipQDesignerMemberSheetExtension(): QDesignerMemberSheetExtension(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerMemberSheetExtension::sipQDesignerMemberSheetExtension(const QDesignerMemberSheetExtension& a0): QDesignerMemberSheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerMemberSheetExtension::~sipQDesignerMemberSheetExtension()
{
    sipCommonDtor(sipPySelf);
}

int sipQDesignerMemberSheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_count);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

int sipQDesignerMemberSheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_indexOf);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtGui_112)(sip_gilstate_t,PyObject *,const QString&);

    return ((sipVH_QtGui_112)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[112]))(sipGILState,meth,a0);
}

QString sipQDesignerMemberSheetExtension::memberName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_memberName);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

QString sipQDesignerMemberSheetExtension::memberGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_memberGroup);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

void sipQDesignerMemberSheetExtension::setMemberGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_setMemberGroup);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t,PyObject *,int,const QString&);

    sipVH_QtDesigner_4(sipGILState,meth,a0,a1);
}

bool sipQDesignerMemberSheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_isVisible);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

void sipQDesignerMemberSheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_setVisible);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_3(sip_gilstate_t,PyObject *,int,bool);

    sipVH_QtDesigner_3(sipGILState,meth,a0,a1);
}

bool sipQDesignerMemberSheetExtension::isSignal(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_isSignal);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

bool sipQDesignerMemberSheetExtension::isSlot(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_isSlot);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

bool sipQDesignerMemberSheetExtension::inheritedFromWidget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_inheritedFromWidget);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState,meth,a0);
}

QString sipQDesignerMemberSheetExtension::declaredInClass(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_declaredInClass);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

QString sipQDesignerMemberSheetExtension::signature(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_signature);

    if (!meth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t,PyObject *,int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState,meth,a0);
}

QList<QByteArray> sipQDesignerMemberSheetExtension::parameterTypes(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_parameterTypes);

    if (!meth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_5(sip_gilstate_t,PyObject *,int);

    return sipVH_QtDesigner_5(sipGILState,meth,a0);
}

QList<QByteArray> sipQDesignerMemberSheetExtension::parameterNames(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_parameterNames);

    if (!meth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_5(sip_gilstate_t,PyObject *,int);

    return sipVH_QtDesigner_5(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_count(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_count);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_count, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_indexOf(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_indexOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_indexOf);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexOf(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_indexOf, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_memberName(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_memberName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_memberName);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->memberName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_memberName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_memberGroup(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_memberGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_memberGroup);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->memberGroup(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_memberGroup, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_setMemberGroup(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_setMemberGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QString * a1;
        int a1State = 0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_setMemberGroup);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMemberGroup(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_setMemberGroup, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_isVisible);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_isVisible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        bool a1;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_setVisible);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_setVisible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_isSignal(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_isSignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_isSignal);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSignal(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_isSignal, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_isSlot(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_isSlot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_isSlot);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSlot(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_isSlot, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_inheritedFromWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_inheritedFromWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_inheritedFromWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->inheritedFromWidget(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_inheritedFromWidget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_declaredInClass(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_declaredInClass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_declaredInClass);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->declaredInClass(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_declaredInClass, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_signature(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_signature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_signature);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->signature(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_signature, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_parameterTypes(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_parameterTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QList<QByteArray> *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_parameterTypes);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->parameterTypes(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_parameterTypes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_parameterNames(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_parameterNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QList<QByteArray> *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_parameterNames);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->parameterNames(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_parameterNames, NULL);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QDesignerMemberSheetExtension___len__(PyObject *);}
static SIP_SSIZE_T slot_QDesignerMemberSheetExtension___len__(PyObject *sipSelf)
{
    QDesignerMemberSheetExtension *sipCpp = reinterpret_cast<QDesignerMemberSheetExtension *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerMemberSheetExtension));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 823 "sipQtDesignerQDesignerMemberSheetExtension.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerMemberSheetExtension(void *, const sipTypeDef *);}
static void *cast_QDesignerMemberSheetExtension(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerMemberSheetExtension)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerMemberSheetExtension(void *, int);}
static void release_QDesignerMemberSheetExtension(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerMemberSheetExtension *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerMemberSheetExtension *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerMemberSheetExtension(sipSimpleWrapper *);}
static void dealloc_QDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerMemberSheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerMemberSheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QDesignerMemberSheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerMemberSheetExtension *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerMemberSheetExtension();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerMemberSheetExtension * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerMemberSheetExtension, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerMemberSheetExtension(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDesignerMemberSheetExtension[] = {
    {(void *)slot_QDesignerMemberSheetExtension___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDesignerMemberSheetExtension[] = {
    {SIP_MLNAME_CAST(sipName_count), meth_QDesignerMemberSheetExtension_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_declaredInClass), meth_QDesignerMemberSheetExtension_declaredInClass, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_indexOf), meth_QDesignerMemberSheetExtension_indexOf, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inheritedFromWidget), meth_QDesignerMemberSheetExtension_inheritedFromWidget, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isSignal), meth_QDesignerMemberSheetExtension_isSignal, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isSlot), meth_QDesignerMemberSheetExtension_isSlot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QDesignerMemberSheetExtension_isVisible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_memberGroup), meth_QDesignerMemberSheetExtension_memberGroup, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_memberName), meth_QDesignerMemberSheetExtension_memberName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parameterNames), meth_QDesignerMemberSheetExtension_parameterNames, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parameterTypes), meth_QDesignerMemberSheetExtension_parameterTypes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMemberGroup), meth_QDesignerMemberSheetExtension_setMemberGroup, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QDesignerMemberSheetExtension_setVisible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_signature), meth_QDesignerMemberSheetExtension_signature, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerMemberSheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerMemberSheetExtension,
        {0}
    },
    {
        sipNameNr_QDesignerMemberSheetExtension,
        {0, 0, 1},
        14, methods_QDesignerMemberSheetExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDesignerMemberSheetExtension,
    init_QDesignerMemberSheetExtension,
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
    dealloc_QDesignerMemberSheetExtension,
    0,
    0,
    0,
    release_QDesignerMemberSheetExtension,
    cast_QDesignerMemberSheetExtension,
    0,
    0,
    0
},
    0,
    0,
    0
};
