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

#include "listactivatedrulesinrulegroupresponse.h"
#include "listactivatedrulesinrulegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListActivatedRulesInRuleGroupResponse
 * \brief The ListActivatedRulesInRuleGroupResponse class provides an interace for WAFRegional ListActivatedRulesInRuleGroup responses.
 *
 * \inmodule QtAwsWAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::listActivatedRulesInRuleGroup
 */

/*!
 * Constructs a ListActivatedRulesInRuleGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ListActivatedRulesInRuleGroupResponse::ListActivatedRulesInRuleGroupResponse(
        const ListActivatedRulesInRuleGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListActivatedRulesInRuleGroupResponsePrivate(this), parent)
{
    setRequest(new ListActivatedRulesInRuleGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActivatedRulesInRuleGroupRequest * ListActivatedRulesInRuleGroupResponse::request() const
{
    Q_D(const ListActivatedRulesInRuleGroupResponse);
    return static_cast<const ListActivatedRulesInRuleGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAFRegional ListActivatedRulesInRuleGroup \a response.
 */
void ListActivatedRulesInRuleGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListActivatedRulesInRuleGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAFRegional::ListActivatedRulesInRuleGroupResponsePrivate
 * \brief The ListActivatedRulesInRuleGroupResponsePrivate class provides private implementation for ListActivatedRulesInRuleGroupResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a ListActivatedRulesInRuleGroupResponsePrivate object with public implementation \a q.
 */
ListActivatedRulesInRuleGroupResponsePrivate::ListActivatedRulesInRuleGroupResponsePrivate(
    ListActivatedRulesInRuleGroupResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/*!
 * Parses a WAFRegional ListActivatedRulesInRuleGroup response element from \a xml.
 */
void ListActivatedRulesInRuleGroupResponsePrivate::parseListActivatedRulesInRuleGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivatedRulesInRuleGroupResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
