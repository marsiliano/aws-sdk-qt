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

#include "removetagsfromresourceresponse.h"
#include "removetagsfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::RemoveTagsFromResourceResponse
 * \brief The RemoveTagsFromResourceResponse class provides an interace for DatabaseMigrationService RemoveTagsFromResource responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::removeTagsFromResource
 */

/*!
 * Constructs a RemoveTagsFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsFromResourceResponse::RemoveTagsFromResourceResponse(
        const RemoveTagsFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new RemoveTagsFromResourceResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsFromResourceRequest * RemoveTagsFromResourceResponse::request() const
{
    Q_D(const RemoveTagsFromResourceResponse);
    return static_cast<const RemoveTagsFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService RemoveTagsFromResource \a response.
 */
void RemoveTagsFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::RemoveTagsFromResourceResponsePrivate
 * \brief The RemoveTagsFromResourceResponsePrivate class provides private implementation for RemoveTagsFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a RemoveTagsFromResourceResponsePrivate object with public implementation \a q.
 */
RemoveTagsFromResourceResponsePrivate::RemoveTagsFromResourceResponsePrivate(
    RemoveTagsFromResourceResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService RemoveTagsFromResource response element from \a xml.
 */
void RemoveTagsFromResourceResponsePrivate::parseRemoveTagsFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
