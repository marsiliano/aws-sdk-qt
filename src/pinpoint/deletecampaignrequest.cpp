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

#include "deletecampaignrequest.h"
#include "deletecampaignrequest_p.h"
#include "deletecampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteCampaignRequest
 * \brief The DeleteCampaignRequest class provides an interface for Pinpoint DeleteCampaign requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCampaignRequest::DeleteCampaignRequest(const DeleteCampaignRequest &other)
    : PinpointRequest(new DeleteCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCampaignRequest object.
 */
DeleteCampaignRequest::DeleteCampaignRequest()
    : PinpointRequest(new DeleteCampaignRequestPrivate(PinpointRequest::DeleteCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteCampaignRequestPrivate
 * \brief The DeleteCampaignRequestPrivate class provides private implementation for DeleteCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteCampaignRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const PinpointRequest::Action action, DeleteCampaignRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCampaignRequest
 * class' copy constructor.
 */
DeleteCampaignRequestPrivate::DeleteCampaignRequestPrivate(
    const DeleteCampaignRequestPrivate &other, DeleteCampaignRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
