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

#include "deletebucketwebsiteresponse.h"
#include "deletebucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketWebsiteResponse
 *
 * @brief  Handles S3 DeleteBucketWebsite responses.
 *
 * @see    S3Client::deleteBucketWebsite
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketWebsiteResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketWebsiteRequest(request));
    setReply(reply);
}

const DeleteBucketWebsiteRequest * DeleteBucketWebsiteResponse::request() const
{
    Q_D(const DeleteBucketWebsiteResponse);
    return static_cast<const DeleteBucketWebsiteRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketWebsite response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketWebsiteResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketWebsiteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketWebsiteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketWebsiteResponse instance.
 */
DeleteBucketWebsiteResponsePrivate::DeleteBucketWebsiteResponsePrivate(
    DeleteBucketWebsiteQueueResponse * const q) : DeleteBucketWebsitePrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketWebsiteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketWebsiteResponsePrivate::DeleteBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketWebsiteResponse"));
    /// @todo
}