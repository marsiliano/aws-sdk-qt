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

#include "updateintegrationrequest.h"
#include "updateintegrationrequest_p.h"
#include "updateintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateIntegrationRequest
 *
 * @brief  Implements APIGateway UpdateIntegration requests.
 *
 * @see    APIGatewayClient::updateIntegration
 */

/**
 * @brief  Constructs a new UpdateIntegrationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest(const UpdateIntegrationRequest &other)
    : APIGatewayRequest(new UpdateIntegrationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateIntegrationRequest object.
 */
UpdateIntegrationRequest::UpdateIntegrationRequest()
    : APIGatewayRequest(new UpdateIntegrationRequestPrivate(APIGatewayRequest::UpdateIntegrationAction, this))
{

}

bool UpdateIntegrationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateIntegrationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateIntegrationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIntegrationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateIntegrationRequestPrivate
 *
 * @brief  Private implementation for UpdateIntegrationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIntegrationRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateIntegrationRequest instance.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, UpdateIntegrationRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateIntegrationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateIntegrationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateIntegrationRequest instance.
 */
UpdateIntegrationRequestPrivate::UpdateIntegrationRequestPrivate(
    const UpdateIntegrationRequestPrivate &other, UpdateIntegrationRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
