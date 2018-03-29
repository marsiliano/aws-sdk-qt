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

#include "deletedbclusterrequest.h"
#include "deletedbclusterrequest_p.h"
#include "deletedbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBClusterRequest
 *
 * @brief  Implements RDS DeleteDBCluster requests.
 *
 * @see    RDSClient::deleteDBCluster
 */

/**
 * @brief  Constructs a new DeleteDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest(const DeleteDBClusterRequest &other)
    : RDSRequest(new DeleteDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBClusterRequest object.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest()
    : RDSRequest(new DeleteDBClusterRequestPrivate(RDSRequest::DeleteDBClusterAction, this))
{

}

bool DeleteDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBClusterRequestPrivate
 *
 * @brief  Private implementation for DeleteDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBClusterRequest instance.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const RDSRequest::Action action, DeleteDBClusterRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBClusterRequest instance.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const DeleteDBClusterRequestPrivate &other, DeleteDBClusterRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
