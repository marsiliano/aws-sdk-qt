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

#include "detectkeyphrasesrequest.h"
#include "detectkeyphrasesrequest_p.h"
#include "detectkeyphrasesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectKeyPhrasesRequest
 *
 * \brief The DetectKeyPhrasesRequest class provides an interface for Comprehend DetectKeyPhrases requests.
 *
 * \ingroup Comprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectKeyPhrases
 */

/*!
 * @brief  Constructs a new DetectKeyPhrasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetectKeyPhrasesRequest::DetectKeyPhrasesRequest(const DetectKeyPhrasesRequest &other)
    : ComprehendRequest(new DetectKeyPhrasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DetectKeyPhrasesRequest object.
 */
DetectKeyPhrasesRequest::DetectKeyPhrasesRequest()
    : ComprehendRequest(new DetectKeyPhrasesRequestPrivate(ComprehendRequest::DetectKeyPhrasesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectKeyPhrasesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DetectKeyPhrasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetectKeyPhrasesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectKeyPhrasesRequest::response(QNetworkReply * const reply) const
{
    return new DetectKeyPhrasesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DetectKeyPhrasesRequestPrivate
 *
 * @brief  Private implementation for DetectKeyPhrasesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetectKeyPhrasesRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public DetectKeyPhrasesRequest instance.
 */
DetectKeyPhrasesRequestPrivate::DetectKeyPhrasesRequestPrivate(
    const ComprehendRequest::Action action, DetectKeyPhrasesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DetectKeyPhrasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetectKeyPhrasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetectKeyPhrasesRequest instance.
 */
DetectKeyPhrasesRequestPrivate::DetectKeyPhrasesRequestPrivate(
    const DetectKeyPhrasesRequestPrivate &other, DetectKeyPhrasesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
