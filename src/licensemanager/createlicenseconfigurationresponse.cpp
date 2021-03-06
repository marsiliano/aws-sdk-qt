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

#include "createlicenseconfigurationresponse.h"
#include "createlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationResponse
 * \brief The CreateLicenseConfigurationResponse class provides an interace for LicenseManager CreateLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  <i>This is the AWS License Manager API Reference.</i> It provides descriptions, syntax, and usage examples for each of
 *  the actions and data types for License Manager. The topic for each action shows the Query API request parameters and the
 *  XML response. You can also view the XML request elements in the WSDL.
 * 
 *  </p
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.
 *
 * \sa LicenseManagerClient::createLicenseConfiguration
 */

/*!
 * Constructs a CreateLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseConfigurationResponse::CreateLicenseConfigurationResponse(
        const CreateLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseConfigurationRequest * CreateLicenseConfigurationResponse::request() const
{
    Q_D(const CreateLicenseConfigurationResponse);
    return static_cast<const CreateLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseConfiguration \a response.
 */
void CreateLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationResponsePrivate
 * \brief The CreateLicenseConfigurationResponsePrivate class provides private implementation for CreateLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
CreateLicenseConfigurationResponsePrivate::CreateLicenseConfigurationResponsePrivate(
    CreateLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseConfiguration response element from \a xml.
 */
void CreateLicenseConfigurationResponsePrivate::parseCreateLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
