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

#include "daxclient.h"
#include "daxclient_p.h"

#include "core/awssignaturev4.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createparametergrouprequest.h"
#include "createparametergroupresponse.h"
#include "createsubnetgrouprequest.h"
#include "createsubnetgroupresponse.h"
#include "decreasereplicationfactorrequest.h"
#include "decreasereplicationfactorresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deleteparametergrouprequest.h"
#include "deleteparametergroupresponse.h"
#include "deletesubnetgrouprequest.h"
#include "deletesubnetgroupresponse.h"
#include "describeclustersrequest.h"
#include "describeclustersresponse.h"
#include "describedefaultparametersrequest.h"
#include "describedefaultparametersresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeparametergroupsrequest.h"
#include "describeparametergroupsresponse.h"
#include "describeparametersrequest.h"
#include "describeparametersresponse.h"
#include "describesubnetgroupsrequest.h"
#include "describesubnetgroupsresponse.h"
#include "increasereplicationfactorrequest.h"
#include "increasereplicationfactorresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "rebootnoderequest.h"
#include "rebootnoderesponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateclusterrequest.h"
#include "updateclusterresponse.h"
#include "updateparametergrouprequest.h"
#include "updateparametergroupresponse.h"
#include "updatesubnetgrouprequest.h"
#include "updatesubnetgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DAX
 * \brief The QtAws::DAX contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DaxClient
 *
 * \brief The DaxClient class provides access to the Amazon DynamoDB Accelerator (DAX) ( DAX) service.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 */

