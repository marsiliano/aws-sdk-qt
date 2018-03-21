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

#include "describestacksresponse.h"
#include "describestacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStacksResponse
 *
 * @brief  Handles CloudFormation DescribeStacks responses.
 *
 * @see    CloudFormationClient::describeStacks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStacksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeStacksResponsePrivate(this), parent)
{
    setRequest(new DescribeStacksRequest(request));
    setReply(reply);
}

const DescribeStacksRequest * DescribeStacksResponse::request() const
{
    Q_D(const DescribeStacksResponse);
    return static_cast<const DescribeStacksRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeStacks response.
 *
 * @param  response  Response to parse.
 */
void DescribeStacksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStacksResponsePrivate
 *
 * @brief  Private implementation for DescribeStacksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStacksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStacksResponse instance.
 */
DescribeStacksResponsePrivate::DescribeStacksResponsePrivate(
    DescribeStacksQueueResponse * const q) : DescribeStacksPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeStacksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStacksResponsePrivate::DescribeStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStacksResponse"));
    /// @todo
}