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

#ifndef QTAWS_SMSREQUEST_P_H
#define QTAWS_SMSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "smsrequest.h"

namespace QtAws {
namespace SMS {

class SMSRequest;

class QTAWS_EXPORT SMSRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SMSRequest::Action action; ///< SMS action to be performed.
    QString apiVersion;        ///< SMS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SMS request (query string) parameters. @todo?

    SMSRequestPrivate(const SMSRequest::Action action, SMSRequest * const q);
    SMSRequestPrivate(const SMSRequestPrivate &other, SMSRequest * const q);

    static QString toString(const SMSRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SMSRequest)

};

} // namespace SMS
} // namespace QtAws

#endif