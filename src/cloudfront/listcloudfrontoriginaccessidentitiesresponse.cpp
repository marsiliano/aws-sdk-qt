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

#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "listcloudfrontoriginaccessidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCloudFrontOriginAccessIdentitiesResponse
 * \brief The ListCloudFrontOriginAccessIdentitiesResponse class provides an interace for CloudFront ListCloudFrontOriginAccessIdentities responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCloudFrontOriginAccessIdentities
 */

/*!
 * Constructs a ListCloudFrontOriginAccessIdentitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCloudFrontOriginAccessIdentitiesResponse::ListCloudFrontOriginAccessIdentitiesResponse(
        const ListCloudFrontOriginAccessIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListCloudFrontOriginAccessIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListCloudFrontOriginAccessIdentitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCloudFrontOriginAccessIdentitiesRequest * ListCloudFrontOriginAccessIdentitiesResponse::request() const
{
    Q_D(const ListCloudFrontOriginAccessIdentitiesResponse);
    return static_cast<const ListCloudFrontOriginAccessIdentitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront ListCloudFrontOriginAccessIdentities \a response.
 */
void ListCloudFrontOriginAccessIdentitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCloudFrontOriginAccessIdentitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::ListCloudFrontOriginAccessIdentitiesResponsePrivate
 * \brief The ListCloudFrontOriginAccessIdentitiesResponsePrivate class provides private implementation for ListCloudFrontOriginAccessIdentitiesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCloudFrontOriginAccessIdentitiesResponsePrivate object with public implementation \a q.
 */
ListCloudFrontOriginAccessIdentitiesResponsePrivate::ListCloudFrontOriginAccessIdentitiesResponsePrivate(
    ListCloudFrontOriginAccessIdentitiesResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront ListCloudFrontOriginAccessIdentities response element from \a xml.
 */
void ListCloudFrontOriginAccessIdentitiesResponsePrivate::parseListCloudFrontOriginAccessIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCloudFrontOriginAccessIdentitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
