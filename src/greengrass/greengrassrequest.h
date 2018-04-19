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

#ifndef QTAWS_GREENGRASSREQUEST_H
#define QTAWS_GREENGRASSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Greengrass {

class GreengrassRequestPrivate;

class QTAWS_EXPORT GreengrassRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Greengrass.
    enum Action {
        AssociateRoleToGroupAction,
        AssociateServiceRoleToAccountAction,
        CreateCoreDefinitionAction,
        CreateCoreDefinitionVersionAction,
        CreateDeploymentAction,
        CreateDeviceDefinitionAction,
        CreateDeviceDefinitionVersionAction,
        CreateFunctionDefinitionAction,
        CreateFunctionDefinitionVersionAction,
        CreateGroupAction,
        CreateGroupCertificateAuthorityAction,
        CreateGroupVersionAction,
        CreateLoggerDefinitionAction,
        CreateLoggerDefinitionVersionAction,
        CreateResourceDefinitionAction,
        CreateResourceDefinitionVersionAction,
        CreateSoftwareUpdateJobAction,
        CreateSubscriptionDefinitionAction,
        CreateSubscriptionDefinitionVersionAction,
        DeleteCoreDefinitionAction,
        DeleteDeviceDefinitionAction,
        DeleteFunctionDefinitionAction,
        DeleteGroupAction,
        DeleteLoggerDefinitionAction,
        DeleteResourceDefinitionAction,
        DeleteSubscriptionDefinitionAction,
        DisassociateRoleFromGroupAction,
        DisassociateServiceRoleFromAccountAction,
        GetAssociatedRoleAction,
        GetConnectivityInfoAction,
        GetCoreDefinitionAction,
        GetCoreDefinitionVersionAction,
        GetDeploymentStatusAction,
        GetDeviceDefinitionAction,
        GetDeviceDefinitionVersionAction,
        GetFunctionDefinitionAction,
        GetFunctionDefinitionVersionAction,
        GetGroupAction,
        GetGroupCertificateAuthorityAction,
        GetGroupCertificateConfigurationAction,
        GetGroupVersionAction,
        GetLoggerDefinitionAction,
        GetLoggerDefinitionVersionAction,
        GetResourceDefinitionAction,
        GetResourceDefinitionVersionAction,
        GetServiceRoleForAccountAction,
        GetSubscriptionDefinitionAction,
        GetSubscriptionDefinitionVersionAction,
        ListCoreDefinitionVersionsAction,
        ListCoreDefinitionsAction,
        ListDeploymentsAction,
        ListDeviceDefinitionVersionsAction,
        ListDeviceDefinitionsAction,
        ListFunctionDefinitionVersionsAction,
        ListFunctionDefinitionsAction,
        ListGroupCertificateAuthoritiesAction,
        ListGroupVersionsAction,
        ListGroupsAction,
        ListLoggerDefinitionVersionsAction,
        ListLoggerDefinitionsAction,
        ListResourceDefinitionVersionsAction,
        ListResourceDefinitionsAction,
        ListSubscriptionDefinitionVersionsAction,
        ListSubscriptionDefinitionsAction,
        ResetDeploymentsAction,
        UpdateConnectivityInfoAction,
        UpdateCoreDefinitionAction,
        UpdateDeviceDefinitionAction,
        UpdateFunctionDefinitionAction,
        UpdateGroupAction,
        UpdateGroupCertificateConfigurationAction,
        UpdateLoggerDefinitionAction,
        UpdateResourceDefinitionAction,
        UpdateSubscriptionDefinitionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GreengrassRequest(const Action action);
    GreengrassRequest(const GreengrassRequest &other);
    GreengrassRequest &operator=(const GreengrassRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GreengrassRequest &other) const override;


protected:
    /// @cond internal
    GreengrassRequest(GreengrassRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(GreengrassRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
