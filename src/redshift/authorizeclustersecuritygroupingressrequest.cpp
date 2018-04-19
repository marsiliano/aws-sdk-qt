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

#include "authorizeclustersecuritygroupingressrequest.h"
#include "authorizeclustersecuritygroupingressrequest_p.h"
#include "authorizeclustersecuritygroupingressresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::AuthorizeClusterSecurityGroupIngressRequest
 * \brief The AuthorizeClusterSecurityGroupIngressRequest class provides an interface for Redshift AuthorizeClusterSecurityGroupIngress requests.
 *
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift
 *  Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::authorizeClusterSecurityGroupIngress
 */

/*!
 * Constructs a copy of \a other.
 */
AuthorizeClusterSecurityGroupIngressRequest::AuthorizeClusterSecurityGroupIngressRequest(const AuthorizeClusterSecurityGroupIngressRequest &other)
    : RedshiftRequest(new AuthorizeClusterSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AuthorizeClusterSecurityGroupIngressRequest object.
 */
AuthorizeClusterSecurityGroupIngressRequest::AuthorizeClusterSecurityGroupIngressRequest()
    : RedshiftRequest(new AuthorizeClusterSecurityGroupIngressRequestPrivate(RedshiftRequest::AuthorizeClusterSecurityGroupIngressAction, this))
{

}

/*!
 * \reimp
 */
bool AuthorizeClusterSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AuthorizeClusterSecurityGroupIngressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeClusterSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeClusterSecurityGroupIngressResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::AuthorizeClusterSecurityGroupIngressRequestPrivate
 * \brief The AuthorizeClusterSecurityGroupIngressRequestPrivate class provides private implementation for AuthorizeClusterSecurityGroupIngressRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a AuthorizeClusterSecurityGroupIngressRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
AuthorizeClusterSecurityGroupIngressRequestPrivate::AuthorizeClusterSecurityGroupIngressRequestPrivate(
    const RedshiftRequest::Action action, AuthorizeClusterSecurityGroupIngressRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeClusterSecurityGroupIngressRequest
 * class' copy constructor.
 */
AuthorizeClusterSecurityGroupIngressRequestPrivate::AuthorizeClusterSecurityGroupIngressRequestPrivate(
    const AuthorizeClusterSecurityGroupIngressRequestPrivate &other, AuthorizeClusterSecurityGroupIngressRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
