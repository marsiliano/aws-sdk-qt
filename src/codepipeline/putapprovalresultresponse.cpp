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

#include "putapprovalresultresponse.h"
#include "putapprovalresultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutApprovalResultResponse
 *
 * @brief  Handles CodePipeline PutApprovalResult responses.
 *
 * @see    CodePipelineClient::putApprovalResult
 */

/**
 * @brief  Constructs a new PutApprovalResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutApprovalResultResponse::PutApprovalResultResponse(
        const PutApprovalResultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutApprovalResultResponse(new PutApprovalResultResponsePrivate(this), parent)
{
    setRequest(new PutApprovalResultRequest(request));
    setReply(reply);
}

const PutApprovalResultRequest * PutApprovalResultResponse::request() const
{
    Q_D(const PutApprovalResultResponse);
    return static_cast<const PutApprovalResultRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline PutApprovalResult response.
 *
 * @param  response  Response to parse.
 */
void PutApprovalResultResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutApprovalResultResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutApprovalResultResponsePrivate
 *
 * @brief  Private implementation for PutApprovalResultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutApprovalResultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutApprovalResultResponse instance.
 */
PutApprovalResultResponsePrivate::PutApprovalResultResponsePrivate(
    PutApprovalResultResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline PutApprovalResultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutApprovalResultResponsePrivate::parsePutApprovalResultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutApprovalResultResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
