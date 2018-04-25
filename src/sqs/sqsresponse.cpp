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

#include "sqsresponse.h"
#include "sqsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::SqsResponse
 * \brief The SqsResponse class provides an interface for SQS responses.
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SqsResponse object with parent \a parent.
 */
SqsResponse::SqsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SqsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SqsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SqsResponsePrivate.
 */
SqsResponse::SqsResponse(SqsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SqsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::SQS::SqsResponsePrivate
 * \brief The SqsResponsePrivate class provides private implementation for SqsResponse.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SqsResponsePrivate object with public implementation \a q.
 */
SqsResponsePrivate::SqsResponsePrivate(
    SqsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SQS
} // namespace QtAws
