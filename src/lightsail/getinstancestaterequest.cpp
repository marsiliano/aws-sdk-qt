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

#include "getinstancestaterequest.h"
#include "getinstancestaterequest_p.h"
#include "getinstancestateresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetInstanceStateRequest
 * \brief The GetInstanceStateRequest class provides an interface for Lightsail GetInstanceState requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::getInstanceState
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceStateRequest::GetInstanceStateRequest(const GetInstanceStateRequest &other)
    : LightsailRequest(new GetInstanceStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceStateRequest object.
 */
GetInstanceStateRequest::GetInstanceStateRequest()
    : LightsailRequest(new GetInstanceStateRequestPrivate(LightsailRequest::GetInstanceStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceStateRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceStateResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::GetInstanceStateRequestPrivate
 * \brief The GetInstanceStateRequestPrivate class provides private implementation for GetInstanceStateRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetInstanceStateRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
GetInstanceStateRequestPrivate::GetInstanceStateRequestPrivate(
    const LightsailRequest::Action action, GetInstanceStateRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceStateRequest
 * class' copy constructor.
 */
GetInstanceStateRequestPrivate::GetInstanceStateRequestPrivate(
    const GetInstanceStateRequestPrivate &other, GetInstanceStateRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
