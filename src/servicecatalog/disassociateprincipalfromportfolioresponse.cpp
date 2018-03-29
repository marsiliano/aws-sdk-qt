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

#include "disassociateprincipalfromportfolioresponse.h"
#include "disassociateprincipalfromportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DisassociatePrincipalFromPortfolioResponse
 *
 * @brief  Handles ServiceCatalog DisassociatePrincipalFromPortfolio responses.
 *
 * @see    ServiceCatalogClient::disassociatePrincipalFromPortfolio
 */

/**
 * @brief  Constructs a new DisassociatePrincipalFromPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociatePrincipalFromPortfolioResponse::DisassociatePrincipalFromPortfolioResponse(
        const DisassociatePrincipalFromPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DisassociatePrincipalFromPortfolioResponse(new DisassociatePrincipalFromPortfolioResponsePrivate(this), parent)
{
    setRequest(new DisassociatePrincipalFromPortfolioRequest(request));
    setReply(reply);
}

const DisassociatePrincipalFromPortfolioRequest * DisassociatePrincipalFromPortfolioResponse::request() const
{
    Q_D(const DisassociatePrincipalFromPortfolioResponse);
    return static_cast<const DisassociatePrincipalFromPortfolioRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DisassociatePrincipalFromPortfolio response.
 *
 * @param  response  Response to parse.
 */
void DisassociatePrincipalFromPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociatePrincipalFromPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociatePrincipalFromPortfolioResponsePrivate
 *
 * @brief  Private implementation for DisassociatePrincipalFromPortfolioResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociatePrincipalFromPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociatePrincipalFromPortfolioResponse instance.
 */
DisassociatePrincipalFromPortfolioResponsePrivate::DisassociatePrincipalFromPortfolioResponsePrivate(
    DisassociatePrincipalFromPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DisassociatePrincipalFromPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociatePrincipalFromPortfolioResponsePrivate::parseDisassociatePrincipalFromPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociatePrincipalFromPortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
