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

#ifndef QTAWS_GETREPOSITORYPOLICYRESPONSE_P_H
#define QTAWS_GETREPOSITORYPOLICYRESPONSE_P_H

#include "ecrresponse.h"
#include "getrepositorypolicyrequest.h"

namespace AWS {

namespace ECR {

class GetRepositoryPolicyResponse;

class QTAWS_EXPORT GetRepositoryPolicyResponsePrivate : public ECRResponsePrivate {
    Q_OBJECT

public:

    GetRepositoryPolicyResponsePrivate(GetRepositoryPolicyResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryPolicyResponse)
    Q_DISABLE_COPY(GetRepositoryPolicyResponsePrivate)

};

} // namespace ECR
} // namespace AWS

#endif