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

#include "modifyinstancecapacityreservationattributesresponse.h"
#include "modifyinstancecapacityreservationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyInstanceCapacityReservationAttributesResponse
 * \brief The ModifyInstanceCapacityReservationAttributesResponse class provides an interace for EC2 ModifyInstanceCapacityReservationAttributes responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::modifyInstanceCapacityReservationAttributes
 */

/*!
 * Constructs a ModifyInstanceCapacityReservationAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyInstanceCapacityReservationAttributesResponse::ModifyInstanceCapacityReservationAttributesResponse(
        const ModifyInstanceCapacityReservationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyInstanceCapacityReservationAttributesResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceCapacityReservationAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyInstanceCapacityReservationAttributesRequest * ModifyInstanceCapacityReservationAttributesResponse::request() const
{
    Q_D(const ModifyInstanceCapacityReservationAttributesResponse);
    return static_cast<const ModifyInstanceCapacityReservationAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ModifyInstanceCapacityReservationAttributes \a response.
 */
void ModifyInstanceCapacityReservationAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyInstanceCapacityReservationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ModifyInstanceCapacityReservationAttributesResponsePrivate
 * \brief The ModifyInstanceCapacityReservationAttributesResponsePrivate class provides private implementation for ModifyInstanceCapacityReservationAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyInstanceCapacityReservationAttributesResponsePrivate object with public implementation \a q.
 */
ModifyInstanceCapacityReservationAttributesResponsePrivate::ModifyInstanceCapacityReservationAttributesResponsePrivate(
    ModifyInstanceCapacityReservationAttributesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ModifyInstanceCapacityReservationAttributes response element from \a xml.
 */
void ModifyInstanceCapacityReservationAttributesResponsePrivate::parseModifyInstanceCapacityReservationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceCapacityReservationAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
