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

#include "deletewebhookrequest.h"
#include "deletewebhookrequest_p.h"
#include "deletewebhookresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteWebhookRequest
 * \brief The DeleteWebhookRequest class provides an interface for Amplify DeleteWebhook requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::deleteWebhook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWebhookRequest::DeleteWebhookRequest(const DeleteWebhookRequest &other)
    : AmplifyRequest(new DeleteWebhookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWebhookRequest object.
 */
DeleteWebhookRequest::DeleteWebhookRequest()
    : AmplifyRequest(new DeleteWebhookRequestPrivate(AmplifyRequest::DeleteWebhookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWebhookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWebhookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWebhookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWebhookResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteWebhookRequestPrivate
 * \brief The DeleteWebhookRequestPrivate class provides private implementation for DeleteWebhookRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteWebhookRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const AmplifyRequest::Action action, DeleteWebhookRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWebhookRequest
 * class' copy constructor.
 */
DeleteWebhookRequestPrivate::DeleteWebhookRequestPrivate(
    const DeleteWebhookRequestPrivate &other, DeleteWebhookRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
