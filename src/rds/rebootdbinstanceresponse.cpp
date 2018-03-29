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

#include "rebootdbinstanceresponse.h"
#include "rebootdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  RebootDBInstanceResponse
 *
 * @brief  Handles RDS RebootDBInstance responses.
 *
 * @see    RDSClient::rebootDBInstance
 */

/**
 * @brief  Constructs a new RebootDBInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootDBInstanceResponse::RebootDBInstanceResponse(
        const RebootDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RebootDBInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootDBInstanceRequest(request));
    setReply(reply);
}

const RebootDBInstanceRequest * RebootDBInstanceResponse::request() const
{
    Q_D(const RebootDBInstanceResponse);
    return static_cast<const RebootDBInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RebootDBInstance response.
 *
 * @param  response  Response to parse.
 */
void RebootDBInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(RebootDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootDBInstanceResponsePrivate
 *
 * @brief  Private implementation for RebootDBInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootDBInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootDBInstanceResponse instance.
 */
RebootDBInstanceResponsePrivate::RebootDBInstanceResponsePrivate(
    RebootDBInstanceResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS RebootDBInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootDBInstanceResponsePrivate::parseRebootDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootDBInstanceResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
