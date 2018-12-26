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

#include "createcapacityreservationrequest.h"
#include "createcapacityreservationrequest_p.h"
#include "createcapacityreservationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateCapacityReservationRequest
 * \brief The CreateCapacityReservationRequest class provides an interface for EC2 CreateCapacityReservation requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::createCapacityReservation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCapacityReservationRequest::CreateCapacityReservationRequest(const CreateCapacityReservationRequest &other)
    : Ec2Request(new CreateCapacityReservationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCapacityReservationRequest object.
 */
CreateCapacityReservationRequest::CreateCapacityReservationRequest()
    : Ec2Request(new CreateCapacityReservationRequestPrivate(Ec2Request::CreateCapacityReservationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCapacityReservationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCapacityReservationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCapacityReservationRequest::response(QNetworkReply * const reply) const
{
    return new CreateCapacityReservationResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateCapacityReservationRequestPrivate
 * \brief The CreateCapacityReservationRequestPrivate class provides private implementation for CreateCapacityReservationRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateCapacityReservationRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CreateCapacityReservationRequestPrivate::CreateCapacityReservationRequestPrivate(
    const Ec2Request::Action action, CreateCapacityReservationRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCapacityReservationRequest
 * class' copy constructor.
 */
CreateCapacityReservationRequestPrivate::CreateCapacityReservationRequestPrivate(
    const CreateCapacityReservationRequestPrivate &other, CreateCapacityReservationRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
