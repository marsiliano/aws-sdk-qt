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

#include "createsamplefindingsrequest.h"
#include "createsamplefindingsrequest_p.h"
#include "createsamplefindingsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateSampleFindingsRequest
 *
 * \brief The CreateSampleFindingsRequest class provides an interface for GuardDuty CreateSampleFindings requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::createSampleFindings
 */

/*!
 * @brief  Constructs a new CreateSampleFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSampleFindingsRequest::CreateSampleFindingsRequest(const CreateSampleFindingsRequest &other)
    : GuardDutyRequest(new CreateSampleFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateSampleFindingsRequest object.
 */
CreateSampleFindingsRequest::CreateSampleFindingsRequest()
    : GuardDutyRequest(new CreateSampleFindingsRequestPrivate(GuardDutyRequest::CreateSampleFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSampleFindingsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateSampleFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSampleFindingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSampleFindingsRequest::response(QNetworkReply * const reply) const
{
    return new CreateSampleFindingsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateSampleFindingsRequestPrivate
 *
 * @brief  Private implementation for CreateSampleFindingsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSampleFindingsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public CreateSampleFindingsRequest instance.
 */
CreateSampleFindingsRequestPrivate::CreateSampleFindingsRequestPrivate(
    const GuardDutyRequest::Action action, CreateSampleFindingsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSampleFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSampleFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSampleFindingsRequest instance.
 */
CreateSampleFindingsRequestPrivate::CreateSampleFindingsRequestPrivate(
    const CreateSampleFindingsRequestPrivate &other, CreateSampleFindingsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
