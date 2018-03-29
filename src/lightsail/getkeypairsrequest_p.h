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

#ifndef QTAWS_GETKEYPAIRSREQUEST_P_H
#define QTAWS_GETKEYPAIRSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getkeypairsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairsRequest;

class QTAWS_EXPORT GetKeyPairsRequestPrivate : public LightsailRequestPrivate {

public:
    GetKeyPairsRequestPrivate(const Lightsail::Action action,
                                   GetKeyPairsRequest * const q);
    GetKeyPairsRequestPrivate(const GetKeyPairsRequestPrivate &other,
                                   GetKeyPairsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyPairsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
