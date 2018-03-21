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

#include "updatepullrequeststatusresponse.h"
#include "updatepullrequeststatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestStatusResponse
 *
 * @brief  Handles CodeCommit UpdatePullRequestStatus responses.
 *
 * @see    CodeCommitClient::updatePullRequestStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePullRequestStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdatePullRequestStatusResponsePrivate(this), parent)
{
    setRequest(new UpdatePullRequestStatusRequest(request));
    setReply(reply);
}

const UpdatePullRequestStatusRequest * UpdatePullRequestStatusResponse::request() const
{
    Q_D(const UpdatePullRequestStatusResponse);
    return static_cast<const UpdatePullRequestStatusRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdatePullRequestStatus response.
 *
 * @param  response  Response to parse.
 */
void UpdatePullRequestStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePullRequestStatusResponsePrivate
 *
 * @brief  Private implementation for UpdatePullRequestStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePullRequestStatusResponse instance.
 */
UpdatePullRequestStatusResponsePrivate::UpdatePullRequestStatusResponsePrivate(
    UpdatePullRequestStatusQueueResponse * const q) : UpdatePullRequestStatusPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdatePullRequestStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePullRequestStatusResponsePrivate::UpdatePullRequestStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePullRequestStatusResponse"));
    /// @todo
}