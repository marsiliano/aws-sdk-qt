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

#include "listrecordhistoryrequest.h"
#include "listrecordhistoryrequest_p.h"
#include "listrecordhistoryresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListRecordHistoryRequest
 *
 * \brief The ListRecordHistoryRequest class provides an interface for ServiceCatalog ListRecordHistory requests.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listRecordHistory
 */

/*!
 * @brief  Constructs a new ListRecordHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRecordHistoryRequest::ListRecordHistoryRequest(const ListRecordHistoryRequest &other)
    : ServiceCatalogRequest(new ListRecordHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListRecordHistoryRequest object.
 */
ListRecordHistoryRequest::ListRecordHistoryRequest()
    : ServiceCatalogRequest(new ListRecordHistoryRequestPrivate(ServiceCatalogRequest::ListRecordHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecordHistoryRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListRecordHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRecordHistoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecordHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListRecordHistoryResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListRecordHistoryRequestPrivate
 *
 * @brief  Private implementation for ListRecordHistoryRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListRecordHistoryRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListRecordHistoryRequest instance.
 */
ListRecordHistoryRequestPrivate::ListRecordHistoryRequestPrivate(
    const ServiceCatalogRequest::Action action, ListRecordHistoryRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListRecordHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRecordHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRecordHistoryRequest instance.
 */
ListRecordHistoryRequestPrivate::ListRecordHistoryRequestPrivate(
    const ListRecordHistoryRequestPrivate &other, ListRecordHistoryRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
