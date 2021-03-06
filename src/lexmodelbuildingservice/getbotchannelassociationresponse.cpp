/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbotchannelassociationresponse.h"
#include "getbotchannelassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotChannelAssociationResponse
 * \brief The GetBotChannelAssociationResponse class provides an interace for LexModelBuildingService GetBotChannelAssociation responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotChannelAssociation
 */

/*!
 * Constructs a GetBotChannelAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotChannelAssociationResponse::GetBotChannelAssociationResponse(
        const GetBotChannelAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotChannelAssociationResponsePrivate(this), parent)
{
    setRequest(new GetBotChannelAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotChannelAssociationRequest * GetBotChannelAssociationResponse::request() const
{
    Q_D(const GetBotChannelAssociationResponse);
    return static_cast<const GetBotChannelAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBotChannelAssociation \a response.
 */
void GetBotChannelAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotChannelAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotChannelAssociationResponsePrivate
 * \brief The GetBotChannelAssociationResponsePrivate class provides private implementation for GetBotChannelAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotChannelAssociationResponsePrivate object with public implementation \a q.
 */
GetBotChannelAssociationResponsePrivate::GetBotChannelAssociationResponsePrivate(
    GetBotChannelAssociationResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBotChannelAssociation response element from \a xml.
 */
void GetBotChannelAssociationResponsePrivate::parseGetBotChannelAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotChannelAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
