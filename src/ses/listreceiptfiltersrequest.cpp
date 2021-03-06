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

#include "listreceiptfiltersrequest.h"
#include "listreceiptfiltersrequest_p.h"
#include "listreceiptfiltersresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListReceiptFiltersRequest
 * \brief The ListReceiptFiltersRequest class provides an interface for SES ListReceiptFilters requests.
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
 * \sa SesClient::listReceiptFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListReceiptFiltersRequest::ListReceiptFiltersRequest(const ListReceiptFiltersRequest &other)
    : SesRequest(new ListReceiptFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReceiptFiltersRequest object.
 */
ListReceiptFiltersRequest::ListReceiptFiltersRequest()
    : SesRequest(new ListReceiptFiltersRequestPrivate(SesRequest::ListReceiptFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListReceiptFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReceiptFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReceiptFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListReceiptFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::SES::ListReceiptFiltersRequestPrivate
 * \brief The ListReceiptFiltersRequestPrivate class provides private implementation for ListReceiptFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a ListReceiptFiltersRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListReceiptFiltersRequestPrivate::ListReceiptFiltersRequestPrivate(
    const SesRequest::Action action, ListReceiptFiltersRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReceiptFiltersRequest
 * class' copy constructor.
 */
ListReceiptFiltersRequestPrivate::ListReceiptFiltersRequestPrivate(
    const ListReceiptFiltersRequestPrivate &other, ListReceiptFiltersRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
