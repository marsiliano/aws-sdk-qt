/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listthingsinbillinggroupresponse.h"
#include "listthingsinbillinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingsInBillingGroupResponse
 * \brief The ListThingsInBillingGroupResponse class provides an interace for IoT ListThingsInBillingGroup responses.
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
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::listThingsInBillingGroup
 */

/*!
 * Constructs a ListThingsInBillingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListThingsInBillingGroupResponse::ListThingsInBillingGroupResponse(
        const ListThingsInBillingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingsInBillingGroupResponsePrivate(this), parent)
{
    setRequest(new ListThingsInBillingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThingsInBillingGroupRequest * ListThingsInBillingGroupResponse::request() const
{
    Q_D(const ListThingsInBillingGroupResponse);
    return static_cast<const ListThingsInBillingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListThingsInBillingGroup \a response.
 */
void ListThingsInBillingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThingsInBillingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListThingsInBillingGroupResponsePrivate
 * \brief The ListThingsInBillingGroupResponsePrivate class provides private implementation for ListThingsInBillingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListThingsInBillingGroupResponsePrivate object with public implementation \a q.
 */
ListThingsInBillingGroupResponsePrivate::ListThingsInBillingGroupResponsePrivate(
    ListThingsInBillingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListThingsInBillingGroup response element from \a xml.
 */
void ListThingsInBillingGroupResponsePrivate::parseListThingsInBillingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingsInBillingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
