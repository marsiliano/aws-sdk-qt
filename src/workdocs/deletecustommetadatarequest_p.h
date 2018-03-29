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

#ifndef QTAWS_DELETECUSTOMMETADATAREQUEST_P_H
#define QTAWS_DELETECUSTOMMETADATAREQUEST_P_H

#include "workdocsrequest_p.h"
#include "deletecustommetadatarequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCustomMetadataRequest;

class QTAWS_EXPORT DeleteCustomMetadataRequestPrivate : public WorkDocsRequestPrivate {

public:
    DeleteCustomMetadataRequestPrivate(const WorkDocs::Action action,
                                   DeleteCustomMetadataRequest * const q);
    DeleteCustomMetadataRequestPrivate(const DeleteCustomMetadataRequestPrivate &other,
                                   DeleteCustomMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomMetadataRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
