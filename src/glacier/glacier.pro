include(../../common.pri)

TARGET = QtAwsGlacier
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    abortmultipartuploadrequest.h \
    abortmultipartuploadrequest_p.h \
    abortmultipartuploadresponse.h \
    abortmultipartuploadresponse_p.h \
    abortvaultlockrequest.h \
    abortvaultlockrequest_p.h \
    abortvaultlockresponse.h \
    abortvaultlockresponse_p.h \
    addtagstovaultrequest.h \
    addtagstovaultrequest_p.h \
    addtagstovaultresponse.h \
    addtagstovaultresponse_p.h \
    completemultipartuploadrequest.h \
    completemultipartuploadrequest_p.h \
    completemultipartuploadresponse.h \
    completemultipartuploadresponse_p.h \
    completevaultlockrequest.h \
    completevaultlockrequest_p.h \
    completevaultlockresponse.h \
    completevaultlockresponse_p.h \
    createvaultrequest.h \
    createvaultrequest_p.h \
    createvaultresponse.h \
    createvaultresponse_p.h \
    deletearchiverequest.h \
    deletearchiverequest_p.h \
    deletearchiveresponse.h \
    deletearchiveresponse_p.h \
    deletevaultaccesspolicyrequest.h \
    deletevaultaccesspolicyrequest_p.h \
    deletevaultaccesspolicyresponse.h \
    deletevaultaccesspolicyresponse_p.h \
    deletevaultnotificationsrequest.h \
    deletevaultnotificationsrequest_p.h \
    deletevaultnotificationsresponse.h \
    deletevaultnotificationsresponse_p.h \
    deletevaultrequest.h \
    deletevaultrequest_p.h \
    deletevaultresponse.h \
    deletevaultresponse_p.h \
    describejobrequest.h \
    describejobrequest_p.h \
    describejobresponse.h \
    describejobresponse_p.h \
    describevaultrequest.h \
    describevaultrequest_p.h \
    describevaultresponse.h \
    describevaultresponse_p.h \
    getdataretrievalpolicyrequest.h \
    getdataretrievalpolicyrequest_p.h \
    getdataretrievalpolicyresponse.h \
    getdataretrievalpolicyresponse_p.h \
    getjoboutputrequest.h \
    getjoboutputrequest_p.h \
    getjoboutputresponse.h \
    getjoboutputresponse_p.h \
    getvaultaccesspolicyrequest.h \
    getvaultaccesspolicyrequest_p.h \
    getvaultaccesspolicyresponse.h \
    getvaultaccesspolicyresponse_p.h \
    getvaultlockrequest.h \
    getvaultlockrequest_p.h \
    getvaultlockresponse.h \
    getvaultlockresponse_p.h \
    getvaultnotificationsrequest.h \
    getvaultnotificationsrequest_p.h \
    getvaultnotificationsresponse.h \
    getvaultnotificationsresponse_p.h \
    glacierclient.h \
    glacierclient_p.h \
    glacierrequest.h \
    glacierrequest_p.h \
    glacierresponse.h \
    glacierresponse_p.h \
    initiatejobrequest.h \
    initiatejobrequest_p.h \
    initiatejobresponse.h \
    initiatejobresponse_p.h \
    initiatemultipartuploadrequest.h \
    initiatemultipartuploadrequest_p.h \
    initiatemultipartuploadresponse.h \
    initiatemultipartuploadresponse_p.h \
    initiatevaultlockrequest.h \
    initiatevaultlockrequest_p.h \
    initiatevaultlockresponse.h \
    initiatevaultlockresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    listmultipartuploadsrequest.h \
    listmultipartuploadsrequest_p.h \
    listmultipartuploadsresponse.h \
    listmultipartuploadsresponse_p.h \
    listpartsrequest.h \
    listpartsrequest_p.h \
    listpartsresponse.h \
    listpartsresponse_p.h \
    listprovisionedcapacityrequest.h \
    listprovisionedcapacityrequest_p.h \
    listprovisionedcapacityresponse.h \
    listprovisionedcapacityresponse_p.h \
    listtagsforvaultrequest.h \
    listtagsforvaultrequest_p.h \
    listtagsforvaultresponse.h \
    listtagsforvaultresponse_p.h \
    listvaultsrequest.h \
    listvaultsrequest_p.h \
    listvaultsresponse.h \
    listvaultsresponse_p.h \
    purchaseprovisionedcapacityrequest.h \
    purchaseprovisionedcapacityrequest_p.h \
    purchaseprovisionedcapacityresponse.h \
    purchaseprovisionedcapacityresponse_p.h \
    removetagsfromvaultrequest.h \
    removetagsfromvaultrequest_p.h \
    removetagsfromvaultresponse.h \
    removetagsfromvaultresponse_p.h \
    setdataretrievalpolicyrequest.h \
    setdataretrievalpolicyrequest_p.h \
    setdataretrievalpolicyresponse.h \
    setdataretrievalpolicyresponse_p.h \
    setvaultaccesspolicyrequest.h \
    setvaultaccesspolicyrequest_p.h \
    setvaultaccesspolicyresponse.h \
    setvaultaccesspolicyresponse_p.h \
    setvaultnotificationsrequest.h \
    setvaultnotificationsrequest_p.h \
    setvaultnotificationsresponse.h \
    setvaultnotificationsresponse_p.h \
    uploadarchiverequest.h \
    uploadarchiverequest_p.h \
    uploadarchiveresponse.h \
    uploadarchiveresponse_p.h \
    uploadmultipartpartrequest.h \
    uploadmultipartpartrequest_p.h \
    uploadmultipartpartresponse.h \
    uploadmultipartpartresponse_p.h \

