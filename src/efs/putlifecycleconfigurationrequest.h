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

#ifndef QTAWS_PUTLIFECYCLECONFIGURATIONREQUEST_H
#define QTAWS_PUTLIFECYCLECONFIGURATIONREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace EFS {

class PutLifecycleConfigurationRequestPrivate;

class QTAWS_EXPORT PutLifecycleConfigurationRequest : public EfsRequest {

public:
    PutLifecycleConfigurationRequest(const PutLifecycleConfigurationRequest &other);
    PutLifecycleConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleConfigurationRequest)

};

} // namespace EFS
} // namespace QtAws

#endif
