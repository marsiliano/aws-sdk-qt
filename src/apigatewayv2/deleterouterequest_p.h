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

#ifndef QTAWS_DELETEROUTEREQUEST_P_H
#define QTAWS_DELETEROUTEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleterouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteRequest;

class QTAWS_EXPORT DeleteRouteRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteRouteRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteRouteRequest * const q);
    DeleteRouteRequestPrivate(const DeleteRouteRequestPrivate &other,
                                   DeleteRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
