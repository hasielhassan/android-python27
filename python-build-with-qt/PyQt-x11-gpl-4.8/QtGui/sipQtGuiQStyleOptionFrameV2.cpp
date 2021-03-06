/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
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

#line 420 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionFrameV2.cpp"

#line 420 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 43 "sipQtGuiQStyleOptionFrameV2.cpp"
#line 375 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 46 "sipQtGuiQStyleOptionFrameV2.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 49 "sipQtGuiQStyleOptionFrameV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionFrameV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFrameV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionFrameV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionFrame)->ctd_cast((QStyleOptionFrame *)(QStyleOptionFrameV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrameV2(void *, int);}
static void release_QStyleOptionFrameV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionFrameV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionFrameV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrameV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFrameV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFrameV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrameV2(SIP_SSIZE_T);}
static void *array_QStyleOptionFrameV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFrameV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrameV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrameV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFrameV2(reinterpret_cast<const QStyleOptionFrameV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrameV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrameV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFrameV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QStyleOptionFrameV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionFrameV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFrameV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrameV2 * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrameV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrame * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFrameV2[] = {{512, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFrameV2[] = {
    {sipName_Flat, QStyleOptionFrameV2::Flat, 516},
    {sipName_None, QStyleOptionFrameV2::None, 516},
    {sipName_Version, QStyleOptionFrameV2::Version, 518},
};


extern "C" {static PyObject *varget_QStyleOptionFrameV2_features(void *, PyObject *);}
static PyObject *varget_QStyleOptionFrameV2_features(void *sipSelf, PyObject *)
{
    QStyleOptionFrameV2::FrameFeatures *sipVal;
    QStyleOptionFrameV2 *sipCpp = reinterpret_cast<QStyleOptionFrameV2 *>(sipSelf);

    sipVal = &sipCpp->features;

    return sipConvertFromType(sipVal,sipType_QStyleOptionFrameV2_FrameFeatures, NULL);
}


extern "C" {static int varset_QStyleOptionFrameV2_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrameV2_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionFrameV2::FrameFeatures *sipVal;
    QStyleOptionFrameV2 *sipCpp = reinterpret_cast<QStyleOptionFrameV2 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrameV2_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionFrameV2[] = {
    {sipName_features, varget_QStyleOptionFrameV2_features, varset_QStyleOptionFrameV2_features, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionFrameV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrameV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionFrameV2,
        {0, 0, 1},
        0, 0,
        3, enummembers_QStyleOptionFrameV2,
        1, variables_QStyleOptionFrameV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStyleOptionFrameV2,
    0,
    init_QStyleOptionFrameV2,
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
    dealloc_QStyleOptionFrameV2,
    assign_QStyleOptionFrameV2,
    array_QStyleOptionFrameV2,
    copy_QStyleOptionFrameV2,
    release_QStyleOptionFrameV2,
    cast_QStyleOptionFrameV2,
    0,
    0,
    0
},
    0,
    0,
    0
};
