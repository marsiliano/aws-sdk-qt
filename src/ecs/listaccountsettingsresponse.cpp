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

#include "listaccountsettingsresponse.h"
#include "listaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::ListAccountSettingsResponse
 * \brief The ListAccountSettingsResponse class provides an interace for ECS ListAccountSettings responses.
 *
 * \inmodule QtAwsECS
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa EcsClient::listAccountSettings
 */

/*!
 * Constructs a ListAccountSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountSettingsResponse::ListAccountSettingsResponse(
        const ListAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new ListAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new ListAccountSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountSettingsRequest * ListAccountSettingsResponse::request() const
{
    Q_D(const ListAccountSettingsResponse);
    return static_cast<const ListAccountSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECS ListAccountSettings \a response.
 */
void ListAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECS::ListAccountSettingsResponsePrivate
 * \brief The ListAccountSettingsResponsePrivate class provides private implementation for ListAccountSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a ListAccountSettingsResponsePrivate object with public implementation \a q.
 */
ListAccountSettingsResponsePrivate::ListAccountSettingsResponsePrivate(
    ListAccountSettingsResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a ECS ListAccountSettings response element from \a xml.
 */
void ListAccountSettingsResponsePrivate::parseListAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECS
} // namespace QtAws
