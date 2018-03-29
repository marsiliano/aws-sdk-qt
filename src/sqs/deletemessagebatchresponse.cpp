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

#include "deletemessagebatchresponse.h"
#include "deletemessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  DeleteMessageBatchResponse
 *
 * @brief  Handles SQS DeleteMessageBatch responses.
 *
 * @see    SQSClient::deleteMessageBatch
 */

/**
 * @brief  Constructs a new DeleteMessageBatchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMessageBatchResponse::DeleteMessageBatchResponse(
        const DeleteMessageBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteMessageBatchResponse(new DeleteMessageBatchResponsePrivate(this), parent)
{
    setRequest(new DeleteMessageBatchRequest(request));
    setReply(reply);
}

const DeleteMessageBatchRequest * DeleteMessageBatchResponse::request() const
{
    Q_D(const DeleteMessageBatchResponse);
    return static_cast<const DeleteMessageBatchRequest *>(d->request);
}

/**
 * @brief  Parse a SQS DeleteMessageBatch response.
 *
 * @param  response  Response to parse.
 */
void DeleteMessageBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteMessageBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMessageBatchResponsePrivate
 *
 * @brief  Private implementation for DeleteMessageBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMessageBatchResponse instance.
 */
DeleteMessageBatchResponsePrivate::DeleteMessageBatchResponsePrivate(
    DeleteMessageBatchResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS DeleteMessageBatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMessageBatchResponsePrivate::parseDeleteMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageBatchResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
