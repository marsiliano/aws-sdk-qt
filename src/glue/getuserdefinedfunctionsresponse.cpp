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

#include "getuserdefinedfunctionsresponse.h"
#include "getuserdefinedfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetUserDefinedFunctionsResponse
 *
 * @brief  Handles Glue GetUserDefinedFunctions responses.
 *
 * @see    GlueClient::getUserDefinedFunctions
 */

/**
 * @brief  Constructs a new GetUserDefinedFunctionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUserDefinedFunctionsResponse::GetUserDefinedFunctionsResponse(
        const GetUserDefinedFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetUserDefinedFunctionsResponse(new GetUserDefinedFunctionsResponsePrivate(this), parent)
{
    setRequest(new GetUserDefinedFunctionsRequest(request));
    setReply(reply);
}

const GetUserDefinedFunctionsRequest * GetUserDefinedFunctionsResponse::request() const
{
    Q_D(const GetUserDefinedFunctionsResponse);
    return static_cast<const GetUserDefinedFunctionsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetUserDefinedFunctions response.
 *
 * @param  response  Response to parse.
 */
void GetUserDefinedFunctionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUserDefinedFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUserDefinedFunctionsResponsePrivate
 *
 * @brief  Private implementation for GetUserDefinedFunctionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserDefinedFunctionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUserDefinedFunctionsResponse instance.
 */
GetUserDefinedFunctionsResponsePrivate::GetUserDefinedFunctionsResponsePrivate(
    GetUserDefinedFunctionsResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetUserDefinedFunctionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUserDefinedFunctionsResponsePrivate::parseGetUserDefinedFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserDefinedFunctionsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
