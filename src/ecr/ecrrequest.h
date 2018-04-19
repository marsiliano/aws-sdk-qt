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

#ifndef QTAWS_ECRREQUEST_H
#define QTAWS_ECRREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ECR {

class ECRRequestPrivate;

class QTAWS_EXPORT ECRRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ECR.
    enum Action {
        BatchCheckLayerAvailabilityAction,
        BatchDeleteImageAction,
        BatchGetImageAction,
        CompleteLayerUploadAction,
        CreateRepositoryAction,
        DeleteLifecyclePolicyAction,
        DeleteRepositoryAction,
        DeleteRepositoryPolicyAction,
        DescribeImagesAction,
        DescribeRepositoriesAction,
        GetAuthorizationTokenAction,
        GetDownloadUrlForLayerAction,
        GetLifecyclePolicyAction,
        GetLifecyclePolicyPreviewAction,
        GetRepositoryPolicyAction,
        InitiateLayerUploadAction,
        ListImagesAction,
        PutImageAction,
        PutLifecyclePolicyAction,
        SetRepositoryPolicyAction,
        StartLifecyclePolicyPreviewAction,
        UploadLayerPartAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ECRRequest(const Action action);
    ECRRequest(const ECRRequest &other);
    ECRRequest &operator=(const ECRRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ECRRequest &other) const override;


protected:
    /// @cond internal
    ECRRequest(ECRRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(ECRRequest)

};

} // namespace ECR
} // namespace QtAws

#endif
