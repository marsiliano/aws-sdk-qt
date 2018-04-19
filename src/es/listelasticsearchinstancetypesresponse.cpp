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

#include "listelasticsearchinstancetypesresponse.h"
#include "listelasticsearchinstancetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchInstanceTypesResponse
 * \brief The ListElasticsearchInstanceTypesResponse class provides an interace for ElasticsearchService ListElasticsearchInstanceTypes responses.
 *
 * \inmodule QtAwsElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchServiceClient::listElasticsearchInstanceTypes
 */

/*!
 * Constructs a ListElasticsearchInstanceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListElasticsearchInstanceTypesResponse::ListElasticsearchInstanceTypesResponse(
        const ListElasticsearchInstanceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new ListElasticsearchInstanceTypesResponsePrivate(this), parent)
{
    setRequest(new ListElasticsearchInstanceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListElasticsearchInstanceTypesRequest * ListElasticsearchInstanceTypesResponse::request() const
{
    Q_D(const ListElasticsearchInstanceTypesResponse);
    return static_cast<const ListElasticsearchInstanceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticsearchService ListElasticsearchInstanceTypes \a response.
 */
void ListElasticsearchInstanceTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListElasticsearchInstanceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticsearchService::ListElasticsearchInstanceTypesResponsePrivate
 * \brief The ListElasticsearchInstanceTypesResponsePrivate class provides private implementation for ListElasticsearchInstanceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ListElasticsearchInstanceTypesResponsePrivate object with public implementation \a q.
 */
ListElasticsearchInstanceTypesResponsePrivate::ListElasticsearchInstanceTypesResponsePrivate(
    ListElasticsearchInstanceTypesResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticsearchService ListElasticsearchInstanceTypes response element from \a xml.
 */
void ListElasticsearchInstanceTypesResponsePrivate::parseListElasticsearchInstanceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListElasticsearchInstanceTypesResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
