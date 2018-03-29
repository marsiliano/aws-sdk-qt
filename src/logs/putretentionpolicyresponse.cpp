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

#include "putretentionpolicyresponse.h"
#include "putretentionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  PutRetentionPolicyResponse
 *
 * @brief  Handles CloudWatchLogs PutRetentionPolicy responses.
 *
 * @see    CloudWatchLogsClient::putRetentionPolicy
 */

/**
 * @brief  Constructs a new PutRetentionPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRetentionPolicyResponse::PutRetentionPolicyResponse(
        const PutRetentionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutRetentionPolicyResponsePrivate(this), parent)
{
    setRequest(new PutRetentionPolicyRequest(request));
    setReply(reply);
}

const PutRetentionPolicyRequest * PutRetentionPolicyResponse::request() const
{
    Q_D(const PutRetentionPolicyResponse);
    return static_cast<const PutRetentionPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutRetentionPolicy response.
 *
 * @param  response  Response to parse.
 */
void PutRetentionPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutRetentionPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRetentionPolicyResponsePrivate
 *
 * @brief  Private implementation for PutRetentionPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRetentionPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRetentionPolicyResponse instance.
 */
PutRetentionPolicyResponsePrivate::PutRetentionPolicyResponsePrivate(
    PutRetentionPolicyResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutRetentionPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRetentionPolicyResponsePrivate::PutRetentionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRetentionPolicyResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
