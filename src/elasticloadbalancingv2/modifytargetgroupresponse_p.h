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

#ifndef QTAWS_MODIFYTARGETGROUPRESPONSE_P_H
#define QTAWS_MODIFYTARGETGROUPRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupResponse;

class QTAWS_EXPORT ModifyTargetGroupResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    ModifyTargetGroupResponsePrivate(ModifyTargetGroupResponse * const q);

    void parseModifyTargetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTargetGroupResponse)
    Q_DISABLE_COPY(ModifyTargetGroupResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
