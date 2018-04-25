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

#ifndef QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstancecreditspecificationsrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeInstanceCreditSpecificationsRequest;

class QTAWS_EXPORT DescribeInstanceCreditSpecificationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceCreditSpecificationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceCreditSpecificationsRequest * const q);
    DescribeInstanceCreditSpecificationsRequestPrivate(const DescribeInstanceCreditSpecificationsRequestPrivate &other,
                                   DescribeInstanceCreditSpecificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceCreditSpecificationsRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
