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

#include "updatedetectorresponse.h"
#include "updatedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::UpdateDetectorResponse
 * \brief The UpdateDetectorResponse class provides an interace for GuardDuty UpdateDetector responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail event logs, and DNS logs. It uses threat intelligence feeds, such as lists of malicious IPs
 *  and domains, and machine learning to identify unexpected and potentially unauthorized and malicious activity within your
 *  AWS environment. This can include issues like escalations of privileges, uses of exposed credentials, or communication
 *  with malicious IPs, URLs, or domains. For example, GuardDuty can detect compromised EC2 instances serving malware or
 *  mining bitcoin. It also monitors AWS account access behavior for signs of compromise, such as unauthorized
 *  infrastructure deployments, like instances deployed in a region that has never been used, or unusual API calls, like a
 *  password policy change to reduce password strength. GuardDuty informs you of the status of your AWS environment by
 *  producing security findings that you can view in the GuardDuty console or through Amazon CloudWatch events. For more
 *  information, see <a href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html"> Amazon GuardDuty User
 *  Guide</a>.
 *
 * \sa GuardDutyClient::updateDetector
 */

/*!
 * Constructs a UpdateDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDetectorResponse::UpdateDetectorResponse(
        const UpdateDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UpdateDetectorResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDetectorRequest * UpdateDetectorResponse::request() const
{
    Q_D(const UpdateDetectorResponse);
    return static_cast<const UpdateDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty UpdateDetector \a response.
 */
void UpdateDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::UpdateDetectorResponsePrivate
 * \brief The UpdateDetectorResponsePrivate class provides private implementation for UpdateDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a UpdateDetectorResponsePrivate object with public implementation \a q.
 */
UpdateDetectorResponsePrivate::UpdateDetectorResponsePrivate(
    UpdateDetectorResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty UpdateDetector response element from \a xml.
 */
void UpdateDetectorResponsePrivate::parseUpdateDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
