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

#ifndef QTAWS_CREATESERVERRESPONSE_P_H
#define QTAWS_CREATESERVERRESPONSE_P_H

#include "opsworkscmresponse.h"
#include "createserverrequest.h"

namespace AWS {

namespace OpsWorksCM {

class CreateServerResponse;

class QTAWS_EXPORT CreateServerResponsePrivate : public OpsWorksCMResponsePrivate {
    Q_OBJECT

public:

    CreateServerResponsePrivate(CreateServerResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServerResponse)
    Q_DISABLE_COPY(CreateServerResponsePrivate)

};

} // namespace OpsWorksCM
} // namespace AWS

#endif