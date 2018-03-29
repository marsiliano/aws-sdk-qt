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

#include "discoverpollendpointrequest.h"
#include "discoverpollendpointrequest_p.h"
#include "discoverpollendpointresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  DiscoverPollEndpointRequest
 *
 * @brief  Implements ECS DiscoverPollEndpoint requests.
 *
 * @see    ECSClient::discoverPollEndpoint
 */

/**
 * @brief  Constructs a new DiscoverPollEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DiscoverPollEndpointRequest::DiscoverPollEndpointRequest(const DiscoverPollEndpointRequest &other)
    : ECSRequest(new DiscoverPollEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DiscoverPollEndpointRequest object.
 */
DiscoverPollEndpointRequest::DiscoverPollEndpointRequest()
    : ECSRequest(new DiscoverPollEndpointRequestPrivate(ECSRequest::DiscoverPollEndpointAction, this))
{

}

bool DiscoverPollEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DiscoverPollEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DiscoverPollEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * DiscoverPollEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DiscoverPollEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DiscoverPollEndpointRequestPrivate
 *
 * @brief  Private implementation for DiscoverPollEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DiscoverPollEndpointRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DiscoverPollEndpointRequest instance.
 */
DiscoverPollEndpointRequestPrivate::DiscoverPollEndpointRequestPrivate(
    const ECSRequest::Action action, DiscoverPollEndpointRequest * const q)
    : DiscoverPollEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DiscoverPollEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DiscoverPollEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DiscoverPollEndpointRequest instance.
 */
DiscoverPollEndpointRequestPrivate::DiscoverPollEndpointRequestPrivate(
    const DiscoverPollEndpointRequestPrivate &other, DiscoverPollEndpointRequest * const q)
    : DiscoverPollEndpointPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
