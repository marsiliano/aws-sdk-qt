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

#include "downloaddblogfileportionrequest.h"
#include "downloaddblogfileportionrequest_p.h"
#include "downloaddblogfileportionresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DownloadDBLogFilePortionRequest
 *
 * @brief  Implements RDS DownloadDBLogFilePortion requests.
 *
 * @see    RDSClient::downloadDBLogFilePortion
 */

/**
 * @brief  Constructs a new DownloadDBLogFilePortionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DownloadDBLogFilePortionRequest::DownloadDBLogFilePortionRequest(const DownloadDBLogFilePortionRequest &other)
    : RDSRequest(new DownloadDBLogFilePortionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DownloadDBLogFilePortionRequest object.
 */
DownloadDBLogFilePortionRequest::DownloadDBLogFilePortionRequest()
    : RDSRequest(new DownloadDBLogFilePortionRequestPrivate(RDSRequest::DownloadDBLogFilePortionAction, this))
{

}

bool DownloadDBLogFilePortionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DownloadDBLogFilePortionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DownloadDBLogFilePortionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DownloadDBLogFilePortionRequest::response(QNetworkReply * const reply) const
{
    return new DownloadDBLogFilePortionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DownloadDBLogFilePortionRequestPrivate
 *
 * @brief  Private implementation for DownloadDBLogFilePortionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DownloadDBLogFilePortionRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DownloadDBLogFilePortionRequest instance.
 */
DownloadDBLogFilePortionRequestPrivate::DownloadDBLogFilePortionRequestPrivate(
    const RDSRequest::Action action, DownloadDBLogFilePortionRequest * const q)
    : DownloadDBLogFilePortionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DownloadDBLogFilePortionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DownloadDBLogFilePortionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DownloadDBLogFilePortionRequest instance.
 */
DownloadDBLogFilePortionRequestPrivate::DownloadDBLogFilePortionRequestPrivate(
    const DownloadDBLogFilePortionRequestPrivate &other, DownloadDBLogFilePortionRequest * const q)
    : DownloadDBLogFilePortionPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