/*!
 * \brief Constructs a DaxClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DaxClient::DaxClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DaxClientPrivate(this), parent)
{
    Q_D(DaxClient);
    d->apiVersion = QStringLiteral("2017-04-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("dax");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon DynamoDB Accelerator (DAX)");
    d->serviceName = QStringLiteral("dax");
}

/*!
 * \overload DaxClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
DaxClient::DaxClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DaxClientPrivate(this), parent)
{
    Q_D(DaxClient);
    d->apiVersion = QStringLiteral("2017-04-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("dax");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon DynamoDB Accelerator (DAX)");
    d->serviceName = QStringLiteral("dax");
}

/*!
 * Creates a DAX cluster. All nodes in the cluster run the same DAX caching
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterResponse * DaxClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Creates a new parameter group. A parameter group is a collection of parameters that you apply to all of the nodes in a
 * DAX
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateParameterGroupResponse * DaxClient::createParameterGroup(const CreateParameterGroupRequest &request)
{
    return qobject_cast<CreateParameterGroupResponse *>(send(request));
}

/*!
 * Creates a new subnet
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSubnetGroupResponse * DaxClient::createSubnetGroup(const CreateSubnetGroupRequest &request)
{
    return qobject_cast<CreateSubnetGroupResponse *>(send(request));
}

/*!
 * Removes one or more nodes from a DAX
 *
 * cluster> <note>
 *
 * You cannot use <code>DecreaseReplicationFactor</code> to remove the last node in a DAX cluster. If you need to do this,
 * use <code>DeleteCluster</code>
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DecreaseReplicationFactorResponse * DaxClient::decreaseReplicationFactor(const DecreaseReplicationFactorRequest &request)
{
    return qobject_cast<DecreaseReplicationFactorResponse *>(send(request));
}

/*!
 * Deletes a previously provisioned DAX cluster. <i>DeleteCluster</i> deletes all associated nodes, node endpoints and the
 * DAX cluster itself. When you receive a successful response from this action, DAX immediately begins deleting the
 * cluster; you cannot cancel or revert this
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterResponse * DaxClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Deletes the specified parameter group. You cannot delete a parameter group if it is associated with any DAX
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteParameterGroupResponse * DaxClient::deleteParameterGroup(const DeleteParameterGroupRequest &request)
{
    return qobject_cast<DeleteParameterGroupResponse *>(send(request));
}

/*!
 * Deletes a subnet
 *
 * group> <note>
 *
 * You cannot delete a subnet group if it is associated with any DAX
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSubnetGroupResponse * DaxClient::deleteSubnetGroup(const DeleteSubnetGroupRequest &request)
{
    return qobject_cast<DeleteSubnetGroupResponse *>(send(request));
}

/*!
 * Returns information about all provisioned DAX clusters if no cluster identifier is specified, or about a specific DAX
 * cluster if a cluster identifier is
 *
 * supplied>
 *
 * If the cluster is in the CREATING state, only cluster level information will be displayed until all of the nodes are
 * successfully
 *
 * provisioned>
 *
 * If the cluster is in the DELETING state, only cluster level information will be
 *
 * displayed>
 *
 * If nodes are currently being added to the DAX cluster, node endpoint information and creation time for the additional
 * nodes will not be displayed until they are completely provisioned. When the DAX cluster state is <i>available</i>, the
 * cluster is ready for
 *
 * use>
 *
 * If nodes are currently being removed from the DAX cluster, no endpoint information for the removed nodes is
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClustersResponse * DaxClient::describeClusters(const DescribeClustersRequest &request)
{
    return qobject_cast<DescribeClustersResponse *>(send(request));
}

/*!
 * Returns the default system parameter information for the DAX caching
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDefaultParametersResponse * DaxClient::describeDefaultParameters(const DescribeDefaultParametersRequest &request)
{
    return qobject_cast<DescribeDefaultParametersResponse *>(send(request));
}

/*!
 * Returns events related to DAX clusters and parameter groups. You can obtain events specific to a particular DAX cluster
 * or parameter group by providing the name as a
 *
 * parameter>
 *
 * By default, only the events occurring within the last hour are returned; however, you can retrieve up to 14 days' worth
 * of events if
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * DaxClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Returns a list of parameter group descriptions. If a parameter group name is specified, the list will contain only the
 * descriptions for that
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeParameterGroupsResponse * DaxClient::describeParameterGroups(const DescribeParameterGroupsRequest &request)
{
    return qobject_cast<DescribeParameterGroupsResponse *>(send(request));
}

/*!
 * Returns the detailed parameter list for a particular parameter
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeParametersResponse * DaxClient::describeParameters(const DescribeParametersRequest &request)
{
    return qobject_cast<DescribeParametersResponse *>(send(request));
}

/*!
 * Returns a list of subnet group descriptions. If a subnet group name is specified, the list will contain only the
 * description of that
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSubnetGroupsResponse * DaxClient::describeSubnetGroups(const DescribeSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeSubnetGroupsResponse *>(send(request));
}

/*!
 * Adds one or more nodes to a DAX
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
IncreaseReplicationFactorResponse * DaxClient::increaseReplicationFactor(const IncreaseReplicationFactorRequest &request)
{
    return qobject_cast<IncreaseReplicationFactorResponse *>(send(request));
}

/*!
 * List all of the tags for a DAX cluster. You can call <code>ListTags</code> up to 10 times per second, per
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsResponse * DaxClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Reboots a single node of a DAX cluster. The reboot action takes place as soon as possible. During the reboot, the node
 * status is set to
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootNodeResponse * DaxClient::rebootNode(const RebootNodeRequest &request)
{
    return qobject_cast<RebootNodeResponse *>(send(request));
}

/*!
 * Associates a set of tags with a DAX resource. You can call <code>TagResource</code> up to 5 times per second, per
 * account.
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * DaxClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Removes the association of tags from a DAX resource. You can call <code>UntagResource</code> up to 5 times per second,
 * per account.
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * DaxClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Modifies the settings for a DAX cluster. You can use this action to change one or more cluster configuration parameters
 * by specifying the parameters and the new
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateClusterResponse * DaxClient::updateCluster(const UpdateClusterRequest &request)
{
    return qobject_cast<UpdateClusterResponse *>(send(request));
}

/*!
 * Modifies the parameters of a parameter group. You can modify up to 20 parameters in a single request by submitting a
 * list parameter name and value
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateParameterGroupResponse * DaxClient::updateParameterGroup(const UpdateParameterGroupRequest &request)
{
    return qobject_cast<UpdateParameterGroupResponse *>(send(request));
}

/*!
 * Modifies an existing subnet
 *
 * @param  request Request to send to Amazon DynamoDB Accelerator (DAX).
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSubnetGroupResponse * DaxClient::updateSubnetGroup(const UpdateSubnetGroupRequest &request)
{
    return qobject_cast<UpdateSubnetGroupResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  DaxClientPrivate
 *
 * @brief  Private implementation for DaxClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DaxClientPrivate object.
 *
 * @param  q  Pointer to this object's public DaxClient instance.
 */
DaxClientPrivate::DaxClientPrivate(DaxClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DAX
} // namespace QtAws
