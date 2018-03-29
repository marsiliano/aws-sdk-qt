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

#include "rdsclientrequest.h"
#include "rdsclientrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  RdsClientRequest
 *
 * @brief  Interface class for providing RDS requests
 */


/**
 * @brief  Constructs a new RdsClientRequest object.
 *
 * @param  action  The RDS action to request.
 */
RdsClientRequest::RdsClientRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RdsClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new RdsClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RdsClientRequest::RdsClientRequest(const RdsClientRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RdsClientRequestPrivate(*other.d_func(), this))
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
RdsClientRequest& RdsClientRequest::operator=(const RdsClientRequest &other)
{
    Q_D(RdsClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new RdsClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RdsClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
RdsClientRequest::RdsClientRequest(RdsClientRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the RDS action to be performed by this request.
 *
 * @return The RDS action to be performed by this request.
 */
RdsClientRequest::Action RdsClientRequest::action() const
{
    Q_D(const RdsClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the RDS action to be performed by this request.
 *
 * @return The name of the RDS action to be performed by this request.
 */
QString RdsClientRequest::actionString() const
{
    return RdsClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the RDS API version implemented by this request.
 *
 * @return The RDS API version implmented by this request.
 */
QString RdsClientRequest::apiVersion() const
{
    Q_D(const RdsClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the RDS action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void RdsClientRequest::setAction(const Action action)
{
    Q_D(RdsClientRequest);
    d->action = action;
}

/**
 * @brief  Set the RDS API version to include in this request.
 *
 * @param  version  The RDS API version to include in this request.
 */
void RdsClientRequest::setApiVersion(const QString &version)
{
    Q_D(RdsClientRequest);
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
bool RdsClientRequest::operator==(const RdsClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid RDS queue name.
 *
 * @par From RDS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RDS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool RdsClientRequest::isValidQueueName(const QString &queueName)
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
int RdsClientRequest::clearParameter(const QString &name)
{
    Q_D(RdsClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void RdsClientRequest::clearParameters()
{
    Q_D(RdsClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this RDS request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant RdsClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RdsClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this RDS request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &RdsClientRequest::parameters() const
{
    Q_D(const RdsClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this RDS request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void RdsClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RdsClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this RDS request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void RdsClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RdsClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this RDS request.
 *
 * This RDS implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this RDS request using the given \a endpoint.
 */
QNetworkRequest RdsClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const RdsClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  RdsClientRequestPrivate
 *
 * @brief  Private implementation for RdsClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RdsClientRequestPrivate object.
 *
 * @param  action  RDS action being performed by the \a q request.
 * @param  q       Pointer to this object's public RdsClientRequest instance.
 */
RdsClientRequestPrivate::RdsClientRequestPrivate(const RdsClientRequest::Action action, RdsClientRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RdsClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RdsClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RdsClientRequest instance.
 */
RdsClientRequestPrivate::RdsClientRequestPrivate(const RdsClientRequestPrivate &other,
                                     RdsClientRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and RDS action to a string.
 *
 * This function converts RdsClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RDS service's Action
 * query parameters.
 *
 * @param  action  RDS action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString RdsClientRequestPrivate::toString(const RdsClientRequest::Action &action)
{
    #define ActionToString(action) \
        case RdsClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RDS
} // namespace QtAws
