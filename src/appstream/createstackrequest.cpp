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

#include "createstackrequest.h"
#include "createstackrequest_p.h"
#include "createstackresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::CreateStackRequest
 * \brief The CreateStackRequest class provides an interface for AppStream CreateStack requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on
 * 
 *  demand>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::createStack
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStackRequest::CreateStackRequest(const CreateStackRequest &other)
    : AppStreamRequest(new CreateStackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStackRequest object.
 */
CreateStackRequest::CreateStackRequest()
    : AppStreamRequest(new CreateStackRequestPrivate(AppStreamRequest::CreateStackAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStackRequest::response(QNetworkReply * const reply) const
{
    return new CreateStackResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::CreateStackRequestPrivate
 * \brief The CreateStackRequestPrivate class provides private implementation for CreateStackRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a CreateStackRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
CreateStackRequestPrivate::CreateStackRequestPrivate(
    const AppStreamRequest::Action action, CreateStackRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStackRequest
 * class' copy constructor.
 */
CreateStackRequestPrivate::CreateStackRequestPrivate(
    const CreateStackRequestPrivate &other, CreateStackRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
