/*
    Copyright 2013-2018 Paul Colby

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

#include "deletenotificationconfigurationresponse.h"
#include "deletenotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteNotificationConfigurationResponse
 * \brief The DeleteNotificationConfigurationResponse class provides an interace for AutoScaling DeleteNotificationConfiguration responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto Scaling
 *  User
 *
 * \sa AutoScalingClient::deleteNotificationConfiguration
 */

/*!
 * Constructs a DeleteNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNotificationConfigurationResponse::DeleteNotificationConfigurationResponse(
        const DeleteNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNotificationConfigurationRequest * DeleteNotificationConfigurationResponse::request() const
{
    Q_D(const DeleteNotificationConfigurationResponse);
    return static_cast<const DeleteNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DeleteNotificationConfiguration \a response.
 */
void DeleteNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DeleteNotificationConfigurationResponsePrivate
 * \brief The DeleteNotificationConfigurationResponsePrivate class provides private implementation for DeleteNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteNotificationConfigurationResponsePrivate::DeleteNotificationConfigurationResponsePrivate(
    DeleteNotificationConfigurationResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DeleteNotificationConfiguration response element from \a xml.
 */
void DeleteNotificationConfigurationResponsePrivate::parseDeleteNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
