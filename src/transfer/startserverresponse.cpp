/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startserverresponse.h"
#include "startserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::StartServerResponse
 * \brief The StartServerResponse class provides an interace for Transfer StartServer responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::startServer
 */

/*!
 * Constructs a StartServerResponse object for \a reply to \a request, with parent \a parent.
 */
StartServerResponse::StartServerResponse(
        const StartServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new StartServerResponsePrivate(this), parent)
{
    setRequest(new StartServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartServerRequest * StartServerResponse::request() const
{
    Q_D(const StartServerResponse);
    return static_cast<const StartServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer StartServer \a response.
 */
void StartServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::StartServerResponsePrivate
 * \brief The StartServerResponsePrivate class provides private implementation for StartServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a StartServerResponsePrivate object with public implementation \a q.
 */
StartServerResponsePrivate::StartServerResponsePrivate(
    StartServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer StartServer response element from \a xml.
 */
void StartServerResponsePrivate::parseStartServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
