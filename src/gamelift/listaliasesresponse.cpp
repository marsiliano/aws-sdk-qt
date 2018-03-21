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

#include "listaliasesresponse.h"
#include "listaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  ListAliasesResponse
 *
 * @brief  Handles GameLift ListAliases responses.
 *
 * @see    GameLiftClient::listAliases
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAliasesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new ListAliasesResponsePrivate(this), parent)
{
    setRequest(new ListAliasesRequest(request));
    setReply(reply);
}

const ListAliasesRequest * ListAliasesResponse::request() const
{
    Q_D(const ListAliasesResponse);
    return static_cast<const ListAliasesRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift ListAliases response.
 *
 * @param  response  Response to parse.
 */
void ListAliasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAliasesResponsePrivate
 *
 * @brief  Private implementation for ListAliasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAliasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAliasesResponse instance.
 */
ListAliasesResponsePrivate::ListAliasesResponsePrivate(
    ListAliasesQueueResponse * const q) : ListAliasesPrivate(q)
{

}

/**
 * @brief  Parse an GameLift ListAliasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAliasesResponsePrivate::ListAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAliasesResponse"));
    /// @todo
}