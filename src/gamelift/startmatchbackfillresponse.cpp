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

#include "startmatchbackfillresponse.h"
#include "startmatchbackfillresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  StartMatchBackfillResponse
 *
 * @brief  Handles GameLift StartMatchBackfill responses.
 *
 * @see    GameLiftClient::startMatchBackfill
 */

/**
 * @brief  Constructs a new StartMatchBackfillResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartMatchBackfillResponse::StartMatchBackfillResponse(
        const StartMatchBackfillRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StartMatchBackfillResponse(new StartMatchBackfillResponsePrivate(this), parent)
{
    setRequest(new StartMatchBackfillRequest(request));
    setReply(reply);
}

const StartMatchBackfillRequest * StartMatchBackfillResponse::request() const
{
    Q_D(const StartMatchBackfillResponse);
    return static_cast<const StartMatchBackfillRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift StartMatchBackfill response.
 *
 * @param  response  Response to parse.
 */
void StartMatchBackfillResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartMatchBackfillResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartMatchBackfillResponsePrivate
 *
 * @brief  Private implementation for StartMatchBackfillResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMatchBackfillResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartMatchBackfillResponse instance.
 */
StartMatchBackfillResponsePrivate::StartMatchBackfillResponsePrivate(
    StartMatchBackfillResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift StartMatchBackfillResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartMatchBackfillResponsePrivate::parseStartMatchBackfillResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMatchBackfillResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
