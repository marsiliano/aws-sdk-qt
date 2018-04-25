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

#ifndef QTAWS_GETEVENTSTREAMRESPONSE_H
#define QTAWS_GETEVENTSTREAMRESPONSE_H

#include "pinpointresponse.h"
#include "geteventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEventStreamResponsePrivate;

class QTAWS_EXPORT GetEventStreamResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetEventStreamResponse(const GetEventStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventStreamRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetEventStreamResponse)
    Q_DISABLE_COPY(GetEventStreamResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
