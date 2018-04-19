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

#include "getbucketlocationrequest.h"
#include "getbucketlocationrequest_p.h"
#include "getbucketlocationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLocationRequest
 * \brief The GetBucketLocationRequest class provides an interface for S3 GetBucketLocation requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLocation
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketLocationRequest::GetBucketLocationRequest(const GetBucketLocationRequest &other)
    : S3Request(new GetBucketLocationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketLocationRequest object.
 */
GetBucketLocationRequest::GetBucketLocationRequest()
    : S3Request(new GetBucketLocationRequestPrivate(S3Request::GetBucketLocationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLocationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketLocationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLocationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLocationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketLocationRequestPrivate
 * \brief The GetBucketLocationRequestPrivate class provides private implementation for GetBucketLocationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLocationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketLocationRequestPrivate::GetBucketLocationRequestPrivate(
    const S3Request::Action action, GetBucketLocationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLocationRequest
 * class' copy constructor.
 */
GetBucketLocationRequestPrivate::GetBucketLocationRequestPrivate(
    const GetBucketLocationRequestPrivate &other, GetBucketLocationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
