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

#include "addtagsresponse.h"
#include "addtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::AddTagsResponse
 *
 * \brief The AddTagsResponse class provides an interace for CloudTrail AddTags responses.
 *
 * \ingroup CloudTrail
 *
 *  <fullname>AWS CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records AWS API calls for your AWS account and delivers log files to an Amazon S3
 *  bucket. The recorded information includes the identity of the user, the start time of the AWS API call, the source IP
 *  address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the AWS SDKs, which consist of libraries and sample code for various
 *  programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create
 *  programmatic access to AWSCloudTrail. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services
 * 
 *  page</a>> </note>
 * 
 *  See the <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS CloudTrail
 *  User Guide</a> for information about the data that is included with each AWS API call listed in the log
 *
 * \sa CloudTrailClient::addTags
 */

/*!
 * @brief  Constructs a new AddTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsResponse::AddTagsResponse(
        const AddTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new AddTagsResponsePrivate(this), parent)
{
    setRequest(new AddTagsRequest(request));
    setReply(reply);
}

const AddTagsRequest * AddTagsResponse::request() const
{
    Q_D(const AddTagsResponse);
    return static_cast<const AddTagsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudTrail AddTags response.
 *
 * @param  response  Response to parse.
 */
void AddTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AddTagsResponsePrivate
 *
 * \brief Private implementation for AddTagsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsResponse instance.
 */
AddTagsResponsePrivate::AddTagsResponsePrivate(
    AddTagsResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudTrail AddTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsResponsePrivate::parseAddTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws
