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

#ifndef QTAWS_GETSTATUSREQUEST_P_H
#define QTAWS_GETSTATUSREQUEST_P_H

#include "importexportrequest_p.h"
#include "getstatusrequest.h"

namespace QtAws {
namespace ImportExport {

class GetStatusRequest;

class QTAWS_EXPORT GetStatusRequestPrivate : public ImportExportRequestPrivate {

public:
    GetStatusRequestPrivate(const ImportExportRequest::Action action,
                                   GetStatusRequest * const q);
    GetStatusRequestPrivate(const GetStatusRequestPrivate &other,
                                   GetStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStatusRequest)

};

} // namespace ImportExport
} // namespace QtAws

#endif
