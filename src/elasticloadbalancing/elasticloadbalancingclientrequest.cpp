/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "elasticloadbalancingclientrequest.h"
#include "elasticloadbalancingclientrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ElasticLoadBalancingClientRequest
 *
 * @brief  Interface class for providing ElasticLoadBalancing requests
 */


/**
 * @brief  Constructs a new ElasticLoadBalancingClientRequest object.
 *
 * @param  action  The ElasticLoadBalancing action to request.
 */
ElasticLoadBalancingClientRequest::ElasticLoadBalancingClientRequest(const Action action)
    : AwsAbstractRequest(new ElasticLoadBalancingClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ElasticLoadBalancingClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ElasticLoadBalancingClientRequest::ElasticLoadBalancingClientRequest(const ElasticLoadBalancingClientRequest &other)
    : AwsAbstractRequest(new ElasticLoadBalancingClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
ElasticLoadBalancingClientRequest& ElasticLoadBalancingClientRequest::operator=(const ElasticLoadBalancingClientRequest &other)
{
    Q_D(ElasticLoadBalancingClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ElasticLoadBalancingClientRequest::ElasticLoadBalancingClientRequest(ElasticLoadBalancingClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ElasticLoadBalancing action to be performed by this request.
 *
 * @return The ElasticLoadBalancing action to be performed by this request.
 */
ElasticLoadBalancingClientRequest::Action ElasticLoadBalancingClientRequest::action() const
{
    Q_D(const ElasticLoadBalancingClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the ElasticLoadBalancing action to be performed by this request.
 *
 * @return The name of the ElasticLoadBalancing action to be performed by this request.
 */
QString ElasticLoadBalancingClientRequest::actionString() const
{
    return ElasticLoadBalancingClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the ElasticLoadBalancing API version implemented by this request.
 *
 * @return The ElasticLoadBalancing API version implmented by this request.
 */
QString ElasticLoadBalancingClientRequest::apiVersion() const
{
    Q_D(const ElasticLoadBalancingClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ElasticLoadBalancing action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ElasticLoadBalancingClientRequest::setAction(const Action action)
{
    Q_D(ElasticLoadBalancingClientRequest);
    d->action = action;
}

/**
 * @brief  Set the ElasticLoadBalancing API version to include in this request.
 *
 * @param  version  The ElasticLoadBalancing API version to include in this request.
 */
void ElasticLoadBalancingClientRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticLoadBalancingClientRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool ElasticLoadBalancingClientRequest::operator==(const ElasticLoadBalancingClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ElasticLoadBalancing queue name.
 *
 * @par From ElasticLoadBalancing FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticLoadBalancing queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ElasticLoadBalancingClientRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int ElasticLoadBalancingClientRequest::clearParameter(const QString &name)
{
    Q_D(ElasticLoadBalancingClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ElasticLoadBalancingClientRequest::clearParameters()
{
    Q_D(ElasticLoadBalancingClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ElasticLoadBalancing request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ElasticLoadBalancingClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticLoadBalancingClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ElasticLoadBalancing request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ElasticLoadBalancingClientRequest::parameters() const
{
    Q_D(const ElasticLoadBalancingClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ElasticLoadBalancing request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ElasticLoadBalancingClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticLoadBalancingClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ElasticLoadBalancing request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ElasticLoadBalancingClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticLoadBalancingClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ElasticLoadBalancing request.
 *
 * This ElasticLoadBalancing implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ElasticLoadBalancing request using the given \a endpoint.
 */
QNetworkRequest ElasticLoadBalancingClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElasticLoadBalancingClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingClientRequestPrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingClientRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed by the \a q request.
 * @param  q       Pointer to this object's public ElasticLoadBalancingClientRequest instance.
 */
ElasticLoadBalancingClientRequestPrivate::ElasticLoadBalancingClientRequestPrivate(const ElasticLoadBalancingClientRequest::Action action, ElasticLoadBalancingClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticLoadBalancingClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ElasticLoadBalancingClientRequest instance.
 */
ElasticLoadBalancingClientRequestPrivate::ElasticLoadBalancingClientRequestPrivate(const ElasticLoadBalancingClientRequestPrivate &other,
                                     ElasticLoadBalancingClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ElasticLoadBalancing action to a string.
 *
 * This function converts ElasticLoadBalancingClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticLoadBalancing service's Action
 * query parameters.
 *
 * @param  action  ElasticLoadBalancing action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ElasticLoadBalancingClientRequestPrivate::toString(const ElasticLoadBalancingClientRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticLoadBalancingClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticLoadBalancing
} // namespace AWS
