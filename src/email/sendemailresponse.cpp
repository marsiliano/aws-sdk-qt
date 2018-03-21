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

#include "sendemailresponse.h"
#include "sendemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SendEmailResponse
 *
 * @brief  Handles SES SendEmail responses.
 *
 * @see    SESClient::sendEmail
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendEmailResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SendEmailResponsePrivate(this), parent)
{
    setRequest(new SendEmailRequest(request));
    setReply(reply);
}

const SendEmailRequest * SendEmailResponse::request() const
{
    Q_D(const SendEmailResponse);
    return static_cast<const SendEmailRequest *>(d->request);
}

/**
 * @brief  Parse a SES SendEmail response.
 *
 * @param  response  Response to parse.
 */
void SendEmailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendEmailResponsePrivate
 *
 * @brief  Private implementation for SendEmailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendEmailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendEmailResponse instance.
 */
SendEmailResponsePrivate::SendEmailResponsePrivate(
    SendEmailQueueResponse * const q) : SendEmailPrivate(q)
{

}

/**
 * @brief  Parse an SES SendEmailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendEmailResponsePrivate::SendEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendEmailResponse"));
    /// @todo
}