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

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCECOUNTRESPONSE_P_H
#define QTAWS_GETTRAFFICPOLICYINSTANCECOUNTRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceCountResponse;

class QTAWS_EXPORT GetTrafficPolicyInstanceCountResponsePrivate : public Route53ResponsePrivate {

public:

    GetTrafficPolicyInstanceCountResponsePrivate(GetTrafficPolicyInstanceCountResponse * const q);

    void parseGetTrafficPolicyInstanceCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTrafficPolicyInstanceCountResponse)
    Q_DISABLE_COPY(GetTrafficPolicyInstanceCountResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
