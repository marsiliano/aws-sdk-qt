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

#include "stopdeploymentresponse.h"
#include "stopdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  StopDeploymentResponse
 *
 * @brief  Handles CodeDeploy StopDeployment responses.
 *
 * @see    CodeDeployClient::stopDeployment
 */

/**
 * @brief  Constructs a new StopDeploymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopDeploymentResponse::StopDeploymentResponse(
        const StopDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StopDeploymentResponse(new StopDeploymentResponsePrivate(this), parent)
{
    setRequest(new StopDeploymentRequest(request));
    setReply(reply);
}

const StopDeploymentRequest * StopDeploymentResponse::request() const
{
    Q_D(const StopDeploymentResponse);
    return static_cast<const StopDeploymentRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy StopDeployment response.
 *
 * @param  response  Response to parse.
 */
void StopDeploymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopDeploymentResponsePrivate
 *
 * @brief  Private implementation for StopDeploymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopDeploymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopDeploymentResponse instance.
 */
StopDeploymentResponsePrivate::StopDeploymentResponsePrivate(
    StopDeploymentResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy StopDeploymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopDeploymentResponsePrivate::parseStopDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDeploymentResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
