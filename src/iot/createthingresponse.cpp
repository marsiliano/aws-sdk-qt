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

#include "createthingresponse.h"
#include "createthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateThingResponse
 * \brief The CreateThingResponse class provides an interace for IoT CreateThing responses.
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
 * \sa IoTClient::createThing
 */

/*!
 * Constructs a CreateThingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateThingResponse::CreateThingResponse(
        const CreateThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateThingResponsePrivate(this), parent)
{
    setRequest(new CreateThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateThingRequest * CreateThingResponse::request() const
{
    Q_D(const CreateThingResponse);
    return static_cast<const CreateThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateThing \a response.
 */
void CreateThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateThingResponsePrivate
 * \brief The CreateThingResponsePrivate class provides private implementation for CreateThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateThingResponsePrivate object with public implementation \a q.
 */
CreateThingResponsePrivate::CreateThingResponsePrivate(
    CreateThingResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateThing response element from \a xml.
 */
void CreateThingResponsePrivate::parseCreateThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateThingResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
