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

#include "getidentitypoliciesresponse.h"
#include "getidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  GetIdentityPoliciesResponse
 *
 * @brief  Handles SES GetIdentityPolicies responses.
 *
 * @see    SESClient::getIdentityPolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityPoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetIdentityPoliciesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityPoliciesRequest(request));
    setReply(reply);
}

const GetIdentityPoliciesRequest * GetIdentityPoliciesResponse::request() const
{
    Q_D(const GetIdentityPoliciesResponse);
    return static_cast<const GetIdentityPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetIdentityPolicies response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityPoliciesResponsePrivate
 *
 * @brief  Private implementation for GetIdentityPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityPoliciesResponse instance.
 */
GetIdentityPoliciesResponsePrivate::GetIdentityPoliciesResponsePrivate(
    GetIdentityPoliciesQueueResponse * const q) : GetIdentityPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an SES GetIdentityPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityPoliciesResponsePrivate::GetIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityPoliciesResponse"));
    /// @todo
}