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

#include "gettypedlinkfacetinformationresponse.h"
#include "gettypedlinkfacetinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationResponse
 * \brief The GetTypedLinkFacetInformationResponse class provides an interace for CloudDirectory GetTypedLinkFacetInformation responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::getTypedLinkFacetInformation
 */

/*!
 * Constructs a GetTypedLinkFacetInformationResponse object for \a reply to \a request, with parent \a parent.
 */
GetTypedLinkFacetInformationResponse::GetTypedLinkFacetInformationResponse(
        const GetTypedLinkFacetInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetTypedLinkFacetInformationResponsePrivate(this), parent)
{
    setRequest(new GetTypedLinkFacetInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTypedLinkFacetInformationRequest * GetTypedLinkFacetInformationResponse::request() const
{
    Q_D(const GetTypedLinkFacetInformationResponse);
    return static_cast<const GetTypedLinkFacetInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory GetTypedLinkFacetInformation \a response.
 */
void GetTypedLinkFacetInformationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTypedLinkFacetInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationResponsePrivate
 * \brief The GetTypedLinkFacetInformationResponsePrivate class provides private implementation for GetTypedLinkFacetInformationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetTypedLinkFacetInformationResponsePrivate object with public implementation \a q.
 */
GetTypedLinkFacetInformationResponsePrivate::GetTypedLinkFacetInformationResponsePrivate(
    GetTypedLinkFacetInformationResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory GetTypedLinkFacetInformation response element from \a xml.
 */
void GetTypedLinkFacetInformationResponsePrivate::parseGetTypedLinkFacetInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTypedLinkFacetInformationResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
