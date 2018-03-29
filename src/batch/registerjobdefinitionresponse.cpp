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

#include "registerjobdefinitionresponse.h"
#include "registerjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  RegisterJobDefinitionResponse
 *
 * @brief  Handles Batch RegisterJobDefinition responses.
 *
 * @see    BatchClient::registerJobDefinition
 */

/**
 * @brief  Constructs a new RegisterJobDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterJobDefinitionResponse::RegisterJobDefinitionResponse(
        const RegisterJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new RegisterJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new RegisterJobDefinitionRequest(request));
    setReply(reply);
}

const RegisterJobDefinitionRequest * RegisterJobDefinitionResponse::request() const
{
    Q_D(const RegisterJobDefinitionResponse);
    return static_cast<const RegisterJobDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Batch RegisterJobDefinition response.
 *
 * @param  response  Response to parse.
 */
void RegisterJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterJobDefinitionResponsePrivate
 *
 * @brief  Private implementation for RegisterJobDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterJobDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterJobDefinitionResponse instance.
 */
RegisterJobDefinitionResponsePrivate::RegisterJobDefinitionResponsePrivate(
    RegisterJobDefinitionResponse * const q) : BatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an Batch RegisterJobDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterJobDefinitionResponsePrivate::parseRegisterJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterJobDefinitionResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
