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

#ifndef QTAWS_CREATELOADBALANCERRESPONSE_H
#define QTAWS_CREATELOADBALANCERRESPONSE_H

#include "lightsailresponse.h"
#include "createloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateLoadBalancerResponsePrivate;

class QTAWS_EXPORT CreateLoadBalancerResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateLoadBalancerResponse(const CreateLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoadBalancerRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerResponse)
    Q_DISABLE_COPY(CreateLoadBalancerResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
