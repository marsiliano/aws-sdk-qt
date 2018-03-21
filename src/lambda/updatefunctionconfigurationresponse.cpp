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

#include "updatefunctionconfigurationresponse.h"
#include "updatefunctionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  UpdateFunctionConfigurationResponse
 *
 * @brief  Handles Lambda UpdateFunctionConfiguration responses.
 *
 * @see    LambdaClient::updateFunctionConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFunctionConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new UpdateFunctionConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionConfigurationRequest(request));
    setReply(reply);
}

const UpdateFunctionConfigurationRequest * UpdateFunctionConfigurationResponse::request() const
{
    Q_D(const UpdateFunctionConfigurationResponse);
    return static_cast<const UpdateFunctionConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda UpdateFunctionConfiguration response.
 *
 * @param  response  Response to parse.
 */
void UpdateFunctionConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFunctionConfigurationResponsePrivate
 *
 * @brief  Private implementation for UpdateFunctionConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFunctionConfigurationResponse instance.
 */
UpdateFunctionConfigurationResponsePrivate::UpdateFunctionConfigurationResponsePrivate(
    UpdateFunctionConfigurationQueueResponse * const q) : UpdateFunctionConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an Lambda UpdateFunctionConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFunctionConfigurationResponsePrivate::UpdateFunctionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionConfigurationResponse"));
    /// @todo
}