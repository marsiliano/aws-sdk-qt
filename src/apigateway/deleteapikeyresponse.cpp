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

#include "deleteapikeyresponse.h"
#include "deleteapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteApiKeyResponse
 * \brief The DeleteApiKeyResponse class provides an interace for APIGateway DeleteApiKey responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteApiKey
 */

/*!
 * Constructs a DeleteApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiKeyResponse::DeleteApiKeyResponse(
        const DeleteApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteApiKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiKeyRequest * DeleteApiKeyResponse::request() const
{
    Q_D(const DeleteApiKeyResponse);
    return static_cast<const DeleteApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway DeleteApiKey \a response.
 */
void DeleteApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::DeleteApiKeyResponsePrivate
 * \brief The DeleteApiKeyResponsePrivate class provides private implementation for DeleteApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteApiKeyResponsePrivate object with public implementation \a q.
 */
DeleteApiKeyResponsePrivate::DeleteApiKeyResponsePrivate(
    DeleteApiKeyResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway DeleteApiKey response element from \a xml.
 */
void DeleteApiKeyResponsePrivate::parseDeleteApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
