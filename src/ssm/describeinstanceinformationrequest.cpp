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

#include "describeinstanceinformationrequest.h"
#include "describeinstanceinformationrequest_p.h"
#include "describeinstanceinformationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DescribeInstanceInformationRequest
 *
 * \brief The DescribeInstanceInformationRequest class provides an interface for SSM DescribeInstanceInformation requests.
 *
 * \ingroup SSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 * 
 *  Prerequisites</a>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SSMClient::describeInstanceInformation
 */

/*!
 * @brief  Constructs a new DescribeInstanceInformationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceInformationRequest::DescribeInstanceInformationRequest(const DescribeInstanceInformationRequest &other)
    : SSMRequest(new DescribeInstanceInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeInstanceInformationRequest object.
 */
DescribeInstanceInformationRequest::DescribeInstanceInformationRequest()
    : SSMRequest(new DescribeInstanceInformationRequestPrivate(SSMRequest::DescribeInstanceInformationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInstanceInformationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeInstanceInformationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceInformationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceInformationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceInformationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeInstanceInformationRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceInformationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceInformationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceInformationRequest instance.
 */
DescribeInstanceInformationRequestPrivate::DescribeInstanceInformationRequestPrivate(
    const SSMRequest::Action action, DescribeInstanceInformationRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceInformationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceInformationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceInformationRequest instance.
 */
DescribeInstanceInformationRequestPrivate::DescribeInstanceInformationRequestPrivate(
    const DescribeInstanceInformationRequestPrivate &other, DescribeInstanceInformationRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
