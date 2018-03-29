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

#include "describescalingactivitiesresponse.h"
#include "describescalingactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DescribeScalingActivitiesResponse
 *
 * @brief  Handles ApplicationAutoScaling DescribeScalingActivities responses.
 *
 * @see    ApplicationAutoScalingClient::describeScalingActivities
 */

/**
 * @brief  Constructs a new DescribeScalingActivitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingActivitiesResponse::DescribeScalingActivitiesResponse(
        const DescribeScalingActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeScalingActivitiesResponse(new DescribeScalingActivitiesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingActivitiesRequest(request));
    setReply(reply);
}

const DescribeScalingActivitiesRequest * DescribeScalingActivitiesResponse::request() const
{
    Q_D(const DescribeScalingActivitiesResponse);
    return static_cast<const DescribeScalingActivitiesRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling DescribeScalingActivities response.
 *
 * @param  response  Response to parse.
 */
void DescribeScalingActivitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScalingActivitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScalingActivitiesResponsePrivate
 *
 * @brief  Private implementation for DescribeScalingActivitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingActivitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScalingActivitiesResponse instance.
 */
DescribeScalingActivitiesResponsePrivate::DescribeScalingActivitiesResponsePrivate(
    DescribeScalingActivitiesResponse * const q) : ApplicationAutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling DescribeScalingActivitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScalingActivitiesResponsePrivate::parseDescribeScalingActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingActivitiesResponse"));
    /// @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
