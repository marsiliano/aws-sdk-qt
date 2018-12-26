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

#include "listlayerversionsrequest.h"
#include "listlayerversionsrequest_p.h"
#include "listlayerversionsresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListLayerVersionsRequest
 * \brief The ListLayerVersionsRequest class provides an interface for Lambda ListLayerVersions requests.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::listLayerVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListLayerVersionsRequest::ListLayerVersionsRequest(const ListLayerVersionsRequest &other)
    : LambdaRequest(new ListLayerVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLayerVersionsRequest object.
 */
ListLayerVersionsRequest::ListLayerVersionsRequest()
    : LambdaRequest(new ListLayerVersionsRequestPrivate(LambdaRequest::ListLayerVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLayerVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLayerVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLayerVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLayerVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::ListLayerVersionsRequestPrivate
 * \brief The ListLayerVersionsRequestPrivate class provides private implementation for ListLayerVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListLayerVersionsRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
ListLayerVersionsRequestPrivate::ListLayerVersionsRequestPrivate(
    const LambdaRequest::Action action, ListLayerVersionsRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLayerVersionsRequest
 * class' copy constructor.
 */
ListLayerVersionsRequestPrivate::ListLayerVersionsRequestPrivate(
    const ListLayerVersionsRequestPrivate &other, ListLayerVersionsRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
