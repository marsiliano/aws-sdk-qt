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

#include "updateskillgrouprequest.h"
#include "updateskillgrouprequest_p.h"
#include "updateskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateSkillGroupRequest
 * \brief The UpdateSkillGroupRequest class provides an interface for AlexaForBusiness UpdateSkillGroup requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::updateSkillGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSkillGroupRequest::UpdateSkillGroupRequest(const UpdateSkillGroupRequest &other)
    : AlexaForBusinessRequest(new UpdateSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSkillGroupRequest object.
 */
UpdateSkillGroupRequest::UpdateSkillGroupRequest()
    : AlexaForBusinessRequest(new UpdateSkillGroupRequestPrivate(AlexaForBusinessRequest::UpdateSkillGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSkillGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSkillGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSkillGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateSkillGroupRequestPrivate
 * \brief The UpdateSkillGroupRequestPrivate class provides private implementation for UpdateSkillGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateSkillGroupRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateSkillGroupRequestPrivate::UpdateSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSkillGroupRequest
 * class' copy constructor.
 */
UpdateSkillGroupRequestPrivate::UpdateSkillGroupRequestPrivate(
    const UpdateSkillGroupRequestPrivate &other, UpdateSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
