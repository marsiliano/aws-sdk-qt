include(../../common.pri)

TARGET = QtAwsLicenseManager
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createlicenseconfigurationrequest.h \
    createlicenseconfigurationrequest_p.h \
    createlicenseconfigurationresponse.h \
    createlicenseconfigurationresponse_p.h \
    deletelicenseconfigurationrequest.h \
    deletelicenseconfigurationrequest_p.h \
    deletelicenseconfigurationresponse.h \
    deletelicenseconfigurationresponse_p.h \
    getlicenseconfigurationrequest.h \
    getlicenseconfigurationrequest_p.h \
    getlicenseconfigurationresponse.h \
    getlicenseconfigurationresponse_p.h \
    getservicesettingsrequest.h \
    getservicesettingsrequest_p.h \
    getservicesettingsresponse.h \
    getservicesettingsresponse_p.h \
    licensemanagerclient.h \
    licensemanagerclient_p.h \
    licensemanagerrequest.h \
    licensemanagerrequest_p.h \
    licensemanagerresponse.h \
    licensemanagerresponse_p.h \
    listassociationsforlicenseconfigurationrequest.h \
    listassociationsforlicenseconfigurationrequest_p.h \
    listassociationsforlicenseconfigurationresponse.h \
    listassociationsforlicenseconfigurationresponse_p.h \
    listlicenseconfigurationsrequest.h \
    listlicenseconfigurationsrequest_p.h \
    listlicenseconfigurationsresponse.h \
    listlicenseconfigurationsresponse_p.h \
    listlicensespecificationsforresourcerequest.h \
    listlicensespecificationsforresourcerequest_p.h \
    listlicensespecificationsforresourceresponse.h \
    listlicensespecificationsforresourceresponse_p.h \
    listresourceinventoryrequest.h \
    listresourceinventoryrequest_p.h \
    listresourceinventoryresponse.h \
    listresourceinventoryresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listusageforlicenseconfigurationrequest.h \
    listusageforlicenseconfigurationrequest_p.h \
    listusageforlicenseconfigurationresponse.h \
    listusageforlicenseconfigurationresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatelicenseconfigurationrequest.h \
    updatelicenseconfigurationrequest_p.h \
    updatelicenseconfigurationresponse.h \
    updatelicenseconfigurationresponse_p.h \
    updatelicensespecificationsforresourcerequest.h \
    updatelicensespecificationsforresourcerequest_p.h \
    updatelicensespecificationsforresourceresponse.h \
    updatelicensespecificationsforresourceresponse_p.h \
    updateservicesettingsrequest.h \
    updateservicesettingsrequest_p.h \
    updateservicesettingsresponse.h \
    updateservicesettingsresponse_p.h \

SOURCES += \
    createlicenseconfigurationrequest.cpp \
    createlicenseconfigurationresponse.cpp \
    deletelicenseconfigurationrequest.cpp \
    deletelicenseconfigurationresponse.cpp \
    getlicenseconfigurationrequest.cpp \
    getlicenseconfigurationresponse.cpp \
    getservicesettingsrequest.cpp \
    getservicesettingsresponse.cpp \
    licensemanagerclient.cpp \
    licensemanagerrequest.cpp \
    licensemanagerresponse.cpp \
    listassociationsforlicenseconfigurationrequest.cpp \
    listassociationsforlicenseconfigurationresponse.cpp \
    listlicenseconfigurationsrequest.cpp \
    listlicenseconfigurationsresponse.cpp \
    listlicensespecificationsforresourcerequest.cpp \
    listlicensespecificationsforresourceresponse.cpp \
    listresourceinventoryrequest.cpp \
    listresourceinventoryresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listusageforlicenseconfigurationrequest.cpp \
    listusageforlicenseconfigurationresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatelicenseconfigurationrequest.cpp \
    updatelicenseconfigurationresponse.cpp \
    updatelicensespecificationsforresourcerequest.cpp \
    updatelicensespecificationsforresourceresponse.cpp \
    updateservicesettingsrequest.cpp \
    updateservicesettingsresponse.cpp \

win32:CONFIG += skip_target_version_ext
