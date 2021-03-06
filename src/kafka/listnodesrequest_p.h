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

#ifndef QTAWS_LISTNODESREQUEST_P_H
#define QTAWS_LISTNODESREQUEST_P_H

#include "kafkarequest_p.h"
#include "listnodesrequest.h"

namespace QtAws {
namespace Kafka {

class ListNodesRequest;

class QTAWS_EXPORT ListNodesRequestPrivate : public KafkaRequestPrivate {

public:
    ListNodesRequestPrivate(const KafkaRequest::Action action,
                                   ListNodesRequest * const q);
    ListNodesRequestPrivate(const ListNodesRequestPrivate &other,
                                   ListNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNodesRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
