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

#ifndef QTAWS_APIGATEWAYMANAGEMENTAPIREQUEST_P_H
#define QTAWS_APIGATEWAYMANAGEMENTAPIREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apigatewaymanagementapirequest.h"

namespace QtAws {
namespace ApiGatewayManagementApi {

class ApiGatewayManagementApiRequest;

class QTAWS_EXPORT ApiGatewayManagementApiRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApiGatewayManagementApiRequest::Action action; ///< ApiGatewayManagementApi action to be performed.
    QString apiVersion;        ///< ApiGatewayManagementApi API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApiGatewayManagementApi request (query string) parameters. @todo?

    ApiGatewayManagementApiRequestPrivate(const ApiGatewayManagementApiRequest::Action action, ApiGatewayManagementApiRequest * const q);
    ApiGatewayManagementApiRequestPrivate(const ApiGatewayManagementApiRequestPrivate &other, ApiGatewayManagementApiRequest * const q);

    static QString toString(const ApiGatewayManagementApiRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApiGatewayManagementApiRequest)

};

} // namespace ApiGatewayManagementApi
} // namespace QtAws

#endif
