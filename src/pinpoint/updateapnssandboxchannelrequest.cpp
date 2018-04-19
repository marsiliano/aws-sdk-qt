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

#include "updateapnssandboxchannelrequest.h"
#include "updateapnssandboxchannelrequest_p.h"
#include "updateapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelRequest
 * \brief The UpdateApnsSandboxChannelRequest class provides an interface for Pinpoint UpdateApnsSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateApnsSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest(const UpdateApnsSandboxChannelRequest &other)
    : PinpointRequest(new UpdateApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsSandboxChannelRequest object.
 */
UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest()
    : PinpointRequest(new UpdateApnsSandboxChannelRequestPrivate(PinpointRequest::UpdateApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelRequestPrivate
 * \brief The UpdateApnsSandboxChannelRequestPrivate class provides private implementation for UpdateApnsSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsSandboxChannelRequestPrivate::UpdateApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsSandboxChannelRequest
 * class' copy constructor.
 */
UpdateApnsSandboxChannelRequestPrivate::UpdateApnsSandboxChannelRequestPrivate(
    const UpdateApnsSandboxChannelRequestPrivate &other, UpdateApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
