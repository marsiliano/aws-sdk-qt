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

#ifndef QTAWS_CREATEPROVISIONEDPRODUCTPLANRESPONSE_H
#define QTAWS_CREATEPROVISIONEDPRODUCTPLANRESPONSE_H

#include "servicecatalogresponse.h"
#include "createprovisionedproductplanrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisionedProductPlanResponsePrivate;

class QTAWS_EXPORT CreateProvisionedProductPlanResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateProvisionedProductPlanResponse(const CreateProvisionedProductPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProvisionedProductPlanRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateProvisionedProductPlanResponse)
    Q_DISABLE_COPY(CreateProvisionedProductPlanResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif