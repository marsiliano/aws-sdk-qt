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

#include "describepullrequesteventsrequest.h"
#include "describepullrequesteventsrequest_p.h"
#include "describepullrequesteventsresponse.h"
#include "codecommitrequest_p.h"

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DescribePullRequestEventsRequest
 *
 * @brief  Implements CodeCommit DescribePullRequestEvents requests.
 *
 * @see    CodeCommitClient::describePullRequestEvents
 */

/**
 * @brief  Constructs a new DescribePullRequestEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePullRequestEventsRequest::DescribePullRequestEventsRequest(const DescribePullRequestEventsRequest &other)
    : CodeCommitRequest(new DescribePullRequestEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePullRequestEventsRequest object.
 */
DescribePullRequestEventsRequest::DescribePullRequestEventsRequest()
    : CodeCommitRequest(new DescribePullRequestEventsRequestPrivate(CodeCommitRequest::DescribePullRequestEventsAction, this))
{

}

bool DescribePullRequestEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePullRequestEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePullRequestEventsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePullRequestEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePullRequestEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePullRequestEventsRequestPrivate
 *
 * @brief  Private implementation for DescribePullRequestEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePullRequestEventsRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public DescribePullRequestEventsRequest instance.
 */
DescribePullRequestEventsRequestPrivate::DescribePullRequestEventsRequestPrivate(
    const CodeCommitRequest::Action action, DescribePullRequestEventsRequest * const q)
    : CodeCommitRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePullRequestEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePullRequestEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePullRequestEventsRequest instance.
 */
DescribePullRequestEventsRequestPrivate::DescribePullRequestEventsRequestPrivate(
    const DescribePullRequestEventsRequestPrivate &other, DescribePullRequestEventsRequest * const q)
    : CodeCommitRequestPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace QtAws
