/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETELOADBALANCERPOLICYRESPONSE_P_H
#define QTAWS_DELETELOADBALANCERPOLICYRESPONSE_P_H

#include "elasticloadbalancingresponse.h"
#include "deleteloadbalancerpolicyrequest.h"

namespace AWS {

namespace ElasticLoadBalancing {

class DeleteLoadBalancerPolicyResponse;

class QTAWS_EXPORT DeleteLoadBalancerPolicyResponsePrivate : public ElasticLoadBalancingResponsePrivate {
    Q_OBJECT

public:

    DeleteLoadBalancerPolicyResponsePrivate(DeleteLoadBalancerPolicyResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerPolicyResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerPolicyResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace AWS

#endif