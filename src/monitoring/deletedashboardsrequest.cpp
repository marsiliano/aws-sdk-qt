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

#include "deletedashboardsrequest.h"
#include "deletedashboardsrequest_p.h"
#include "deletedashboardsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteDashboardsRequest
 *
 * \brief The DeleteDashboardsRequest class provides an interface for CloudWatch DeleteDashboards requests.
 *
 * \ingroup CloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 *
 * \sa CloudWatchClient::deleteDashboards
 */

/*!
 * @brief  Constructs a new DeleteDashboardsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDashboardsRequest::DeleteDashboardsRequest(const DeleteDashboardsRequest &other)
    : CloudWatchRequest(new DeleteDashboardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteDashboardsRequest object.
 */
DeleteDashboardsRequest::DeleteDashboardsRequest()
    : CloudWatchRequest(new DeleteDashboardsRequestPrivate(CloudWatchRequest::DeleteDashboardsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDashboardsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteDashboardsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDashboardsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDashboardsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteDashboardsRequestPrivate
 *
 * @brief  Private implementation for DeleteDashboardsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDashboardsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DeleteDashboardsRequest instance.
 */
DeleteDashboardsRequestPrivate::DeleteDashboardsRequestPrivate(
    const CloudWatchRequest::Action action, DeleteDashboardsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDashboardsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDashboardsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDashboardsRequest instance.
 */
DeleteDashboardsRequestPrivate::DeleteDashboardsRequestPrivate(
    const DeleteDashboardsRequestPrivate &other, DeleteDashboardsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
