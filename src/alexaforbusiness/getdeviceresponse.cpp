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

#include "getdeviceresponse.h"
#include "getdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetDeviceResponse
 * \brief The GetDeviceResponse class provides an interace for AlexaForBusiness GetDevice responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::getDevice
 */

/*!
 * Constructs a GetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceResponse::GetDeviceResponse(
        const GetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetDeviceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceRequest * GetDeviceResponse::request() const
{
    Q_D(const GetDeviceResponse);
    return static_cast<const GetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetDevice \a response.
 */
void GetDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetDeviceResponsePrivate
 * \brief The GetDeviceResponsePrivate class provides private implementation for GetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetDeviceResponsePrivate object with public implementation \a q.
 */
GetDeviceResponsePrivate::GetDeviceResponsePrivate(
    GetDeviceResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetDevice response element from \a xml.
 */
void GetDeviceResponsePrivate::parseGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
