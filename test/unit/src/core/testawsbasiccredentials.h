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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QTest>

class TestAwsBasicCredentials : public QObject {
    Q_OBJECT

private slots:
    void construct_data();
    void construct();

    void expiration();
    void isExpired();
    void isRefreshable();
    void refresh();

    void setAccessKeyId_data();
    void setAccessKeyId();

    void setSecretKey_data();
    void setSecretKey();

    void setToken_data();
    void setToken();
};
