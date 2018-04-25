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

#ifndef QTAWS_BATCHPUTMESSAGEREQUEST_P_H
#define QTAWS_BATCHPUTMESSAGEREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "batchputmessagerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class BatchPutMessageRequest;

class QTAWS_EXPORT BatchPutMessageRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    BatchPutMessageRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   BatchPutMessageRequest * const q);
    BatchPutMessageRequestPrivate(const BatchPutMessageRequestPrivate &other,
                                   BatchPutMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutMessageRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
