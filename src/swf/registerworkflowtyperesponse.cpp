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

#include "registerworkflowtyperesponse.h"
#include "registerworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  RegisterWorkflowTypeResponse
 *
 * @brief  Handles SWF RegisterWorkflowType responses.
 *
 * @see    SWFClient::registerWorkflowType
 */

/**
 * @brief  Constructs a new RegisterWorkflowTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterWorkflowTypeResponse::RegisterWorkflowTypeResponse(
        const RegisterWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RegisterWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new RegisterWorkflowTypeRequest(request));
    setReply(reply);
}

const RegisterWorkflowTypeRequest * RegisterWorkflowTypeResponse::request() const
{
    Q_D(const RegisterWorkflowTypeResponse);
    return static_cast<const RegisterWorkflowTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RegisterWorkflowType response.
 *
 * @param  response  Response to parse.
 */
void RegisterWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterWorkflowTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterWorkflowTypeResponsePrivate
 *
 * @brief  Private implementation for RegisterWorkflowTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterWorkflowTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterWorkflowTypeResponse instance.
 */
RegisterWorkflowTypeResponsePrivate::RegisterWorkflowTypeResponsePrivate(
    RegisterWorkflowTypeResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF RegisterWorkflowTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterWorkflowTypeResponsePrivate::RegisterWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterWorkflowTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
