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

#include "getdeploymentresponse.h"
#include "getdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentResponse
 * \brief The GetDeploymentResponse class provides an interace for ApiGatewayV2 GetDeployment responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getDeployment
 */

/*!
 * Constructs a GetDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentResponse::GetDeploymentResponse(
        const GetDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetDeploymentResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentRequest * GetDeploymentResponse::request() const
{
    Q_D(const GetDeploymentResponse);
    return static_cast<const GetDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetDeployment \a response.
 */
void GetDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetDeploymentResponsePrivate
 * \brief The GetDeploymentResponsePrivate class provides private implementation for GetDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetDeploymentResponsePrivate object with public implementation \a q.
 */
GetDeploymentResponsePrivate::GetDeploymentResponsePrivate(
    GetDeploymentResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetDeployment response element from \a xml.
 */
void GetDeploymentResponsePrivate::parseGetDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
