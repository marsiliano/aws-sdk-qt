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

#include "createorupdatetagsresponse.h"
#include "createorupdatetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateOrUpdateTagsResponse
 * \brief The CreateOrUpdateTagsResponse class provides an interace for AutoScaling CreateOrUpdateTags responses.
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
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
 *
 * \sa AutoScalingClient::createOrUpdateTags
 */

/*!
 * Constructs a CreateOrUpdateTagsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOrUpdateTagsResponse::CreateOrUpdateTagsResponse(
        const CreateOrUpdateTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateOrUpdateTagsResponsePrivate(this), parent)
{
    setRequest(new CreateOrUpdateTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOrUpdateTagsRequest * CreateOrUpdateTagsResponse::request() const
{
    Q_D(const CreateOrUpdateTagsResponse);
    return static_cast<const CreateOrUpdateTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling CreateOrUpdateTags \a response.
 */
void CreateOrUpdateTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOrUpdateTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::CreateOrUpdateTagsResponsePrivate
 * \brief The CreateOrUpdateTagsResponsePrivate class provides private implementation for CreateOrUpdateTagsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateOrUpdateTagsResponsePrivate object with public implementation \a q.
 */
CreateOrUpdateTagsResponsePrivate::CreateOrUpdateTagsResponsePrivate(
    CreateOrUpdateTagsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling CreateOrUpdateTags response element from \a xml.
 */
void CreateOrUpdateTagsResponsePrivate::parseCreateOrUpdateTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOrUpdateTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
