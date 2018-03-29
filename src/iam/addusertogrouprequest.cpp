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

#include "addusertogrouprequest.h"
#include "addusertogrouprequest_p.h"
#include "addusertogroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  AddUserToGroupRequest
 *
 * @brief  Implements IAM AddUserToGroup requests.
 *
 * @see    IAMClient::addUserToGroup
 */

/**
 * @brief  Constructs a new AddUserToGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddUserToGroupRequest::AddUserToGroupRequest(const AddUserToGroupRequest &other)
    : IAMRequest(new AddUserToGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddUserToGroupRequest object.
 */
AddUserToGroupRequest::AddUserToGroupRequest()
    : IAMRequest(new AddUserToGroupRequestPrivate(IAMRequest::AddUserToGroupAction, this))
{

}

bool AddUserToGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddUserToGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddUserToGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * AddUserToGroupRequest::response(QNetworkReply * const reply) const
{
    return new AddUserToGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddUserToGroupRequestPrivate
 *
 * @brief  Private implementation for AddUserToGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddUserToGroupRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public AddUserToGroupRequest instance.
 */
AddUserToGroupRequestPrivate::AddUserToGroupRequestPrivate(
    const IAMRequest::Action action, AddUserToGroupRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddUserToGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddUserToGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddUserToGroupRequest instance.
 */
AddUserToGroupRequestPrivate::AddUserToGroupRequestPrivate(
    const AddUserToGroupRequestPrivate &other, AddUserToGroupRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
