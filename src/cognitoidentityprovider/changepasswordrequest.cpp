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

#include "changepasswordrequest.h"
#include "changepasswordrequest_p.h"
#include "changepasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ChangePasswordRequest
 * \brief The ChangePasswordRequest class provides an interface for CognitoIdentityProvider ChangePassword requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::changePassword
 */

/*!
 * Constructs a copy of \a other.
 */
ChangePasswordRequest::ChangePasswordRequest(const ChangePasswordRequest &other)
    : CognitoIdentityProviderRequest(new ChangePasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangePasswordRequest object.
 */
ChangePasswordRequest::ChangePasswordRequest()
    : CognitoIdentityProviderRequest(new ChangePasswordRequestPrivate(CognitoIdentityProviderRequest::ChangePasswordAction, this))
{

}

/*!
 * \reimp
 */
bool ChangePasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangePasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangePasswordRequest::response(QNetworkReply * const reply) const
{
    return new ChangePasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ChangePasswordRequestPrivate
 * \brief The ChangePasswordRequestPrivate class provides private implementation for ChangePasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ChangePasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ChangePasswordRequestPrivate::ChangePasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ChangePasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangePasswordRequest
 * class' copy constructor.
 */
ChangePasswordRequestPrivate::ChangePasswordRequestPrivate(
    const ChangePasswordRequestPrivate &other, ChangePasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
