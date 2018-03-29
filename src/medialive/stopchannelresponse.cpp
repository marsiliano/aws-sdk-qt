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

#include "stopchannelresponse.h"
#include "stopchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/**
 * @class  StopChannelResponse
 *
 * @brief  Handles MediaLive StopChannel responses.
 *
 * @see    MediaLiveClient::stopChannel
 */

/**
 * @brief  Constructs a new StopChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopChannelResponse::StopChannelResponse(
        const StopChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StopChannelResponsePrivate(this), parent)
{
    setRequest(new StopChannelRequest(request));
    setReply(reply);
}

const StopChannelRequest * StopChannelResponse::request() const
{
    Q_D(const StopChannelResponse);
    return static_cast<const StopChannelRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive StopChannel response.
 *
 * @param  response  Response to parse.
 */
void StopChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopChannelResponsePrivate
 *
 * @brief  Private implementation for StopChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopChannelResponse instance.
 */
StopChannelResponsePrivate::StopChannelResponsePrivate(
    StopChannelResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaLive StopChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopChannelResponsePrivate::StopChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopChannelResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
