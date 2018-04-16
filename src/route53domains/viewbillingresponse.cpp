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

#include "viewbillingresponse.h"
#include "viewbillingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ViewBillingResponse
 *
 * \brief The ViewBillingResponse class provides an interace for Route53Domains ViewBilling responses.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::viewBilling
 */

/*!
 * @brief  Constructs a new ViewBillingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ViewBillingResponse::ViewBillingResponse(
        const ViewBillingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ViewBillingResponsePrivate(this), parent)
{
    setRequest(new ViewBillingRequest(request));
    setReply(reply);
}

const ViewBillingRequest * ViewBillingResponse::request() const
{
    Q_D(const ViewBillingResponse);
    return static_cast<const ViewBillingRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53Domains ViewBilling response.
 *
 * @param  response  Response to parse.
 */
void ViewBillingResponse::parseSuccess(QIODevice &response)
{
    Q_D(ViewBillingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ViewBillingResponsePrivate
 *
 * \brief Private implementation for ViewBillingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ViewBillingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ViewBillingResponse instance.
 */
ViewBillingResponsePrivate::ViewBillingResponsePrivate(
    ViewBillingResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53Domains ViewBillingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ViewBillingResponsePrivate::parseViewBillingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ViewBillingResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
