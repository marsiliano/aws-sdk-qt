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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSCHANGEMESSAGEVISIBILITYBATCHREQUEST_H
#define SQSCHANGEMESSAGEVISIBILITYBATCHREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityBatchRequestPrivate;

class QTAWS_EXPORT SqsChangeMessageVisibilityBatchRequest : public SqsRequest {

public:
  //SqsChangeMessageVisibilityBatchRequest(...); ///< @todo
    SqsChangeMessageVisibilityBatchRequest(const SqsChangeMessageVisibilityBatchRequest &other);
    SqsChangeMessageVisibilityBatchRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsChangeMessageVisibilityBatchRequest)
    friend class TestSqsChangeMessageVisibilityBatchRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
