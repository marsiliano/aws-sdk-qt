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

#include "deleteuserdefinedfunctionrequest.h"
#include "deleteuserdefinedfunctionrequest_p.h"
#include "deleteuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteUserDefinedFunctionRequest
 * \brief The DeleteUserDefinedFunctionRequest class provides an interface for Glue DeleteUserDefinedFunction requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteUserDefinedFunction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserDefinedFunctionRequest::DeleteUserDefinedFunctionRequest(const DeleteUserDefinedFunctionRequest &other)
    : GlueRequest(new DeleteUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserDefinedFunctionRequest object.
 */
DeleteUserDefinedFunctionRequest::DeleteUserDefinedFunctionRequest()
    : GlueRequest(new DeleteUserDefinedFunctionRequestPrivate(GlueRequest::DeleteUserDefinedFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserDefinedFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserDefinedFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteUserDefinedFunctionRequestPrivate
 * \brief The DeleteUserDefinedFunctionRequestPrivate class provides private implementation for DeleteUserDefinedFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteUserDefinedFunctionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteUserDefinedFunctionRequestPrivate::DeleteUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, DeleteUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserDefinedFunctionRequest
 * class' copy constructor.
 */
DeleteUserDefinedFunctionRequestPrivate::DeleteUserDefinedFunctionRequestPrivate(
    const DeleteUserDefinedFunctionRequestPrivate &other, DeleteUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
