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

#include "simpledbclientresponse.h"
#include "simpledbclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/**
 * @class  SimpleDBClientResponse
 *
 * @brief  Handles SimpleDB SimpleDBClient responses.
 *
 * @see    SimpleDBClient::simpleDBClient
 */

/**
 * @brief  Constructs a new SimpleDBClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SimpleDBClientResponse::SimpleDBClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SimpleDBClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SimpleDBClientResponsePrivate
 *
 * @brief  Private implementation for SimpleDBClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SimpleDBClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SimpleDBClientResponse instance.
 */
SimpleDBClientResponsePrivate::SimpleDBClientResponsePrivate(
    SimpleDBClientQueueResponse * const q) : SimpleDBClientPrivate(q)
{

}

} // namespace SimpleDB
} // namespace QtAws
