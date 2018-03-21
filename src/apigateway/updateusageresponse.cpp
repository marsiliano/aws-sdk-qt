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

#include "updateusageresponse.h"
#include "updateusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateUsageResponse
 *
 * @brief  Handles APIGateway UpdateUsage responses.
 *
 * @see    APIGatewayClient::updateUsage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateUsageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateUsageResponsePrivate(this), parent)
{
    setRequest(new UpdateUsageRequest(request));
    setReply(reply);
}

const UpdateUsageRequest * UpdateUsageResponse::request() const
{
    Q_D(const UpdateUsageResponse);
    return static_cast<const UpdateUsageRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateUsage response.
 *
 * @param  response  Response to parse.
 */
void UpdateUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateUsageResponsePrivate
 *
 * @brief  Private implementation for UpdateUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateUsageResponse instance.
 */
UpdateUsageResponsePrivate::UpdateUsageResponsePrivate(
    UpdateUsageQueueResponse * const q) : UpdateUsagePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateUsageResponsePrivate::UpdateUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUsageResponse"));
    /// @todo
}