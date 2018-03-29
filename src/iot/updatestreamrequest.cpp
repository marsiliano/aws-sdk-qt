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

#include "updatestreamrequest.h"
#include "updatestreamrequest_p.h"
#include "updatestreamresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  UpdateStreamRequest
 *
 * @brief  Implements IoT UpdateStream requests.
 *
 * @see    IoTClient::updateStream
 */

/**
 * @brief  Constructs a new UpdateStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStreamRequest::UpdateStreamRequest(const UpdateStreamRequest &other)
    : IoTRequest(new UpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStreamRequest object.
 */
UpdateStreamRequest::UpdateStreamRequest()
    : IoTRequest(new UpdateStreamRequestPrivate(IoTRequest::UpdateStreamAction, this))
{

}

bool UpdateStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStreamRequestPrivate
 *
 * @brief  Private implementation for UpdateStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStreamRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateStreamRequest instance.
 */
UpdateStreamRequestPrivate::UpdateStreamRequestPrivate(
    const IoTRequest::Action action, UpdateStreamRequest * const q)
    : UpdateStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStreamRequest instance.
 */
UpdateStreamRequestPrivate::UpdateStreamRequestPrivate(
    const UpdateStreamRequestPrivate &other, UpdateStreamRequest * const q)
    : UpdateStreamPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
