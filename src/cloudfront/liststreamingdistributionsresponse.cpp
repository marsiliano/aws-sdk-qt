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

#include "liststreamingdistributionsresponse.h"
#include "liststreamingdistributionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  ListStreamingDistributionsResponse
 *
 * @brief  Handles CloudFront ListStreamingDistributions responses.
 *
 * @see    CloudFrontClient::listStreamingDistributions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStreamingDistributionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListStreamingDistributionsResponsePrivate(this), parent)
{
    setRequest(new ListStreamingDistributionsRequest(request));
    setReply(reply);
}

const ListStreamingDistributionsRequest * ListStreamingDistributionsResponse::request() const
{
    Q_D(const ListStreamingDistributionsResponse);
    return static_cast<const ListStreamingDistributionsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront ListStreamingDistributions response.
 *
 * @param  response  Response to parse.
 */
void ListStreamingDistributionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStreamingDistributionsResponsePrivate
 *
 * @brief  Private implementation for ListStreamingDistributionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStreamingDistributionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStreamingDistributionsResponse instance.
 */
ListStreamingDistributionsResponsePrivate::ListStreamingDistributionsResponsePrivate(
    ListStreamingDistributionsQueueResponse * const q) : ListStreamingDistributionsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront ListStreamingDistributionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStreamingDistributionsResponsePrivate::ListStreamingDistributionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingDistributionsResponse"));
    /// @todo
}