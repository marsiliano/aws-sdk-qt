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

#include "listpartnereventsourcesresponse.h"
#include "listpartnereventsourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourcesResponse
 * \brief The ListPartnerEventSourcesResponse class provides an interace for CloudWatchEvents ListPartnerEventSources responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon EventBridge helps you to respond to state changes in your AWS resources. When your resources change state, they
 *  automatically send events into an event stream. You can create rules that match selected events in the stream and route
 *  them to targets to take action. You can also use rules to take action on a predetermined schedule. For example, you can
 *  configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  stat> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
 * 
 *  risk> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volum> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide/">Amazon EventBridge User
 *
 * \sa CloudWatchEventsClient::listPartnerEventSources
 */

/*!
 * Constructs a ListPartnerEventSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPartnerEventSourcesResponse::ListPartnerEventSourcesResponse(
        const ListPartnerEventSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new ListPartnerEventSourcesResponsePrivate(this), parent)
{
    setRequest(new ListPartnerEventSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPartnerEventSourcesRequest * ListPartnerEventSourcesResponse::request() const
{
    Q_D(const ListPartnerEventSourcesResponse);
    return static_cast<const ListPartnerEventSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents ListPartnerEventSources \a response.
 */
void ListPartnerEventSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPartnerEventSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourcesResponsePrivate
 * \brief The ListPartnerEventSourcesResponsePrivate class provides private implementation for ListPartnerEventSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListPartnerEventSourcesResponsePrivate object with public implementation \a q.
 */
ListPartnerEventSourcesResponsePrivate::ListPartnerEventSourcesResponsePrivate(
    ListPartnerEventSourcesResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents ListPartnerEventSources response element from \a xml.
 */
void ListPartnerEventSourcesResponsePrivate::parseListPartnerEventSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPartnerEventSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
