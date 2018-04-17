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

#include "getcontactrequest.h"
#include "getcontactrequest_p.h"
#include "getcontactresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetContactRequest
 *
 * \brief The GetContactRequest class provides an interface for AlexaForBusiness GetContact requests.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::getContact
 */

/*!
 * @brief  Constructs a new GetContactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetContactRequest::GetContactRequest(const GetContactRequest &other)
    : AlexaForBusinessRequest(new GetContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetContactRequest object.
 */
GetContactRequest::GetContactRequest()
    : AlexaForBusinessRequest(new GetContactRequestPrivate(AlexaForBusinessRequest::GetContactAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetContactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetContactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactRequest::response(QNetworkReply * const reply) const
{
    return new GetContactResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetContactRequestPrivate
 *
 * @brief  Private implementation for GetContactRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetContactRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public GetContactRequest instance.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetContactRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetContactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetContactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetContactRequest instance.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const GetContactRequestPrivate &other, GetContactRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws