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

#ifndef QTAWS_CLOUD9CLIENT_P_H
#define QTAWS_CLOUD9CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Cloud9 {

class Cloud9Client;

class QTAWS_EXPORT Cloud9ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    Cloud9ClientPrivate(Cloud9Client * const q);

private:
    Q_DECLARE_PUBLIC(Cloud9Client)
    Q_DISABLE_COPY(Cloud9ClientPrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
