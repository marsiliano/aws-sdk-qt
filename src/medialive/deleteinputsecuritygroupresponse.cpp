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

#include "deleteinputsecuritygroupresponse.h"
#include "deleteinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  DeleteInputSecurityGroupResponse
 *
 * @brief  Handles MediaLive DeleteInputSecurityGroup responses.
 *
 * @see    MediaLiveClient::deleteInputSecurityGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInputSecurityGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteInputSecurityGroupRequest(request));
    setReply(reply);
}

const DeleteInputSecurityGroupRequest * DeleteInputSecurityGroupResponse::request() const
{
    Q_D(const DeleteInputSecurityGroupResponse);
    return static_cast<const DeleteInputSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive DeleteInputSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInputSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteInputSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInputSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInputSecurityGroupResponse instance.
 */
DeleteInputSecurityGroupResponsePrivate::DeleteInputSecurityGroupResponsePrivate(
    DeleteInputSecurityGroupQueueResponse * const q) : DeleteInputSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive DeleteInputSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInputSecurityGroupResponsePrivate::DeleteInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputSecurityGroupResponse"));
    /// @todo
}