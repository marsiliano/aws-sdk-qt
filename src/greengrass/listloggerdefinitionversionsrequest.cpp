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

#include "listloggerdefinitionversionsrequest.h"
#include "listloggerdefinitionversionsrequest_p.h"
#include "listloggerdefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionVersionsRequest
 *
 * \brief The ListLoggerDefinitionVersionsRequest class provides an interface for Greengrass ListLoggerDefinitionVersions requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listLoggerDefinitionVersions
 */

/*!
 * @brief  Constructs a new ListLoggerDefinitionVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListLoggerDefinitionVersionsRequest::ListLoggerDefinitionVersionsRequest(const ListLoggerDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListLoggerDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListLoggerDefinitionVersionsRequest object.
 */
ListLoggerDefinitionVersionsRequest::ListLoggerDefinitionVersionsRequest()
    : GreengrassRequest(new ListLoggerDefinitionVersionsRequestPrivate(GreengrassRequest::ListLoggerDefinitionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLoggerDefinitionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListLoggerDefinitionVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListLoggerDefinitionVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLoggerDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLoggerDefinitionVersionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListLoggerDefinitionVersionsRequestPrivate
 *
 * @brief  Private implementation for ListLoggerDefinitionVersionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionVersionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListLoggerDefinitionVersionsRequest instance.
 */
ListLoggerDefinitionVersionsRequestPrivate::ListLoggerDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListLoggerDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListLoggerDefinitionVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListLoggerDefinitionVersionsRequest instance.
 */
ListLoggerDefinitionVersionsRequestPrivate::ListLoggerDefinitionVersionsRequestPrivate(
    const ListLoggerDefinitionVersionsRequestPrivate &other, ListLoggerDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
