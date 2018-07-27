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

#ifndef QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONRESPONSE_H
#define QTAWS_DELETEVPCASSOCIATIONAUTHORIZATIONRESPONSE_H

#include "route53response.h"
#include "deletevpcassociationauthorizationrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteVPCAssociationAuthorizationResponsePrivate;

class QTAWS_EXPORT DeleteVPCAssociationAuthorizationResponse : public Route53Response {
    Q_OBJECT

public:
    DeleteVPCAssociationAuthorizationResponse(const DeleteVPCAssociationAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVPCAssociationAuthorizationRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DeleteVPCAssociationAuthorizationResponse)
    Q_DISABLE_COPY(DeleteVPCAssociationAuthorizationResponse)

};

} // namespace Route53
} // namespace QtAws

#endif