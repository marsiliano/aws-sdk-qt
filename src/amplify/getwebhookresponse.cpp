/*
    Copyright 2013-2019 Paul Colby

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

#include "getwebhookresponse.h"
#include "getwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetWebhookResponse
 * \brief The GetWebhookResponse class provides an interace for Amplify GetWebhook responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::getWebhook
 */

/*!
 * Constructs a GetWebhookResponse object for \a reply to \a request, with parent \a parent.
 */
GetWebhookResponse::GetWebhookResponse(
        const GetWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetWebhookResponsePrivate(this), parent)
{
    setRequest(new GetWebhookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWebhookRequest * GetWebhookResponse::request() const
{
    Q_D(const GetWebhookResponse);
    return static_cast<const GetWebhookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetWebhook \a response.
 */
void GetWebhookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetWebhookResponsePrivate
 * \brief The GetWebhookResponsePrivate class provides private implementation for GetWebhookResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetWebhookResponsePrivate object with public implementation \a q.
 */
GetWebhookResponsePrivate::GetWebhookResponsePrivate(
    GetWebhookResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetWebhook response element from \a xml.
 */
void GetWebhookResponsePrivate::parseGetWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWebhookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
