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

#include "listfunctiondefinitionversionsresponse.h"
#include "listfunctiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsResponse
 *
 * \brief The ListFunctionDefinitionVersionsResponse class provides an interace for Greengrass ListFunctionDefinitionVersions responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listFunctionDefinitionVersions
 */

/*!
 * @brief  Constructs a new ListFunctionDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFunctionDefinitionVersionsResponse::ListFunctionDefinitionVersionsResponse(
        const ListFunctionDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListFunctionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListFunctionDefinitionVersionsRequest * ListFunctionDefinitionVersionsResponse::request() const
{
    Q_D(const ListFunctionDefinitionVersionsResponse);
    return static_cast<const ListFunctionDefinitionVersionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass ListFunctionDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListFunctionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFunctionDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListFunctionDefinitionVersionsResponsePrivate
 *
 * \brief Private implementation for ListFunctionDefinitionVersionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFunctionDefinitionVersionsResponse instance.
 */
ListFunctionDefinitionVersionsResponsePrivate::ListFunctionDefinitionVersionsResponsePrivate(
    ListFunctionDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass ListFunctionDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFunctionDefinitionVersionsResponsePrivate::parseListFunctionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
