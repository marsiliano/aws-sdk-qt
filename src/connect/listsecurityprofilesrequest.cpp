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

#include "listsecurityprofilesrequest.h"
#include "listsecurityprofilesrequest_p.h"
#include "listsecurityprofilesresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ListSecurityProfilesRequest
 * \brief The ListSecurityProfilesRequest class provides an interface for Connect ListSecurityProfiles requests.
 *
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Throttling limits for the Amazon Connect API
 * 
 *  operations>
 * 
 *  For the <code>GetMetricData</code> and <code>GetCurrentMetricData</code> operations, a RateLimit of 5 per second, and a
 *  BurstLimit of 8 per
 * 
 *  second>
 * 
 *  For all other operations, a RateLimit of 2 per second, and a BurstLimit of 5 per
 * 
 *  second>
 * 
 *  You can request an increase to the throttling limits by submitting a <a
 *  href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon Connect service
 *  limits increase form</a>. You must be signed in to your AWS account to access the
 *
 * \sa ConnectClient::listSecurityProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListSecurityProfilesRequest::ListSecurityProfilesRequest(const ListSecurityProfilesRequest &other)
    : ConnectRequest(new ListSecurityProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSecurityProfilesRequest object.
 */
ListSecurityProfilesRequest::ListSecurityProfilesRequest()
    : ConnectRequest(new ListSecurityProfilesRequestPrivate(ConnectRequest::ListSecurityProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSecurityProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSecurityProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSecurityProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListSecurityProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::ListSecurityProfilesRequestPrivate
 * \brief The ListSecurityProfilesRequestPrivate class provides private implementation for ListSecurityProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ListSecurityProfilesRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
ListSecurityProfilesRequestPrivate::ListSecurityProfilesRequestPrivate(
    const ConnectRequest::Action action, ListSecurityProfilesRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSecurityProfilesRequest
 * class' copy constructor.
 */
ListSecurityProfilesRequestPrivate::ListSecurityProfilesRequestPrivate(
    const ListSecurityProfilesRequestPrivate &other, ListSecurityProfilesRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
