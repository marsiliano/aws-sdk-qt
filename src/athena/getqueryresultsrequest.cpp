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

#include "getqueryresultsrequest.h"
#include "getqueryresultsrequest_p.h"
#include "getqueryresultsresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/**
 * @class  GetQueryResultsRequest
 *
 * @brief  Implements Athena GetQueryResults requests.
 *
 * @see    AthenaClient::getQueryResults
 */

/**
 * @brief  Constructs a new GetQueryResultsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQueryResultsRequest::GetQueryResultsRequest(const GetQueryResultsRequest &other)
    : AthenaRequest(new GetQueryResultsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQueryResultsRequest object.
 */
GetQueryResultsRequest::GetQueryResultsRequest()
    : AthenaRequest(new GetQueryResultsRequestPrivate(AthenaRequest::GetQueryResultsAction, this))
{

}

bool GetQueryResultsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQueryResultsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQueryResultsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AthenaClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryResultsRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryResultsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQueryResultsRequestPrivate
 *
 * @brief  Private implementation for GetQueryResultsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryResultsRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public GetQueryResultsRequest instance.
 */
GetQueryResultsRequestPrivate::GetQueryResultsRequestPrivate(
    const AthenaRequest::Action action, GetQueryResultsRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryResultsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQueryResultsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQueryResultsRequest instance.
 */
GetQueryResultsRequestPrivate::GetQueryResultsRequestPrivate(
    const GetQueryResultsRequestPrivate &other, GetQueryResultsRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
