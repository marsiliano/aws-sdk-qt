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

#include "listincomingtypedlinksrequest.h"
#include "listincomingtypedlinksrequest_p.h"
#include "listincomingtypedlinksresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListIncomingTypedLinksRequest
 *
 * \brief The ListIncomingTypedLinksRequest class provides an interface for CloudDirectory ListIncomingTypedLinks requests.
 *
 * \ingroup CloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::listIncomingTypedLinks
 */

/*!
 * @brief  Constructs a new ListIncomingTypedLinksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest(const ListIncomingTypedLinksRequest &other)
    : CloudDirectoryRequest(new ListIncomingTypedLinksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListIncomingTypedLinksRequest object.
 */
ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest()
    : CloudDirectoryRequest(new ListIncomingTypedLinksRequestPrivate(CloudDirectoryRequest::ListIncomingTypedLinksAction, this))
{

}

/*!
 * \reimp
 */
bool ListIncomingTypedLinksRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListIncomingTypedLinksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIncomingTypedLinksResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIncomingTypedLinksRequest::response(QNetworkReply * const reply) const
{
    return new ListIncomingTypedLinksResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListIncomingTypedLinksRequestPrivate
 *
 * @brief  Private implementation for ListIncomingTypedLinksRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListIncomingTypedLinksRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListIncomingTypedLinksRequest instance.
 */
ListIncomingTypedLinksRequestPrivate::ListIncomingTypedLinksRequestPrivate(
    const CloudDirectoryRequest::Action action, ListIncomingTypedLinksRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListIncomingTypedLinksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIncomingTypedLinksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIncomingTypedLinksRequest instance.
 */
ListIncomingTypedLinksRequestPrivate::ListIncomingTypedLinksRequestPrivate(
    const ListIncomingTypedLinksRequestPrivate &other, ListIncomingTypedLinksRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
