/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsSignatureV4 : public QObject {
    Q_OBJECT

private slots:

    void algorithmDesignation_data();
    void algorithmDesignation();

    void authorizationHeaderValue_data();
    void authorizationHeaderValue();

    void canonicalHeader_data();
    void canonicalHeader();

    void canonicalHeaders_data();
    void canonicalHeaders();

    void canonicalRequest_data();
    void canonicalRequest();

    void credentialScope_data();
    void credentialScope();

    void setAuthorizationHeader_data();
    void setAuthorizationHeader();

    void setDateHeader_data();
    void setDateHeader();

    void sign();

    void signingKey_data();
    void signingKey();

    void stringToSign_data();
    void stringToSign();
};
