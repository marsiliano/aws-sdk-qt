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

#include "disassociatevpcfromhostedzonerequest.h"
#include "disassociatevpcfromhostedzonerequest_p.h"
#include "disassociatevpcfromhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DisassociateVPCFromHostedZoneRequest
 * \brief The DisassociateVPCFromHostedZoneRequest class provides an interface for Route53 DisassociateVPCFromHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::disassociateVPCFromHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateVPCFromHostedZoneRequest::DisassociateVPCFromHostedZoneRequest(const DisassociateVPCFromHostedZoneRequest &other)
    : Route53Request(new DisassociateVPCFromHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateVPCFromHostedZoneRequest object.
 */
DisassociateVPCFromHostedZoneRequest::DisassociateVPCFromHostedZoneRequest()
    : Route53Request(new DisassociateVPCFromHostedZoneRequestPrivate(Route53Request::DisassociateVPCFromHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateVPCFromHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateVPCFromHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateVPCFromHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateVPCFromHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DisassociateVPCFromHostedZoneRequestPrivate
 * \brief The DisassociateVPCFromHostedZoneRequestPrivate class provides private implementation for DisassociateVPCFromHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DisassociateVPCFromHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DisassociateVPCFromHostedZoneRequestPrivate::DisassociateVPCFromHostedZoneRequestPrivate(
    const Route53Request::Action action, DisassociateVPCFromHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateVPCFromHostedZoneRequest
 * class' copy constructor.
 */
DisassociateVPCFromHostedZoneRequestPrivate::DisassociateVPCFromHostedZoneRequestPrivate(
    const DisassociateVPCFromHostedZoneRequestPrivate &other, DisassociateVPCFromHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
