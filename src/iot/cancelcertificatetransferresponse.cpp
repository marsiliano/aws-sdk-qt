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

#include "cancelcertificatetransferresponse.h"
#include "cancelcertificatetransferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CancelCertificateTransferResponse
 * \brief The CancelCertificateTransferResponse class provides an interace for IoT CancelCertificateTransfer responses.
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
 * \sa IoTClient::cancelCertificateTransfer
 */

/*!
 * Constructs a CancelCertificateTransferResponse object for \a reply to \a request, with parent \a parent.
 */
CancelCertificateTransferResponse::CancelCertificateTransferResponse(
        const CancelCertificateTransferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CancelCertificateTransferResponsePrivate(this), parent)
{
    setRequest(new CancelCertificateTransferRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelCertificateTransferRequest * CancelCertificateTransferResponse::request() const
{
    Q_D(const CancelCertificateTransferResponse);
    return static_cast<const CancelCertificateTransferRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CancelCertificateTransfer \a response.
 */
void CancelCertificateTransferResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelCertificateTransferResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CancelCertificateTransferResponsePrivate
 * \brief The CancelCertificateTransferResponsePrivate class provides private implementation for CancelCertificateTransferResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CancelCertificateTransferResponsePrivate object with public implementation \a q.
 */
CancelCertificateTransferResponsePrivate::CancelCertificateTransferResponsePrivate(
    CancelCertificateTransferResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CancelCertificateTransfer response element from \a xml.
 */
void CancelCertificateTransferResponsePrivate::parseCancelCertificateTransferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelCertificateTransferResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
