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

#include "resourcegroupstaggingapiclient.h"
#include "resourcegroupstaggingapiclient_p.h"

#include "core/awssignaturev4.h"
#include "getresourcesrequest.h"
#include "getresourcesresponse.h"
#include "gettagkeysrequest.h"
#include "gettagkeysresponse.h"
#include "gettagvaluesrequest.h"
#include "gettagvaluesresponse.h"
#include "tagresourcesrequest.h"
#include "tagresourcesresponse.h"
#include "untagresourcesrequest.h"
#include "untagresourcesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ResourceGroupsTaggingAPI
 * \brief The QtAws::ResourceGroupsTaggingAPI contains stuff...
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClient
 * \brief The ResourceGroupsTaggingAPIClient class provides access to the AWS Resource Groups Tagging API service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *  <fullname>Resource Groups Tagging API</fullname>
 * 
 *  This guide describes the API operations for the resource groups
 * 
 *  tagging>
 * 
 *  A tag is a label that you assign to an AWS resource. A tag consists of a key and a value, both of which you define. For
 *  example, if you have two Amazon EC2 instances, you might assign both a tag key of "Stack." But the value of "Stack"
 *  might be "Testing" for one and "Production" for the
 * 
 *  other>
 * 
 *  Tagging can help you organize your resources and enables you to simplify resource management, access management and cost
 *  allocation. For more information about tagging, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/tag-editor.html">Working with Tag Editor</a> and <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/resource-groups.html">Working with Resource Groups</a>.
 *  For more information about permissions you need to use the resource groups tagging APIs, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-resource-groups.html">Obtaining
 *  Permissions for Resource Groups </a> and <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 *  Permissions for Tagging
 * 
 *  </a>>
 * 
 *  You can use the resource groups tagging APIs to complete the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Tag and untag supported resources located in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  Use tag-based filters to search for resources located in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  List all existing tag keys in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  List all existing values for the specified key in the specified region for the AWS
 * 
 *  accoun> </li> </ul>
 * 
 *  Not all resources can have tags. For a lists of resources that you can tag, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported Resources</a> in the
 *  <i>AWS Resource Groups and Tag Editor User
 * 
 *  Guide</i>>
 * 
 *  To make full use of the resource groups tagging APIs, you might need additional IAM permissions, including permission to
 *  access the resources of individual services as well as permission to view and apply tags to those resources. For more
 *  information, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 *  Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 */

/*!
 * \brief Constructs a ResourceGroupsTaggingAPIClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResourceGroupsTaggingAPIClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingAPIClient);
    d->apiVersion = QStringLiteral("2017-01-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("tagging");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resource Groups Tagging API");
    d->serviceName = QStringLiteral("tagging");
}

/*!
 * \overload ResourceGroupsTaggingAPIClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ResourceGroupsTaggingAPIClientPrivate(this), parent)
{
    Q_D(ResourceGroupsTaggingAPIClient);
    d->apiVersion = QStringLiteral("2017-01-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("tagging");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resource Groups Tagging API");
    d->serviceName = QStringLiteral("tagging");
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all the tagged resources that are associated with the specified tags (keys and values) located in the specified
 * region for the AWS account. The tags and the resource types that you specify in the request are known as <i>filters</i>.
 * The response includes all tags that are associated with the requested resources. If no filter is provided, this action
 * returns a paginated resource list with the associated
 */
GetResourcesResponse * ResourceGroupsTaggingAPIClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetTagKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tag keys in the specified region for the AWS
 */
GetTagKeysResponse * ResourceGroupsTaggingAPIClient::getTagKeys(const GetTagKeysRequest &request)
{
    return qobject_cast<GetTagKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * GetTagValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tag values for the specified key in the specified region for the AWS
 */
GetTagValuesResponse * ResourceGroupsTaggingAPIClient::getTagValues(const GetTagValuesRequest &request)
{
    return qobject_cast<GetTagValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * TagResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies one or more tags to the specified resources. Note the
 *
 * following> <ul> <li>
 *
 * Not all resources can have tags. For a list of resources that support tagging, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported Resources</a> in the
 * <i>AWS Resource Groups and Tag Editor User
 *
 * Guide</i>> </li> <li>
 *
 * Each resource can have up to 50 tags. For other limits, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-restrictions">Tag Restrictions</a> in the
 * <i>Amazon EC2 User Guide for Linux
 *
 * Instances</i>> </li> <li>
 *
 * You can only tag resources that are located in the specified region for the AWS
 *
 * account> </li> <li>
 *
 * To add tags to a resource, you need the necessary permissions for the service that the resource belongs to as well as
 * permissions for adding tags. For more information, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 */
TagResourcesResponse * ResourceGroupsTaggingAPIClient::tagResources(const TagResourcesRequest &request)
{
    return qobject_cast<TagResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ResourceGroupsTaggingAPIClient service, and returns a pointer to an
 * UntagResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified resources. When you specify a tag key, the action removes both that key
 * and its associated value. The operation succeeds even if you attempt to remove tags from a resource that were already
 * removed. Note the
 *
 * following> <ul> <li>
 *
 * To remove tags from a resource, you need the necessary permissions for the service that the resource belongs to as well
 * as permissions for removing tags. For more information, see <a
 * href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 * Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 *
 * Guide</i>> </li> <li>
 *
 * You can only tag resources that are located in the specified region for the AWS
 */
UntagResourcesResponse * ResourceGroupsTaggingAPIClient::untagResources(const UntagResourcesRequest &request)
{
    return qobject_cast<UntagResourcesResponse *>(send(request));
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClientPrivate
 * \brief The ResourceGroupsTaggingAPIClientPrivate class provides private implementation for ResourceGroupsTaggingAPIClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a ResourceGroupsTaggingAPIClientPrivate object with public implementation \a q.
 */
ResourceGroupsTaggingAPIClientPrivate::ResourceGroupsTaggingAPIClientPrivate(ResourceGroupsTaggingAPIClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
