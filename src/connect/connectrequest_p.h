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

#ifndef QTAWS_CONNECTREQUEST_P_H
#define QTAWS_CONNECTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ConnectRequest;

class QTAWS_EXPORT ConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ConnectRequest::Action action; ///< Connect action to be performed.
    QString apiVersion;        ///< Connect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Connect request (query string) parameters. @todo?

    ConnectRequestPrivate(const ConnectRequest::Action action, ConnectRequest * const q);
    ConnectRequestPrivate(const ConnectRequestPrivate &other, ConnectRequest * const q);

    static QString toString(const ConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
