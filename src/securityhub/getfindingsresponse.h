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

#ifndef QTAWS_GETFINDINGSRESPONSE_H
#define QTAWS_GETFINDINGSRESPONSE_H

#include "securityhubresponse.h"
#include "getfindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingsResponsePrivate;

class QTAWS_EXPORT GetFindingsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetFindingsResponse(const GetFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
