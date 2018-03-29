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

#include "deletebytematchsetrequest.h"
#include "deletebytematchsetrequest_p.h"
#include "deletebytematchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/**
 * @class  DeleteByteMatchSetRequest
 *
 * @brief  Implements WAF DeleteByteMatchSet requests.
 *
 * @see    WAFClient::deleteByteMatchSet
 */

/**
 * @brief  Constructs a new DeleteByteMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteByteMatchSetRequest::DeleteByteMatchSetRequest(const DeleteByteMatchSetRequest &other)
    : WAFRequest(new DeleteByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteByteMatchSetRequest object.
 */
DeleteByteMatchSetRequest::DeleteByteMatchSetRequest()
    : WAFRequest(new DeleteByteMatchSetRequestPrivate(WAFRequest::DeleteByteMatchSetAction, this))
{

}

bool DeleteByteMatchSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteByteMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteByteMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteByteMatchSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteByteMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteByteMatchSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteByteMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteByteMatchSetRequest instance.
 */
DeleteByteMatchSetRequestPrivate::DeleteByteMatchSetRequestPrivate(
    const WAFRequest::Action action, DeleteByteMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteByteMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteByteMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteByteMatchSetRequest instance.
 */
DeleteByteMatchSetRequestPrivate::DeleteByteMatchSetRequestPrivate(
    const DeleteByteMatchSetRequestPrivate &other, DeleteByteMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
