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

#include "createpublicvirtualinterfacerequest.h"
#include "createpublicvirtualinterfacerequest_p.h"
#include "createpublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreatePublicVirtualInterfaceRequest
 * \brief The CreatePublicVirtualInterfaceRequest class provides an interface for DirectConnect CreatePublicVirtualInterface requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::createPublicVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest(const CreatePublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new CreatePublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePublicVirtualInterfaceRequest object.
 */
CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest()
    : DirectConnectRequest(new CreatePublicVirtualInterfaceRequestPrivate(DirectConnectRequest::CreatePublicVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePublicVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreatePublicVirtualInterfaceRequestPrivate
 * \brief The CreatePublicVirtualInterfaceRequestPrivate class provides private implementation for CreatePublicVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreatePublicVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreatePublicVirtualInterfaceRequestPrivate::CreatePublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, CreatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicVirtualInterfaceRequest
 * class' copy constructor.
 */
CreatePublicVirtualInterfaceRequestPrivate::CreatePublicVirtualInterfaceRequestPrivate(
    const CreatePublicVirtualInterfaceRequestPrivate &other, CreatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
