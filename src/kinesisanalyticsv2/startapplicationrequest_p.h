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

#ifndef QTAWS_STARTAPPLICATIONREQUEST_P_H
#define QTAWS_STARTAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "startapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StartApplicationRequest;

class QTAWS_EXPORT StartApplicationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    StartApplicationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   StartApplicationRequest * const q);
    StartApplicationRequestPrivate(const StartApplicationRequestPrivate &other,
                                   StartApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
