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

#include "createvpcendpointresponse.h"
#include "createvpcendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcEndpointResponse
 * \brief The CreateVpcEndpointResponse class provides an interace for EC2 CreateVpcEndpoint responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createVpcEndpoint
 */

/*!
 * Constructs a CreateVpcEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcEndpointResponse::CreateVpcEndpointResponse(
        const CreateVpcEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateVpcEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateVpcEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcEndpointRequest * CreateVpcEndpointResponse::request() const
{
    Q_D(const CreateVpcEndpointResponse);
    return static_cast<const CreateVpcEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateVpcEndpoint \a response.
 */
void CreateVpcEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVpcEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateVpcEndpointResponsePrivate
 * \brief The CreateVpcEndpointResponsePrivate class provides private implementation for CreateVpcEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateVpcEndpointResponsePrivate object with public implementation \a q.
 */
CreateVpcEndpointResponsePrivate::CreateVpcEndpointResponsePrivate(
    CreateVpcEndpointResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateVpcEndpoint response element from \a xml.
 */
void CreateVpcEndpointResponsePrivate::parseCreateVpcEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcEndpointResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
