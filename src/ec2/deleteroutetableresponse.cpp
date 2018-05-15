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

#include "deleteroutetableresponse.h"
#include "deleteroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteRouteTableResponse
 * \brief The DeleteRouteTableResponse class provides an interace for EC2 DeleteRouteTable responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteRouteTable
 */

/*!
 * Constructs a DeleteRouteTableResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteTableResponse::DeleteRouteTableResponse(
        const DeleteRouteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteRouteTableResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteTableRequest * DeleteRouteTableResponse::request() const
{
    Q_D(const DeleteRouteTableResponse);
    return static_cast<const DeleteRouteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteRouteTable \a response.
 */
void DeleteRouteTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteRouteTableResponsePrivate
 * \brief The DeleteRouteTableResponsePrivate class provides private implementation for DeleteRouteTableResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteRouteTableResponsePrivate object with public implementation \a q.
 */
DeleteRouteTableResponsePrivate::DeleteRouteTableResponsePrivate(
    DeleteRouteTableResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteRouteTable response element from \a xml.
 */
void DeleteRouteTableResponsePrivate::parseDeleteRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteTableResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
