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

#include "updateintegrationresponse.h"
#include "updateintegrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateIntegrationResponse
 *
 * @brief  Handles APIGateway UpdateIntegration responses.
 *
 * @see    APIGatewayClient::updateIntegration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateIntegrationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateIntegrationResponsePrivate(this), parent)
{
    setRequest(new UpdateIntegrationRequest(request));
    setReply(reply);
}

const UpdateIntegrationRequest * UpdateIntegrationResponse::request() const
{
    Q_D(const UpdateIntegrationResponse);
    return static_cast<const UpdateIntegrationRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateIntegration response.
 *
 * @param  response  Response to parse.
 */
void UpdateIntegrationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateIntegrationResponsePrivate
 *
 * @brief  Private implementation for UpdateIntegrationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIntegrationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateIntegrationResponse instance.
 */
UpdateIntegrationResponsePrivate::UpdateIntegrationResponsePrivate(
    UpdateIntegrationQueueResponse * const q) : UpdateIntegrationPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateIntegrationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateIntegrationResponsePrivate::UpdateIntegrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIntegrationResponse"));
    /// @todo
}