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

#ifndef QTAWS_UPDATESEGMENTRESPONSE_H
#define QTAWS_UPDATESEGMENTRESPONSE_H

#include "pinpointresponse.h"
#include "updatesegmentrequest.h"

namespace AWS {

namespace pinpoint {

class UpdateSegmentResponsePrivate;

class QTAWS_EXPORT UpdateSegmentResponse : public UpdateSegmentResponse {
    Q_OBJECT

public:
    UpdateSegmentResponse(const UpdateSegmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSegmentRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateSegmentResponse)
    Q_DISABLE_COPY(UpdateSegmentResponse)

};

} // namespace pinpoint
} // namespace AWS

#endif
