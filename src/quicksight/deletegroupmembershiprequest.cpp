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

#include "deletegroupmembershiprequest.h"
#include "deletegroupmembershiprequest_p.h"
#include "deletegroupmembershipresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipRequest
 * \brief The DeleteGroupMembershipRequest class provides an interface for QuickSight DeleteGroupMembership requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteGroupMembership
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGroupMembershipRequest::DeleteGroupMembershipRequest(const DeleteGroupMembershipRequest &other)
    : QuickSightRequest(new DeleteGroupMembershipRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGroupMembershipRequest object.
 */
DeleteGroupMembershipRequest::DeleteGroupMembershipRequest()
    : QuickSightRequest(new DeleteGroupMembershipRequestPrivate(QuickSightRequest::DeleteGroupMembershipAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupMembershipRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGroupMembershipResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupMembershipRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupMembershipResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::DeleteGroupMembershipRequestPrivate
 * \brief The DeleteGroupMembershipRequestPrivate class provides private implementation for DeleteGroupMembershipRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteGroupMembershipRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
DeleteGroupMembershipRequestPrivate::DeleteGroupMembershipRequestPrivate(
    const QuickSightRequest::Action action, DeleteGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupMembershipRequest
 * class' copy constructor.
 */
DeleteGroupMembershipRequestPrivate::DeleteGroupMembershipRequestPrivate(
    const DeleteGroupMembershipRequestPrivate &other, DeleteGroupMembershipRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
