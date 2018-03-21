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

#include "registercacertificateresponse.h"
#include "registercacertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  RegisterCACertificateResponse
 *
 * @brief  Handles IoT RegisterCACertificate responses.
 *
 * @see    IoTClient::registerCACertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterCACertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new RegisterCACertificateResponsePrivate(this), parent)
{
    setRequest(new RegisterCACertificateRequest(request));
    setReply(reply);
}

const RegisterCACertificateRequest * RegisterCACertificateResponse::request() const
{
    Q_D(const RegisterCACertificateResponse);
    return static_cast<const RegisterCACertificateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT RegisterCACertificate response.
 *
 * @param  response  Response to parse.
 */
void RegisterCACertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterCACertificateResponsePrivate
 *
 * @brief  Private implementation for RegisterCACertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterCACertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterCACertificateResponse instance.
 */
RegisterCACertificateResponsePrivate::RegisterCACertificateResponsePrivate(
    RegisterCACertificateQueueResponse * const q) : RegisterCACertificatePrivate(q)
{

}

/**
 * @brief  Parse an IoT RegisterCACertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterCACertificateResponsePrivate::RegisterCACertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCACertificateResponse"));
    /// @todo
}