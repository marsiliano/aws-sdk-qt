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

#include "getcredentialsforidentityresponse.h"
#include "getcredentialsforidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::GetCredentialsForIdentityResponse
 * \brief The GetCredentialsForIdentityResponse class provides an interace for CognitoIdentity GetCredentialsForIdentity responses.
 *
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito Federated Identities</fullname>
 * 
 *  Amazon Cognito Federated Identities is a web service that delivers scoped temporary credentials to mobile devices and
 *  other untrusted environments. It uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito Federated Identities, you can enable authentication with one or more third-party identity providers
 *  (Facebook, Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also choose to support
 *  unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token
 *  provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  For a description of the authentication flow from the Amazon Cognito Developer Guide see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
 * 
 *  Flow</a>>
 * 
 *  For more information see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon Cognito Federated
 *
 * \sa CognitoIdentityClient::getCredentialsForIdentity
 */

/*!
 * Constructs a GetCredentialsForIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
GetCredentialsForIdentityResponse::GetCredentialsForIdentityResponse(
        const GetCredentialsForIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetCredentialsForIdentityResponsePrivate(this), parent)
{
    setRequest(new GetCredentialsForIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCredentialsForIdentityRequest * GetCredentialsForIdentityResponse::request() const
{
    Q_D(const GetCredentialsForIdentityResponse);
    return static_cast<const GetCredentialsForIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentity GetCredentialsForIdentity \a response.
 */
void GetCredentialsForIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCredentialsForIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentity::GetCredentialsForIdentityResponsePrivate
 * \brief The GetCredentialsForIdentityResponsePrivate class provides private implementation for GetCredentialsForIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a GetCredentialsForIdentityResponsePrivate object with public implementation \a q.
 */
GetCredentialsForIdentityResponsePrivate::GetCredentialsForIdentityResponsePrivate(
    GetCredentialsForIdentityResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentity GetCredentialsForIdentity response element from \a xml.
 */
void GetCredentialsForIdentityResponsePrivate::parseGetCredentialsForIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCredentialsForIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
