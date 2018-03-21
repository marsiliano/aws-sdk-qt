/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEAPNSCHANNELRESPONSE_H
#define QTAWS_DELETEAPNSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteapnschannelrequest.h"

namespace AWS {

namespace Pinpoint {

class DeleteApnsChannelResponsePrivate;

class QTAWS_EXPORT DeleteApnsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteApnsChannelResponse(const DeleteApnsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApnsChannelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteApnsChannelResponse)
    Q_DISABLE_COPY(DeleteApnsChannelResponse)

};

} // namespace Pinpoint
} // namespace AWS

#endif