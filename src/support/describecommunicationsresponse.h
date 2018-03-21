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

#ifndef QTAWS_DESCRIBECOMMUNICATIONSRESPONSE_H
#define QTAWS_DESCRIBECOMMUNICATIONSRESPONSE_H

#include "supportresponse.h"
#include "describecommunicationsrequest.h"

namespace AWS {

namespace support {

class DescribeCommunicationsResponsePrivate;

class QTAWS_EXPORT DescribeCommunicationsResponse : public DescribeCommunicationsResponse {
    Q_OBJECT

public:
    DescribeCommunicationsResponse(const DescribeCommunicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCommunicationsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeCommunicationsResponse)
    Q_DISABLE_COPY(DescribeCommunicationsResponse)

};

} // namespace support
} // namespace AWS

#endif
