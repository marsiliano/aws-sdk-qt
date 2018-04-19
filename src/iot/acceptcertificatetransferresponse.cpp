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

#include "acceptcertificatetransferresponse.h"
#include "acceptcertificatetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::AcceptCertificateTransferResponse
 * \brief The AcceptCertificateTransferResponse class provides an interace for IoT AcceptCertificateTransfer responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::acceptCertificateTransfer
 */

/*!
 * Constructs a AcceptCertificateTransferResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptCertificateTransferResponse::AcceptCertificateTransferResponse(
        const AcceptCertificateTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new AcceptCertificateTransferResponsePrivate(this), parent)
{
    setRequest(new AcceptCertificateTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptCertificateTransferRequest * AcceptCertificateTransferResponse::request() const
{
    Q_D(const AcceptCertificateTransferResponse);
    return static_cast<const AcceptCertificateTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT AcceptCertificateTransfer \a response.
 */
void AcceptCertificateTransferResponse::parseSuccess(QIODevice &response)
{
    Q_D(AcceptCertificateTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::AcceptCertificateTransferResponsePrivate
 * \brief The AcceptCertificateTransferResponsePrivate class provides private implementation for AcceptCertificateTransferResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a AcceptCertificateTransferResponsePrivate object with public implementation \a q.
 */
AcceptCertificateTransferResponsePrivate::AcceptCertificateTransferResponsePrivate(
    AcceptCertificateTransferResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT AcceptCertificateTransfer response element from \a xml.
 */
void AcceptCertificateTransferResponsePrivate::parseAcceptCertificateTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptCertificateTransferResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
