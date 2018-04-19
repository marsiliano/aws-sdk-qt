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

#include "listv2logginglevelsresponse.h"
#include "listv2logginglevelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListV2LoggingLevelsResponse
 * \brief The ListV2LoggingLevelsResponse class provides an interace for IoT ListV2LoggingLevels responses.
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
 * \sa IoTClient::listV2LoggingLevels
 */

/*!
 * Constructs a ListV2LoggingLevelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListV2LoggingLevelsResponse::ListV2LoggingLevelsResponse(
        const ListV2LoggingLevelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListV2LoggingLevelsResponsePrivate(this), parent)
{
    setRequest(new ListV2LoggingLevelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListV2LoggingLevelsRequest * ListV2LoggingLevelsResponse::request() const
{
    Q_D(const ListV2LoggingLevelsResponse);
    return static_cast<const ListV2LoggingLevelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT ListV2LoggingLevels \a response.
 */
void ListV2LoggingLevelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListV2LoggingLevelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::ListV2LoggingLevelsResponsePrivate
 * \brief The ListV2LoggingLevelsResponsePrivate class provides private implementation for ListV2LoggingLevelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a ListV2LoggingLevelsResponsePrivate object with public implementation \a q.
 */
ListV2LoggingLevelsResponsePrivate::ListV2LoggingLevelsResponsePrivate(
    ListV2LoggingLevelsResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT ListV2LoggingLevels response element from \a xml.
 */
void ListV2LoggingLevelsResponsePrivate::parseListV2LoggingLevelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListV2LoggingLevelsResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
