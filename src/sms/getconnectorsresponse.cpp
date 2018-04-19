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

#include "getconnectorsresponse.h"
#include "getconnectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetConnectorsResponse
 * \brief The GetConnectorsResponse class provides an interace for SMS GetConnectors responses.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::getConnectors
 */

/*!
 * Constructs a GetConnectorsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectorsResponse::GetConnectorsResponse(
        const GetConnectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new GetConnectorsResponsePrivate(this), parent)
{
    setRequest(new GetConnectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectorsRequest * GetConnectorsResponse::request() const
{
    Q_D(const GetConnectorsResponse);
    return static_cast<const GetConnectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS GetConnectors \a response.
 */
void GetConnectorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetConnectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::GetConnectorsResponsePrivate
 * \brief The GetConnectorsResponsePrivate class provides private implementation for GetConnectorsResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetConnectorsResponsePrivate object with public implementation \a q.
 */
GetConnectorsResponsePrivate::GetConnectorsResponsePrivate(
    GetConnectorsResponse * const q) : SMSResponsePrivate(q)
{

}

/*!
 * Parses a SMS GetConnectors response element from \a xml.
 */
void GetConnectorsResponsePrivate::parseGetConnectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorsResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
