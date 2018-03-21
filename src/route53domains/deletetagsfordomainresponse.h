/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETETAGSFORDOMAINRESPONSE_H
#define QTAWS_DELETETAGSFORDOMAINRESPONSE_H

#include "route53domainsresponse.h"
#include "deletetagsfordomainrequest.h"

namespace AWS {

namespace route53domains {

class DeleteTagsForDomainResponsePrivate;

class QTAWS_EXPORT DeleteTagsForDomainResponse : public DeleteTagsForDomainResponse {
    Q_OBJECT

public:
    DeleteTagsForDomainResponse(const DeleteTagsForDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTagsForDomainRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteTagsForDomainResponse)
    Q_DISABLE_COPY(DeleteTagsForDomainResponse)

};

} // namespace route53domains
} // namespace AWS

#endif
