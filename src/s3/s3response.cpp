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

#include "s3response.h"
#include "s3response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  S3Response
 *
 * @brief  Handles S3 S3 responses.
 *
 * @see    S3Client::s3
 */

/**
 * @brief  Constructs a new S3Response object.
 *
 * @param  parent   This object's parent.
 */
S3Response::S3Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new S3ResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  S3ResponsePrivate
 *
 * @brief  Private implementation for S3Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new S3ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public S3Response instance.
 */
S3ResponsePrivate::S3ResponsePrivate(
    S3QueueResponse * const q) : S3Private(q)
{

}

} // namespace S3
} // namespace QtAws