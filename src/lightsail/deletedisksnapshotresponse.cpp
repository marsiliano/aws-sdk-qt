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

#include "deletedisksnapshotresponse.h"
#include "deletedisksnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteDiskSnapshotResponse
 * \brief The DeleteDiskSnapshotResponse class provides an interace for Lightsail DeleteDiskSnapshot responses.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::deleteDiskSnapshot
 */

/*!
 * Constructs a DeleteDiskSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDiskSnapshotResponse::DeleteDiskSnapshotResponse(
        const DeleteDiskSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteDiskSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDiskSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDiskSnapshotRequest * DeleteDiskSnapshotResponse::request() const
{
    Q_D(const DeleteDiskSnapshotResponse);
    return static_cast<const DeleteDiskSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lightsail DeleteDiskSnapshot \a response.
 */
void DeleteDiskSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDiskSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lightsail::DeleteDiskSnapshotResponsePrivate
 * \brief The DeleteDiskSnapshotResponsePrivate class provides private implementation for DeleteDiskSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteDiskSnapshotResponsePrivate object with public implementation \a q.
 */
DeleteDiskSnapshotResponsePrivate::DeleteDiskSnapshotResponsePrivate(
    DeleteDiskSnapshotResponse * const q) : LightsailResponsePrivate(q)
{

}

/*!
 * Parses a Lightsail DeleteDiskSnapshot response element from \a xml.
 */
void DeleteDiskSnapshotResponsePrivate::parseDeleteDiskSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiskSnapshotResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
