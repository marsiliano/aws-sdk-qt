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

#include "mergedeveloperidentitiesrequest.h"
#include "mergedeveloperidentitiesrequest_p.h"
#include "mergedeveloperidentitiesresponse.h"
#include "cognitoidentityrequest_p.h"

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::MergeDeveloperIdentitiesRequest
 * \brief The MergeDeveloperIdentitiesRequest class provides an interface for CognitoIdentity MergeDeveloperIdentities requests.
 *
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito</fullname>
 * 
 *  Amazon Cognito is a web service that delivers scoped temporary credentials to mobile devices and other untrusted
 *  environments. Amazon Cognito uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito, you can enable authentication with one or more third-party identity providers (Facebook, Google,
 *  or Login with Amazon), and you can also choose to support unauthenticated access from your app. Cognito delivers a
 *  unique identifier for each user and acts as an OpenID token provider trusted by AWS Security Token Service (STS) to
 *  access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  To provide end-user credentials, first make an unsigned call to <a>GetId</a>. If the end user is authenticated with one
 *  of the supported identity providers, set the <code>Logins</code> map with the identity provider token.
 *  <code>GetId</code> returns a unique identifier for the
 * 
 *  user>
 * 
 *  Next, make an unsigned call to <a>GetCredentialsForIdentity</a>. This call expects the same <code>Logins</code> map as
 *  the <code>GetId</code> call, as well as the <code>IdentityID</code> originally returned by <code>GetId</code>. Assuming
 *  your identity pool has been configured via the <a>SetIdentityPoolRoles</a> operation,
 *  <code>GetCredentialsForIdentity</code> will return AWS credentials for your use. If your pool has not been configured
 *  with <code>SetIdentityPoolRoles</code>, or if you want to follow legacy flow, make an unsigned call to
 *  <a>GetOpenIdToken</a>, which returns the OpenID token necessary to call STS and retrieve AWS credentials. This call
 *  expects the same <code>Logins</code> map as the <code>GetId</code> call, as well as the <code>IdentityID</code>
 *  originally returned by <code>GetId</code>. The token returned by <code>GetOpenIdToken</code> can be passed to the STS
 *  operation <a
 *  href="http://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html">AssumeRoleWithWebIdentity</a>
 *  to retrieve AWS
 * 
 *  credentials>
 * 
 *  If you want to use Amazon Cognito in an Android, iOS, or Unity application, you will probably want to make API calls via
 *  the AWS Mobile SDK. To learn more, see the <a href="http://docs.aws.amazon.com/mobile/index.html">AWS Mobile SDK
 *  Developer
 *
 * \sa CognitoIdentityClient::mergeDeveloperIdentities
 */

/*!
 * Constructs a copy of \a other.
 */
MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest(const MergeDeveloperIdentitiesRequest &other)
    : CognitoIdentityRequest(new MergeDeveloperIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MergeDeveloperIdentitiesRequest object.
 */
MergeDeveloperIdentitiesRequest::MergeDeveloperIdentitiesRequest()
    : CognitoIdentityRequest(new MergeDeveloperIdentitiesRequestPrivate(CognitoIdentityRequest::MergeDeveloperIdentitiesAction, this))
{

}

/*!
 * \reimp
 */
bool MergeDeveloperIdentitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MergeDeveloperIdentitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MergeDeveloperIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new MergeDeveloperIdentitiesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentity::MergeDeveloperIdentitiesRequestPrivate
 * \brief The MergeDeveloperIdentitiesRequestPrivate class provides private implementation for MergeDeveloperIdentitiesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a MergeDeveloperIdentitiesRequestPrivate object for CognitoIdentity \a action,
 * with public implementation \a q.
 */
MergeDeveloperIdentitiesRequestPrivate::MergeDeveloperIdentitiesRequestPrivate(
    const CognitoIdentityRequest::Action action, MergeDeveloperIdentitiesRequest * const q)
    : CognitoIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MergeDeveloperIdentitiesRequest
 * class' copy constructor.
 */
MergeDeveloperIdentitiesRequestPrivate::MergeDeveloperIdentitiesRequestPrivate(
    const MergeDeveloperIdentitiesRequestPrivate &other, MergeDeveloperIdentitiesRequest * const q)
    : CognitoIdentityRequestPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
