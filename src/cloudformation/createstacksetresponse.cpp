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

#include "createstacksetresponse.h"
#include "createstacksetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  CreateStackSetResponse
 *
 * @brief  Handles CloudFormation CreateStackSet responses.
 *
 * @see    CloudFormationClient::createStackSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStackSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new CreateStackSetResponsePrivate(this), parent)
{
    setRequest(new CreateStackSetRequest(request));
    setReply(reply);
}

const CreateStackSetRequest * CreateStackSetResponse::request() const
{
    Q_D(const CreateStackSetResponse);
    return static_cast<const CreateStackSetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation CreateStackSet response.
 *
 * @param  response  Response to parse.
 */
void CreateStackSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStackSetResponsePrivate
 *
 * @brief  Private implementation for CreateStackSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStackSetResponse instance.
 */
CreateStackSetResponsePrivate::CreateStackSetResponsePrivate(
    CreateStackSetQueueResponse * const q) : CreateStackSetPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation CreateStackSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStackSetResponsePrivate::CreateStackSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStackSetResponse"));
    /// @todo
}