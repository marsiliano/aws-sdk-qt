/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describethingregistrationtaskresponse.h"
#include "describethingregistrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeThingRegistrationTaskResponse
 * \brief The DescribeThingRegistrationTaskResponse class provides an interace for IoT DescribeThingRegistrationTask responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::describeThingRegistrationTask
 */

/*!
 * Constructs a DescribeThingRegistrationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThingRegistrationTaskResponse::DescribeThingRegistrationTaskResponse(
        const DescribeThingRegistrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingRegistrationTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeThingRegistrationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThingRegistrationTaskRequest * DescribeThingRegistrationTaskResponse::request() const
{
    Q_D(const DescribeThingRegistrationTaskResponse);
    return static_cast<const DescribeThingRegistrationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeThingRegistrationTask \a response.
 */
void DescribeThingRegistrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeThingRegistrationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeThingRegistrationTaskResponsePrivate
 * \brief The DescribeThingRegistrationTaskResponsePrivate class provides private implementation for DescribeThingRegistrationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeThingRegistrationTaskResponsePrivate object with public implementation \a q.
 */
DescribeThingRegistrationTaskResponsePrivate::DescribeThingRegistrationTaskResponsePrivate(
    DescribeThingRegistrationTaskResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeThingRegistrationTask response element from \a xml.
 */
void DescribeThingRegistrationTaskResponsePrivate::parseDescribeThingRegistrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingRegistrationTaskResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
