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

#include "describespotfleetrequestsrequest.h"
#include "describespotfleetrequestsrequest_p.h"
#include "describespotfleetrequestsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeSpotFleetRequestsRequest
 * \brief The DescribeSpotFleetRequestsRequest class provides an interface for EC2 DescribeSpotFleetRequests requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeSpotFleetRequests
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSpotFleetRequestsRequest::DescribeSpotFleetRequestsRequest(const DescribeSpotFleetRequestsRequest &other)
    : Ec2Request(new DescribeSpotFleetRequestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSpotFleetRequestsRequest object.
 */
DescribeSpotFleetRequestsRequest::DescribeSpotFleetRequestsRequest()
    : Ec2Request(new DescribeSpotFleetRequestsRequestPrivate(Ec2Request::DescribeSpotFleetRequestsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSpotFleetRequestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSpotFleetRequestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSpotFleetRequestsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotFleetRequestsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeSpotFleetRequestsRequestPrivate
 * \brief The DescribeSpotFleetRequestsRequestPrivate class provides private implementation for DescribeSpotFleetRequestsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeSpotFleetRequestsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeSpotFleetRequestsRequestPrivate::DescribeSpotFleetRequestsRequestPrivate(
    const Ec2Request::Action action, DescribeSpotFleetRequestsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotFleetRequestsRequest
 * class' copy constructor.
 */
DescribeSpotFleetRequestsRequestPrivate::DescribeSpotFleetRequestsRequestPrivate(
    const DescribeSpotFleetRequestsRequestPrivate &other, DescribeSpotFleetRequestsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
