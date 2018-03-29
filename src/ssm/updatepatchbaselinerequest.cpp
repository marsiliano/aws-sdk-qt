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

#include "updatepatchbaselinerequest.h"
#include "updatepatchbaselinerequest_p.h"
#include "updatepatchbaselineresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  UpdatePatchBaselineRequest
 *
 * @brief  Implements SSM UpdatePatchBaseline requests.
 *
 * @see    SSMClient::updatePatchBaseline
 */

/**
 * @brief  Constructs a new UpdatePatchBaselineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePatchBaselineRequest::UpdatePatchBaselineRequest(const UpdatePatchBaselineRequest &other)
    : SSMRequest(new UpdatePatchBaselineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePatchBaselineRequest object.
 */
UpdatePatchBaselineRequest::UpdatePatchBaselineRequest()
    : SSMRequest(new UpdatePatchBaselineRequestPrivate(SSMRequest::UpdatePatchBaselineAction, this))
{

}

bool UpdatePatchBaselineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePatchBaselineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePatchBaselineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePatchBaselineRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePatchBaselineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePatchBaselineRequestPrivate
 *
 * @brief  Private implementation for UpdatePatchBaselineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePatchBaselineRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdatePatchBaselineRequest instance.
 */
UpdatePatchBaselineRequestPrivate::UpdatePatchBaselineRequestPrivate(
    const SSMRequest::Action action, UpdatePatchBaselineRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePatchBaselineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePatchBaselineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePatchBaselineRequest instance.
 */
UpdatePatchBaselineRequestPrivate::UpdatePatchBaselineRequestPrivate(
    const UpdatePatchBaselineRequestPrivate &other, UpdatePatchBaselineRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
