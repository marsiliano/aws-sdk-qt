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

#ifndef QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSREQUEST_P_H
#define QTAWS_DESCRIBETRANSITGATEWAYATTACHMENTSREQUEST_P_H

#include "ec2request_p.h"
#include "describetransitgatewayattachmentsrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeTransitGatewayAttachmentsRequest;

class QTAWS_EXPORT DescribeTransitGatewayAttachmentsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTransitGatewayAttachmentsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTransitGatewayAttachmentsRequest * const q);
    DescribeTransitGatewayAttachmentsRequestPrivate(const DescribeTransitGatewayAttachmentsRequestPrivate &other,
                                   DescribeTransitGatewayAttachmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransitGatewayAttachmentsRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
