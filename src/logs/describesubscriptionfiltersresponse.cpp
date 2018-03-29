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

#include "describesubscriptionfiltersresponse.h"
#include "describesubscriptionfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeSubscriptionFiltersResponse
 *
 * @brief  Handles CloudWatchLogs DescribeSubscriptionFilters responses.
 *
 * @see    CloudWatchLogsClient::describeSubscriptionFilters
 */

/**
 * @brief  Constructs a new DescribeSubscriptionFiltersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSubscriptionFiltersResponse::DescribeSubscriptionFiltersResponse(
        const DescribeSubscriptionFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeSubscriptionFiltersResponsePrivate(this), parent)
{
    setRequest(new DescribeSubscriptionFiltersRequest(request));
    setReply(reply);
}

const DescribeSubscriptionFiltersRequest * DescribeSubscriptionFiltersResponse::request() const
{
    Q_D(const DescribeSubscriptionFiltersResponse);
    return static_cast<const DescribeSubscriptionFiltersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeSubscriptionFilters response.
 *
 * @param  response  Response to parse.
 */
void DescribeSubscriptionFiltersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSubscriptionFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSubscriptionFiltersResponsePrivate
 *
 * @brief  Private implementation for DescribeSubscriptionFiltersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubscriptionFiltersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSubscriptionFiltersResponse instance.
 */
DescribeSubscriptionFiltersResponsePrivate::DescribeSubscriptionFiltersResponsePrivate(
    DescribeSubscriptionFiltersResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeSubscriptionFiltersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSubscriptionFiltersResponsePrivate::DescribeSubscriptionFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubscriptionFiltersResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
