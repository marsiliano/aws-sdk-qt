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

#ifndef QTAWS_CLOUDDIRECTORYREQUEST_P_H
#define QTAWS_CLOUDDIRECTORYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryRequest;

class QTAWS_EXPORT CloudDirectoryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudDirectoryRequest::Action action; ///< CloudDirectory action to be performed.
    QString apiVersion;        ///< CloudDirectory API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudDirectory request (query string) parameters. @todo?

    CloudDirectoryRequestPrivate(const CloudDirectoryRequest::Action action, CloudDirectoryRequest * const q);
    CloudDirectoryRequestPrivate(const CloudDirectoryRequestPrivate &other, CloudDirectoryRequest * const q);

    static QString toString(const CloudDirectoryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
