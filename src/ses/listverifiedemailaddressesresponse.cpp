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

#include "listverifiedemailaddressesresponse.h"
#include "listverifiedemailaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListVerifiedEmailAddressesResponse
 * \brief The ListVerifiedEmailAddressesResponse class provides an interace for SES ListVerifiedEmailAddresses responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::listVerifiedEmailAddresses
 */

/*!
 * Constructs a ListVerifiedEmailAddressesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVerifiedEmailAddressesResponse::ListVerifiedEmailAddressesResponse(
        const ListVerifiedEmailAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListVerifiedEmailAddressesResponsePrivate(this), parent)
{
    setRequest(new ListVerifiedEmailAddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVerifiedEmailAddressesRequest * ListVerifiedEmailAddressesResponse::request() const
{
    Q_D(const ListVerifiedEmailAddressesResponse);
    return static_cast<const ListVerifiedEmailAddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES ListVerifiedEmailAddresses \a response.
 */
void ListVerifiedEmailAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListVerifiedEmailAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::ListVerifiedEmailAddressesResponsePrivate
 * \brief The ListVerifiedEmailAddressesResponsePrivate class provides private implementation for ListVerifiedEmailAddressesResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a ListVerifiedEmailAddressesResponsePrivate object with public implementation \a q.
 */
ListVerifiedEmailAddressesResponsePrivate::ListVerifiedEmailAddressesResponsePrivate(
    ListVerifiedEmailAddressesResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES ListVerifiedEmailAddresses response element from \a xml.
 */
void ListVerifiedEmailAddressesResponsePrivate::parseListVerifiedEmailAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVerifiedEmailAddressesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws