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

#include "deletecorspolicyrequest.h"
#include "deletecorspolicyrequest_p.h"
#include "deletecorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyRequest
 *
 * \brief The DeleteCorsPolicyRequest class provides an interface for MediaStore DeleteCorsPolicy requests.
 *
 * \ingroup MediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteCorsPolicy
 */

/*!
 * @brief  Constructs a new DeleteCorsPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest(const DeleteCorsPolicyRequest &other)
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteCorsPolicyRequest object.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest()
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(MediaStoreRequest::DeleteCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteCorsPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCorsPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCorsPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteCorsPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteCorsPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteCorsPolicyRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public DeleteCorsPolicyRequest instance.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteCorsPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCorsPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCorsPolicyRequest instance.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const DeleteCorsPolicyRequestPrivate &other, DeleteCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
