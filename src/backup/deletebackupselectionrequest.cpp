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

#include "deletebackupselectionrequest.h"
#include "deletebackupselectionrequest_p.h"
#include "deletebackupselectionresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupSelectionRequest
 * \brief The DeleteBackupSelectionRequest class provides an interface for Backup DeleteBackupSelection requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupSelection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupSelectionRequest::DeleteBackupSelectionRequest(const DeleteBackupSelectionRequest &other)
    : BackupRequest(new DeleteBackupSelectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupSelectionRequest object.
 */
DeleteBackupSelectionRequest::DeleteBackupSelectionRequest()
    : BackupRequest(new DeleteBackupSelectionRequestPrivate(BackupRequest::DeleteBackupSelectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupSelectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupSelectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupSelectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupSelectionResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupSelectionRequestPrivate
 * \brief The DeleteBackupSelectionRequestPrivate class provides private implementation for DeleteBackupSelectionRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupSelectionRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupSelectionRequestPrivate::DeleteBackupSelectionRequestPrivate(
    const BackupRequest::Action action, DeleteBackupSelectionRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupSelectionRequest
 * class' copy constructor.
 */
DeleteBackupSelectionRequestPrivate::DeleteBackupSelectionRequestPrivate(
    const DeleteBackupSelectionRequestPrivate &other, DeleteBackupSelectionRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
