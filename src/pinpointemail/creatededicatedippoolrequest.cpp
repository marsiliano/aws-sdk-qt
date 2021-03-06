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

#include "creatededicatedippoolrequest.h"
#include "creatededicatedippoolrequest_p.h"
#include "creatededicatedippoolresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::CreateDedicatedIpPoolRequest
 * \brief The CreateDedicatedIpPoolRequest class provides an interface for PinpointEmail CreateDedicatedIpPool requests.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in several AWS Regions and it provides an endpoint for each of these Regions.
 *  For a list of all the Regions and endpoints where the API is currently available, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">AWS Regions and Endpoints</a> in the
 *  <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  In each Region, AWS maintains multiple Availability Zones. These Availability Zones are physically isolated from each
 *  other, but are united by private, low-latency, high-throughput, and highly redundant network connections. These
 *  Availability Zones enable us to provide very high levels of availability and redundancy, while also minimizing latency.
 *  To learn more about the number of Availability Zones that are available in each Region, see <a
 *  href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
 *
 * \sa PinpointEmailClient::createDedicatedIpPool
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDedicatedIpPoolRequest::CreateDedicatedIpPoolRequest(const CreateDedicatedIpPoolRequest &other)
    : PinpointEmailRequest(new CreateDedicatedIpPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDedicatedIpPoolRequest object.
 */
CreateDedicatedIpPoolRequest::CreateDedicatedIpPoolRequest()
    : PinpointEmailRequest(new CreateDedicatedIpPoolRequestPrivate(PinpointEmailRequest::CreateDedicatedIpPoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDedicatedIpPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDedicatedIpPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDedicatedIpPoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateDedicatedIpPoolResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::CreateDedicatedIpPoolRequestPrivate
 * \brief The CreateDedicatedIpPoolRequestPrivate class provides private implementation for CreateDedicatedIpPoolRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a CreateDedicatedIpPoolRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
CreateDedicatedIpPoolRequestPrivate::CreateDedicatedIpPoolRequestPrivate(
    const PinpointEmailRequest::Action action, CreateDedicatedIpPoolRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDedicatedIpPoolRequest
 * class' copy constructor.
 */
CreateDedicatedIpPoolRequestPrivate::CreateDedicatedIpPoolRequestPrivate(
    const CreateDedicatedIpPoolRequestPrivate &other, CreateDedicatedIpPoolRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
