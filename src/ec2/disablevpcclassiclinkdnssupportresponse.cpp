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

#include "disablevpcclassiclinkdnssupportresponse.h"
#include "disablevpcclassiclinkdnssupportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisableVpcClassicLinkDnsSupportResponse
 * \brief The DisableVpcClassicLinkDnsSupportResponse class provides an interace for EC2 DisableVpcClassicLinkDnsSupport responses.
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
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::disableVpcClassicLinkDnsSupport
 */

/*!
 * Constructs a DisableVpcClassicLinkDnsSupportResponse object for \a reply to \a request, with parent \a parent.
 */
DisableVpcClassicLinkDnsSupportResponse::DisableVpcClassicLinkDnsSupportResponse(
        const DisableVpcClassicLinkDnsSupportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DisableVpcClassicLinkDnsSupportResponsePrivate(this), parent)
{
    setRequest(new DisableVpcClassicLinkDnsSupportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableVpcClassicLinkDnsSupportRequest * DisableVpcClassicLinkDnsSupportResponse::request() const
{
    Q_D(const DisableVpcClassicLinkDnsSupportResponse);
    return static_cast<const DisableVpcClassicLinkDnsSupportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DisableVpcClassicLinkDnsSupport \a response.
 */
void DisableVpcClassicLinkDnsSupportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableVpcClassicLinkDnsSupportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DisableVpcClassicLinkDnsSupportResponsePrivate
 * \brief The DisableVpcClassicLinkDnsSupportResponsePrivate class provides private implementation for DisableVpcClassicLinkDnsSupportResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DisableVpcClassicLinkDnsSupportResponsePrivate object with public implementation \a q.
 */
DisableVpcClassicLinkDnsSupportResponsePrivate::DisableVpcClassicLinkDnsSupportResponsePrivate(
    DisableVpcClassicLinkDnsSupportResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DisableVpcClassicLinkDnsSupport response element from \a xml.
 */
void DisableVpcClassicLinkDnsSupportResponsePrivate::parseDisableVpcClassicLinkDnsSupportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableVpcClassicLinkDnsSupportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
