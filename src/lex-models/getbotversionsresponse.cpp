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

#include "getbotversionsresponse.h"
#include "getbotversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotVersionsResponse
 *
 * \brief The GetBotVersionsResponse class provides an interace for LexModelBuildingService GetBotVersions responses.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotVersions
 */

/*!
 * @brief  Constructs a new GetBotVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBotVersionsResponse::GetBotVersionsResponse(
        const GetBotVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotVersionsResponsePrivate(this), parent)
{
    setRequest(new GetBotVersionsRequest(request));
    setReply(reply);
}

const GetBotVersionsRequest * GetBotVersionsResponse::request() const
{
    Q_D(const GetBotVersionsResponse);
    return static_cast<const GetBotVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a LexModelBuildingService GetBotVersions response.
 *
 * @param  response  Response to parse.
 */
void GetBotVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetBotVersionsResponsePrivate
 *
 * \brief Private implementation for GetBotVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBotVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBotVersionsResponse instance.
 */
GetBotVersionsResponsePrivate::GetBotVersionsResponsePrivate(
    GetBotVersionsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an LexModelBuildingService GetBotVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBotVersionsResponsePrivate::parseGetBotVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotVersionsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
