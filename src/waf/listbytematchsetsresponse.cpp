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

#include "listbytematchsetsresponse.h"
#include "listbytematchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  ListByteMatchSetsResponse
 *
 * @brief  Handles WAF ListByteMatchSets responses.
 *
 * @see    WAFClient::listByteMatchSets
 */

/**
 * @brief  Constructs a new ListByteMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListByteMatchSetsResponse::ListByteMatchSetsResponse(
        const ListByteMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListByteMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListByteMatchSetsRequest(request));
    setReply(reply);
}

const ListByteMatchSetsRequest * ListByteMatchSetsResponse::request() const
{
    Q_D(const ListByteMatchSetsResponse);
    return static_cast<const ListByteMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListByteMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListByteMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListByteMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListByteMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListByteMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListByteMatchSetsResponse instance.
 */
ListByteMatchSetsResponsePrivate::ListByteMatchSetsResponsePrivate(
    ListByteMatchSetsResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF ListByteMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListByteMatchSetsResponsePrivate::ListByteMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListByteMatchSetsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
