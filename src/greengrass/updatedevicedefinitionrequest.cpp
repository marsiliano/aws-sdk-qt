/*
    Copyright 2013-2018 Paul Colby

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

#include "updatedevicedefinitionrequest.h"
#include "updatedevicedefinitionrequest_p.h"
#include "updatedevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionRequest
 * \brief The UpdateDeviceDefinitionRequest class provides an interface for Greengrass UpdateDeviceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateDeviceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceDefinitionRequest::UpdateDeviceDefinitionRequest(const UpdateDeviceDefinitionRequest &other)
    : GreengrassRequest(new UpdateDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceDefinitionRequest object.
 */
UpdateDeviceDefinitionRequest::UpdateDeviceDefinitionRequest()
    : GreengrassRequest(new UpdateDeviceDefinitionRequestPrivate(GreengrassRequest::UpdateDeviceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionRequestPrivate
 * \brief The UpdateDeviceDefinitionRequestPrivate class provides private implementation for UpdateDeviceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateDeviceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateDeviceDefinitionRequestPrivate::UpdateDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceDefinitionRequest
 * class' copy constructor.
 */
UpdateDeviceDefinitionRequestPrivate::UpdateDeviceDefinitionRequestPrivate(
    const UpdateDeviceDefinitionRequestPrivate &other, UpdateDeviceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
