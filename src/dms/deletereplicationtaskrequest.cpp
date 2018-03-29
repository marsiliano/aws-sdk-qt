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

#include "deletereplicationtaskrequest.h"
#include "deletereplicationtaskrequest_p.h"
#include "deletereplicationtaskresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DeleteReplicationTaskRequest
 *
 * @brief  Implements DatabaseMigrationService DeleteReplicationTask requests.
 *
 * @see    DatabaseMigrationServiceClient::deleteReplicationTask
 */

/**
 * @brief  Constructs a new DeleteReplicationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReplicationTaskRequest::DeleteReplicationTaskRequest(const DeleteReplicationTaskRequest &other)
    : DatabaseMigrationServiceRequest(new DeleteReplicationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteReplicationTaskRequest object.
 */
DeleteReplicationTaskRequest::DeleteReplicationTaskRequest()
    : DatabaseMigrationServiceRequest(new DeleteReplicationTaskRequestPrivate(DatabaseMigrationServiceRequest::DeleteReplicationTaskAction, this))
{

}

bool DeleteReplicationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteReplicationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReplicationTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationTaskRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteReplicationTaskRequestPrivate
 *
 * @brief  Private implementation for DeleteReplicationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationTaskRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DeleteReplicationTaskRequest instance.
 */
DeleteReplicationTaskRequestPrivate::DeleteReplicationTaskRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DeleteReplicationTaskRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReplicationTaskRequest instance.
 */
DeleteReplicationTaskRequestPrivate::DeleteReplicationTaskRequestPrivate(
    const DeleteReplicationTaskRequestPrivate &other, DeleteReplicationTaskRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws
