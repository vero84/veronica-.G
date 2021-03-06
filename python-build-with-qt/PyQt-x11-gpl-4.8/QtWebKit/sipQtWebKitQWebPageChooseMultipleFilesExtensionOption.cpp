/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:59 2012
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

#include "sipAPIQtWebKit.h"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 239 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 246 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 301 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 363 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 380 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 51 "sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.cpp"

#line 78 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebframe.sip"
#include <qwebframe.h>
#line 55 "sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 58 "sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ChooseMultipleFilesExtensionOption(void *, const sipTypeDef *);}
static void *cast_QWebPage_ChooseMultipleFilesExtensionOption(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWebPage_ChooseMultipleFilesExtensionOption)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QWebPage_ExtensionOption)->ctd_cast((QWebPage::ExtensionOption *)(QWebPage::ChooseMultipleFilesExtensionOption *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ChooseMultipleFilesExtensionOption(void *, int);}
static void release_QWebPage_ChooseMultipleFilesExtensionOption(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionOption *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPage_ChooseMultipleFilesExtensionOption(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ChooseMultipleFilesExtensionOption(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionOption *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ChooseMultipleFilesExtensionOption *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ChooseMultipleFilesExtensionOption(SIP_SSIZE_T);}
static void *array_QWebPage_ChooseMultipleFilesExtensionOption(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ChooseMultipleFilesExtensionOption[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ChooseMultipleFilesExtensionOption(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ChooseMultipleFilesExtensionOption(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ChooseMultipleFilesExtensionOption(reinterpret_cast<const QWebPage::ChooseMultipleFilesExtensionOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ChooseMultipleFilesExtensionOption(sipSimpleWrapper *);}
static void dealloc_QWebPage_ChooseMultipleFilesExtensionOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ChooseMultipleFilesExtensionOption(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QWebPage_ChooseMultipleFilesExtensionOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWebPage_ChooseMultipleFilesExtensionOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ChooseMultipleFilesExtensionOption *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ChooseMultipleFilesExtensionOption();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPage::ChooseMultipleFilesExtensionOption * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ChooseMultipleFilesExtensionOption, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ChooseMultipleFilesExtensionOption(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebPage_ChooseMultipleFilesExtensionOption[] = {{27, 255, 1}};


extern "C" {static PyObject *varget_QWebPage_ChooseMultipleFilesExtensionOption_parentFrame(void *, PyObject *);}
static PyObject *varget_QWebPage_ChooseMultipleFilesExtensionOption_parentFrame(void *sipSelf, PyObject *)
{
    QWebFrame *sipVal;
    QWebPage::ChooseMultipleFilesExtensionOption *sipCpp = reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionOption *>(sipSelf);

    sipVal = sipCpp->parentFrame;

    return sipConvertFromType(sipVal,sipType_QWebFrame, NULL);
}


extern "C" {static int varset_QWebPage_ChooseMultipleFilesExtensionOption_parentFrame(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ChooseMultipleFilesExtensionOption_parentFrame(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QWebFrame *sipVal;
    QWebPage::ChooseMultipleFilesExtensionOption *sipCpp = reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QWebFrame *>(sipForceConvertToType(sipPy,sipType_QWebFrame,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->parentFrame = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ChooseMultipleFilesExtensionOption_suggestedFileNames(void *, PyObject *);}
static PyObject *varget_QWebPage_ChooseMultipleFilesExtensionOption_suggestedFileNames(void *sipSelf, PyObject *)
{
    QStringList *sipVal;
    QWebPage::ChooseMultipleFilesExtensionOption *sipCpp = reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionOption *>(sipSelf);

    sipVal = &sipCpp->suggestedFileNames;

    return sipConvertFromType(sipVal,sipType_QStringList, NULL);
}


extern "C" {static int varset_QWebPage_ChooseMultipleFilesExtensionOption_suggestedFileNames(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ChooseMultipleFilesExtensionOption_suggestedFileNames(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStringList *sipVal;
    QWebPage::ChooseMultipleFilesExtensionOption *sipCpp = reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionOption *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStringList *>(sipForceConvertToType(sipPy,sipType_QStringList,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->suggestedFileNames = *sipVal;

    sipReleaseType(sipVal, sipType_QStringList, sipValState);

    return 0;
}

sipVariableDef variables_QWebPage_ChooseMultipleFilesExtensionOption[] = {
    {sipName_parentFrame, varget_QWebPage_ChooseMultipleFilesExtensionOption_parentFrame, varset_QWebPage_ChooseMultipleFilesExtensionOption_parentFrame, 0},
    {sipName_suggestedFileNames, varget_QWebPage_ChooseMultipleFilesExtensionOption_suggestedFileNames, varset_QWebPage_ChooseMultipleFilesExtensionOption_suggestedFileNames, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPage_ChooseMultipleFilesExtensionOption = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ChooseMultipleFilesExtensionOption,
        {0}
    },
    {
        sipNameNr_ChooseMultipleFilesExtensionOption,
        {20, 255, 0},
        0, 0,
        0, 0,
        2, variables_QWebPage_ChooseMultipleFilesExtensionOption,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QWebPage_ChooseMultipleFilesExtensionOption,
    0,
    init_QWebPage_ChooseMultipleFilesExtensionOption,
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
    dealloc_QWebPage_ChooseMultipleFilesExtensionOption,
    assign_QWebPage_ChooseMultipleFilesExtensionOption,
    array_QWebPage_ChooseMultipleFilesExtensionOption,
    copy_QWebPage_ChooseMultipleFilesExtensionOption,
    release_QWebPage_ChooseMultipleFilesExtensionOption,
    cast_QWebPage_ChooseMultipleFilesExtensionOption,
    0,
    0,
    0
},
    0,
    0,
    0
};
