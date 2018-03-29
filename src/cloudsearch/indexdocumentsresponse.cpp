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

#include "indexdocumentsresponse.h"
#include "indexdocumentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  IndexDocumentsResponse
 *
 * @brief  Handles CloudSearch IndexDocuments responses.
 *
 * @see    CloudSearchClient::indexDocuments
 */

/**
 * @brief  Constructs a new IndexDocumentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
IndexDocumentsResponse::IndexDocumentsResponse(
        const IndexDocumentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new IndexDocumentsResponsePrivate(this), parent)
{
    setRequest(new IndexDocumentsRequest(request));
    setReply(reply);
}

const IndexDocumentsRequest * IndexDocumentsResponse::request() const
{
    Q_D(const IndexDocumentsResponse);
    return static_cast<const IndexDocumentsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch IndexDocuments response.
 *
 * @param  response  Response to parse.
 */
void IndexDocumentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(IndexDocumentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  IndexDocumentsResponsePrivate
 *
 * @brief  Private implementation for IndexDocumentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IndexDocumentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IndexDocumentsResponse instance.
 */
IndexDocumentsResponsePrivate::IndexDocumentsResponsePrivate(
    IndexDocumentsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch IndexDocumentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void IndexDocumentsResponsePrivate::IndexDocumentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IndexDocumentsResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
