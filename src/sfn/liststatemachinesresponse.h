/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTSTATEMACHINESRESPONSE_H
#define QTAWS_LISTSTATEMACHINESRESPONSE_H

#include "sfnresponse.h"
#include "liststatemachinesrequest.h"

namespace QtAws {
namespace SFN {

class ListStateMachinesResponsePrivate;

class QTAWS_EXPORT ListStateMachinesResponse : public SFNResponse {
    Q_OBJECT

public:
    ListStateMachinesResponse(const ListStateMachinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStateMachinesRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ListStateMachinesResponse)
    Q_DISABLE_COPY(ListStateMachinesResponse)

};

} // namespace SFN
} // namespace QtAws

#endif