include(../../common.pri)

TARGET = QtAwsQuickSight
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    creategroupmembershiprequest.h \
    creategroupmembershiprequest_p.h \
    creategroupmembershipresponse.h \
    creategroupmembershipresponse_p.h \
    creategrouprequest.h \
    creategrouprequest_p.h \
    creategroupresponse.h \
    creategroupresponse_p.h \
    deletegroupmembershiprequest.h \
    deletegroupmembershiprequest_p.h \
    deletegroupmembershipresponse.h \
    deletegroupmembershipresponse_p.h \
    deletegrouprequest.h \
    deletegrouprequest_p.h \
    deletegroupresponse.h \
    deletegroupresponse_p.h \
    deleteuserbyprincipalidrequest.h \
    deleteuserbyprincipalidrequest_p.h \
    deleteuserbyprincipalidresponse.h \
    deleteuserbyprincipalidresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    describegrouprequest.h \
    describegrouprequest_p.h \
    describegroupresponse.h \
    describegroupresponse_p.h \
    describeuserrequest.h \
    describeuserrequest_p.h \
    describeuserresponse.h \
    describeuserresponse_p.h \
    getdashboardembedurlrequest.h \
    getdashboardembedurlrequest_p.h \
    getdashboardembedurlresponse.h \
    getdashboardembedurlresponse_p.h \
    listgroupmembershipsrequest.h \
    listgroupmembershipsrequest_p.h \
    listgroupmembershipsresponse.h \
    listgroupmembershipsresponse_p.h \
    listgroupsrequest.h \
    listgroupsrequest_p.h \
    listgroupsresponse.h \
    listgroupsresponse_p.h \
    listusergroupsrequest.h \
    listusergroupsrequest_p.h \
    listusergroupsresponse.h \
    listusergroupsresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    quicksightclient.h \
    quicksightclient_p.h \
    quicksightrequest.h \
    quicksightrequest_p.h \
    quicksightresponse.h \
    quicksightresponse_p.h \
    registeruserrequest.h \
    registeruserrequest_p.h \
    registeruserresponse.h \
    registeruserresponse_p.h \
    updategrouprequest.h \
    updategrouprequest_p.h \
    updategroupresponse.h \
    updategroupresponse_p.h \
    updateuserrequest.h \
    updateuserrequest_p.h \
    updateuserresponse.h \
    updateuserresponse_p.h \

SOURCES += \
    creategroupmembershiprequest.cpp \
    creategroupmembershipresponse.cpp \
    creategrouprequest.cpp \
    creategroupresponse.cpp \
    deletegroupmembershiprequest.cpp \
    deletegroupmembershipresponse.cpp \
    deletegrouprequest.cpp \
    deletegroupresponse.cpp \
    deleteuserbyprincipalidrequest.cpp \
    deleteuserbyprincipalidresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    describegrouprequest.cpp \
    describegroupresponse.cpp \
    describeuserrequest.cpp \
    describeuserresponse.cpp \
    getdashboardembedurlrequest.cpp \
    getdashboardembedurlresponse.cpp \
    listgroupmembershipsrequest.cpp \
    listgroupmembershipsresponse.cpp \
    listgroupsrequest.cpp \
    listgroupsresponse.cpp \
    listusergroupsrequest.cpp \
    listusergroupsresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    quicksightclient.cpp \
    quicksightrequest.cpp \
    quicksightresponse.cpp \
    registeruserrequest.cpp \
    registeruserresponse.cpp \
    updategrouprequest.cpp \
    updategroupresponse.cpp \
    updateuserrequest.cpp \
    updateuserresponse.cpp \

win32:CONFIG += skip_target_version_ext
