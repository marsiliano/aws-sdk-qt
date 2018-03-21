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

#ifndef QTAWS_POSTCONTENTRESPONSE_H
#define QTAWS_POSTCONTENTRESPONSE_H

#include "runtime.lexresponse.h"
#include "postcontentrequest.h"

namespace AWS {

namespace runtime.lex {

class PostContentResponsePrivate;

class QTAWS_EXPORT PostContentResponse : public PostContentResponse {
    Q_OBJECT

public:
    PostContentResponse(const PostContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostContentRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(PostContentResponse)
    Q_DISABLE_COPY(PostContentResponse)

};

} // namespace runtime.lex
} // namespace AWS

#endif
