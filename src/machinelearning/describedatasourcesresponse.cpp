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

#include "describedatasourcesresponse.h"
#include "describedatasourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  DescribeDataSourcesResponse
 *
 * @brief  Handles MachineLearning DescribeDataSources responses.
 *
 * @see    MachineLearningClient::describeDataSources
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDataSourcesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeDataSourcesResponsePrivate(this), parent)
{
    setRequest(new DescribeDataSourcesRequest(request));
    setReply(reply);
}

const DescribeDataSourcesRequest * DescribeDataSourcesResponse::request() const
{
    Q_D(const DescribeDataSourcesResponse);
    return static_cast<const DescribeDataSourcesRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DescribeDataSources response.
 *
 * @param  response  Response to parse.
 */
void DescribeDataSourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDataSourcesResponsePrivate
 *
 * @brief  Private implementation for DescribeDataSourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDataSourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDataSourcesResponse instance.
 */
DescribeDataSourcesResponsePrivate::DescribeDataSourcesResponsePrivate(
    DescribeDataSourcesQueueResponse * const q) : DescribeDataSourcesPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DescribeDataSourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDataSourcesResponsePrivate::DescribeDataSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataSourcesResponse"));
    /// @todo
}