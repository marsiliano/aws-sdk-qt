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

#include "postcontentresponse.h"
#include "postcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace LexRuntimeService {

/**
 * @class  PostContentResponse
 *
 * @brief  Handles LexRuntimeService PostContent responses.
 *
 * @see    LexRuntimeServiceClient::postContent
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PostContentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexRuntimeServiceResponse(new PostContentResponsePrivate(this), parent)
{
    setRequest(new PostContentRequest(request));
    setReply(reply);
}

const PostContentRequest * PostContentResponse::request() const
{
    Q_D(const PostContentResponse);
    return static_cast<const PostContentRequest *>(d->request);
}

/**
 * @brief  Parse a LexRuntimeService PostContent response.
 *
 * @param  response  Response to parse.
 */
void PostContentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PostContentResponsePrivate
 *
 * @brief  Private implementation for PostContentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostContentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PostContentResponse instance.
 */
PostContentResponsePrivate::PostContentResponsePrivate(
    PostContentQueueResponse * const q) : PostContentPrivate(q)
{

}

/**
 * @brief  Parse an LexRuntimeService PostContentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PostContentResponsePrivate::PostContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostContentResponse"));
    /// @todo
}