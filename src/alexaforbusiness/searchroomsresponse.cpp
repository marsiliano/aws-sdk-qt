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

#include "searchroomsresponse.h"
#include "searchroomsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SearchRoomsResponse
 *
 * @brief  Handles AlexaForBusiness SearchRooms responses.
 *
 * @see    AlexaForBusinessClient::searchRooms
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchRoomsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchRoomsResponsePrivate(this), parent)
{
    setRequest(new SearchRoomsRequest(request));
    setReply(reply);
}

const SearchRoomsRequest * SearchRoomsResponse::request() const
{
    Q_D(const SearchRoomsResponse);
    return static_cast<const SearchRoomsRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SearchRooms response.
 *
 * @param  response  Response to parse.
 */
void SearchRoomsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchRoomsResponsePrivate
 *
 * @brief  Private implementation for SearchRoomsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchRoomsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchRoomsResponse instance.
 */
SearchRoomsResponsePrivate::SearchRoomsResponsePrivate(
    SearchRoomsQueueResponse * const q) : SearchRoomsPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SearchRoomsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchRoomsResponsePrivate::SearchRoomsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchRoomsResponse"));
    /// @todo
}