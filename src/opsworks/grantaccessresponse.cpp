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

#include "grantaccessresponse.h"
#include "grantaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  GrantAccessResponse
 *
 * @brief  Handles OpsWorks GrantAccess responses.
 *
 * @see    OpsWorksClient::grantAccess
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GrantAccessResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new GrantAccessResponsePrivate(this), parent)
{
    setRequest(new GrantAccessRequest(request));
    setReply(reply);
}

const GrantAccessRequest * GrantAccessResponse::request() const
{
    Q_D(const GrantAccessResponse);
    return static_cast<const GrantAccessRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks GrantAccess response.
 *
 * @param  response  Response to parse.
 */
void GrantAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GrantAccessResponsePrivate
 *
 * @brief  Private implementation for GrantAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GrantAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GrantAccessResponse instance.
 */
GrantAccessResponsePrivate::GrantAccessResponsePrivate(
    GrantAccessQueueResponse * const q) : GrantAccessPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks GrantAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GrantAccessResponsePrivate::GrantAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GrantAccessResponse"));
    /// @todo
}