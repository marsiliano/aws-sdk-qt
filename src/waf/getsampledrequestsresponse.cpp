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

#include "getsampledrequestsresponse.h"
#include "getsampledrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetSampledRequestsResponse
 * \brief The GetSampledRequestsResponse class provides an interace for WAF GetSampledRequests responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::getSampledRequests
 */

/*!
 * Constructs a GetSampledRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSampledRequestsResponse::GetSampledRequestsResponse(
        const GetSampledRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetSampledRequestsResponsePrivate(this), parent)
{
    setRequest(new GetSampledRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSampledRequestsRequest * GetSampledRequestsResponse::request() const
{
    Q_D(const GetSampledRequestsResponse);
    return static_cast<const GetSampledRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF GetSampledRequests \a response.
 */
void GetSampledRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSampledRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::GetSampledRequestsResponsePrivate
 * \brief The GetSampledRequestsResponsePrivate class provides private implementation for GetSampledRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetSampledRequestsResponsePrivate object with public implementation \a q.
 */
GetSampledRequestsResponsePrivate::GetSampledRequestsResponsePrivate(
    GetSampledRequestsResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF GetSampledRequests response element from \a xml.
 */
void GetSampledRequestsResponsePrivate::parseGetSampledRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSampledRequestsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
