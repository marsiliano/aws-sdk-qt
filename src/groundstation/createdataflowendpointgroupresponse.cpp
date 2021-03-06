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

#include "createdataflowendpointgroupresponse.h"
#include "createdataflowendpointgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateDataflowEndpointGroupResponse
 * \brief The CreateDataflowEndpointGroupResponse class provides an interace for GroundStation CreateDataflowEndpointGroup responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createDataflowEndpointGroup
 */

/*!
 * Constructs a CreateDataflowEndpointGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataflowEndpointGroupResponse::CreateDataflowEndpointGroupResponse(
        const CreateDataflowEndpointGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new CreateDataflowEndpointGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDataflowEndpointGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataflowEndpointGroupRequest * CreateDataflowEndpointGroupResponse::request() const
{
    Q_D(const CreateDataflowEndpointGroupResponse);
    return static_cast<const CreateDataflowEndpointGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation CreateDataflowEndpointGroup \a response.
 */
void CreateDataflowEndpointGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataflowEndpointGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::CreateDataflowEndpointGroupResponsePrivate
 * \brief The CreateDataflowEndpointGroupResponsePrivate class provides private implementation for CreateDataflowEndpointGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateDataflowEndpointGroupResponsePrivate object with public implementation \a q.
 */
CreateDataflowEndpointGroupResponsePrivate::CreateDataflowEndpointGroupResponsePrivate(
    CreateDataflowEndpointGroupResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation CreateDataflowEndpointGroup response element from \a xml.
 */
void CreateDataflowEndpointGroupResponsePrivate::parseCreateDataflowEndpointGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataflowEndpointGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
