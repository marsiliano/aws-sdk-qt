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

#include "setvaultnotificationsrequest.h"
#include "setvaultnotificationsrequest_p.h"
#include "setvaultnotificationsresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  SetVaultNotificationsRequest
 *
 * @brief  Implements Glacier SetVaultNotifications requests.
 *
 * @see    GlacierClient::setVaultNotifications
 */

/**
 * @brief  Constructs a new SetVaultNotificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetVaultNotificationsRequest::SetVaultNotificationsRequest(const SetVaultNotificationsRequest &other)
    : GlacierRequest(new SetVaultNotificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetVaultNotificationsRequest object.
 */
SetVaultNotificationsRequest::SetVaultNotificationsRequest()
    : GlacierRequest(new SetVaultNotificationsRequestPrivate(GlacierRequest::SetVaultNotificationsAction, this))
{

}

bool SetVaultNotificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetVaultNotificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetVaultNotificationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * SetVaultNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new SetVaultNotificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetVaultNotificationsRequestPrivate
 *
 * @brief  Private implementation for SetVaultNotificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetVaultNotificationsRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public SetVaultNotificationsRequest instance.
 */
SetVaultNotificationsRequestPrivate::SetVaultNotificationsRequestPrivate(
    const GlacierRequest::Action action, SetVaultNotificationsRequest * const q)
    : GlacierRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetVaultNotificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetVaultNotificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetVaultNotificationsRequest instance.
 */
SetVaultNotificationsRequestPrivate::SetVaultNotificationsRequestPrivate(
    const SetVaultNotificationsRequestPrivate &other, SetVaultNotificationsRequest * const q)
    : GlacierRequestPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
