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

#include "createplacementgroupresponse.h"
#include "createplacementgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreatePlacementGroupResponse
 * \brief The CreatePlacementGroupResponse class provides an interace for EC2 CreatePlacementGroup responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createPlacementGroup
 */

/*!
 * Constructs a CreatePlacementGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePlacementGroupResponse::CreatePlacementGroupResponse(
        const CreatePlacementGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreatePlacementGroupResponsePrivate(this), parent)
{
    setRequest(new CreatePlacementGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePlacementGroupRequest * CreatePlacementGroupResponse::request() const
{
    Q_D(const CreatePlacementGroupResponse);
    return static_cast<const CreatePlacementGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreatePlacementGroup \a response.
 */
void CreatePlacementGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePlacementGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreatePlacementGroupResponsePrivate
 * \brief The CreatePlacementGroupResponsePrivate class provides private implementation for CreatePlacementGroupResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreatePlacementGroupResponsePrivate object with public implementation \a q.
 */
CreatePlacementGroupResponsePrivate::CreatePlacementGroupResponsePrivate(
    CreatePlacementGroupResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreatePlacementGroup response element from \a xml.
 */
void CreatePlacementGroupResponsePrivate::parseCreatePlacementGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlacementGroupResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
