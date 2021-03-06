/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getresourcemetricsresponse.h"
#include "getresourcemetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PI {

/*!
 * \class QtAws::PI::GetResourceMetricsResponse
 * \brief The GetResourceMetricsResponse class provides an interace for PI GetResourceMetrics responses.
 *
 * \inmodule QtAwsPI
 *
 *  AWS Performance Insights enables you to monitor and explore different dimensions of database load based on data captured
 *  from a running RDS instance. The guide provides detailed information about Performance Insights data types, parameters
 *  and errors. For more information about Performance Insights capabilities see <a
 *  href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using Amazon RDS Performance
 *  Insights </a> in the <i>Amazon RDS User
 * 
 *  Guide</i>>
 * 
 *  The AWS Performance Insights API provides visibility into the performance of your RDS instance, when Performance
 *  Insights is enabled for supported engine types. While Amazon CloudWatch provides the authoritative source for AWS
 *  service vended monitoring metrics, AWS Performance Insights offers a domain-specific view of database load measured as
 *  Average Active Sessions and provided to API consumers as a 2-dimensional time-series dataset. The time dimension of the
 *  data provides DB load data for each time point in the queried time range, and each time point decomposes overall load in
 *  relation to the requested dimensions, such as SQL, Wait-event, User or Host, measured at that time
 *
 * \sa PiClient::getResourceMetrics
 */

/*!
 * Constructs a GetResourceMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceMetricsResponse::GetResourceMetricsResponse(
        const GetResourceMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PiResponse(new GetResourceMetricsResponsePrivate(this), parent)
{
    setRequest(new GetResourceMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceMetricsRequest * GetResourceMetricsResponse::request() const
{
    Q_D(const GetResourceMetricsResponse);
    return static_cast<const GetResourceMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PI GetResourceMetrics \a response.
 */
void GetResourceMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PI::GetResourceMetricsResponsePrivate
 * \brief The GetResourceMetricsResponsePrivate class provides private implementation for GetResourceMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsPI
 */

/*!
 * Constructs a GetResourceMetricsResponsePrivate object with public implementation \a q.
 */
GetResourceMetricsResponsePrivate::GetResourceMetricsResponsePrivate(
    GetResourceMetricsResponse * const q) : PiResponsePrivate(q)
{

}

/*!
 * Parses a PI GetResourceMetrics response element from \a xml.
 */
void GetResourceMetricsResponsePrivate::parseGetResourceMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PI
} // namespace QtAws
