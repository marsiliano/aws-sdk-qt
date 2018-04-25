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

#include "describelaunchtemplateversionsresponse.h"
#include "describelaunchtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeLaunchTemplateVersionsResponse
 * \brief The DescribeLaunchTemplateVersionsResponse class provides an interace for EC2 DescribeLaunchTemplateVersions responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeLaunchTemplateVersions
 */

/*!
 * Constructs a DescribeLaunchTemplateVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLaunchTemplateVersionsResponse::DescribeLaunchTemplateVersionsResponse(
        const DescribeLaunchTemplateVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeLaunchTemplateVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchTemplateVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLaunchTemplateVersionsRequest * DescribeLaunchTemplateVersionsResponse::request() const
{
    Q_D(const DescribeLaunchTemplateVersionsResponse);
    return static_cast<const DescribeLaunchTemplateVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeLaunchTemplateVersions \a response.
 */
void DescribeLaunchTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLaunchTemplateVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeLaunchTemplateVersionsResponsePrivate
 * \brief The DescribeLaunchTemplateVersionsResponsePrivate class provides private implementation for DescribeLaunchTemplateVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeLaunchTemplateVersionsResponsePrivate object with public implementation \a q.
 */
DescribeLaunchTemplateVersionsResponsePrivate::DescribeLaunchTemplateVersionsResponsePrivate(
    DescribeLaunchTemplateVersionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeLaunchTemplateVersions response element from \a xml.
 */
void DescribeLaunchTemplateVersionsResponsePrivate::parseDescribeLaunchTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchTemplateVersionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
