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

#include "redshiftclientrequest.h"
#include "redshiftclientrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  RedshiftClientRequest
 *
 * @brief  Interface class for providing Redshift requests
 */


/**
 * @brief  Constructs a new RedshiftClientRequest object.
 *
 * @param  action  The Redshift action to request.
 */
RedshiftClientRequest::RedshiftClientRequest(const Action action)
    : AwsAbstractRequest(new RedshiftClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new RedshiftClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RedshiftClientRequest::RedshiftClientRequest(const RedshiftClientRequest &other)
    : AwsAbstractRequest(new RedshiftClientRequestPrivate(*other.d_func(), this))
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
RedshiftClientRequest& RedshiftClientRequest::operator=(const RedshiftClientRequest &other)
{
    Q_D(RedshiftClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new RedshiftClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
RedshiftClientRequest::RedshiftClientRequest(RedshiftClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Redshift action to be performed by this request.
 *
 * @return The Redshift action to be performed by this request.
 */
RedshiftClientRequest::Action RedshiftClientRequest::action() const
{
    Q_D(const RedshiftClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Redshift action to be performed by this request.
 *
 * @return The name of the Redshift action to be performed by this request.
 */
QString RedshiftClientRequest::actionString() const
{
    return RedshiftClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Redshift API version implemented by this request.
 *
 * @return The Redshift API version implmented by this request.
 */
QString RedshiftClientRequest::apiVersion() const
{
    Q_D(const RedshiftClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Redshift action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void RedshiftClientRequest::setAction(const Action action)
{
    Q_D(RedshiftClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Redshift API version to include in this request.
 *
 * @param  version  The Redshift API version to include in this request.
 */
void RedshiftClientRequest::setApiVersion(const QString &version)
{
    Q_D(RedshiftClientRequest);
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
bool RedshiftClientRequest::operator==(const RedshiftClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Redshift queue name.
 *
 * @par From Redshift FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Redshift queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool RedshiftClientRequest::isValidQueueName(const QString &queueName)
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
int RedshiftClientRequest::clearParameter(const QString &name)
{
    Q_D(RedshiftClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void RedshiftClientRequest::clearParameters()
{
    Q_D(RedshiftClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Redshift request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant RedshiftClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RedshiftClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Redshift request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &RedshiftClientRequest::parameters() const
{
    Q_D(const RedshiftClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Redshift request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void RedshiftClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RedshiftClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Redshift request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void RedshiftClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RedshiftClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Redshift request.
 *
 * This Redshift implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Redshift request using the given \a endpoint.
 */
QNetworkRequest RedshiftClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const RedshiftClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  RedshiftClientRequestPrivate
 *
 * @brief  Private implementation for RedshiftClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RedshiftClientRequestPrivate object.
 *
 * @param  action  Redshift action being performed by the \a q request.
 * @param  q       Pointer to this object's public RedshiftClientRequest instance.
 */
RedshiftClientRequestPrivate::RedshiftClientRequestPrivate(const RedshiftClientRequest::Action action, RedshiftClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RedshiftClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RedshiftClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RedshiftClientRequest instance.
 */
RedshiftClientRequestPrivate::RedshiftClientRequestPrivate(const RedshiftClientRequestPrivate &other,
                                     RedshiftClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Redshift action to a string.
 *
 * This function converts RedshiftClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Redshift service's Action
 * query parameters.
 *
 * @param  action  Redshift action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString RedshiftClientRequestPrivate::toString(const RedshiftClientRequest::Action &action)
{
    #define ActionToString(action) \
        case RedshiftClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Redshift
} // namespace AWS
