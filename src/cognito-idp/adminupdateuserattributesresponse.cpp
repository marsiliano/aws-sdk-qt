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

#include "adminupdateuserattributesresponse.h"
#include "adminupdateuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUpdateUserAttributesResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminUpdateUserAttributes responses.
 *
 * @see    CognitoIdentityProviderClient::adminUpdateUserAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminUpdateUserAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateUserAttributesResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateUserAttributesRequest(request));
    setReply(reply);
}

const AdminUpdateUserAttributesRequest * AdminUpdateUserAttributesResponse::request() const
{
    Q_D(const AdminUpdateUserAttributesResponse);
    return static_cast<const AdminUpdateUserAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminUpdateUserAttributes response.
 *
 * @param  response  Response to parse.
 */
void AdminUpdateUserAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminUpdateUserAttributesResponsePrivate
 *
 * @brief  Private implementation for AdminUpdateUserAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUpdateUserAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminUpdateUserAttributesResponse instance.
 */
AdminUpdateUserAttributesResponsePrivate::AdminUpdateUserAttributesResponsePrivate(
    AdminUpdateUserAttributesQueueResponse * const q) : AdminUpdateUserAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminUpdateUserAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminUpdateUserAttributesResponsePrivate::AdminUpdateUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateUserAttributesResponse"));
    /// @todo
}