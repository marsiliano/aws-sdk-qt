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

#include "describepolicyrequest.h"
#include "describepolicyrequest_p.h"
#include "describepolicyresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  DescribePolicyRequest
 *
 * @brief  Implements Organizations DescribePolicy requests.
 *
 * @see    OrganizationsClient::describePolicy
 */

/**
 * @brief  Constructs a new DescribePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePolicyRequest::DescribePolicyRequest(const DescribePolicyRequest &other)
    : OrganizationsRequest(new DescribePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePolicyRequest object.
 */
DescribePolicyRequest::DescribePolicyRequest()
    : OrganizationsRequest(new DescribePolicyRequestPrivate(OrganizationsRequest::DescribePolicyAction, this))
{

}

bool DescribePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DescribePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePolicyRequestPrivate
 *
 * @brief  Private implementation for DescribePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePolicyRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DescribePolicyRequest instance.
 */
DescribePolicyRequestPrivate::DescribePolicyRequestPrivate(
    const OrganizationsRequest::Action action, DescribePolicyRequest * const q)
    : DescribePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePolicyRequest instance.
 */
DescribePolicyRequestPrivate::DescribePolicyRequestPrivate(
    const DescribePolicyRequestPrivate &other, DescribePolicyRequest * const q)
    : DescribePolicyPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
