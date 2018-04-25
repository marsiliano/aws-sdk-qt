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

#include "comprehendclient.h"
#include "comprehendclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdetectdominantlanguagerequest.h"
#include "batchdetectdominantlanguageresponse.h"
#include "batchdetectentitiesrequest.h"
#include "batchdetectentitiesresponse.h"
#include "batchdetectkeyphrasesrequest.h"
#include "batchdetectkeyphrasesresponse.h"
#include "batchdetectsentimentrequest.h"
#include "batchdetectsentimentresponse.h"
#include "describetopicsdetectionjobrequest.h"
#include "describetopicsdetectionjobresponse.h"
#include "detectdominantlanguagerequest.h"
#include "detectdominantlanguageresponse.h"
#include "detectentitiesrequest.h"
#include "detectentitiesresponse.h"
#include "detectkeyphrasesrequest.h"
#include "detectkeyphrasesresponse.h"
#include "detectsentimentrequest.h"
#include "detectsentimentresponse.h"
#include "listtopicsdetectionjobsrequest.h"
#include "listtopicsdetectionjobsresponse.h"
#include "starttopicsdetectionjobrequest.h"
#include "starttopicsdetectionjobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Comprehend
 * \brief The QtAws::Comprehend contains stuff...
 *
 * \inmodule QtAwsComprehend
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ComprehendClient
 * \brief The ComprehendClient class provides access to the Amazon Comprehend service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 */

/*!
 * \brief Constructs a ComprehendClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ComprehendClient::ComprehendClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendClientPrivate(this), parent)
{
    Q_D(ComprehendClient);
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("comprehend");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Comprehend");
    d->serviceName = QStringLiteral("comprehend");
}

/*!
 * \overload ComprehendClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ComprehendClient::ComprehendClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendClientPrivate(this), parent)
{
    Q_D(ComprehendClient);
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("comprehend");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Comprehend");
    d->serviceName = QStringLiteral("comprehend");
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectDominantLanguageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Determines the dominant language of the input text for a batch of documents. For a list of languages that Amazon
 * Comprehend can detect, see <a href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon
 * Comprehend Supported Languages</a>.
 */
BatchDetectDominantLanguageResponse * ComprehendClient::batchDetectDominantLanguage(const BatchDetectDominantLanguageRequest &request)
{
    return qobject_cast<BatchDetectDominantLanguageResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the text of a batch of documents and returns information about them. For more information about entities, see
 * <a>how-entities</a>
 */
BatchDetectEntitiesResponse * ComprehendClient::batchDetectEntities(const BatchDetectEntitiesRequest &request)
{
    return qobject_cast<BatchDetectEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectKeyPhrasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects the key noun phrases found in a batch of
 */
BatchDetectKeyPhrasesResponse * ComprehendClient::batchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest &request)
{
    return qobject_cast<BatchDetectKeyPhrasesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * BatchDetectSentimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects a batch of documents and returns an inference of the prevailing sentiment, <code>POSITIVE</code>,
 * <code>NEUTRAL</code>, <code>MIXED</code>, or <code>NEGATIVE</code>, in each
 */
BatchDetectSentimentResponse * ComprehendClient::batchDetectSentiment(const BatchDetectSentimentRequest &request)
{
    return qobject_cast<BatchDetectSentimentResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DescribeTopicsDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the properties associated with a topic detection job. Use this operation to get the status of a detection
 */
DescribeTopicsDetectionJobResponse * ComprehendClient::describeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest &request)
{
    return qobject_cast<DescribeTopicsDetectionJobResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectDominantLanguageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Determines the dominant language of the input text. For a list of languages that Amazon Comprehend can detect, see <a
 * href="http://docs.aws.amazon.com/comprehend/latest/dg/how-languages.html">Amazon Comprehend Supported Languages</a>.
 */
DetectDominantLanguageResponse * ComprehendClient::detectDominantLanguage(const DetectDominantLanguageRequest &request)
{
    return qobject_cast<DetectDominantLanguageResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects text for entities, and returns information about them. For more information, about entities, see
 * <a>how-entities</a>.
 */
DetectEntitiesResponse * ComprehendClient::detectEntities(const DetectEntitiesRequest &request)
{
    return qobject_cast<DetectEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectKeyPhrasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects the key noun phrases found in the text.
 */
DetectKeyPhrasesResponse * ComprehendClient::detectKeyPhrases(const DetectKeyPhrasesRequest &request)
{
    return qobject_cast<DetectKeyPhrasesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * DetectSentimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects text and returns an inference of the prevailing sentiment (<code>POSITIVE</code>, <code>NEUTRAL</code>,
 * <code>MIXED</code>, or <code>NEGATIVE</code>).
 */
DetectSentimentResponse * ComprehendClient::detectSentiment(const DetectSentimentRequest &request)
{
    return qobject_cast<DetectSentimentResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * ListTopicsDetectionJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the topic detection jobs that you have
 */
ListTopicsDetectionJobsResponse * ComprehendClient::listTopicsDetectionJobs(const ListTopicsDetectionJobsRequest &request)
{
    return qobject_cast<ListTopicsDetectionJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendClient service, and returns a pointer to an
 * StartTopicsDetectionJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an asynchronous topic detection job. Use the <code>DescribeTopicDetectionJob</code> operation to track the status
 * of a
 */
StartTopicsDetectionJobResponse * ComprehendClient::startTopicsDetectionJob(const StartTopicsDetectionJobRequest &request)
{
    return qobject_cast<StartTopicsDetectionJobResponse *>(send(request));
}

/*!
 * \class QtAws::Comprehend::ComprehendClientPrivate
 * \brief The ComprehendClientPrivate class provides private implementation for ComprehendClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendClientPrivate object with public implementation \a q.
 */
ComprehendClientPrivate::ComprehendClientPrivate(ComprehendClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Comprehend
} // namespace QtAws
