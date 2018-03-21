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

#include "createflowlogsresponse.h"
#include "createflowlogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateFlowLogsResponse
 *
 * @brief  Handles EC2 CreateFlowLogs responses.
 *
 * @see    EC2Client::createFlowLogs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFlowLogsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateFlowLogsResponsePrivate(this), parent)
{
    setRequest(new CreateFlowLogsRequest(request));
    setReply(reply);
}

const CreateFlowLogsRequest * CreateFlowLogsResponse::request() const
{
    Q_D(const CreateFlowLogsResponse);
    return static_cast<const CreateFlowLogsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateFlowLogs response.
 *
 * @param  response  Response to parse.
 */
void CreateFlowLogsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFlowLogsResponsePrivate
 *
 * @brief  Private implementation for CreateFlowLogsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFlowLogsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFlowLogsResponse instance.
 */
CreateFlowLogsResponsePrivate::CreateFlowLogsResponsePrivate(
    CreateFlowLogsQueueResponse * const q) : CreateFlowLogsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateFlowLogsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFlowLogsResponsePrivate::CreateFlowLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFlowLogsResponse"));
    /// @todo
}