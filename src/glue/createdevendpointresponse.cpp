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

#include "createdevendpointresponse.h"
#include "createdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  CreateDevEndpointResponse
 *
 * @brief  Handles Glue CreateDevEndpoint responses.
 *
 * @see    GlueClient::createDevEndpoint
 */

/**
 * @brief  Constructs a new CreateDevEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDevEndpointResponse::CreateDevEndpointResponse(
        const CreateDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDevEndpointResponse(new CreateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateDevEndpointRequest(request));
    setReply(reply);
}

const CreateDevEndpointRequest * CreateDevEndpointResponse::request() const
{
    Q_D(const CreateDevEndpointResponse);
    return static_cast<const CreateDevEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateDevEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDevEndpointResponsePrivate
 *
 * @brief  Private implementation for CreateDevEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDevEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDevEndpointResponse instance.
 */
CreateDevEndpointResponsePrivate::CreateDevEndpointResponsePrivate(
    CreateDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateDevEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDevEndpointResponsePrivate::parseCreateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
