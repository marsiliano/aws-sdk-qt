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

#include "getdevendpointrequest.h"
#include "getdevendpointrequest_p.h"
#include "getdevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointRequest
 * \brief The GetDevEndpointRequest class provides an interface for Glue GetDevEndpoint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDevEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevEndpointRequest::GetDevEndpointRequest(const GetDevEndpointRequest &other)
    : GlueRequest(new GetDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevEndpointRequest object.
 */
GetDevEndpointRequest::GetDevEndpointRequest()
    : GlueRequest(new GetDevEndpointRequestPrivate(GlueRequest::GetDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetDevEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDevEndpointRequestPrivate
 * \brief The GetDevEndpointRequestPrivate class provides private implementation for GetDevEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDevEndpointRequestPrivate::GetDevEndpointRequestPrivate(
    const GlueRequest::Action action, GetDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevEndpointRequest
 * class' copy constructor.
 */
GetDevEndpointRequestPrivate::GetDevEndpointRequestPrivate(
    const GetDevEndpointRequestPrivate &other, GetDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
