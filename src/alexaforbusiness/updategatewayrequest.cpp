/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updategatewayrequest.h"
#include "updategatewayrequest_p.h"
#include "updategatewayresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayRequest
 * \brief The UpdateGatewayRequest class provides an interface for AlexaForBusiness UpdateGateway requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::updateGateway
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGatewayRequest::UpdateGatewayRequest(const UpdateGatewayRequest &other)
    : AlexaForBusinessRequest(new UpdateGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGatewayRequest object.
 */
UpdateGatewayRequest::UpdateGatewayRequest()
    : AlexaForBusinessRequest(new UpdateGatewayRequestPrivate(AlexaForBusinessRequest::UpdateGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGatewayRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayRequestPrivate
 * \brief The UpdateGatewayRequestPrivate class provides private implementation for UpdateGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateGatewayRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateGatewayRequestPrivate::UpdateGatewayRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateGatewayRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGatewayRequest
 * class' copy constructor.
 */
UpdateGatewayRequestPrivate::UpdateGatewayRequestPrivate(
    const UpdateGatewayRequestPrivate &other, UpdateGatewayRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
