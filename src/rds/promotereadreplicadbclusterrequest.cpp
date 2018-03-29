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

#include "promotereadreplicadbclusterrequest.h"
#include "promotereadreplicadbclusterrequest_p.h"
#include "promotereadreplicadbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  PromoteReadReplicaDBClusterRequest
 *
 * @brief  Implements RDS PromoteReadReplicaDBCluster requests.
 *
 * @see    RDSClient::promoteReadReplicaDBCluster
 */

/**
 * @brief  Constructs a new PromoteReadReplicaDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PromoteReadReplicaDBClusterRequest::PromoteReadReplicaDBClusterRequest(const PromoteReadReplicaDBClusterRequest &other)
    : RDSRequest(new PromoteReadReplicaDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PromoteReadReplicaDBClusterRequest object.
 */
PromoteReadReplicaDBClusterRequest::PromoteReadReplicaDBClusterRequest()
    : RDSRequest(new PromoteReadReplicaDBClusterRequestPrivate(RDSRequest::PromoteReadReplicaDBClusterAction, this))
{

}

bool PromoteReadReplicaDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PromoteReadReplicaDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PromoteReadReplicaDBClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * PromoteReadReplicaDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new PromoteReadReplicaDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PromoteReadReplicaDBClusterRequestPrivate
 *
 * @brief  Private implementation for PromoteReadReplicaDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PromoteReadReplicaDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public PromoteReadReplicaDBClusterRequest instance.
 */
PromoteReadReplicaDBClusterRequestPrivate::PromoteReadReplicaDBClusterRequestPrivate(
    const RDSRequest::Action action, PromoteReadReplicaDBClusterRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PromoteReadReplicaDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PromoteReadReplicaDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PromoteReadReplicaDBClusterRequest instance.
 */
PromoteReadReplicaDBClusterRequestPrivate::PromoteReadReplicaDBClusterRequestPrivate(
    const PromoteReadReplicaDBClusterRequestPrivate &other, PromoteReadReplicaDBClusterRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
