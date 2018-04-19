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

#include "createfieldlevelencryptionconfigresponse.h"
#include "createfieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigResponse
 * \brief The CreateFieldLevelEncryptionConfigResponse class provides an interace for CloudFront CreateFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionConfig
 */

/*!
 * Constructs a CreateFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFieldLevelEncryptionConfigResponse::CreateFieldLevelEncryptionConfigResponse(
        const CreateFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new CreateFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFieldLevelEncryptionConfigRequest * CreateFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const CreateFieldLevelEncryptionConfigResponse);
    return static_cast<const CreateFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateFieldLevelEncryptionConfig \a response.
 */
void CreateFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigResponsePrivate
 * \brief The CreateFieldLevelEncryptionConfigResponsePrivate class provides private implementation for CreateFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
CreateFieldLevelEncryptionConfigResponsePrivate::CreateFieldLevelEncryptionConfigResponsePrivate(
    CreateFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateFieldLevelEncryptionConfig response element from \a xml.
 */
void CreateFieldLevelEncryptionConfigResponsePrivate::parseCreateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFieldLevelEncryptionConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
