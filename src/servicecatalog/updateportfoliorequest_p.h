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

#ifndef QTAWS_UPDATEPORTFOLIOREQUEST_P_H
#define QTAWS_UPDATEPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioRequest;

class QTAWS_EXPORT UpdatePortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdatePortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdatePortfolioRequest * const q);
    UpdatePortfolioRequestPrivate(const UpdatePortfolioRequestPrivate &other,
                                   UpdatePortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
