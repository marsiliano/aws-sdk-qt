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

#include "listinputsecuritygroupsresponse.h"
#include "listinputsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  ListInputSecurityGroupsResponse
 *
 * @brief  Handles MediaLive ListInputSecurityGroups responses.
 *
 * @see    MediaLiveClient::listInputSecurityGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInputSecurityGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInputSecurityGroupsRequest(request));
    setReply(reply);
}

const ListInputSecurityGroupsRequest * ListInputSecurityGroupsResponse::request() const
{
    Q_D(const ListInputSecurityGroupsResponse);
    return static_cast<const ListInputSecurityGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive ListInputSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void ListInputSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInputSecurityGroupsResponsePrivate
 *
 * @brief  Private implementation for ListInputSecurityGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInputSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInputSecurityGroupsResponse instance.
 */
ListInputSecurityGroupsResponsePrivate::ListInputSecurityGroupsResponsePrivate(
    ListInputSecurityGroupsQueueResponse * const q) : ListInputSecurityGroupsPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive ListInputSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInputSecurityGroupsResponsePrivate::ListInputSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputSecurityGroupsResponse"));
    /// @todo
}