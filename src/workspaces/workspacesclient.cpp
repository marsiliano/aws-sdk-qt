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

#include "workspacesclient.h"
#include "workspacesclient_p.h"

#include "core/awssignaturev4.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "createworkspacesrequest.h"
#include "createworkspacesresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describeworkspacebundlesrequest.h"
#include "describeworkspacebundlesresponse.h"
#include "describeworkspacedirectoriesrequest.h"
#include "describeworkspacedirectoriesresponse.h"
#include "describeworkspacesrequest.h"
#include "describeworkspacesresponse.h"
#include "describeworkspacesconnectionstatusrequest.h"
#include "describeworkspacesconnectionstatusresponse.h"
#include "modifyworkspacepropertiesrequest.h"
#include "modifyworkspacepropertiesresponse.h"
#include "rebootworkspacesrequest.h"
#include "rebootworkspacesresponse.h"
#include "rebuildworkspacesrequest.h"
#include "rebuildworkspacesresponse.h"
#include "startworkspacesrequest.h"
#include "startworkspacesresponse.h"
#include "stopworkspacesrequest.h"
#include "stopworkspacesresponse.h"
#include "terminateworkspacesrequest.h"
#include "terminateworkspacesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkSpaces
 * \brief The QtAws::WorkSpaces contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::WorkSpacesClient
 *
 * \brief The WorkSpacesClient class provides access to the Amazon WorkSpaces service.
 *
 * \ingroup WorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows desktops for your
 */

/*!
 * \brief Constructs a WorkSpacesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkSpacesClient::WorkSpacesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesClientPrivate(this), parent)
{
    Q_D(WorkSpacesClient);
    d->apiVersion = QStringLiteral("2015-04-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("workspaces");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces");
    d->serviceName = QStringLiteral("workspaces");
}

/*!
 * \overload WorkSpacesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
WorkSpacesClient::WorkSpacesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesClientPrivate(this), parent)
{
    Q_D(WorkSpacesClient);
    d->apiVersion = QStringLiteral("2015-04-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("workspaces");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces");
    d->serviceName = QStringLiteral("workspaces");
}

/*!
 * Creates tags for the specified
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTagsResponse * WorkSpacesClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Creates one or more
 *
 * WorkSpaces>
 *
 * This operation is asynchronous and returns before the WorkSpaces are
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateWorkspacesResponse * WorkSpacesClient::createWorkspaces(const CreateWorkspacesRequest &request)
{
    return qobject_cast<CreateWorkspacesResponse *>(send(request));
}

/*!
 * Deletes the specified tags from a
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagsResponse * WorkSpacesClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Describes the tags for the specified
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * WorkSpacesClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Describes the available WorkSpace
 *
 * bundles>
 *
 * You can filter the results using either bundle ID or owner, but not
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeWorkspaceBundlesResponse * WorkSpacesClient::describeWorkspaceBundles(const DescribeWorkspaceBundlesRequest &request)
{
    return qobject_cast<DescribeWorkspaceBundlesResponse *>(send(request));
}

/*!
 * Describes the available AWS Directory Service directories that are registered with Amazon
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeWorkspaceDirectoriesResponse * WorkSpacesClient::describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request)
{
    return qobject_cast<DescribeWorkspaceDirectoriesResponse *>(send(request));
}

/*!
 * Describes the specified
 *
 * WorkSpaces>
 *
 * You can filter the results using bundle ID, directory ID, or owner, but you can specify only one filter at a
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeWorkspacesResponse * WorkSpacesClient::describeWorkspaces(const DescribeWorkspacesRequest &request)
{
    return qobject_cast<DescribeWorkspacesResponse *>(send(request));
}

/*!
 * Describes the connection status of the specified
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeWorkspacesConnectionStatusResponse * WorkSpacesClient::describeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest &request)
{
    return qobject_cast<DescribeWorkspacesConnectionStatusResponse *>(send(request));
}

/*!
 * Modifies the specified WorkSpace
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyWorkspacePropertiesResponse * WorkSpacesClient::modifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest &request)
{
    return qobject_cast<ModifyWorkspacePropertiesResponse *>(send(request));
}

/*!
 * Reboots the specified
 *
 * WorkSpaces>
 *
 * You cannot reboot a WorkSpace unless its state is <code>AVAILABLE</code>, <code>IMPAIRED</code>, or
 *
 * <code>INOPERABLE</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootWorkspacesResponse * WorkSpacesClient::rebootWorkspaces(const RebootWorkspacesRequest &request)
{
    return qobject_cast<RebootWorkspacesResponse *>(send(request));
}

/*!
 * Rebuilds the specified
 *
 * WorkSpaces>
 *
 * You cannot rebuild a WorkSpace unless its state is <code>AVAILABLE</code> or
 *
 * <code>ERROR</code>>
 *
 * Rebuilding a WorkSpace is a potentially destructive action that can result in the loss of data. For more information,
 * see <a href="http://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild a
 *
 * WorkSpace</a>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebuildWorkspacesResponse * WorkSpacesClient::rebuildWorkspaces(const RebuildWorkspacesRequest &request)
{
    return qobject_cast<RebuildWorkspacesResponse *>(send(request));
}

/*!
 * Starts the specified
 *
 * WorkSpaces>
 *
 * You cannot start a WorkSpace unless it has a running mode of <code>AutoStop</code> and a state of
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartWorkspacesResponse * WorkSpacesClient::startWorkspaces(const StartWorkspacesRequest &request)
{
    return qobject_cast<StartWorkspacesResponse *>(send(request));
}

/*!
 * Stops the specified
 *
 * WorkSpaces>
 *
 * You cannot stop a WorkSpace unless it has a running mode of <code>AutoStop</code> and a state of <code>AVAILABLE</code>,
 * <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopWorkspacesResponse * WorkSpacesClient::stopWorkspaces(const StopWorkspacesRequest &request)
{
    return qobject_cast<StopWorkspacesResponse *>(send(request));
}

/*!
 * Terminates the specified
 *
 * WorkSpaces>
 *
 * Terminating a WorkSpace is a permanent action and cannot be undone. The user's data is destroyed. If you need to archive
 * any user data, contact Amazon Web Services before terminating the
 *
 * WorkSpace>
 *
 * You can terminate a WorkSpace that is in any state except
 *
 * <code>SUSPENDED</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely
 *
 * @param  request Request to send to Amazon WorkSpaces.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TerminateWorkspacesResponse * WorkSpacesClient::terminateWorkspaces(const TerminateWorkspacesRequest &request)
{
    return qobject_cast<TerminateWorkspacesResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  WorkSpacesClientPrivate
 *
 * @brief  Private implementation for WorkSpacesClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new WorkSpacesClientPrivate object.
 *
 * @param  q  Pointer to this object's public WorkSpacesClient instance.
 */
WorkSpacesClientPrivate::WorkSpacesClientPrivate(WorkSpacesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkSpaces
} // namespace QtAws
