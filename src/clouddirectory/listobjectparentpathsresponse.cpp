/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listobjectparentpathsresponse.h"
#include "listobjectparentpathsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListObjectParentPathsResponse
 *
 * @brief  Handles CloudDirectory ListObjectParentPaths responses.
 *
 * @see    CloudDirectoryClient::listObjectParentPaths
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectParentPathsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectParentPathsResponsePrivate(this), parent)
{
    setRequest(new ListObjectParentPathsRequest(request));
    setReply(reply);
}

const ListObjectParentPathsRequest * ListObjectParentPathsResponse::request() const
{
    Q_D(const ListObjectParentPathsResponse);
    return static_cast<const ListObjectParentPathsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListObjectParentPaths response.
 *
 * @param  response  Response to parse.
 */
void ListObjectParentPathsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectParentPathsResponsePrivate
 *
 * @brief  Private implementation for ListObjectParentPathsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectParentPathsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectParentPathsResponse instance.
 */
ListObjectParentPathsResponsePrivate::ListObjectParentPathsResponsePrivate(
    ListObjectParentPathsQueueResponse * const q) : ListObjectParentPathsPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListObjectParentPathsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectParentPathsResponsePrivate::ListObjectParentPathsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectParentPathsResponse"));
    /// @todo
}