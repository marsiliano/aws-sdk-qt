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

#include "listsamplesrequest.h"
#include "listsamplesrequest_p.h"
#include "listsamplesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSamplesRequest
 *
 * \brief The ListSamplesRequest class provides an interface for DeviceFarm ListSamples requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listSamples
 */

/*!
 * @brief  Constructs a new ListSamplesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSamplesRequest::ListSamplesRequest(const ListSamplesRequest &other)
    : DeviceFarmRequest(new ListSamplesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListSamplesRequest object.
 */
ListSamplesRequest::ListSamplesRequest()
    : DeviceFarmRequest(new ListSamplesRequestPrivate(DeviceFarmRequest::ListSamplesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSamplesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListSamplesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSamplesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSamplesRequest::response(QNetworkReply * const reply) const
{
    return new ListSamplesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListSamplesRequestPrivate
 *
 * @brief  Private implementation for ListSamplesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListSamplesRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListSamplesRequest instance.
 */
ListSamplesRequestPrivate::ListSamplesRequestPrivate(
    const DeviceFarmRequest::Action action, ListSamplesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListSamplesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSamplesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSamplesRequest instance.
 */
ListSamplesRequestPrivate::ListSamplesRequestPrivate(
    const ListSamplesRequestPrivate &other, ListSamplesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
