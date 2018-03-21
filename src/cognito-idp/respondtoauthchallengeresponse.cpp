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

#include "respondtoauthchallengeresponse.h"
#include "respondtoauthchallengeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  RespondToAuthChallengeResponse
 *
 * @brief  Handles CognitoIdentityProvider RespondToAuthChallenge responses.
 *
 * @see    CognitoIdentityProviderClient::respondToAuthChallenge
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondToAuthChallengeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new RespondToAuthChallengeResponsePrivate(this), parent)
{
    setRequest(new RespondToAuthChallengeRequest(request));
    setReply(reply);
}

const RespondToAuthChallengeRequest * RespondToAuthChallengeResponse::request() const
{
    Q_D(const RespondToAuthChallengeResponse);
    return static_cast<const RespondToAuthChallengeRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider RespondToAuthChallenge response.
 *
 * @param  response  Response to parse.
 */
void RespondToAuthChallengeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RespondToAuthChallengeResponsePrivate
 *
 * @brief  Private implementation for RespondToAuthChallengeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondToAuthChallengeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RespondToAuthChallengeResponse instance.
 */
RespondToAuthChallengeResponsePrivate::RespondToAuthChallengeResponsePrivate(
    RespondToAuthChallengeQueueResponse * const q) : RespondToAuthChallengePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider RespondToAuthChallengeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RespondToAuthChallengeResponsePrivate::RespondToAuthChallengeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondToAuthChallengeResponse"));
    /// @todo
}