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

#include "getfederationtokenrequest.h"
#include "getfederationtokenrequest_p.h"
#include "getfederationtokenresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::GetFederationTokenRequest
 * \brief The GetFederationTokenRequest class provides an interface for STS GetFederationToken requests.
 *
 * \inmodule QtAwsSTS
 *
 *  <fullname>AWS Security Token Service</fullname>
 * 
 *  The AWS Security Token Service (STS) is a web service that enables you to request temporary, limited-privilege
 *  credentials for AWS Identity and Access Management (IAM) users or for users that you authenticate (federated users).
 *  This guide provides descriptions of the STS API. For more detailed information about using this service, go to <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a>.
 * 
 *  </p <note>
 * 
 *  As an alternative to using the API, you can use one of the AWS SDKs, which consist of libraries and sample code for
 *  various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to
 *  create programmatic access to STS. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services page</a>.
 * 
 *  </p </note>
 * 
 *  For information about setting up signatures and authorization through the API, go to <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the
 *  <i>AWS General Reference</i>. For general information about the Query API, go to <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in <i>Using
 *  IAM</i>. For information about using security tokens with other AWS products, go to <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS Services That
 *  Work with IAM</a> in the <i>IAM User Guide</i>.
 * 
 *  </p
 * 
 *  If you're new to AWS and need additional technical information about a specific AWS product, you can find the product's
 *  technical documentation at <a href="http://aws.amazon.com/documentation/">http://aws.amazon.com/documentation/</a>.
 * 
 *  </p
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  The AWS Security Token Service (STS) has a default endpoint of https://sts.amazonaws.com that maps to the US East (N.
 *  Virginia) region. Additional regions are available and are activated by default. For more information, see <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating and
 *  Deactivating AWS STS in an AWS Region</a> in the <i>IAM User
 * 
 *  Guide</i>>
 * 
 *  For information about STS endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">Regions and Endpoints</a> in the <i>AWS
 *  General
 * 
 *  Reference</i>>
 * 
 *  <b>Recording API requests</b>
 * 
 *  </p
 * 
 *  STS supports AWS CloudTrail, which is a service that records AWS calls for your AWS account and delivers log files to an
 *  Amazon S3 bucket. By using information collected by CloudTrail, you can determine what requests were successfully made
 *  to STS, who made the request, when it was made, and so on. To learn more about CloudTrail, including how to turn it on
 *  and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa StsClient::getFederationToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetFederationTokenRequest::GetFederationTokenRequest(const GetFederationTokenRequest &other)
    : StsRequest(new GetFederationTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFederationTokenRequest object.
 */
GetFederationTokenRequest::GetFederationTokenRequest()
    : StsRequest(new GetFederationTokenRequestPrivate(StsRequest::GetFederationTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetFederationTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFederationTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFederationTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetFederationTokenResponse(*this, reply);
}

/*!
 * \class QtAws::STS::GetFederationTokenRequestPrivate
 * \brief The GetFederationTokenRequestPrivate class provides private implementation for GetFederationTokenRequest.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a GetFederationTokenRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
GetFederationTokenRequestPrivate::GetFederationTokenRequestPrivate(
    const StsRequest::Action action, GetFederationTokenRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFederationTokenRequest
 * class' copy constructor.
 */
GetFederationTokenRequestPrivate::GetFederationTokenRequestPrivate(
    const GetFederationTokenRequestPrivate &other, GetFederationTokenRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws
