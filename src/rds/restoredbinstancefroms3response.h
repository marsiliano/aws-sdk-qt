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

#ifndef QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_H
#define QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_H

#include "rdsresponse.h"
#include "restoredbinstancefroms3request.h"

namespace AWS {

namespace rds {

class RestoreDBInstanceFromS3ResponsePrivate;

class QTAWS_EXPORT RestoreDBInstanceFromS3Response : public RestoreDBInstanceFromS3Response {
    Q_OBJECT

public:
    RestoreDBInstanceFromS3Response(const RestoreDBInstanceFromS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBInstanceFromS3Request * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceFromS3Response)
    Q_DISABLE_COPY(RestoreDBInstanceFromS3Response)

};

} // namespace rds
} // namespace AWS

#endif
