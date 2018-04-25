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

#include "listacceptedportfoliosharesrequest.h"
#include "listacceptedportfoliosharesrequest_p.h"
#include "listacceptedportfoliosharesresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesRequest
 * \brief The ListAcceptedPortfolioSharesRequest class provides an interface for ServiceCatalog ListAcceptedPortfolioShares requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listAcceptedPortfolioShares
 */

/*!
 * Constructs a copy of \a other.
 */
ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest(const ListAcceptedPortfolioSharesRequest &other)
    : ServiceCatalogRequest(new ListAcceptedPortfolioSharesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAcceptedPortfolioSharesRequest object.
 */
ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest()
    : ServiceCatalogRequest(new ListAcceptedPortfolioSharesRequestPrivate(ServiceCatalogRequest::ListAcceptedPortfolioSharesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAcceptedPortfolioSharesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAcceptedPortfolioSharesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAcceptedPortfolioSharesRequest::response(QNetworkReply * const reply) const
{
    return new ListAcceptedPortfolioSharesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListAcceptedPortfolioSharesRequestPrivate
 * \brief The ListAcceptedPortfolioSharesRequestPrivate class provides private implementation for ListAcceptedPortfolioSharesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListAcceptedPortfolioSharesRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListAcceptedPortfolioSharesRequestPrivate::ListAcceptedPortfolioSharesRequestPrivate(
    const ServiceCatalogRequest::Action action, ListAcceptedPortfolioSharesRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAcceptedPortfolioSharesRequest
 * class' copy constructor.
 */
ListAcceptedPortfolioSharesRequestPrivate::ListAcceptedPortfolioSharesRequestPrivate(
    const ListAcceptedPortfolioSharesRequestPrivate &other, ListAcceptedPortfolioSharesRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
