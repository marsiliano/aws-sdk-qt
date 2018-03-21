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

#include "removetargetsresponse.h"
#include "removetargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  RemoveTargetsResponse
 *
 * @brief  Handles CloudWatchEvents RemoveTargets responses.
 *
 * @see    CloudWatchEventsClient::removeTargets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTargetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new RemoveTargetsResponsePrivate(this), parent)
{
    setRequest(new RemoveTargetsRequest(request));
    setReply(reply);
}

const RemoveTargetsRequest * RemoveTargetsResponse::request() const
{
    Q_D(const RemoveTargetsResponse);
    return static_cast<const RemoveTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents RemoveTargets response.
 *
 * @param  response  Response to parse.
 */
void RemoveTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTargetsResponsePrivate
 *
 * @brief  Private implementation for RemoveTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTargetsResponse instance.
 */
RemoveTargetsResponsePrivate::RemoveTargetsResponsePrivate(
    RemoveTargetsQueueResponse * const q) : RemoveTargetsPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents RemoveTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTargetsResponsePrivate::RemoveTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTargetsResponse"));
    /// @todo
}