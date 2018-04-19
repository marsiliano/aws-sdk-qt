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

#include "deletelifecyclehookrequest.h"
#include "deletelifecyclehookrequest_p.h"
#include "deletelifecyclehookresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteLifecycleHookRequest
 * \brief The DeleteLifecycleHookRequest class provides an interface for AutoScaling DeleteLifecycleHook requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::deleteLifecycleHook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLifecycleHookRequest::DeleteLifecycleHookRequest(const DeleteLifecycleHookRequest &other)
    : AutoScalingRequest(new DeleteLifecycleHookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLifecycleHookRequest object.
 */
DeleteLifecycleHookRequest::DeleteLifecycleHookRequest()
    : AutoScalingRequest(new DeleteLifecycleHookRequestPrivate(AutoScalingRequest::DeleteLifecycleHookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLifecycleHookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLifecycleHookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLifecycleHookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecycleHookResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteLifecycleHookRequestPrivate
 * \brief The DeleteLifecycleHookRequestPrivate class provides private implementation for DeleteLifecycleHookRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteLifecycleHookRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteLifecycleHookRequestPrivate::DeleteLifecycleHookRequestPrivate(
    const AutoScalingRequest::Action action, DeleteLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecycleHookRequest
 * class' copy constructor.
 */
DeleteLifecycleHookRequestPrivate::DeleteLifecycleHookRequestPrivate(
    const DeleteLifecycleHookRequestPrivate &other, DeleteLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
