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

#include "getdownloadurlforlayerresponse.h"
#include "getdownloadurlforlayerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  GetDownloadUrlForLayerResponse
 *
 * @brief  Handles ECR GetDownloadUrlForLayer responses.
 *
 * @see    ECRClient::getDownloadUrlForLayer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDownloadUrlForLayerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new GetDownloadUrlForLayerResponsePrivate(this), parent)
{
    setRequest(new GetDownloadUrlForLayerRequest(request));
    setReply(reply);
}

const GetDownloadUrlForLayerRequest * GetDownloadUrlForLayerResponse::request() const
{
    Q_D(const GetDownloadUrlForLayerResponse);
    return static_cast<const GetDownloadUrlForLayerRequest *>(d->request);
}

/**
 * @brief  Parse a ECR GetDownloadUrlForLayer response.
 *
 * @param  response  Response to parse.
 */
void GetDownloadUrlForLayerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDownloadUrlForLayerResponsePrivate
 *
 * @brief  Private implementation for GetDownloadUrlForLayerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDownloadUrlForLayerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDownloadUrlForLayerResponse instance.
 */
GetDownloadUrlForLayerResponsePrivate::GetDownloadUrlForLayerResponsePrivate(
    GetDownloadUrlForLayerQueueResponse * const q) : GetDownloadUrlForLayerPrivate(q)
{

}

/**
 * @brief  Parse an ECR GetDownloadUrlForLayerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDownloadUrlForLayerResponsePrivate::GetDownloadUrlForLayerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDownloadUrlForLayerResponse"));
    /// @todo
}