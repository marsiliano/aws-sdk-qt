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

#ifndef QTAWS_VERIFYDOMAINDKIMREQUEST_P_H
#define QTAWS_VERIFYDOMAINDKIMREQUEST_P_H

#include "sesrequest_p.h"
#include "verifydomaindkimrequest.h"

namespace QtAws {
namespace SES {

class VerifyDomainDkimRequest;

class QTAWS_EXPORT VerifyDomainDkimRequestPrivate : public SESRequestPrivate {

public:
    VerifyDomainDkimRequestPrivate(const SES::Action action,
                                   VerifyDomainDkimRequest * const q);
    VerifyDomainDkimRequestPrivate(const VerifyDomainDkimRequestPrivate &other,
                                   VerifyDomainDkimRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyDomainDkimRequest)

};

} // namespace SES
} // namespace QtAws

#endif
