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

#include "getbucketrequestpaymentresponse.h"
#include "getbucketrequestpaymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketRequestPaymentResponse
 *
 * \brief The GetBucketRequestPaymentResponse class provides an interace for S3 GetBucketRequestPayment responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketRequestPayment
 */

/*!
 * @brief  Constructs a new GetBucketRequestPaymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketRequestPaymentResponse::GetBucketRequestPaymentResponse(
        const GetBucketRequestPaymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketRequestPaymentResponsePrivate(this), parent)
{
    setRequest(new GetBucketRequestPaymentRequest(request));
    setReply(reply);
}

const GetBucketRequestPaymentRequest * GetBucketRequestPaymentResponse::request() const
{
    Q_D(const GetBucketRequestPaymentResponse);
    return static_cast<const GetBucketRequestPaymentRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 GetBucketRequestPayment response.
 *
 * @param  response  Response to parse.
 */
void GetBucketRequestPaymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketRequestPaymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetBucketRequestPaymentResponsePrivate
 *
 * \brief Private implementation for GetBucketRequestPaymentResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketRequestPaymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketRequestPaymentResponse instance.
 */
GetBucketRequestPaymentResponsePrivate::GetBucketRequestPaymentResponsePrivate(
    GetBucketRequestPaymentResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 GetBucketRequestPaymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketRequestPaymentResponsePrivate::parseGetBucketRequestPaymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketRequestPaymentResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
