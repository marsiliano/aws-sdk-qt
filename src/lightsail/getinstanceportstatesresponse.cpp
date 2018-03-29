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

#include "getinstanceportstatesresponse.h"
#include "getinstanceportstatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetInstancePortStatesResponse
 *
 * @brief  Handles Lightsail GetInstancePortStates responses.
 *
 * @see    LightsailClient::getInstancePortStates
 */

/**
 * @brief  Constructs a new GetInstancePortStatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstancePortStatesResponse::GetInstancePortStatesResponse(
        const GetInstancePortStatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetInstancePortStatesResponse(new GetInstancePortStatesResponsePrivate(this), parent)
{
    setRequest(new GetInstancePortStatesRequest(request));
    setReply(reply);
}

const GetInstancePortStatesRequest * GetInstancePortStatesResponse::request() const
{
    Q_D(const GetInstancePortStatesResponse);
    return static_cast<const GetInstancePortStatesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetInstancePortStates response.
 *
 * @param  response  Response to parse.
 */
void GetInstancePortStatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInstancePortStatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstancePortStatesResponsePrivate
 *
 * @brief  Private implementation for GetInstancePortStatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancePortStatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstancePortStatesResponse instance.
 */
GetInstancePortStatesResponsePrivate::GetInstancePortStatesResponsePrivate(
    GetInstancePortStatesResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetInstancePortStatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstancePortStatesResponsePrivate::parseGetInstancePortStatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstancePortStatesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
