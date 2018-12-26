/*
    Copyright 2013-2018 Paul Colby

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

#include "enableuserrequest.h"
#include "enableuserrequest_p.h"
#include "enableuserresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::EnableUserRequest
 * \brief The EnableUserRequest class provides an interface for AppStream EnableUser requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::enableUser
 */

/*!
 * Constructs a copy of \a other.
 */
EnableUserRequest::EnableUserRequest(const EnableUserRequest &other)
    : AppStreamRequest(new EnableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableUserRequest object.
 */
EnableUserRequest::EnableUserRequest()
    : AppStreamRequest(new EnableUserRequestPrivate(AppStreamRequest::EnableUserAction, this))
{

}

/*!
 * \reimp
 */
bool EnableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableUserRequest::response(QNetworkReply * const reply) const
{
    return new EnableUserResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::EnableUserRequestPrivate
 * \brief The EnableUserRequestPrivate class provides private implementation for EnableUserRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a EnableUserRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
EnableUserRequestPrivate::EnableUserRequestPrivate(
    const AppStreamRequest::Action action, EnableUserRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableUserRequest
 * class' copy constructor.
 */
EnableUserRequestPrivate::EnableUserRequestPrivate(
    const EnableUserRequestPrivate &other, EnableUserRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
