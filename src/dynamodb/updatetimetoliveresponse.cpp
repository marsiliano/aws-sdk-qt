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

#include "updatetimetoliveresponse.h"
#include "updatetimetoliveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  UpdateTimeToLiveResponse
 *
 * @brief  Handles DynamoDB UpdateTimeToLive responses.
 *
 * @see    DynamoDBClient::updateTimeToLive
 */

/**
 * @brief  Constructs a new UpdateTimeToLiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTimeToLiveResponse::UpdateTimeToLiveResponse(
        const UpdateTimeToLiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new UpdateTimeToLiveResponsePrivate(this), parent)
{
    setRequest(new UpdateTimeToLiveRequest(request));
    setReply(reply);
}

const UpdateTimeToLiveRequest * UpdateTimeToLiveResponse::request() const
{
    Q_D(const UpdateTimeToLiveResponse);
    return static_cast<const UpdateTimeToLiveRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB UpdateTimeToLive response.
 *
 * @param  response  Response to parse.
 */
void UpdateTimeToLiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateTimeToLiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTimeToLiveResponsePrivate
 *
 * @brief  Private implementation for UpdateTimeToLiveResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTimeToLiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTimeToLiveResponse instance.
 */
UpdateTimeToLiveResponsePrivate::UpdateTimeToLiveResponsePrivate(
    UpdateTimeToLiveResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB UpdateTimeToLiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTimeToLiveResponsePrivate::UpdateTimeToLiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTimeToLiveResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
