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

#include "modifyvpcendpointservicepermissionsrequest.h"
#include "modifyvpcendpointservicepermissionsrequest_p.h"
#include "modifyvpcendpointservicepermissionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyVpcEndpointServicePermissionsRequest
 * \brief The ModifyVpcEndpointServicePermissionsRequest class provides an interface for EC2 ModifyVpcEndpointServicePermissions requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::modifyVpcEndpointServicePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyVpcEndpointServicePermissionsRequest::ModifyVpcEndpointServicePermissionsRequest(const ModifyVpcEndpointServicePermissionsRequest &other)
    : EC2Request(new ModifyVpcEndpointServicePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyVpcEndpointServicePermissionsRequest object.
 */
ModifyVpcEndpointServicePermissionsRequest::ModifyVpcEndpointServicePermissionsRequest()
    : EC2Request(new ModifyVpcEndpointServicePermissionsRequestPrivate(EC2Request::ModifyVpcEndpointServicePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyVpcEndpointServicePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyVpcEndpointServicePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyVpcEndpointServicePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcEndpointServicePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ModifyVpcEndpointServicePermissionsRequestPrivate
 * \brief The ModifyVpcEndpointServicePermissionsRequestPrivate class provides private implementation for ModifyVpcEndpointServicePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyVpcEndpointServicePermissionsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
ModifyVpcEndpointServicePermissionsRequestPrivate::ModifyVpcEndpointServicePermissionsRequestPrivate(
    const EC2Request::Action action, ModifyVpcEndpointServicePermissionsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcEndpointServicePermissionsRequest
 * class' copy constructor.
 */
ModifyVpcEndpointServicePermissionsRequestPrivate::ModifyVpcEndpointServicePermissionsRequestPrivate(
    const ModifyVpcEndpointServicePermissionsRequestPrivate &other, ModifyVpcEndpointServicePermissionsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
