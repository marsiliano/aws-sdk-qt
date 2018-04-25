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

#include "deleteapplicationreferencedatasourceresponse.h"
#include "deleteapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationReferenceDataSourceResponse
 * \brief The DeleteApplicationReferenceDataSourceResponse class provides an interace for KinesisAnalytics DeleteApplicationReferenceDataSource responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplicationReferenceDataSource
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationReferenceDataSourceResponse::DeleteApplicationReferenceDataSourceResponse(
        const DeleteApplicationReferenceDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationReferenceDataSourceRequest * DeleteApplicationReferenceDataSourceResponse::request() const
{
    Q_D(const DeleteApplicationReferenceDataSourceResponse);
    return static_cast<const DeleteApplicationReferenceDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics DeleteApplicationReferenceDataSource \a response.
 */
void DeleteApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApplicationReferenceDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationReferenceDataSourceResponsePrivate
 * \brief The DeleteApplicationReferenceDataSourceResponsePrivate class provides private implementation for DeleteApplicationReferenceDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteApplicationReferenceDataSourceResponsePrivate::DeleteApplicationReferenceDataSourceResponsePrivate(
    DeleteApplicationReferenceDataSourceResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics DeleteApplicationReferenceDataSource response element from \a xml.
 */
void DeleteApplicationReferenceDataSourceResponsePrivate::parseDeleteApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationReferenceDataSourceResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
