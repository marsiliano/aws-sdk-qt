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

#include "stoptransformjobrequest.h"
#include "stoptransformjobrequest_p.h"
#include "stoptransformjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTransformJobRequest
 * \brief The StopTransformJobRequest class provides an interface for SageMaker StopTransformJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::stopTransformJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopTransformJobRequest::StopTransformJobRequest(const StopTransformJobRequest &other)
    : SageMakerRequest(new StopTransformJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTransformJobRequest object.
 */
StopTransformJobRequest::StopTransformJobRequest()
    : SageMakerRequest(new StopTransformJobRequestPrivate(SageMakerRequest::StopTransformJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTransformJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTransformJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTransformJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTransformJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopTransformJobRequestPrivate
 * \brief The StopTransformJobRequestPrivate class provides private implementation for StopTransformJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTransformJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopTransformJobRequestPrivate::StopTransformJobRequestPrivate(
    const SageMakerRequest::Action action, StopTransformJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTransformJobRequest
 * class' copy constructor.
 */
StopTransformJobRequestPrivate::StopTransformJobRequestPrivate(
    const StopTransformJobRequestPrivate &other, StopTransformJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws