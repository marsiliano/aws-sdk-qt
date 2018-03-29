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

#ifndef QTAWS_BUDGETSRESPONSE_H
#define QTAWS_BUDGETSRESPONSE_H

#include "core/awsabstractresponse.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Budgets {

class BudgetsResponsePrivate;

class QTAWS_EXPORT BudgetsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BudgetsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BudgetsResponse(BudgetsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(BudgetsResponse)
    Q_DISABLE_COPY(BudgetsResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
