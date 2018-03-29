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

#include "listdeadlettersourcequeuesresponse.h"
#include "listdeadlettersourcequeuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  ListDeadLetterSourceQueuesResponse
 *
 * @brief  Handles SQS ListDeadLetterSourceQueues responses.
 *
 * @see    SQSClient::listDeadLetterSourceQueues
 */

/**
 * @brief  Constructs a new ListDeadLetterSourceQueuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeadLetterSourceQueuesResponse::ListDeadLetterSourceQueuesResponse(
        const ListDeadLetterSourceQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListDeadLetterSourceQueuesResponse(new ListDeadLetterSourceQueuesResponsePrivate(this), parent)
{
    setRequest(new ListDeadLetterSourceQueuesRequest(request));
    setReply(reply);
}

const ListDeadLetterSourceQueuesRequest * ListDeadLetterSourceQueuesResponse::request() const
{
    Q_D(const ListDeadLetterSourceQueuesResponse);
    return static_cast<const ListDeadLetterSourceQueuesRequest *>(d->request);
}

/**
 * @brief  Parse a SQS ListDeadLetterSourceQueues response.
 *
 * @param  response  Response to parse.
 */
void ListDeadLetterSourceQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDeadLetterSourceQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDeadLetterSourceQueuesResponsePrivate
 *
 * @brief  Private implementation for ListDeadLetterSourceQueuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeadLetterSourceQueuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDeadLetterSourceQueuesResponse instance.
 */
ListDeadLetterSourceQueuesResponsePrivate::ListDeadLetterSourceQueuesResponsePrivate(
    ListDeadLetterSourceQueuesResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ListDeadLetterSourceQueuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDeadLetterSourceQueuesResponsePrivate::parseListDeadLetterSourceQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeadLetterSourceQueuesResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
