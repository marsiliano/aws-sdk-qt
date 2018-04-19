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

#include "updatereplicationjobrequest.h"
#include "updatereplicationjobrequest_p.h"
#include "updatereplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::UpdateReplicationJobRequest
 * \brief The UpdateReplicationJobRequest class provides an interface for SMS UpdateReplicationJob requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::updateReplicationJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationJobRequest::UpdateReplicationJobRequest(const UpdateReplicationJobRequest &other)
    : SMSRequest(new UpdateReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationJobRequest object.
 */
UpdateReplicationJobRequest::UpdateReplicationJobRequest()
    : SMSRequest(new UpdateReplicationJobRequestPrivate(SMSRequest::UpdateReplicationJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReplicationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReplicationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationJobResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::UpdateReplicationJobRequestPrivate
 * \brief The UpdateReplicationJobRequestPrivate class provides private implementation for UpdateReplicationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a UpdateReplicationJobRequestPrivate object for SMS \a action,
 * with public implementation \a q.
 */
UpdateReplicationJobRequestPrivate::UpdateReplicationJobRequestPrivate(
    const SMSRequest::Action action, UpdateReplicationJobRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationJobRequest
 * class' copy constructor.
 */
UpdateReplicationJobRequestPrivate::UpdateReplicationJobRequestPrivate(
    const UpdateReplicationJobRequestPrivate &other, UpdateReplicationJobRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
