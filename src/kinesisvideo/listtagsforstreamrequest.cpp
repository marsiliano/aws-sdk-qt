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

#include "listtagsforstreamrequest.h"
#include "listtagsforstreamrequest_p.h"
#include "listtagsforstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::ListTagsForStreamRequest
 * \brief The ListTagsForStreamRequest class provides an interface for KinesisVideo ListTagsForStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::listTagsForStream
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForStreamRequest::ListTagsForStreamRequest(const ListTagsForStreamRequest &other)
    : KinesisVideoRequest(new ListTagsForStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForStreamRequest object.
 */
ListTagsForStreamRequest::ListTagsForStreamRequest()
    : KinesisVideoRequest(new ListTagsForStreamRequestPrivate(KinesisVideoRequest::ListTagsForStreamAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForStreamRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::ListTagsForStreamRequestPrivate
 * \brief The ListTagsForStreamRequestPrivate class provides private implementation for ListTagsForStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a ListTagsForStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
ListTagsForStreamRequestPrivate::ListTagsForStreamRequestPrivate(
    const KinesisVideoRequest::Action action, ListTagsForStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForStreamRequest
 * class' copy constructor.
 */
ListTagsForStreamRequestPrivate::ListTagsForStreamRequestPrivate(
    const ListTagsForStreamRequestPrivate &other, ListTagsForStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
