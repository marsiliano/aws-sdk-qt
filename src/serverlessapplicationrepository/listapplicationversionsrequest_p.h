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

#ifndef QTAWS_LISTAPPLICATIONVERSIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONVERSIONSREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "listapplicationversionsrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationVersionsRequest;

class QTAWS_EXPORT ListApplicationVersionsRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    ListApplicationVersionsRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   ListApplicationVersionsRequest * const q);
    ListApplicationVersionsRequestPrivate(const ListApplicationVersionsRequestPrivate &other,
                                   ListApplicationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationVersionsRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
