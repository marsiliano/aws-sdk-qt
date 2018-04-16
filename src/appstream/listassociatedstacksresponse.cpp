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

#include "listassociatedstacksresponse.h"
#include "listassociatedstacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::ListAssociatedStacksResponse
 *
 * \brief The ListAssociatedStacksResponse class provides an interace for AppStream ListAssociatedStacks responses.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::listAssociatedStacks
 */

/*!
 * @brief  Constructs a new ListAssociatedStacksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssociatedStacksResponse::ListAssociatedStacksResponse(
        const ListAssociatedStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new ListAssociatedStacksResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedStacksRequest(request));
    setReply(reply);
}

const ListAssociatedStacksRequest * ListAssociatedStacksResponse::request() const
{
    Q_D(const ListAssociatedStacksResponse);
    return static_cast<const ListAssociatedStacksRequest *>(d->request);
}

/*!
 * @brief  Parse a AppStream ListAssociatedStacks response.
 *
 * @param  response  Response to parse.
 */
void ListAssociatedStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssociatedStacksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListAssociatedStacksResponsePrivate
 *
 * \brief Private implementation for ListAssociatedStacksResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListAssociatedStacksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssociatedStacksResponse instance.
 */
ListAssociatedStacksResponsePrivate::ListAssociatedStacksResponsePrivate(
    ListAssociatedStacksResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppStream ListAssociatedStacksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssociatedStacksResponsePrivate::parseListAssociatedStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedStacksResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
