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

#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "deleteapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationCloudWatchLoggingOptionResponse
 *
 * @brief  Handles KinesisAnalytics DeleteApplicationCloudWatchLoggingOption responses.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationCloudWatchLoggingOption
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationCloudWatchLoggingOptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationCloudWatchLoggingOptionRequest(request));
    setReply(reply);
}

const DeleteApplicationCloudWatchLoggingOptionRequest * DeleteApplicationCloudWatchLoggingOptionResponse::request() const
{
    Q_D(const DeleteApplicationCloudWatchLoggingOptionResponse);
    return static_cast<const DeleteApplicationCloudWatchLoggingOptionRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics DeleteApplicationCloudWatchLoggingOption response.
 *
 * @param  response  Response to parse.
 */
void DeleteApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApplicationCloudWatchLoggingOptionResponsePrivate
 *
 * @brief  Private implementation for DeleteApplicationCloudWatchLoggingOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationCloudWatchLoggingOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApplicationCloudWatchLoggingOptionResponse instance.
 */
DeleteApplicationCloudWatchLoggingOptionResponsePrivate::DeleteApplicationCloudWatchLoggingOptionResponsePrivate(
    DeleteApplicationCloudWatchLoggingOptionQueueResponse * const q) : DeleteApplicationCloudWatchLoggingOptionPrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics DeleteApplicationCloudWatchLoggingOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApplicationCloudWatchLoggingOptionResponsePrivate::DeleteApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationCloudWatchLoggingOptionResponse"));
    /// @todo
}