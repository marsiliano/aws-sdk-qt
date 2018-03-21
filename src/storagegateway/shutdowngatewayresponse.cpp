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

#include "shutdowngatewayresponse.h"
#include "shutdowngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  ShutdownGatewayResponse
 *
 * @brief  Handles StorageGateway ShutdownGateway responses.
 *
 * @see    StorageGatewayClient::shutdownGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ShutdownGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ShutdownGatewayResponsePrivate(this), parent)
{
    setRequest(new ShutdownGatewayRequest(request));
    setReply(reply);
}

const ShutdownGatewayRequest * ShutdownGatewayResponse::request() const
{
    Q_D(const ShutdownGatewayResponse);
    return static_cast<const ShutdownGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ShutdownGateway response.
 *
 * @param  response  Response to parse.
 */
void ShutdownGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ShutdownGatewayResponsePrivate
 *
 * @brief  Private implementation for ShutdownGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ShutdownGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ShutdownGatewayResponse instance.
 */
ShutdownGatewayResponsePrivate::ShutdownGatewayResponsePrivate(
    ShutdownGatewayQueueResponse * const q) : ShutdownGatewayPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ShutdownGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ShutdownGatewayResponsePrivate::ShutdownGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ShutdownGatewayResponse"));
    /// @todo
}