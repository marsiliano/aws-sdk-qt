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

#include "deregisterscalabletargetrequest.h"
#include "deregisterscalabletargetrequest_p.h"
#include "deregisterscalabletargetresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::DeregisterScalableTargetRequest
 * \brief The DeregisterScalableTargetRequest class provides an interface for ApplicationAutoScaling DeregisterScalableTarget requests.
 *
 * \inmodule QtAwsApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for your scalable resources. You can use Application
 *  Auto Scaling to accomplish the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Define scaling policies to automatically scale your AWS or custom
 * 
 *  resource> </li> <li>
 * 
 *  Scale your resources in response to CloudWatch
 * 
 *  alarm> </li> <li>
 * 
 *  Schedule one-time or recurring scaling
 * 
 *  action> </li> <li>
 * 
 *  View the history of your scaling
 * 
 *  event> </li> </ul>
 * 
 *  Application Auto Scaling can scale the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon ECS services. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-auto-scaling.html">Service Auto Scaling</a> in
 *  the <i>Amazon Elastic Container Service Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon EC2 Spot fleets. For more information, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-auto-scaling.html">Automatic Scaling for Spot Fleet</a>
 *  in the <i>Amazon EC2 User
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon EMR clusters. For more information, see <a
 *  href="https://docs.aws.amazon.com/ElasticMapReduce/latest/ManagementGuide/emr-automatic-scaling.html">Using Automatic
 *  Scaling in Amazon EMR</a> in the <i>Amazon EMR Management
 * 
 *  Guide</i>> </li> <li>
 * 
 *  AppStream 2.0 fleets. For more information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/autoscaling.html">Fleet Auto Scaling for Amazon
 *  AppStream 2.0</a> in the <i>Amazon AppStream 2.0 Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Provisioned read and write capacity for Amazon DynamoDB tables and global secondary indexes. For more information, see
 *  <a href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/AutoScaling.html">Managing Throughput Capacity
 *  Automatically with DynamoDB Auto Scaling</a> in the <i>Amazon DynamoDB Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  Amazon Aurora Replicas. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Integrating.AutoScaling.html">Using Amazon
 *  Aurora Auto Scaling with Aurora
 * 
 *  Replicas</a>> </li> <li>
 * 
 *  Amazon SageMaker endpoint variants. For more information, see <a
 *  href="https://docs.aws.amazon.com/sagemaker/latest/dg/endpoint-auto-scaling.html">Automatically Scaling Amazon SageMaker
 * 
 *  Models</a>> </li> <li>
 * 
 *  Custom resources provided by your own applications or services. More information is available in our <a
 *  href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub repository</a>.
 * 
 *  </p </li> </ul>
 * 
 *  To learn more about Application Auto Scaling, including information about granting IAM users required permissions for
 *  Application Auto Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
 *  Auto Scaling User
 *
 * \sa ApplicationAutoScalingClient::deregisterScalableTarget
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterScalableTargetRequest::DeregisterScalableTargetRequest(const DeregisterScalableTargetRequest &other)
    : ApplicationAutoScalingRequest(new DeregisterScalableTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterScalableTargetRequest object.
 */
DeregisterScalableTargetRequest::DeregisterScalableTargetRequest()
    : ApplicationAutoScalingRequest(new DeregisterScalableTargetRequestPrivate(ApplicationAutoScalingRequest::DeregisterScalableTargetAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterScalableTargetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterScalableTargetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterScalableTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterScalableTargetResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationAutoScaling::DeregisterScalableTargetRequestPrivate
 * \brief The DeregisterScalableTargetRequestPrivate class provides private implementation for DeregisterScalableTargetRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a DeregisterScalableTargetRequestPrivate object for ApplicationAutoScaling \a action,
 * with public implementation \a q.
 */
DeregisterScalableTargetRequestPrivate::DeregisterScalableTargetRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DeregisterScalableTargetRequest * const q)
    : ApplicationAutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterScalableTargetRequest
 * class' copy constructor.
 */
DeregisterScalableTargetRequestPrivate::DeregisterScalableTargetRequestPrivate(
    const DeregisterScalableTargetRequestPrivate &other, DeregisterScalableTargetRequest * const q)
    : ApplicationAutoScalingRequestPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
