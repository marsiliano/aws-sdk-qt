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

#include "deleteusagereportsubscriptionresponse.h"
#include "deleteusagereportsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteUsageReportSubscriptionResponse
 * \brief The DeleteUsageReportSubscriptionResponse class provides an interace for AppStream DeleteUsageReportSubscription responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on
 * 
 *  demand>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::deleteUsageReportSubscription
 */

/*!
 * Constructs a DeleteUsageReportSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUsageReportSubscriptionResponse::DeleteUsageReportSubscriptionResponse(
        const DeleteUsageReportSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteUsageReportSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteUsageReportSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUsageReportSubscriptionRequest * DeleteUsageReportSubscriptionResponse::request() const
{
    Q_D(const DeleteUsageReportSubscriptionResponse);
    return static_cast<const DeleteUsageReportSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DeleteUsageReportSubscription \a response.
 */
void DeleteUsageReportSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUsageReportSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DeleteUsageReportSubscriptionResponsePrivate
 * \brief The DeleteUsageReportSubscriptionResponsePrivate class provides private implementation for DeleteUsageReportSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteUsageReportSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteUsageReportSubscriptionResponsePrivate::DeleteUsageReportSubscriptionResponsePrivate(
    DeleteUsageReportSubscriptionResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DeleteUsageReportSubscription response element from \a xml.
 */
void DeleteUsageReportSubscriptionResponsePrivate::parseDeleteUsageReportSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsageReportSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
