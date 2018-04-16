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

#include "deleteuploadrequest.h"
#include "deleteuploadrequest_p.h"
#include "deleteuploadresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteUploadRequest
 *
 * \brief The DeleteUploadRequest class provides an interface for DeviceFarm DeleteUpload requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteUpload
 */

/*!
 * @brief  Constructs a new DeleteUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUploadRequest::DeleteUploadRequest(const DeleteUploadRequest &other)
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteUploadRequest object.
 */
DeleteUploadRequest::DeleteUploadRequest()
    : DeviceFarmRequest(new DeleteUploadRequestPrivate(DeviceFarmRequest::DeleteUploadAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUploadRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUploadResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUploadRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUploadResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteUploadRequestPrivate
 *
 * @brief  Private implementation for DeleteUploadRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteUploadRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteUploadRequest instance.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteUploadRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUploadRequest instance.
 */
DeleteUploadRequestPrivate::DeleteUploadRequestPrivate(
    const DeleteUploadRequestPrivate &other, DeleteUploadRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
