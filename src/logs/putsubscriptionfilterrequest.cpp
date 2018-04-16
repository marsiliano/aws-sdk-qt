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

#include "putsubscriptionfilterrequest.h"
#include "putsubscriptionfilterrequest_p.h"
#include "putsubscriptionfilterresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::PutSubscriptionFilterRequest
 *
 * \brief The PutSubscriptionFilterRequest class provides an interface for CloudWatchLogs PutSubscriptionFilter requests.
 *
 * \ingroup CloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from Amazon EC2 instances, AWS
 *  CloudTrail, or other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch
 *  console, CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
 * 
 *  SDK>
 * 
 *  You can use CloudWatch Logs
 * 
 *  to> <ul> <li>
 * 
 *  <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs to monitor applications and systems
 *  using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs and send
 *  you a notification whenever the rate of errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
 *  for monitoring; so, no code changes are required. For example, you can monitor application logs for specific literal
 *  terms (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position
 *  in log data (such as "404" status codes in an Apache access log). When the term you are searching for is found,
 *  CloudWatch Logs reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail and use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::putSubscriptionFilter
 */

/*!
 * @brief  Constructs a new PutSubscriptionFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutSubscriptionFilterRequest::PutSubscriptionFilterRequest(const PutSubscriptionFilterRequest &other)
    : CloudWatchLogsRequest(new PutSubscriptionFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutSubscriptionFilterRequest object.
 */
PutSubscriptionFilterRequest::PutSubscriptionFilterRequest()
    : CloudWatchLogsRequest(new PutSubscriptionFilterRequestPrivate(CloudWatchLogsRequest::PutSubscriptionFilterAction, this))
{

}

/*!
 * \reimp
 */
bool PutSubscriptionFilterRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutSubscriptionFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutSubscriptionFilterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSubscriptionFilterRequest::response(QNetworkReply * const reply) const
{
    return new PutSubscriptionFilterResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutSubscriptionFilterRequestPrivate
 *
 * @brief  Private implementation for PutSubscriptionFilterRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutSubscriptionFilterRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutSubscriptionFilterRequest instance.
 */
PutSubscriptionFilterRequestPrivate::PutSubscriptionFilterRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutSubscriptionFilterRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutSubscriptionFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutSubscriptionFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutSubscriptionFilterRequest instance.
 */
PutSubscriptionFilterRequestPrivate::PutSubscriptionFilterRequestPrivate(
    const PutSubscriptionFilterRequestPrivate &other, PutSubscriptionFilterRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
