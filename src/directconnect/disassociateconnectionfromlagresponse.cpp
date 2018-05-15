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

#include "disassociateconnectionfromlagresponse.h"
#include "disassociateconnectionfromlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DisassociateConnectionFromLagResponse
 * \brief The DisassociateConnectionFromLagResponse class provides an interace for DirectConnect DisassociateConnectionFromLag responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::disassociateConnectionFromLag
 */

/*!
 * Constructs a DisassociateConnectionFromLagResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateConnectionFromLagResponse::DisassociateConnectionFromLagResponse(
        const DisassociateConnectionFromLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DisassociateConnectionFromLagResponsePrivate(this), parent)
{
    setRequest(new DisassociateConnectionFromLagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateConnectionFromLagRequest * DisassociateConnectionFromLagResponse::request() const
{
    Q_D(const DisassociateConnectionFromLagResponse);
    return static_cast<const DisassociateConnectionFromLagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DisassociateConnectionFromLag \a response.
 */
void DisassociateConnectionFromLagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateConnectionFromLagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DisassociateConnectionFromLagResponsePrivate
 * \brief The DisassociateConnectionFromLagResponsePrivate class provides private implementation for DisassociateConnectionFromLagResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DisassociateConnectionFromLagResponsePrivate object with public implementation \a q.
 */
DisassociateConnectionFromLagResponsePrivate::DisassociateConnectionFromLagResponsePrivate(
    DisassociateConnectionFromLagResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DisassociateConnectionFromLag response element from \a xml.
 */
void DisassociateConnectionFromLagResponsePrivate::parseDisassociateConnectionFromLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateConnectionFromLagResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
