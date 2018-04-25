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

#include "invokeasyncresponse.h"
#include "invokeasyncresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::InvokeAsyncResponse
 * \brief The InvokeAsyncResponse class provides an interace for Lambda InvokeAsync responses.
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
 * \sa LambdaClient::invokeAsync
 */

/*!
 * Constructs a InvokeAsyncResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeAsyncResponse::InvokeAsyncResponse(
        const InvokeAsyncRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new InvokeAsyncResponsePrivate(this), parent)
{
    setRequest(new InvokeAsyncRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvokeAsyncRequest * InvokeAsyncResponse::request() const
{
    Q_D(const InvokeAsyncResponse);
    return static_cast<const InvokeAsyncRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda InvokeAsync \a response.
 */
void InvokeAsyncResponse::parseSuccess(QIODevice &response)
{
    Q_D(InvokeAsyncResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::InvokeAsyncResponsePrivate
 * \brief The InvokeAsyncResponsePrivate class provides private implementation for InvokeAsyncResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a InvokeAsyncResponsePrivate object with public implementation \a q.
 */
InvokeAsyncResponsePrivate::InvokeAsyncResponsePrivate(
    InvokeAsyncResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda InvokeAsync response element from \a xml.
 */
void InvokeAsyncResponsePrivate::parseInvokeAsyncResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeAsyncResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
