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

#include "createtagsrequest.h"
#include "createtagsrequest_p.h"
#include "createtagsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::CreateTagsRequest
 * \brief The CreateTagsRequest class provides an interface for MQ CreateTags requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::createTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTagsRequest::CreateTagsRequest(const CreateTagsRequest &other)
    : MqRequest(new CreateTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTagsRequest object.
 */
CreateTagsRequest::CreateTagsRequest()
    : MqRequest(new CreateTagsRequestPrivate(MqRequest::CreateTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateTagsResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::CreateTagsRequestPrivate
 * \brief The CreateTagsRequestPrivate class provides private implementation for CreateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a CreateTagsRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const MqRequest::Action action, CreateTagsRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTagsRequest
 * class' copy constructor.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const CreateTagsRequestPrivate &other, CreateTagsRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
