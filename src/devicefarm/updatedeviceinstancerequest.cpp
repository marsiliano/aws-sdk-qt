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

#include "updatedeviceinstancerequest.h"
#include "updatedeviceinstancerequest_p.h"
#include "updatedeviceinstanceresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceRequest
 *
 * \brief The UpdateDeviceInstanceRequest class provides an interface for DeviceFarm UpdateDeviceInstance requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateDeviceInstance
 */

/*!
 * @brief  Constructs a new UpdateDeviceInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDeviceInstanceRequest::UpdateDeviceInstanceRequest(const UpdateDeviceInstanceRequest &other)
    : DeviceFarmRequest(new UpdateDeviceInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateDeviceInstanceRequest object.
 */
UpdateDeviceInstanceRequest::UpdateDeviceInstanceRequest()
    : DeviceFarmRequest(new UpdateDeviceInstanceRequestPrivate(DeviceFarmRequest::UpdateDeviceInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceInstanceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateDeviceInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDeviceInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceInstanceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateDeviceInstanceRequestPrivate
 *
 * @brief  Private implementation for UpdateDeviceInstanceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceInstanceRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public UpdateDeviceInstanceRequest instance.
 */
UpdateDeviceInstanceRequestPrivate::UpdateDeviceInstanceRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDeviceInstanceRequest instance.
 */
UpdateDeviceInstanceRequestPrivate::UpdateDeviceInstanceRequestPrivate(
    const UpdateDeviceInstanceRequestPrivate &other, UpdateDeviceInstanceRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws