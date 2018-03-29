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

#include "describealiasresponse.h"
#include "describealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeAliasResponse
 *
 * @brief  Handles GameLift DescribeAlias responses.
 *
 * @see    GameLiftClient::describeAlias
 */

/**
 * @brief  Constructs a new DescribeAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAliasResponse::DescribeAliasResponse(
        const DescribeAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeAliasResponse(new DescribeAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeAliasRequest(request));
    setReply(reply);
}

const DescribeAliasRequest * DescribeAliasResponse::request() const
{
    Q_D(const DescribeAliasResponse);
    return static_cast<const DescribeAliasRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeAlias response.
 *
 * @param  response  Response to parse.
 */
void DescribeAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAliasResponsePrivate
 *
 * @brief  Private implementation for DescribeAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAliasResponse instance.
 */
DescribeAliasResponsePrivate::DescribeAliasResponsePrivate(
    DescribeAliasResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAliasResponsePrivate::parseDescribeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAliasResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
