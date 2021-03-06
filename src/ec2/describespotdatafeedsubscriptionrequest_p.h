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

#ifndef QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DESCRIBESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H

#include "ec2request_p.h"
#include "describespotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeSpotDatafeedSubscriptionRequest;

class QTAWS_EXPORT DescribeSpotDatafeedSubscriptionRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotDatafeedSubscriptionRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotDatafeedSubscriptionRequest * const q);
    DescribeSpotDatafeedSubscriptionRequestPrivate(const DescribeSpotDatafeedSubscriptionRequestPrivate &other,
                                   DescribeSpotDatafeedSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotDatafeedSubscriptionRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
