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

#include "deletebrokerrequest.h"
#include "deletebrokerrequest_p.h"
#include "deletebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DeleteBrokerRequest
 * \brief The DeleteBrokerRequest class provides an interface for MQ DeleteBroker requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::deleteBroker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBrokerRequest::DeleteBrokerRequest(const DeleteBrokerRequest &other)
    : MQRequest(new DeleteBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBrokerRequest object.
 */
DeleteBrokerRequest::DeleteBrokerRequest()
    : MQRequest(new DeleteBrokerRequestPrivate(MQRequest::DeleteBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBrokerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBrokerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBrokerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBrokerResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::DeleteBrokerRequestPrivate
 * \brief The DeleteBrokerRequestPrivate class provides private implementation for DeleteBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DeleteBrokerRequestPrivate object for MQ \a action,
 * with public implementation \a q.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const MQRequest::Action action, DeleteBrokerRequest * const q)
    : MQRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBrokerRequest
 * class' copy constructor.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const DeleteBrokerRequestPrivate &other, DeleteBrokerRequest * const q)
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
