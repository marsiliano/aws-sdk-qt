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

#include "deletehsmrequest.h"
#include "deletehsmrequest_p.h"
#include "deletehsmresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::DeleteHsmRequest
 *
 * \brief The DeleteHsmRequest class provides an interface for CloudHSMV2 DeleteHsm requests.
 *
 * \ingroup CloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::deleteHsm
 */

/*!
 * @brief  Constructs a new DeleteHsmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHsmRequest::DeleteHsmRequest(const DeleteHsmRequest &other)
    : CloudHSMV2Request(new DeleteHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteHsmRequest object.
 */
DeleteHsmRequest::DeleteHsmRequest()
    : CloudHSMV2Request(new DeleteHsmRequestPrivate(CloudHSMV2Request::DeleteHsmAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHsmRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteHsmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHsmResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMV2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHsmRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHsmResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteHsmRequestPrivate
 *
 * @brief  Private implementation for DeleteHsmRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHsmRequestPrivate object.
 *
 * @param  action  CloudHSMV2 action being performed.
 * @param  q       Pointer to this object's public DeleteHsmRequest instance.
 */
DeleteHsmRequestPrivate::DeleteHsmRequestPrivate(
    const CloudHSMV2Request::Action action, DeleteHsmRequest * const q)
    : CloudHSMV2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteHsmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHsmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHsmRequest instance.
 */
DeleteHsmRequestPrivate::DeleteHsmRequestPrivate(
    const DeleteHsmRequestPrivate &other, DeleteHsmRequest * const q)
    : CloudHSMV2RequestPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace QtAws
