/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Mobility Components.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QCAMERACAPTUREBUFFERFORMATCONTROL_H
#define QCAMERACAPTUREBUFFERFORMATCONTROL_H

#include <qmediacontrol.h>
#include <qcameraimagecapture.h>

QT_BEGIN_NAMESPACE

class Q_MULTIMEDIA_EXPORT QCameraCaptureBufferFormatControl : public QMediaControl
{
    Q_OBJECT
public:
    ~QCameraCaptureBufferFormatControl();

    virtual QList<QVideoFrame::PixelFormat> supportedBufferFormats() const = 0;
    virtual QVideoFrame::PixelFormat bufferFormat() const = 0;
    virtual void setBufferFormat(QVideoFrame::PixelFormat format) = 0;

Q_SIGNALS:
    void bufferFormatChanged(QVideoFrame::PixelFormat);

protected:
    QCameraCaptureBufferFormatControl(QObject* parent = 0);
};

#define QCameraCaptureBufferFormatControl_iid "com.nokia.Qt.QCameraCaptureBufferFormatControl/1.0"
Q_MEDIA_DECLARE_CONTROL(QCameraCaptureBufferFormatControl, QCameraCaptureBufferFormatControl_iid)

QT_END_NAMESPACE

#endif

