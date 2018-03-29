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

#include "enabledomaintransferlockrequest.h"
#include "enabledomaintransferlockrequest_p.h"
#include "enabledomaintransferlockresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  EnableDomainTransferLockRequest
 *
 * @brief  Implements Route53Domains EnableDomainTransferLock requests.
 *
 * @see    Route53DomainsClient::enableDomainTransferLock
 */

/**
 * @brief  Constructs a new EnableDomainTransferLockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableDomainTransferLockRequest::EnableDomainTransferLockRequest(const EnableDomainTransferLockRequest &other)
    : Route53DomainsRequest(new EnableDomainTransferLockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableDomainTransferLockRequest object.
 */
EnableDomainTransferLockRequest::EnableDomainTransferLockRequest()
    : Route53DomainsRequest(new EnableDomainTransferLockRequestPrivate(Route53DomainsRequest::EnableDomainTransferLockAction, this))
{

}

bool EnableDomainTransferLockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableDomainTransferLockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableDomainTransferLockResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableDomainTransferLockRequest::response(QNetworkReply * const reply) const
{
    return new EnableDomainTransferLockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableDomainTransferLockRequestPrivate
 *
 * @brief  Private implementation for EnableDomainTransferLockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableDomainTransferLockRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public EnableDomainTransferLockRequest instance.
 */
EnableDomainTransferLockRequestPrivate::EnableDomainTransferLockRequestPrivate(
    const Route53DomainsRequest::Action action, EnableDomainTransferLockRequest * const q)
    : EnableDomainTransferLockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableDomainTransferLockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableDomainTransferLockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableDomainTransferLockRequest instance.
 */
EnableDomainTransferLockRequestPrivate::EnableDomainTransferLockRequestPrivate(
    const EnableDomainTransferLockRequestPrivate &other, EnableDomainTransferLockRequest * const q)
    : EnableDomainTransferLockPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
