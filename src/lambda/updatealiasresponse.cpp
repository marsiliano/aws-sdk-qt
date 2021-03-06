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

#include "updatealiasresponse.h"
#include "updatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::UpdateAliasResponse
 * \brief The UpdateAliasResponse class provides an interace for Lambda UpdateAlias responses.
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
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::updateAlias
 */

/*!
 * Constructs a UpdateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAliasResponse::UpdateAliasResponse(
        const UpdateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new UpdateAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAliasRequest * UpdateAliasResponse::request() const
{
    Q_D(const UpdateAliasResponse);
    return static_cast<const UpdateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda UpdateAlias \a response.
 */
void UpdateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::UpdateAliasResponsePrivate
 * \brief The UpdateAliasResponsePrivate class provides private implementation for UpdateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a UpdateAliasResponsePrivate object with public implementation \a q.
 */
UpdateAliasResponsePrivate::UpdateAliasResponsePrivate(
    UpdateAliasResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda UpdateAlias response element from \a xml.
 */
void UpdateAliasResponsePrivate::parseUpdateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
