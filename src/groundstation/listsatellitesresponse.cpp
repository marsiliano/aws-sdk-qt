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

#include "listsatellitesresponse.h"
#include "listsatellitesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListSatellitesResponse
 * \brief The ListSatellitesResponse class provides an interace for GroundStation ListSatellites responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listSatellites
 */

/*!
 * Constructs a ListSatellitesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSatellitesResponse::ListSatellitesResponse(
        const ListSatellitesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new ListSatellitesResponsePrivate(this), parent)
{
    setRequest(new ListSatellitesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSatellitesRequest * ListSatellitesResponse::request() const
{
    Q_D(const ListSatellitesResponse);
    return static_cast<const ListSatellitesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation ListSatellites \a response.
 */
void ListSatellitesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSatellitesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::ListSatellitesResponsePrivate
 * \brief The ListSatellitesResponsePrivate class provides private implementation for ListSatellitesResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListSatellitesResponsePrivate object with public implementation \a q.
 */
ListSatellitesResponsePrivate::ListSatellitesResponsePrivate(
    ListSatellitesResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation ListSatellites response element from \a xml.
 */
void ListSatellitesResponsePrivate::parseListSatellitesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSatellitesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
