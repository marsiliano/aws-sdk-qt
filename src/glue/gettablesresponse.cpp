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

#include "gettablesresponse.h"
#include "gettablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTablesResponse
 *
 * \brief The GetTablesResponse class provides an interace for Glue GetTables responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTables
 */

/*!
 * @brief  Constructs a new GetTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTablesResponse::GetTablesResponse(
        const GetTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTablesResponsePrivate(this), parent)
{
    setRequest(new GetTablesRequest(request));
    setReply(reply);
}

const GetTablesRequest * GetTablesResponse::request() const
{
    Q_D(const GetTablesResponse);
    return static_cast<const GetTablesRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetTables response.
 *
 * @param  response  Response to parse.
 */
void GetTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetTablesResponsePrivate
 *
 * \brief Private implementation for GetTablesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTablesResponse instance.
 */
GetTablesResponsePrivate::GetTablesResponsePrivate(
    GetTablesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTablesResponsePrivate::parseGetTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTablesResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
