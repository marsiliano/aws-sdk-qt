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

#include "getcloudformationtemplaterequest.h"
#include "getcloudformationtemplaterequest_p.h"
#include "getcloudformationtemplateresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::GetCloudFormationTemplateRequest
 * \brief The GetCloudFormationTemplateRequest class provides an interface for ServerlessApplicationRepository GetCloudFormationTemplate requests.
 *
 * \inmodule QtAwsServerlessApplicationRepository
 *
 *  The AWS Serverless Application Repository makes it easy for developers and enterprises to quickly find and deploy
 *  serverless applications in the AWS Cloud. For more information about serverless applications, see Serverless Computing
 *  and Applications on the AWS website.</p><p>The AWS Serverless Application Repository is deeply integrated with the AWS
 *  Lambda console, so that developers of all levels can get started with serverless computing without needing to learn
 *  anything new. You can use category keywords to browse for applications such as web and mobile backends, data processing
 *  applications, or chatbots. You can also search for applications by name, publisher, or event source. To use an
 *  application, you simply choose it, configure any required fields, and deploy it with a few clicks. </p><p>You can also
 *  easily publish applications, sharing them publicly with the community at large, or privately within your team or across
 *  your organization. To publish a serverless application (or app), you can use the AWS Management Console, AWS Command
 *  Line Interface (AWS CLI), or AWS SDKs to upload the code. Along with the code, you upload a simple manifest file, also
 *  known as the AWS Serverless Application Model (AWS SAM) template. For more information about AWS SAM, see AWS Serverless
 *  Application Model (AWS SAM) on the AWS Labs GitHub repository.</p><p>The AWS Serverless Application Repository Developer
 *  Guide contains more information about the two developer experiences available:</p><ul> <li>
 * 
 *  Consuming Applications – Browse for applications and view information about them, including source code and readme
 *  files. Also install, configure, and deploy applications of your choosing.
 * 
 *  </p
 * 
 *  Publishing Applications – Configure and upload applications to make them available to other developers, and publish new
 *  versions of applications.
 *
 * \sa ServerlessApplicationRepositoryClient::getCloudFormationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetCloudFormationTemplateRequest::GetCloudFormationTemplateRequest(const GetCloudFormationTemplateRequest &other)
    : ServerlessApplicationRepositoryRequest(new GetCloudFormationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCloudFormationTemplateRequest object.
 */
GetCloudFormationTemplateRequest::GetCloudFormationTemplateRequest()
    : ServerlessApplicationRepositoryRequest(new GetCloudFormationTemplateRequestPrivate(ServerlessApplicationRepositoryRequest::GetCloudFormationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetCloudFormationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCloudFormationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCloudFormationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetCloudFormationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServerlessApplicationRepository::GetCloudFormationTemplateRequestPrivate
 * \brief The GetCloudFormationTemplateRequestPrivate class provides private implementation for GetCloudFormationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a GetCloudFormationTemplateRequestPrivate object for ServerlessApplicationRepository \a action,
 * with public implementation \a q.
 */
GetCloudFormationTemplateRequestPrivate::GetCloudFormationTemplateRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, GetCloudFormationTemplateRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCloudFormationTemplateRequest
 * class' copy constructor.
 */
GetCloudFormationTemplateRequestPrivate::GetCloudFormationTemplateRequestPrivate(
    const GetCloudFormationTemplateRequestPrivate &other, GetCloudFormationTemplateRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
