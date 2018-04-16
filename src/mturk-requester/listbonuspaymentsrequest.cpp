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

#include "listbonuspaymentsrequest.h"
#include "listbonuspaymentsrequest_p.h"
#include "listbonuspaymentsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListBonusPaymentsRequest
 *
 * \brief The ListBonusPaymentsRequest class provides an interface for MTurk ListBonusPayments requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::listBonusPayments
 */

/*!
 * @brief  Constructs a new ListBonusPaymentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBonusPaymentsRequest::ListBonusPaymentsRequest(const ListBonusPaymentsRequest &other)
    : MTurkRequest(new ListBonusPaymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListBonusPaymentsRequest object.
 */
ListBonusPaymentsRequest::ListBonusPaymentsRequest()
    : MTurkRequest(new ListBonusPaymentsRequestPrivate(MTurkRequest::ListBonusPaymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBonusPaymentsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListBonusPaymentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBonusPaymentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBonusPaymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListBonusPaymentsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListBonusPaymentsRequestPrivate
 *
 * @brief  Private implementation for ListBonusPaymentsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListBonusPaymentsRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListBonusPaymentsRequest instance.
 */
ListBonusPaymentsRequestPrivate::ListBonusPaymentsRequestPrivate(
    const MTurkRequest::Action action, ListBonusPaymentsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListBonusPaymentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBonusPaymentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBonusPaymentsRequest instance.
 */
ListBonusPaymentsRequestPrivate::ListBonusPaymentsRequestPrivate(
    const ListBonusPaymentsRequestPrivate &other, ListBonusPaymentsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
