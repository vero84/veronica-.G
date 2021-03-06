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

#line 53 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 77 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 41 "sipQtGuiQIconEngineV2AvailableSizesArgument.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 45 "sipQtGuiQIconEngineV2AvailableSizesArgument.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "sipQtGuiQIconEngineV2AvailableSizesArgument.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 51 "sipQtGuiQIconEngineV2AvailableSizesArgument.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QIconEngineV2_AvailableSizesArgument(void *, const sipTypeDef *);}
static void *cast_QIconEngineV2_AvailableSizesArgument(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QIconEngineV2_AvailableSizesArgument)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngineV2_AvailableSizesArgument(void *, int);}
static void release_QIconEngineV2_AvailableSizesArgument(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QIconEngineV2_AvailableSizesArgument(void *, SIP_SSIZE_T, const void *);}
static void assign_QIconEngineV2_AvailableSizesArgument(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QIconEngineV2::AvailableSizesArgument *>(sipSrc);
}


extern "C" {static void *array_QIconEngineV2_AvailableSizesArgument(SIP_SSIZE_T);}
static void *array_QIconEngineV2_AvailableSizesArgument(SIP_SSIZE_T sipNrElem)
{
    return new QIconEngineV2::AvailableSizesArgument[sipNrElem];
}


extern "C" {static void *copy_QIconEngineV2_AvailableSizesArgument(const void *, SIP_SSIZE_T);}
static void *copy_QIconEngineV2_AvailableSizesArgument(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QIconEngineV2::AvailableSizesArgument(reinterpret_cast<const QIconEngineV2::AvailableSizesArgument *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIconEngineV2_AvailableSizesArgument(sipSimpleWrapper *);}
static void dealloc_QIconEngineV2_AvailableSizesArgument(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QIconEngineV2_AvailableSizesArgument(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QIconEngineV2_AvailableSizesArgument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QIconEngineV2_AvailableSizesArgument(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QIconEngineV2::AvailableSizesArgument *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIconEngineV2::AvailableSizesArgument();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QIconEngineV2::AvailableSizesArgument * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngineV2_AvailableSizesArgument, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIconEngineV2::AvailableSizesArgument(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QIconEngineV2_AvailableSizesArgument_mode(void *, PyObject *);}
static PyObject *varget_QIconEngineV2_AvailableSizesArgument_mode(void *sipSelf, PyObject *)
{
    QIcon::Mode sipVal;
    QIconEngineV2::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipSelf);

    sipVal = sipCpp->mode;

    return sipConvertFromEnum(sipVal, sipType_QIcon_Mode);
}


extern "C" {static int varset_QIconEngineV2_AvailableSizesArgument_mode(void *, PyObject *, PyObject *);}
static int varset_QIconEngineV2_AvailableSizesArgument_mode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon::Mode sipVal;
    QIconEngineV2::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipSelf);

    sipVal = (QIcon::Mode)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QIconEngineV2_AvailableSizesArgument_sizes(void *, PyObject *);}
static PyObject *varget_QIconEngineV2_AvailableSizesArgument_sizes(void *sipSelf, PyObject *)
{
    QList<QSize> *sipVal;
    QIconEngineV2::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipSelf);

    sipVal = &sipCpp->sizes;

    return sipConvertFromType(sipVal,sipType_QList_0100QSize, NULL);
}


extern "C" {static int varset_QIconEngineV2_AvailableSizesArgument_sizes(void *, PyObject *, PyObject *);}
static int varset_QIconEngineV2_AvailableSizesArgument_sizes(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QList<QSize> *sipVal;
    QIconEngineV2::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QList<QSize> *>(sipForceConvertToType(sipPy,sipType_QList_0100QSize,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->sizes = *sipVal;

    sipReleaseType(sipVal, sipType_QList_0100QSize, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QIconEngineV2_AvailableSizesArgument_state(void *, PyObject *);}
static PyObject *varget_QIconEngineV2_AvailableSizesArgument_state(void *sipSelf, PyObject *)
{
    QIcon::State sipVal;
    QIconEngineV2::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipSelf);

    sipVal = sipCpp->state;

    return sipConvertFromEnum(sipVal, sipType_QIcon_State);
}


extern "C" {static int varset_QIconEngineV2_AvailableSizesArgument_state(void *, PyObject *, PyObject *);}
static int varset_QIconEngineV2_AvailableSizesArgument_state(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon::State sipVal;
    QIconEngineV2::AvailableSizesArgument *sipCpp = reinterpret_cast<QIconEngineV2::AvailableSizesArgument *>(sipSelf);

    sipVal = (QIcon::State)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->state = sipVal;

    return 0;
}

sipVariableDef variables_QIconEngineV2_AvailableSizesArgument[] = {
    {sipName_mode, varget_QIconEngineV2_AvailableSizesArgument_mode, varset_QIconEngineV2_AvailableSizesArgument_mode, 0},
    {sipName_sizes, varget_QIconEngineV2_AvailableSizesArgument_sizes, varset_QIconEngineV2_AvailableSizesArgument_sizes, 0},
    {sipName_state, varget_QIconEngineV2_AvailableSizesArgument_state, varset_QIconEngineV2_AvailableSizesArgument_state, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QIconEngineV2_AvailableSizesArgument = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QIconEngineV2__AvailableSizesArgument,
        {0}
    },
    {
        sipNameNr_AvailableSizesArgument,
        {228, 255, 0},
        0, 0,
        0, 0,
        3, variables_QIconEngineV2_AvailableSizesArgument,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QIconEngineV2_AvailableSizesArgument,
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
    dealloc_QIconEngineV2_AvailableSizesArgument,
    assign_QIconEngineV2_AvailableSizesArgument,
    array_QIconEngineV2_AvailableSizesArgument,
    copy_QIconEngineV2_AvailableSizesArgument,
    release_QIconEngineV2_AvailableSizesArgument,
    cast_QIconEngineV2_AvailableSizesArgument,
    0,
    0,
    0
},
    0,
    0,
    0
};
