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

#include "listfacesresponse.h"
#include "listfacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListFacesResponse
 *
 * \brief The ListFacesResponse class provides an interace for Rekognition ListFaces responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listFaces
 */

/*!
 * @brief  Constructs a new ListFacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFacesResponse::ListFacesResponse(
        const ListFacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new ListFacesResponsePrivate(this), parent)
{
    setRequest(new ListFacesRequest(request));
    setReply(reply);
}

const ListFacesRequest * ListFacesResponse::request() const
{
    Q_D(const ListFacesResponse);
    return static_cast<const ListFacesRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition ListFaces response.
 *
 * @param  response  Response to parse.
 */
void ListFacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListFacesResponsePrivate
 *
 * \brief Private implementation for ListFacesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFacesResponse instance.
 */
ListFacesResponsePrivate::ListFacesResponsePrivate(
    ListFacesResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition ListFacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFacesResponsePrivate::parseListFacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFacesResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
