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

#ifndef QTAWS_UPDATEROOMRESPONSE_H
#define QTAWS_UPDATEROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updateroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateRoomResponsePrivate;

class QTAWS_EXPORT UpdateRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateRoomResponse(const UpdateRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoomRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(UpdateRoomResponse)
    Q_DISABLE_COPY(UpdateRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
