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

#ifndef QTAWS_CREATEBRANCHRESPONSE_H
#define QTAWS_CREATEBRANCHRESPONSE_H

#include "codecommitresponse.h"
#include "createbranchrequest.h"

namespace AWS {

namespace codecommit {

class CreateBranchResponsePrivate;

class QTAWS_EXPORT CreateBranchResponse : public CreateBranchResponse {
    Q_OBJECT

public:
    CreateBranchResponse(const CreateBranchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBranchRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateBranchResponse)
    Q_DISABLE_COPY(CreateBranchResponse)

};

} // namespace codecommit
} // namespace AWS

#endif
