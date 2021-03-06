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

#include "listmailboxpermissionsrequest.h"
#include "listmailboxpermissionsrequest_p.h"
#include "listmailboxpermissionsresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::ListMailboxPermissionsRequest
 * \brief The ListMailboxPermissionsRequest class provides an interface for WorkMail ListMailboxPermissions requests.
 *
 * \inmodule QtAwsWorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or other native
 *  iOS and Android email applications. You can integrate WorkMail with your existing corporate directory and control both
 *  the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All WorkMail API operations are Amazon-authenticated and certificate-signed. They not only require the use of the AWS
 *  SDK, but also allow for the exclusive use of AWS Identity and Access Management users and roles to help facilitate
 *  access, trust, and permission policies. By creating a role and allowing an IAM user to access the WorkMail site, the IAM
 *  user gains full administrative visibility into the entire WorkMail organization (or as set in the IAM policy). This
 *  includes, but is not limited to, the ability to create, update, and delete users, groups, and resources. This allows
 *  developers to perform the scenarios listed above, as well as give users the ability to grant access on a selective basis
 *  using the IAM
 *
 * \sa WorkMailClient::listMailboxPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListMailboxPermissionsRequest::ListMailboxPermissionsRequest(const ListMailboxPermissionsRequest &other)
    : WorkMailRequest(new ListMailboxPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMailboxPermissionsRequest object.
 */
ListMailboxPermissionsRequest::ListMailboxPermissionsRequest()
    : WorkMailRequest(new ListMailboxPermissionsRequestPrivate(WorkMailRequest::ListMailboxPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMailboxPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMailboxPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMailboxPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListMailboxPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMail::ListMailboxPermissionsRequestPrivate
 * \brief The ListMailboxPermissionsRequestPrivate class provides private implementation for ListMailboxPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a ListMailboxPermissionsRequestPrivate object for WorkMail \a action,
 * with public implementation \a q.
 */
ListMailboxPermissionsRequestPrivate::ListMailboxPermissionsRequestPrivate(
    const WorkMailRequest::Action action, ListMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMailboxPermissionsRequest
 * class' copy constructor.
 */
ListMailboxPermissionsRequestPrivate::ListMailboxPermissionsRequestPrivate(
    const ListMailboxPermissionsRequestPrivate &other, ListMailboxPermissionsRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
