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

#include "removethingfromthinggrouprequest.h"
#include "removethingfromthinggrouprequest_p.h"
#include "removethingfromthinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  RemoveThingFromThingGroupRequest
 *
 * @brief  Implements IoT RemoveThingFromThingGroup requests.
 *
 * @see    IoTClient::removeThingFromThingGroup
 */

/**
 * @brief  Constructs a new RemoveThingFromThingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveThingFromThingGroupRequest::RemoveThingFromThingGroupRequest(const RemoveThingFromThingGroupRequest &other)
    : IoTRequest(new RemoveThingFromThingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveThingFromThingGroupRequest object.
 */
RemoveThingFromThingGroupRequest::RemoveThingFromThingGroupRequest()
    : IoTRequest(new RemoveThingFromThingGroupRequestPrivate(IoTRequest::RemoveThingFromThingGroupAction, this))
{

}

bool RemoveThingFromThingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveThingFromThingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveThingFromThingGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveThingFromThingGroupRequest::response(QNetworkReply * const reply) const
{
    return new RemoveThingFromThingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveThingFromThingGroupRequestPrivate
 *
 * @brief  Private implementation for RemoveThingFromThingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveThingFromThingGroupRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public RemoveThingFromThingGroupRequest instance.
 */
RemoveThingFromThingGroupRequestPrivate::RemoveThingFromThingGroupRequestPrivate(
    const IoTRequest::Action action, RemoveThingFromThingGroupRequest * const q)
    : RemoveThingFromThingGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveThingFromThingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveThingFromThingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveThingFromThingGroupRequest instance.
 */
RemoveThingFromThingGroupRequestPrivate::RemoveThingFromThingGroupRequestPrivate(
    const RemoveThingFromThingGroupRequestPrivate &other, RemoveThingFromThingGroupRequest * const q)
    : RemoveThingFromThingGroupPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
