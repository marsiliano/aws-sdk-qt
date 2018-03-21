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

#include "createresourcedefinitionversionresponse.h"
#include "createresourcedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateResourceDefinitionVersionResponse
 *
 * @brief  Handles Greengrass CreateResourceDefinitionVersion responses.
 *
 * @see    GreengrassClient::createResourceDefinitionVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceDefinitionVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateResourceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateResourceDefinitionVersionRequest(request));
    setReply(reply);
}

const CreateResourceDefinitionVersionRequest * CreateResourceDefinitionVersionResponse::request() const
{
    Q_D(const CreateResourceDefinitionVersionResponse);
    return static_cast<const CreateResourceDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateResourceDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateResourceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateResourceDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for CreateResourceDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResourceDefinitionVersionResponse instance.
 */
CreateResourceDefinitionVersionResponsePrivate::CreateResourceDefinitionVersionResponsePrivate(
    CreateResourceDefinitionVersionQueueResponse * const q) : CreateResourceDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateResourceDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResourceDefinitionVersionResponsePrivate::CreateResourceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceDefinitionVersionResponse"));
    /// @todo
}