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

#include "createfunctiondefinitionversionresponse.h"
#include "createfunctiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateFunctionDefinitionVersionResponse
 *
 * @brief  Handles Greengrass CreateFunctionDefinitionVersion responses.
 *
 * @see    GreengrassClient::createFunctionDefinitionVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFunctionDefinitionVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateFunctionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionDefinitionVersionRequest(request));
    setReply(reply);
}

const CreateFunctionDefinitionVersionRequest * CreateFunctionDefinitionVersionResponse::request() const
{
    Q_D(const CreateFunctionDefinitionVersionResponse);
    return static_cast<const CreateFunctionDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateFunctionDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateFunctionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFunctionDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for CreateFunctionDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFunctionDefinitionVersionResponse instance.
 */
CreateFunctionDefinitionVersionResponsePrivate::CreateFunctionDefinitionVersionResponsePrivate(
    CreateFunctionDefinitionVersionQueueResponse * const q) : CreateFunctionDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateFunctionDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFunctionDefinitionVersionResponsePrivate::CreateFunctionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionDefinitionVersionResponse"));
    /// @todo
}