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

#include "getconfigurationseteventdestinationsresponse.h"
#include "getconfigurationseteventdestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetConfigurationSetEventDestinationsResponse
 * \brief The GetConfigurationSetEventDestinationsResponse class provides an interace for PinpointEmail GetConfigurationSetEventDestinations responses.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in the US East (N. Virginia), US West (Oregon) and the EU (Ireland) Regions
 *  at the following
 * 
 *  endpoints> <ul> <li>
 * 
 *  <b>US East (N. Virginia)</b>: <code>email.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>US West (Oregon)</b>: <code>email.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>EU (Ireland)</b>: <code>email.eu-west-1.amazonaws.com</code>
 *
 * \sa PinpointEmailClient::getConfigurationSetEventDestinations
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigurationSetEventDestinationsResponse::GetConfigurationSetEventDestinationsResponse(
        const GetConfigurationSetEventDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new GetConfigurationSetEventDestinationsResponsePrivate(this), parent)
{
    setRequest(new GetConfigurationSetEventDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigurationSetEventDestinationsRequest * GetConfigurationSetEventDestinationsResponse::request() const
{
    Q_D(const GetConfigurationSetEventDestinationsResponse);
    return static_cast<const GetConfigurationSetEventDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail GetConfigurationSetEventDestinations \a response.
 */
void GetConfigurationSetEventDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigurationSetEventDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::GetConfigurationSetEventDestinationsResponsePrivate
 * \brief The GetConfigurationSetEventDestinationsResponsePrivate class provides private implementation for GetConfigurationSetEventDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsResponsePrivate object with public implementation \a q.
 */
GetConfigurationSetEventDestinationsResponsePrivate::GetConfigurationSetEventDestinationsResponsePrivate(
    GetConfigurationSetEventDestinationsResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail GetConfigurationSetEventDestinations response element from \a xml.
 */
void GetConfigurationSetEventDestinationsResponsePrivate::parseGetConfigurationSetEventDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigurationSetEventDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
