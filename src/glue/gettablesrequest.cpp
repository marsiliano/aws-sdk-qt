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

#include "gettablesrequest.h"
#include "gettablesrequest_p.h"
#include "gettablesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTablesRequest
 *
 * \brief The GetTablesRequest class provides an interface for Glue GetTables requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTables
 */

/*!
 * @brief  Constructs a new GetTablesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTablesRequest::GetTablesRequest(const GetTablesRequest &other)
    : GlueRequest(new GetTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTablesRequest object.
 */
GetTablesRequest::GetTablesRequest()
    : GlueRequest(new GetTablesRequestPrivate(GlueRequest::GetTablesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTablesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTablesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTablesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTablesRequest::response(QNetworkReply * const reply) const
{
    return new GetTablesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTablesRequestPrivate
 *
 * @brief  Private implementation for GetTablesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTablesRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTablesRequest instance.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GlueRequest::Action action, GetTablesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTablesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTablesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTablesRequest instance.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GetTablesRequestPrivate &other, GetTablesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
