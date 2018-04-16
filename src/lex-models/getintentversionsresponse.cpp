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

#include "getintentversionsresponse.h"
#include "getintentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetIntentVersionsResponse
 *
 * \brief The GetIntentVersionsResponse class provides an interace for LexModelBuildingService GetIntentVersions responses.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getIntentVersions
 */

/*!
 * @brief  Constructs a new GetIntentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntentVersionsResponse::GetIntentVersionsResponse(
        const GetIntentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetIntentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetIntentVersionsRequest(request));
    setReply(reply);
}

const GetIntentVersionsRequest * GetIntentVersionsResponse::request() const
{
    Q_D(const GetIntentVersionsResponse);
    return static_cast<const GetIntentVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a LexModelBuildingService GetIntentVersions response.
 *
 * @param  response  Response to parse.
 */
void GetIntentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetIntentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetIntentVersionsResponsePrivate
 *
 * \brief Private implementation for GetIntentVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetIntentVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntentVersionsResponse instance.
 */
GetIntentVersionsResponsePrivate::GetIntentVersionsResponsePrivate(
    GetIntentVersionsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an LexModelBuildingService GetIntentVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntentVersionsResponsePrivate::parseGetIntentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentVersionsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
