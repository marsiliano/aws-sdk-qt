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

#include "describeresourceserverresponse.h"
#include "describeresourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeResourceServerResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeResourceServer responses.
 *
 * @see    CognitoIdentityProviderClient::describeResourceServer
 */

/**
 * @brief  Constructs a new DescribeResourceServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResourceServerResponse::DescribeResourceServerResponse(
        const DescribeResourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeResourceServerResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceServerRequest(request));
    setReply(reply);
}

const DescribeResourceServerRequest * DescribeResourceServerResponse::request() const
{
    Q_D(const DescribeResourceServerResponse);
    return static_cast<const DescribeResourceServerRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeResourceServer response.
 *
 * @param  response  Response to parse.
 */
void DescribeResourceServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeResourceServerResponsePrivate
 *
 * @brief  Private implementation for DescribeResourceServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourceServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeResourceServerResponse instance.
 */
DescribeResourceServerResponsePrivate::DescribeResourceServerResponsePrivate(
    DescribeResourceServerResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeResourceServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeResourceServerResponsePrivate::DescribeResourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceServerResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
