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

#include "deleteapplicationrequest.h"
#include "deleteapplicationrequest_p.h"
#include "deleteapplicationresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  DeleteApplicationRequest
 *
 * @brief  Implements ServerlessApplicationRepository DeleteApplication requests.
 *
 * @see    ServerlessApplicationRepositoryClient::deleteApplication
 */

/**
 * @brief  Constructs a new DeleteApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationRequest::DeleteApplicationRequest(const DeleteApplicationRequest &other)
    : ServerlessApplicationRepositoryRequest(new DeleteApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApplicationRequest object.
 */
DeleteApplicationRequest::DeleteApplicationRequest()
    : ServerlessApplicationRepositoryRequest(new DeleteApplicationRequestPrivate(ServerlessApplicationRepositoryRequest::DeleteApplicationAction, this))
{

}

bool DeleteApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApplicationRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationRequest instance.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, DeleteApplicationRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationRequest instance.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const DeleteApplicationRequestPrivate &other, DeleteApplicationRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
