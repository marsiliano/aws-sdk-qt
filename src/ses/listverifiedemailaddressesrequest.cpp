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

#include "listverifiedemailaddressesrequest.h"
#include "listverifiedemailaddressesrequest_p.h"
#include "listverifiedemailaddressesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListVerifiedEmailAddressesRequest
 * \brief The ListVerifiedEmailAddressesRequest class provides an interface for SES ListVerifiedEmailAddresses requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::listVerifiedEmailAddresses
 */

/*!
 * Constructs a copy of \a other.
 */
ListVerifiedEmailAddressesRequest::ListVerifiedEmailAddressesRequest(const ListVerifiedEmailAddressesRequest &other)
    : SesRequest(new ListVerifiedEmailAddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVerifiedEmailAddressesRequest object.
 */
ListVerifiedEmailAddressesRequest::ListVerifiedEmailAddressesRequest()
    : SesRequest(new ListVerifiedEmailAddressesRequestPrivate(SesRequest::ListVerifiedEmailAddressesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVerifiedEmailAddressesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVerifiedEmailAddressesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVerifiedEmailAddressesRequest::response(QNetworkReply * const reply) const
{
    return new ListVerifiedEmailAddressesResponse(*this, reply);
}

/*!
 * \class QtAws::SES::ListVerifiedEmailAddressesRequestPrivate
 * \brief The ListVerifiedEmailAddressesRequestPrivate class provides private implementation for ListVerifiedEmailAddressesRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a ListVerifiedEmailAddressesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListVerifiedEmailAddressesRequestPrivate::ListVerifiedEmailAddressesRequestPrivate(
    const SesRequest::Action action, ListVerifiedEmailAddressesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVerifiedEmailAddressesRequest
 * class' copy constructor.
 */
ListVerifiedEmailAddressesRequestPrivate::ListVerifiedEmailAddressesRequestPrivate(
    const ListVerifiedEmailAddressesRequestPrivate &other, ListVerifiedEmailAddressesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
