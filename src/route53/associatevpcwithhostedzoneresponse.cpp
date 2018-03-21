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

#include "associatevpcwithhostedzoneresponse.h"
#include "associatevpcwithhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  AssociateVPCWithHostedZoneResponse
 *
 * @brief  Handles Route53 AssociateVPCWithHostedZone responses.
 *
 * @see    Route53Client::associateVPCWithHostedZone
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateVPCWithHostedZoneResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new AssociateVPCWithHostedZoneResponsePrivate(this), parent)
{
    setRequest(new AssociateVPCWithHostedZoneRequest(request));
    setReply(reply);
}

const AssociateVPCWithHostedZoneRequest * AssociateVPCWithHostedZoneResponse::request() const
{
    Q_D(const AssociateVPCWithHostedZoneResponse);
    return static_cast<const AssociateVPCWithHostedZoneRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 AssociateVPCWithHostedZone response.
 *
 * @param  response  Response to parse.
 */
void AssociateVPCWithHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateVPCWithHostedZoneResponsePrivate
 *
 * @brief  Private implementation for AssociateVPCWithHostedZoneResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVPCWithHostedZoneResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateVPCWithHostedZoneResponse instance.
 */
AssociateVPCWithHostedZoneResponsePrivate::AssociateVPCWithHostedZoneResponsePrivate(
    AssociateVPCWithHostedZoneQueueResponse * const q) : AssociateVPCWithHostedZonePrivate(q)
{

}

/**
 * @brief  Parse an Route53 AssociateVPCWithHostedZoneResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateVPCWithHostedZoneResponsePrivate::AssociateVPCWithHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateVPCWithHostedZoneResponse"));
    /// @todo
}