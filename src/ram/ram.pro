include(../../common.pri)

TARGET = QtAwsRam
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acceptresourceshareinvitationrequest.h \
    acceptresourceshareinvitationrequest_p.h \
    acceptresourceshareinvitationresponse.h \
    acceptresourceshareinvitationresponse_p.h \
    associateresourcesharerequest.h \
    associateresourcesharerequest_p.h \
    associateresourceshareresponse.h \
    associateresourceshareresponse_p.h \
    createresourcesharerequest.h \
    createresourcesharerequest_p.h \
    createresourceshareresponse.h \
    createresourceshareresponse_p.h \
    deleteresourcesharerequest.h \
    deleteresourcesharerequest_p.h \
    deleteresourceshareresponse.h \
    deleteresourceshareresponse_p.h \
    disassociateresourcesharerequest.h \
    disassociateresourcesharerequest_p.h \
    disassociateresourceshareresponse.h \
    disassociateresourceshareresponse_p.h \
    enablesharingwithawsorganizationrequest.h \
    enablesharingwithawsorganizationrequest_p.h \
    enablesharingwithawsorganizationresponse.h \
    enablesharingwithawsorganizationresponse_p.h \
    getresourcepoliciesrequest.h \
    getresourcepoliciesrequest_p.h \
    getresourcepoliciesresponse.h \
    getresourcepoliciesresponse_p.h \
    getresourceshareassociationsrequest.h \
    getresourceshareassociationsrequest_p.h \
    getresourceshareassociationsresponse.h \
    getresourceshareassociationsresponse_p.h \
    getresourceshareinvitationsrequest.h \
    getresourceshareinvitationsrequest_p.h \
    getresourceshareinvitationsresponse.h \
    getresourceshareinvitationsresponse_p.h \
    getresourcesharesrequest.h \
    getresourcesharesrequest_p.h \
    getresourcesharesresponse.h \
    getresourcesharesresponse_p.h \
    listprincipalsrequest.h \
    listprincipalsrequest_p.h \
    listprincipalsresponse.h \
    listprincipalsresponse_p.h \
    listresourcesrequest.h \
    listresourcesrequest_p.h \
    listresourcesresponse.h \
    listresourcesresponse_p.h \
    ramclient.h \
    ramclient_p.h \
    ramrequest.h \
    ramrequest_p.h \
    ramresponse.h \
    ramresponse_p.h \
    rejectresourceshareinvitationrequest.h \
    rejectresourceshareinvitationrequest_p.h \
    rejectresourceshareinvitationresponse.h \
    rejectresourceshareinvitationresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateresourcesharerequest.h \
    updateresourcesharerequest_p.h \
    updateresourceshareresponse.h \
    updateresourceshareresponse_p.h \

SOURCES += \
    acceptresourceshareinvitationrequest.cpp \
    acceptresourceshareinvitationresponse.cpp \
    associateresourcesharerequest.cpp \
    associateresourceshareresponse.cpp \
    createresourcesharerequest.cpp \
    createresourceshareresponse.cpp \
    deleteresourcesharerequest.cpp \
    deleteresourceshareresponse.cpp \
    disassociateresourcesharerequest.cpp \
    disassociateresourceshareresponse.cpp \
    enablesharingwithawsorganizationrequest.cpp \
    enablesharingwithawsorganizationresponse.cpp \
    getresourcepoliciesrequest.cpp \
    getresourcepoliciesresponse.cpp \
    getresourceshareassociationsrequest.cpp \
    getresourceshareassociationsresponse.cpp \
    getresourceshareinvitationsrequest.cpp \
    getresourceshareinvitationsresponse.cpp \
    getresourcesharesrequest.cpp \
    getresourcesharesresponse.cpp \
    listprincipalsrequest.cpp \
    listprincipalsresponse.cpp \
    listresourcesrequest.cpp \
    listresourcesresponse.cpp \
    ramclient.cpp \
    ramrequest.cpp \
    ramresponse.cpp \
    rejectresourceshareinvitationrequest.cpp \
    rejectresourceshareinvitationresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateresourcesharerequest.cpp \
    updateresourceshareresponse.cpp \

win32:CONFIG += skip_target_version_ext
