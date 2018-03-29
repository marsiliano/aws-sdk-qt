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

#ifndef QTAWS_MEDIALIVECLIENT_H
#define QTAWS_MEDIALIVECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace MediaLive {

class MediaLiveClientPrivate;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateInputRequest;
class CreateInputResponse;
class CreateInputSecurityGroupRequest;
class CreateInputSecurityGroupResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteInputRequest;
class DeleteInputResponse;
class DeleteInputSecurityGroupRequest;
class DeleteInputSecurityGroupResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeInputRequest;
class DescribeInputResponse;
class DescribeInputSecurityGroupRequest;
class DescribeInputSecurityGroupResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListInputSecurityGroupsRequest;
class ListInputSecurityGroupsResponse;
class ListInputsRequest;
class ListInputsResponse;
class StartChannelRequest;
class StartChannelResponse;
class StopChannelRequest;
class StopChannelResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateInputRequest;
class UpdateInputResponse;
class UpdateInputSecurityGroupRequest;
class UpdateInputSecurityGroupResponse;

class QTAWS_EXPORT MediaLiveClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaLiveClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaLiveClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateInputResponse * createInput(const CreateInputRequest &request);
    CreateInputSecurityGroupResponse * createInputSecurityGroup(const CreateInputSecurityGroupRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteInputResponse * deleteInput(const DeleteInputRequest &request);
    DeleteInputSecurityGroupResponse * deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeInputResponse * describeInput(const DescribeInputRequest &request);
    DescribeInputSecurityGroupResponse * describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListInputSecurityGroupsResponse * listInputSecurityGroups(const ListInputSecurityGroupsRequest &request);
    ListInputsResponse * listInputs(const ListInputsRequest &request);
    StartChannelResponse * startChannel(const StartChannelRequest &request);
    StopChannelResponse * stopChannel(const StopChannelRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateInputResponse * updateInput(const UpdateInputRequest &request);
    UpdateInputSecurityGroupResponse * updateInputSecurityGroup(const UpdateInputSecurityGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaLiveClient)
    Q_DISABLE_COPY(MediaLiveClient)

};

} // namespace MediaLive
} // namespace QtAws

#endif
