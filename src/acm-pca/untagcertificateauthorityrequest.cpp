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

#include "untagcertificateauthorityrequest.h"
#include "untagcertificateauthorityrequest_p.h"
#include "untagcertificateauthorityresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::UntagCertificateAuthorityRequest
 * \brief The UntagCertificateAuthorityRequest class provides an interface for ACMPCA UntagCertificateAuthority requests.
 *
 * \inmodule QtAwsACMPCA
 *
 *  You can use the ACM PCA API to create a private certificate authority (CA). You must first call the
 *  <a>CreateCertificateAuthority</a> function. If successful, the function returns an Amazon Resource Name (ARN) for your
 *  private CA. Use this ARN as input to the <a>GetCertificateAuthorityCsr</a> function to retrieve the certificate signing
 *  request (CSR) for your private CA certificate. Sign the CSR using the root or an intermediate CA in your on-premises PKI
 *  hierarchy, and call the <a>ImportCertificateAuthorityCertificate</a> to import your signed private CA certificate into
 *  ACM PCA.
 * 
 *  </p
 * 
 *  Use your private CA to issue and revoke certificates. These are private certificates that identify and secure client
 *  computers, servers, applications, services, devices, and users over SSLS/TLS connections within your organization. Call
 *  the <a>IssueCertificate</a> function to issue a certificate. Call the <a>RevokeCertificate</a> function to revoke a
 *  certificate.
 * 
 *  </p <note>
 * 
 *  Certificates issued by your private CA can be trusted only within your organization, not
 * 
 *  publicly> </note>
 * 
 *  Your private CA can optionally create a certificate revocation list (CRL) to track the certificates you revoke. To
 *  create a CRL, you must specify a <a>RevocationConfiguration</a> object when you call the
 *  <a>CreateCertificateAuthority</a> function. ACM PCA writes the CRL to an S3 bucket that you specify. You must specify a
 *  bucket policy that grants ACM PCA write permission.
 * 
 *  </p
 * 
 *  You can also call the <a>CreateCertificateAuthorityAuditReport</a> to create an optional audit report that lists every
 *  time the CA private key is used. The private key is used for signing when the <b>IssueCertificate</b> or
 *  <b>RevokeCertificate</b> function is called.
 *
 * \sa ACMPCAClient::untagCertificateAuthority
 */

/*!
 * Constructs a copy of \a other.
 */
UntagCertificateAuthorityRequest::UntagCertificateAuthorityRequest(const UntagCertificateAuthorityRequest &other)
    : ACMPCARequest(new UntagCertificateAuthorityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagCertificateAuthorityRequest object.
 */
UntagCertificateAuthorityRequest::UntagCertificateAuthorityRequest()
    : ACMPCARequest(new UntagCertificateAuthorityRequestPrivate(ACMPCARequest::UntagCertificateAuthorityAction, this))
{

}

/*!
 * \reimp
 */
bool UntagCertificateAuthorityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagCertificateAuthorityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagCertificateAuthorityRequest::response(QNetworkReply * const reply) const
{
    return new UntagCertificateAuthorityResponse(*this, reply);
}

/*!
 * \class QtAws::ACMPCA::UntagCertificateAuthorityRequestPrivate
 * \brief The UntagCertificateAuthorityRequestPrivate class provides private implementation for UntagCertificateAuthorityRequest.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a UntagCertificateAuthorityRequestPrivate object for ACMPCA \a action,
 * with public implementation \a q.
 */
UntagCertificateAuthorityRequestPrivate::UntagCertificateAuthorityRequestPrivate(
    const ACMPCARequest::Action action, UntagCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagCertificateAuthorityRequest
 * class' copy constructor.
 */
UntagCertificateAuthorityRequestPrivate::UntagCertificateAuthorityRequestPrivate(
    const UntagCertificateAuthorityRequestPrivate &other, UntagCertificateAuthorityRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
