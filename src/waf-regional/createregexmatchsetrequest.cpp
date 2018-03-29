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

#include "createregexmatchsetrequest.h"
#include "createregexmatchsetrequest_p.h"
#include "createregexmatchsetresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/**
 * @class  CreateRegexMatchSetRequest
 *
 * @brief  Implements WAFRegional CreateRegexMatchSet requests.
 *
 * @see    WAFRegionalClient::createRegexMatchSet
 */

/**
 * @brief  Constructs a new CreateRegexMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRegexMatchSetRequest::CreateRegexMatchSetRequest(const CreateRegexMatchSetRequest &other)
    : WAFRegionalRequest(new CreateRegexMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRegexMatchSetRequest object.
 */
CreateRegexMatchSetRequest::CreateRegexMatchSetRequest()
    : WAFRegionalRequest(new CreateRegexMatchSetRequestPrivate(WAFRegionalRequest::CreateRegexMatchSetAction, this))
{

}

bool CreateRegexMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRegexMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRegexMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRegexMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateRegexMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRegexMatchSetRequestPrivate
 *
 * @brief  Private implementation for CreateRegexMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRegexMatchSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateRegexMatchSetRequest instance.
 */
CreateRegexMatchSetRequestPrivate::CreateRegexMatchSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateRegexMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRegexMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRegexMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRegexMatchSetRequest instance.
 */
CreateRegexMatchSetRequestPrivate::CreateRegexMatchSetRequestPrivate(
    const CreateRegexMatchSetRequestPrivate &other, CreateRegexMatchSetRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
