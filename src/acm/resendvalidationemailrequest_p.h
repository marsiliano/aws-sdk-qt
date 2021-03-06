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

#ifndef QTAWS_RESENDVALIDATIONEMAILREQUEST_P_H
#define QTAWS_RESENDVALIDATIONEMAILREQUEST_P_H

#include "acmrequest_p.h"
#include "resendvalidationemailrequest.h"

namespace QtAws {
namespace ACM {

class ResendValidationEmailRequest;

class QTAWS_EXPORT ResendValidationEmailRequestPrivate : public AcmRequestPrivate {

public:
    ResendValidationEmailRequestPrivate(const AcmRequest::Action action,
                                   ResendValidationEmailRequest * const q);
    ResendValidationEmailRequestPrivate(const ResendValidationEmailRequestPrivate &other,
                                   ResendValidationEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResendValidationEmailRequest)

};

} // namespace ACM
} // namespace QtAws

#endif
