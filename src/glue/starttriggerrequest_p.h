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

#ifndef QTAWS_STARTTRIGGERREQUEST_P_H
#define QTAWS_STARTTRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "starttriggerrequest.h"

namespace QtAws {
namespace Glue {

class StartTriggerRequest;

class QTAWS_EXPORT StartTriggerRequestPrivate : public GlueRequestPrivate {

public:
    StartTriggerRequestPrivate(const Glue::Action action,
                                   StartTriggerRequest * const q);
    StartTriggerRequestPrivate(const StartTriggerRequestPrivate &other,
                                   StartTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
