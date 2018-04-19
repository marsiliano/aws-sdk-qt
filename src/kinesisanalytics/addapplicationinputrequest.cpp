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

#include "addapplicationinputrequest.h"
#include "addapplicationinputrequest_p.h"
#include "addapplicationinputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputRequest
 * \brief The AddApplicationInputRequest class provides an interface for KinesisAnalytics AddApplicationInput requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationInput
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationInputRequest::AddApplicationInputRequest(const AddApplicationInputRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationInputRequest object.
 */
AddApplicationInputRequest::AddApplicationInputRequest()
    : KinesisAnalyticsRequest(new AddApplicationInputRequestPrivate(KinesisAnalyticsRequest::AddApplicationInputAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationInputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationInputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputRequestPrivate
 * \brief The AddApplicationInputRequestPrivate class provides private implementation for AddApplicationInputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationInputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationInputRequest
 * class' copy constructor.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const AddApplicationInputRequestPrivate &other, AddApplicationInputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
