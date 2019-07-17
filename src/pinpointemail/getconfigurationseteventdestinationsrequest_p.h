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

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_P_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getconfigurationseteventdestinationsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetEventDestinationsRequest;

class QTAWS_EXPORT GetConfigurationSetEventDestinationsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetConfigurationSetEventDestinationsRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetConfigurationSetEventDestinationsRequest * const q);
    GetConfigurationSetEventDestinationsRequestPrivate(const GetConfigurationSetEventDestinationsRequestPrivate &other,
                                   GetConfigurationSetEventDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetEventDestinationsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif