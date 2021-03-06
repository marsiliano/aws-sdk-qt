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

#include "personalizeruntimeclient.h"
#include "personalizeruntimeclient_p.h"

#include "core/awssignaturev4.h"
#include "getpersonalizedrankingrequest.h"
#include "getpersonalizedrankingresponse.h"
#include "getrecommendationsrequest.h"
#include "getrecommendationsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PersonalizeRuntime
 * \brief Contains classess for accessing Amazon Personalize Runtime.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeClient
 * \brief The PersonalizeRuntimeClient class provides access to the Amazon Personalize Runtime service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPersonalizeRuntime
 *
 */

/*!
 * \brief Constructs a PersonalizeRuntimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PersonalizeRuntimeClient::PersonalizeRuntimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PersonalizeRuntimeClientPrivate(this), parent)
{
    Q_D(PersonalizeRuntimeClient);
    d->apiVersion = QStringLiteral("2018-05-22");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("personalize-runtime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Personalize Runtime");
    d->serviceName = QStringLiteral("personalize");
}

/*!
 * \overload PersonalizeRuntimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PersonalizeRuntimeClient::PersonalizeRuntimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PersonalizeRuntimeClientPrivate(this), parent)
{
    Q_D(PersonalizeRuntimeClient);
    d->apiVersion = QStringLiteral("2018-05-22");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("personalize-runtime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Personalize Runtime");
    d->serviceName = QStringLiteral("personalize");
}

/*!
 * Sends \a request to the PersonalizeRuntimeClient service, and returns a pointer to an
 * GetPersonalizedRankingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Re-ranks a list of recommended items for the given user. The first item in the list is deemed the most likely item to be
 * of interest to the
 *
 * user> <note>
 *
 * The solution backing the campaign must have been created using a recipe of type
 */
GetPersonalizedRankingResponse * PersonalizeRuntimeClient::getPersonalizedRanking(const GetPersonalizedRankingRequest &request)
{
    return qobject_cast<GetPersonalizedRankingResponse *>(send(request));
}

/*!
 * Sends \a request to the PersonalizeRuntimeClient service, and returns a pointer to an
 * GetRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of recommended items. The required input depends on the recipe type used to create the solution backing
 * the campaign, as
 *
 * follows> <ul> <li>
 *
 * RELATED_ITEMS - <code>itemId</code> required, <code>userId</code> not
 *
 * use> </li> <li>
 *
 * USER_PERSONALIZATION - <code>itemId</code> optional, <code>userId</code>
 *
 * require> </li> </ul> <note>
 *
 * Campaigns that are backed by a solution created using a recipe of type PERSONALIZED_RANKING use the
 */
GetRecommendationsResponse * PersonalizeRuntimeClient::getRecommendations(const GetRecommendationsRequest &request)
{
    return qobject_cast<GetRecommendationsResponse *>(send(request));
}

/*!
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeClientPrivate
 * \brief The PersonalizeRuntimeClientPrivate class provides private implementation for PersonalizeRuntimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a PersonalizeRuntimeClientPrivate object with public implementation \a q.
 */
PersonalizeRuntimeClientPrivate::PersonalizeRuntimeClientPrivate(PersonalizeRuntimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace PersonalizeRuntime
} // namespace QtAws
