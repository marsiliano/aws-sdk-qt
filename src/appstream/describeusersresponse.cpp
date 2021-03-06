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

#include "describeusersresponse.h"
#include "describeusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeUsersResponse
 * \brief The DescribeUsersResponse class provides an interace for AppStream DescribeUsers responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on
 * 
 *  demand>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::describeUsers
 */

/*!
 * Constructs a DescribeUsersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUsersResponse::DescribeUsersResponse(
        const DescribeUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DescribeUsersResponsePrivate(this), parent)
{
    setRequest(new DescribeUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUsersRequest * DescribeUsersResponse::request() const
{
    Q_D(const DescribeUsersResponse);
    return static_cast<const DescribeUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DescribeUsers \a response.
 */
void DescribeUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DescribeUsersResponsePrivate
 * \brief The DescribeUsersResponsePrivate class provides private implementation for DescribeUsersResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DescribeUsersResponsePrivate object with public implementation \a q.
 */
DescribeUsersResponsePrivate::DescribeUsersResponsePrivate(
    DescribeUsersResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DescribeUsers response element from \a xml.
 */
void DescribeUsersResponsePrivate::parseDescribeUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
