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

#include "deleteprovisioningartifactresponse.h"
#include "deleteprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DeleteProvisioningArtifactResponse
 *
 * @brief  Handles ServiceCatalog DeleteProvisioningArtifact responses.
 *
 * @see    ServiceCatalogClient::deleteProvisioningArtifact
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProvisioningArtifactResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new DeleteProvisioningArtifactRequest(request));
    setReply(reply);
}

const DeleteProvisioningArtifactRequest * DeleteProvisioningArtifactResponse::request() const
{
    Q_D(const DeleteProvisioningArtifactResponse);
    return static_cast<const DeleteProvisioningArtifactRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DeleteProvisioningArtifact response.
 *
 * @param  response  Response to parse.
 */
void DeleteProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteProvisioningArtifactResponsePrivate
 *
 * @brief  Private implementation for DeleteProvisioningArtifactResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProvisioningArtifactResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProvisioningArtifactResponse instance.
 */
DeleteProvisioningArtifactResponsePrivate::DeleteProvisioningArtifactResponsePrivate(
    DeleteProvisioningArtifactQueueResponse * const q) : DeleteProvisioningArtifactPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DeleteProvisioningArtifactResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProvisioningArtifactResponsePrivate::DeleteProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProvisioningArtifactResponse"));
    /// @todo
}