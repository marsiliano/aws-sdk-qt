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

#include "enabledirectoryresponse.h"
#include "enabledirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  EnableDirectoryResponse
 *
 * @brief  Handles CloudDirectory EnableDirectory responses.
 *
 * @see    CloudDirectoryClient::enableDirectory
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableDirectoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new EnableDirectoryResponsePrivate(this), parent)
{
    setRequest(new EnableDirectoryRequest(request));
    setReply(reply);
}

const EnableDirectoryRequest * EnableDirectoryResponse::request() const
{
    Q_D(const EnableDirectoryResponse);
    return static_cast<const EnableDirectoryRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory EnableDirectory response.
 *
 * @param  response  Response to parse.
 */
void EnableDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableDirectoryResponsePrivate
 *
 * @brief  Private implementation for EnableDirectoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableDirectoryResponse instance.
 */
EnableDirectoryResponsePrivate::EnableDirectoryResponsePrivate(
    EnableDirectoryQueueResponse * const q) : EnableDirectoryPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory EnableDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableDirectoryResponsePrivate::EnableDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDirectoryResponse"));
    /// @todo
}