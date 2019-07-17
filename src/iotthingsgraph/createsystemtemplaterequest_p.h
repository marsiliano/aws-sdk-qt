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

#ifndef QTAWS_CREATESYSTEMTEMPLATEREQUEST_P_H
#define QTAWS_CREATESYSTEMTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "createsystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemTemplateRequest;

class QTAWS_EXPORT CreateSystemTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    CreateSystemTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   CreateSystemTemplateRequest * const q);
    CreateSystemTemplateRequestPrivate(const CreateSystemTemplateRequestPrivate &other,
                                   CreateSystemTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif