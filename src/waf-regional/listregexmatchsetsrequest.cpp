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

#include "listregexmatchsetsrequest.h"
#include "listregexmatchsetsrequest_p.h"
#include "listregexmatchsetsresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListRegexMatchSetsRequest
 *
 * @brief  Implements WAFRegional ListRegexMatchSets requests.
 *
 * @see    WAFRegionalClient::listRegexMatchSets
 */

/**
 * @brief  Constructs a new ListRegexMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRegexMatchSetsRequest::ListRegexMatchSetsRequest(const ListRegexMatchSetsRequest &other)
    : WAFRegionalRequest(new ListRegexMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRegexMatchSetsRequest object.
 */
ListRegexMatchSetsRequest::ListRegexMatchSetsRequest()
    : WAFRegionalRequest(new ListRegexMatchSetsRequestPrivate(WAFRegionalRequest::ListRegexMatchSetsAction, this))
{

}

bool ListRegexMatchSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRegexMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRegexMatchSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegexMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListRegexMatchSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRegexMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListRegexMatchSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRegexMatchSetsRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListRegexMatchSetsRequest instance.
 */
ListRegexMatchSetsRequestPrivate::ListRegexMatchSetsRequestPrivate(
    const WAFRegionalRequest::Action action, ListRegexMatchSetsRequest * const q)
    : ListRegexMatchSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRegexMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRegexMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRegexMatchSetsRequest instance.
 */
ListRegexMatchSetsRequestPrivate::ListRegexMatchSetsRequestPrivate(
    const ListRegexMatchSetsRequestPrivate &other, ListRegexMatchSetsRequest * const q)
    : ListRegexMatchSetsPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
