/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdirectorylimitsrequest.h"
#include "getdirectorylimitsrequest_p.h"
#include "getdirectorylimitsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::GetDirectoryLimitsRequest
 * \brief The GetDirectoryLimitsRequest class provides an interface for DirectoryService GetDirectoryLimits requests.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::getDirectoryLimits
 */

/*!
 * Constructs a copy of \a other.
 */
GetDirectoryLimitsRequest::GetDirectoryLimitsRequest(const GetDirectoryLimitsRequest &other)
    : DirectoryServiceRequest(new GetDirectoryLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDirectoryLimitsRequest object.
 */
GetDirectoryLimitsRequest::GetDirectoryLimitsRequest()
    : DirectoryServiceRequest(new GetDirectoryLimitsRequestPrivate(DirectoryServiceRequest::GetDirectoryLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDirectoryLimitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDirectoryLimitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDirectoryLimitsRequest::response(QNetworkReply * const reply) const
{
    return new GetDirectoryLimitsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::GetDirectoryLimitsRequestPrivate
 * \brief The GetDirectoryLimitsRequestPrivate class provides private implementation for GetDirectoryLimitsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a GetDirectoryLimitsRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
GetDirectoryLimitsRequestPrivate::GetDirectoryLimitsRequestPrivate(
    const DirectoryServiceRequest::Action action, GetDirectoryLimitsRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDirectoryLimitsRequest
 * class' copy constructor.
 */
GetDirectoryLimitsRequestPrivate::GetDirectoryLimitsRequestPrivate(
    const GetDirectoryLimitsRequestPrivate &other, GetDirectoryLimitsRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
