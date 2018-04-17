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

#include "getfieldlevelencryptionprofilerequest.h"
#include "getfieldlevelencryptionprofilerequest_p.h"
#include "getfieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileRequest
 *
 * \brief The GetFieldLevelEncryptionProfileRequest class provides an interface for CloudFront GetFieldLevelEncryptionProfile requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfile
 */

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFieldLevelEncryptionProfileRequest::GetFieldLevelEncryptionProfileRequest(const GetFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFieldLevelEncryptionProfileRequest object.
 */
GetFieldLevelEncryptionProfileRequest::GetFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFieldLevelEncryptionProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFieldLevelEncryptionProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionProfileResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFieldLevelEncryptionProfileRequestPrivate
 *
 * @brief  Private implementation for GetFieldLevelEncryptionProfileRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionProfileRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetFieldLevelEncryptionProfileRequest instance.
 */
GetFieldLevelEncryptionProfileRequestPrivate::GetFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFieldLevelEncryptionProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFieldLevelEncryptionProfileRequest instance.
 */
GetFieldLevelEncryptionProfileRequestPrivate::GetFieldLevelEncryptionProfileRequestPrivate(
    const GetFieldLevelEncryptionProfileRequestPrivate &other, GetFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws