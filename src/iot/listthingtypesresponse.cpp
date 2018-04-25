/*
    Copyright 2013-2018 Paul Colby

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

#include "listthingtypesresponse.h"
#include "listthingtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListThingTypesResponse
 * \brief The ListThingTypesResponse class provides an interace for IoT ListThingTypes responses.
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
 * \sa IoTClient::listThingTypes
 */

/*!
 * Constructs a ListThingTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListThingTypesResponse::ListThingTypesResponse(
        const ListThingTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingTypesResponsePrivate(this), parent)
{
    setRequest(new ListThingTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThingTypesRequest * ListThingTypesResponse::request() const
{
    Q_D(const ListThingTypesResponse);
    return static_cast<const ListThingTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListThingTypes \a response.
 */
void ListThingTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThingTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListThingTypesResponsePrivate
 * \brief The ListThingTypesResponsePrivate class provides private implementation for ListThingTypesResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListThingTypesResponsePrivate object with public implementation \a q.
 */
ListThingTypesResponsePrivate::ListThingTypesResponsePrivate(
    ListThingTypesResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListThingTypes response element from \a xml.
 */
void ListThingTypesResponsePrivate::parseListThingTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingTypesResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
