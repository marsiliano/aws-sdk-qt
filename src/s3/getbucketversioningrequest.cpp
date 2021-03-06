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

#include "getbucketversioningrequest.h"
#include "getbucketversioningrequest_p.h"
#include "getbucketversioningresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketVersioningRequest
 * \brief The GetBucketVersioningRequest class provides an interface for S3 GetBucketVersioning requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketVersioning
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest(const GetBucketVersioningRequest &other)
    : S3Request(new GetBucketVersioningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketVersioningRequest object.
 */
GetBucketVersioningRequest::GetBucketVersioningRequest()
    : S3Request(new GetBucketVersioningRequestPrivate(S3Request::GetBucketVersioningAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketVersioningRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketVersioningResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketVersioningRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketVersioningResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketVersioningRequestPrivate
 * \brief The GetBucketVersioningRequestPrivate class provides private implementation for GetBucketVersioningRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketVersioningRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const S3Request::Action action, GetBucketVersioningRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketVersioningRequest
 * class' copy constructor.
 */
GetBucketVersioningRequestPrivate::GetBucketVersioningRequestPrivate(
    const GetBucketVersioningRequestPrivate &other, GetBucketVersioningRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
