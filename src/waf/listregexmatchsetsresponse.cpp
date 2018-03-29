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

#include "listregexmatchsetsresponse.h"
#include "listregexmatchsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  ListRegexMatchSetsResponse
 *
 * @brief  Handles WAF ListRegexMatchSets responses.
 *
 * @see    WAFClient::listRegexMatchSets
 */

/**
 * @brief  Constructs a new ListRegexMatchSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRegexMatchSetsResponse::ListRegexMatchSetsResponse(
        const ListRegexMatchSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListRegexMatchSetsResponsePrivate(this), parent)
{
    setRequest(new ListRegexMatchSetsRequest(request));
    setReply(reply);
}

const ListRegexMatchSetsRequest * ListRegexMatchSetsResponse::request() const
{
    Q_D(const ListRegexMatchSetsResponse);
    return static_cast<const ListRegexMatchSetsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListRegexMatchSets response.
 *
 * @param  response  Response to parse.
 */
void ListRegexMatchSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRegexMatchSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRegexMatchSetsResponsePrivate
 *
 * @brief  Private implementation for ListRegexMatchSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRegexMatchSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRegexMatchSetsResponse instance.
 */
ListRegexMatchSetsResponsePrivate::ListRegexMatchSetsResponsePrivate(
    ListRegexMatchSetsResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF ListRegexMatchSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRegexMatchSetsResponsePrivate::parseListRegexMatchSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegexMatchSetsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
