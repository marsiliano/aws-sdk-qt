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

#ifndef QTAWS_CREATEFLOWRESPONSE_P_H
#define QTAWS_CREATEFLOWRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class CreateFlowResponse;

class QTAWS_EXPORT CreateFlowResponsePrivate : public MediaConnectResponsePrivate {

public:

    CreateFlowResponsePrivate(CreateFlowResponse * const q);

    void parseCreateFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFlowResponse)
    Q_DISABLE_COPY(CreateFlowResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