SOURCES += \
    abortmultipartuploadrequest.cpp \
    abortmultipartuploadresponse.cpp \
    abortvaultlockrequest.cpp \
    abortvaultlockresponse.cpp \
    addtagstovaultrequest.cpp \
    addtagstovaultresponse.cpp \
    completemultipartuploadrequest.cpp \
    completemultipartuploadresponse.cpp \
    completevaultlockrequest.cpp \
    completevaultlockresponse.cpp \
    createvaultrequest.cpp \
    createvaultresponse.cpp \
    deletearchiverequest.cpp \
    deletearchiveresponse.cpp \
    deletevaultaccesspolicyrequest.cpp \
    deletevaultaccesspolicyresponse.cpp \
    deletevaultnotificationsrequest.cpp \
    deletevaultnotificationsresponse.cpp \
    deletevaultrequest.cpp \
    deletevaultresponse.cpp \
    describejobrequest.cpp \
    describejobresponse.cpp \
    describevaultrequest.cpp \
    describevaultresponse.cpp \
    getdataretrievalpolicyrequest.cpp \
    getdataretrievalpolicyresponse.cpp \
    getjoboutputrequest.cpp \
    getjoboutputresponse.cpp \
    getvaultaccesspolicyrequest.cpp \
    getvaultaccesspolicyresponse.cpp \
    getvaultlockrequest.cpp \
    getvaultlockresponse.cpp \
    getvaultnotificationsrequest.cpp \
    getvaultnotificationsresponse.cpp \
    glacierclient.cpp \
    glacierrequest.cpp \
    glacierresponse.cpp \
    initiatejobrequest.cpp \
    initiatejobresponse.cpp \
    initiatemultipartuploadrequest.cpp \
    initiatemultipartuploadresponse.cpp \
    initiatevaultlockrequest.cpp \
    initiatevaultlockresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    listmultipartuploadsrequest.cpp \
    listmultipartuploadsresponse.cpp \
    listpartsrequest.cpp \
    listpartsresponse.cpp \
    listprovisionedcapacityrequest.cpp \
    listprovisionedcapacityresponse.cpp \
    listtagsforvaultrequest.cpp \
    listtagsforvaultresponse.cpp \
    listvaultsrequest.cpp \
    listvaultsresponse.cpp \
    purchaseprovisionedcapacityrequest.cpp \
    purchaseprovisionedcapacityresponse.cpp \
    removetagsfromvaultrequest.cpp \
    removetagsfromvaultresponse.cpp \
    setdataretrievalpolicyrequest.cpp \
    setdataretrievalpolicyresponse.cpp \
    setvaultaccesspolicyrequest.cpp \
    setvaultaccesspolicyresponse.cpp \
    setvaultnotificationsrequest.cpp \
    setvaultnotificationsresponse.cpp \
    uploadarchiverequest.cpp \
    uploadarchiveresponse.cpp \
    uploadmultipartpartrequest.cpp \
    uploadmultipartpartresponse.cpp \

win32:CONFIG += skip_target_version_ext
