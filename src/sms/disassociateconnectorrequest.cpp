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

#include "disassociateconnectorrequest.h"
#include "disassociateconnectorrequest_p.h"
#include "disassociateconnectorresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DisassociateConnectorRequest
 * \brief The DisassociateConnectorRequest class provides an interface for SMS DisassociateConnector requests.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
 *
 * \sa SmsClient::disassociateConnector
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateConnectorRequest::DisassociateConnectorRequest(const DisassociateConnectorRequest &other)
    : SmsRequest(new DisassociateConnectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateConnectorRequest object.
 */
DisassociateConnectorRequest::DisassociateConnectorRequest()
    : SmsRequest(new DisassociateConnectorRequestPrivate(SmsRequest::DisassociateConnectorAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateConnectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateConnectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateConnectorRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateConnectorResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::DisassociateConnectorRequestPrivate
 * \brief The DisassociateConnectorRequestPrivate class provides private implementation for DisassociateConnectorRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a DisassociateConnectorRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
DisassociateConnectorRequestPrivate::DisassociateConnectorRequestPrivate(
    const SmsRequest::Action action, DisassociateConnectorRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateConnectorRequest
 * class' copy constructor.
 */
DisassociateConnectorRequestPrivate::DisassociateConnectorRequestPrivate(
    const DisassociateConnectorRequestPrivate &other, DisassociateConnectorRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
