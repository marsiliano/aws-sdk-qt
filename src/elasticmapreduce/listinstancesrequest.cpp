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

#include "listinstancesrequest.h"
#include "listinstancesrequest_p.h"
#include "listinstancesresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListInstancesRequest
 *
 * \brief The ListInstancesRequest class provides an interface for EMR ListInstances requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::listInstances
 */

/*!
 * @brief  Constructs a new ListInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInstancesRequest::ListInstancesRequest(const ListInstancesRequest &other)
    : EMRRequest(new ListInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListInstancesRequest object.
 */
ListInstancesRequest::ListInstancesRequest()
    : EMRRequest(new ListInstancesRequestPrivate(EMRRequest::ListInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstancesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstancesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListInstancesRequestPrivate
 *
 * @brief  Private implementation for ListInstancesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListInstancesRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListInstancesRequest instance.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const EMRRequest::Action action, ListInstancesRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInstancesRequest instance.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ListInstancesRequestPrivate &other, ListInstancesRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
