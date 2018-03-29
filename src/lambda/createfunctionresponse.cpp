/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createfunctionresponse.h"
#include "createfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  CreateFunctionResponse
 *
 * @brief  Handles Lambda CreateFunction responses.
 *
 * @see    LambdaClient::createFunction
 */

/**
 * @brief  Constructs a new CreateFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFunctionResponse::CreateFunctionResponse(
        const CreateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateFunctionResponse(new CreateFunctionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionRequest(request));
    setReply(reply);
}

const CreateFunctionRequest * CreateFunctionResponse::request() const
{
    Q_D(const CreateFunctionResponse);
    return static_cast<const CreateFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda CreateFunction response.
 *
 * @param  response  Response to parse.
 */
void CreateFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFunctionResponsePrivate
 *
 * @brief  Private implementation for CreateFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFunctionResponse instance.
 */
CreateFunctionResponsePrivate::CreateFunctionResponsePrivate(
    CreateFunctionResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda CreateFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFunctionResponsePrivate::parseCreateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
