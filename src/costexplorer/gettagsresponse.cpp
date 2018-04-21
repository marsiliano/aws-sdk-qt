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

#include "gettagsresponse.h"
#include "gettagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetTagsResponse
 * \brief The GetTagsResponse class provides an interace for CostExplorer GetTags responses.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 *
 * \sa CostExplorerClient::getTags
 */

/*!
 * Constructs a GetTagsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagsResponse::GetTagsResponse(
        const GetTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetTagsResponsePrivate(this), parent)
{
    setRequest(new GetTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagsRequest * GetTagsResponse::request() const
{
    Q_D(const GetTagsResponse);
    return static_cast<const GetTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostExplorer GetTags \a response.
 */
void GetTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostExplorer::GetTagsResponsePrivate
 * \brief The GetTagsResponsePrivate class provides private implementation for GetTagsResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetTagsResponsePrivate object with public implementation \a q.
 */
GetTagsResponsePrivate::GetTagsResponsePrivate(
    GetTagsResponse * const q) : CostExplorerResponsePrivate(q)
{

}

/*!
 * Parses a CostExplorer GetTags response element from \a xml.
 */
void GetTagsResponsePrivate::parseGetTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagsResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws