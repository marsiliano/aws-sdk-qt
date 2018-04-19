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

#include "deletethingresponse.h"
#include "deletethingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteThingResponse
 * \brief The DeleteThingResponse class provides an interace for IoT DeleteThing responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::deleteThing
 */

/*!
 * Constructs a DeleteThingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThingResponse::DeleteThingResponse(
        const DeleteThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteThingResponsePrivate(this), parent)
{
    setRequest(new DeleteThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThingRequest * DeleteThingResponse::request() const
{
    Q_D(const DeleteThingResponse);
    return static_cast<const DeleteThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DeleteThing \a response.
 */
void DeleteThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DeleteThingResponsePrivate
 * \brief The DeleteThingResponsePrivate class provides private implementation for DeleteThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteThingResponsePrivate object with public implementation \a q.
 */
DeleteThingResponsePrivate::DeleteThingResponsePrivate(
    DeleteThingResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DeleteThing response element from \a xml.
 */
void DeleteThingResponsePrivate::parseDeleteThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
