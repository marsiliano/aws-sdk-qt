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

#include "updateintegrationresponserequest.h"
#include "updateintegrationresponserequest_p.h"
#include "updateintegrationresponseresponse.h"
#include "apigatewayv2request_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponseRequest
 * \brief The UpdateIntegrationResponseRequest class provides an interface for ApiGatewayV2 UpdateIntegrationResponse requests.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateIntegrationResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIntegrationResponseRequest::UpdateIntegrationResponseRequest(const UpdateIntegrationResponseRequest &other)
    : ApiGatewayV2Request(new UpdateIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIntegrationResponseRequest object.
 */
UpdateIntegrationResponseRequest::UpdateIntegrationResponseRequest()
    : ApiGatewayV2Request(new UpdateIntegrationResponseRequestPrivate(ApiGatewayV2Request::UpdateIntegrationResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIntegrationResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIntegrationResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntegrationResponseResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateIntegrationResponseRequestPrivate
 * \brief The UpdateIntegrationResponseRequestPrivate class provides private implementation for UpdateIntegrationResponseRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateIntegrationResponseRequestPrivate object for ApiGatewayV2 \a action,
 * with public implementation \a q.
 */
UpdateIntegrationResponseRequestPrivate::UpdateIntegrationResponseRequestPrivate(
    const ApiGatewayV2Request::Action action, UpdateIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntegrationResponseRequest
 * class' copy constructor.
 */
UpdateIntegrationResponseRequestPrivate::UpdateIntegrationResponseRequestPrivate(
    const UpdateIntegrationResponseRequestPrivate &other, UpdateIntegrationResponseRequest * const q)
    : ApiGatewayV2RequestPrivate(other, q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws
