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

#include "adminremoveuserfromgrouprequest.h"
#include "adminremoveuserfromgrouprequest_p.h"
#include "adminremoveuserfromgroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRemoveUserFromGroupRequest
 * \brief The AdminRemoveUserFromGroupRequest class provides an interface for CognitoIdentityProvider AdminRemoveUserFromGroup requests.
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
 * \sa CognitoIdentityProviderClient::adminRemoveUserFromGroup
 */

/*!
 * Constructs a copy of \a other.
 */
AdminRemoveUserFromGroupRequest::AdminRemoveUserFromGroupRequest(const AdminRemoveUserFromGroupRequest &other)
    : CognitoIdentityProviderRequest(new AdminRemoveUserFromGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminRemoveUserFromGroupRequest object.
 */
AdminRemoveUserFromGroupRequest::AdminRemoveUserFromGroupRequest()
    : CognitoIdentityProviderRequest(new AdminRemoveUserFromGroupRequestPrivate(CognitoIdentityProviderRequest::AdminRemoveUserFromGroupAction, this))
{

}

/*!
 * \reimp
 */
bool AdminRemoveUserFromGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminRemoveUserFromGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminRemoveUserFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new AdminRemoveUserFromGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRemoveUserFromGroupRequestPrivate
 * \brief The AdminRemoveUserFromGroupRequestPrivate class provides private implementation for AdminRemoveUserFromGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminRemoveUserFromGroupRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminRemoveUserFromGroupRequestPrivate::AdminRemoveUserFromGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminRemoveUserFromGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminRemoveUserFromGroupRequest
 * class' copy constructor.
 */
AdminRemoveUserFromGroupRequestPrivate::AdminRemoveUserFromGroupRequestPrivate(
    const AdminRemoveUserFromGroupRequestPrivate &other, AdminRemoveUserFromGroupRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
