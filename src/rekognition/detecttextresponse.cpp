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

#include "detecttextresponse.h"
#include "detecttextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Rekognition {

/**
 * @class  DetectTextResponse
 *
 * @brief  Handles Rekognition DetectText responses.
 *
 * @see    RekognitionClient::detectText
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetectTextResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectTextResponsePrivate(this), parent)
{
    setRequest(new DetectTextRequest(request));
    setReply(reply);
}

const DetectTextRequest * DetectTextResponse::request() const
{
    Q_D(const DetectTextResponse);
    return static_cast<const DetectTextRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition DetectText response.
 *
 * @param  response  Response to parse.
 */
void DetectTextResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetectTextResponsePrivate
 *
 * @brief  Private implementation for DetectTextResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetectTextResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetectTextResponse instance.
 */
DetectTextResponsePrivate::DetectTextResponsePrivate(
    DetectTextQueueResponse * const q) : DetectTextPrivate(q)
{

}

/**
 * @brief  Parse an Rekognition DetectTextResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetectTextResponsePrivate::DetectTextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectTextResponse"));
    /// @todo
}