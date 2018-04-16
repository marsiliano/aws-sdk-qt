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

#include "associatecreatedartifactrequest.h"
#include "associatecreatedartifactrequest_p.h"
#include "associatecreatedartifactresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::AssociateCreatedArtifactRequest
 *
 * \brief The AssociateCreatedArtifactRequest class provides an interface for MigrationHub AssociateCreatedArtifact requests.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::associateCreatedArtifact
 */

/*!
 * @brief  Constructs a new AssociateCreatedArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest(const AssociateCreatedArtifactRequest &other)
    : MigrationHubRequest(new AssociateCreatedArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AssociateCreatedArtifactRequest object.
 */
AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest()
    : MigrationHubRequest(new AssociateCreatedArtifactRequestPrivate(MigrationHubRequest::AssociateCreatedArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateCreatedArtifactRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AssociateCreatedArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateCreatedArtifactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateCreatedArtifactRequest::response(QNetworkReply * const reply) const
{
    return new AssociateCreatedArtifactResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AssociateCreatedArtifactRequestPrivate
 *
 * @brief  Private implementation for AssociateCreatedArtifactRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateCreatedArtifactRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public AssociateCreatedArtifactRequest instance.
 */
AssociateCreatedArtifactRequestPrivate::AssociateCreatedArtifactRequestPrivate(
    const MigrationHubRequest::Action action, AssociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateCreatedArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateCreatedArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateCreatedArtifactRequest instance.
 */
AssociateCreatedArtifactRequestPrivate::AssociateCreatedArtifactRequestPrivate(
    const AssociateCreatedArtifactRequestPrivate &other, AssociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
