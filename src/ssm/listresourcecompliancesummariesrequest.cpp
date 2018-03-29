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

#include "listresourcecompliancesummariesrequest.h"
#include "listresourcecompliancesummariesrequest_p.h"
#include "listresourcecompliancesummariesresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  ListResourceComplianceSummariesRequest
 *
 * @brief  Implements SSM ListResourceComplianceSummaries requests.
 *
 * @see    SSMClient::listResourceComplianceSummaries
 */

/**
 * @brief  Constructs a new ListResourceComplianceSummariesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceComplianceSummariesRequest::ListResourceComplianceSummariesRequest(const ListResourceComplianceSummariesRequest &other)
    : SSMRequest(new ListResourceComplianceSummariesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourceComplianceSummariesRequest object.
 */
ListResourceComplianceSummariesRequest::ListResourceComplianceSummariesRequest()
    : SSMRequest(new ListResourceComplianceSummariesRequestPrivate(SSMRequest::ListResourceComplianceSummariesAction, this))
{

}

bool ListResourceComplianceSummariesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourceComplianceSummariesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceComplianceSummariesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceComplianceSummariesRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceComplianceSummariesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourceComplianceSummariesRequestPrivate
 *
 * @brief  Private implementation for ListResourceComplianceSummariesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceComplianceSummariesRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListResourceComplianceSummariesRequest instance.
 */
ListResourceComplianceSummariesRequestPrivate::ListResourceComplianceSummariesRequestPrivate(
    const SSMRequest::Action action, ListResourceComplianceSummariesRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceComplianceSummariesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceComplianceSummariesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceComplianceSummariesRequest instance.
 */
ListResourceComplianceSummariesRequestPrivate::ListResourceComplianceSummariesRequestPrivate(
    const ListResourceComplianceSummariesRequestPrivate &other, ListResourceComplianceSummariesRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
