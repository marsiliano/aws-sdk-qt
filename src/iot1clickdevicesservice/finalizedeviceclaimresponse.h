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

#ifndef QTAWS_FINALIZEDEVICECLAIMRESPONSE_H
#define QTAWS_FINALIZEDEVICECLAIMRESPONSE_H

#include "iot1clickdevicesserviceresponse.h"
#include "finalizedeviceclaimrequest.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

class FinalizeDeviceClaimResponsePrivate;

class QTAWS_EXPORT FinalizeDeviceClaimResponse : public IoT1ClickDevicesServiceResponse {
    Q_OBJECT

public:
    FinalizeDeviceClaimResponse(const FinalizeDeviceClaimRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FinalizeDeviceClaimRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(FinalizeDeviceClaimResponse)
    Q_DISABLE_COPY(FinalizeDeviceClaimResponse)

};

} // namespace IoT1ClickDevicesService
} // namespace QtAws

#endif