include(../../common.pri)

TARGET = QtAwsXRay
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchgettracesrequest.h \
    batchgettracesrequest_p.h \
    batchgettracesresponse.h \
    batchgettracesresponse_p.h \
    creategrouprequest.h \
    creategrouprequest_p.h \
    creategroupresponse.h \
    creategroupresponse_p.h \
    createsamplingrulerequest.h \
    createsamplingrulerequest_p.h \
    createsamplingruleresponse.h \
    createsamplingruleresponse_p.h \
    deletegrouprequest.h \
    deletegrouprequest_p.h \
    deletegroupresponse.h \
    deletegroupresponse_p.h \
    deletesamplingrulerequest.h \
    deletesamplingrulerequest_p.h \
    deletesamplingruleresponse.h \
    deletesamplingruleresponse_p.h \
    getencryptionconfigrequest.h \
    getencryptionconfigrequest_p.h \
    getencryptionconfigresponse.h \
    getencryptionconfigresponse_p.h \
    getgrouprequest.h \
    getgrouprequest_p.h \
    getgroupresponse.h \
    getgroupresponse_p.h \
    getgroupsrequest.h \
    getgroupsrequest_p.h \
    getgroupsresponse.h \
    getgroupsresponse_p.h \
    getsamplingrulesrequest.h \
    getsamplingrulesrequest_p.h \
    getsamplingrulesresponse.h \
    getsamplingrulesresponse_p.h \
    getsamplingstatisticsummariesrequest.h \
    getsamplingstatisticsummariesrequest_p.h \
    getsamplingstatisticsummariesresponse.h \
    getsamplingstatisticsummariesresponse_p.h \
    getsamplingtargetsrequest.h \
    getsamplingtargetsrequest_p.h \
    getsamplingtargetsresponse.h \
    getsamplingtargetsresponse_p.h \
    getservicegraphrequest.h \
    getservicegraphrequest_p.h \
    getservicegraphresponse.h \
    getservicegraphresponse_p.h \
    gettimeseriesservicestatisticsrequest.h \
    gettimeseriesservicestatisticsrequest_p.h \
    gettimeseriesservicestatisticsresponse.h \
    gettimeseriesservicestatisticsresponse_p.h \
    gettracegraphrequest.h \
    gettracegraphrequest_p.h \
    gettracegraphresponse.h \
    gettracegraphresponse_p.h \
    gettracesummariesrequest.h \
    gettracesummariesrequest_p.h \
    gettracesummariesresponse.h \
    gettracesummariesresponse_p.h \
    putencryptionconfigrequest.h \
    putencryptionconfigrequest_p.h \
    putencryptionconfigresponse.h \
    putencryptionconfigresponse_p.h \
    puttelemetryrecordsrequest.h \
    puttelemetryrecordsrequest_p.h \
    puttelemetryrecordsresponse.h \
    puttelemetryrecordsresponse_p.h \
    puttracesegmentsrequest.h \
    puttracesegmentsrequest_p.h \
    puttracesegmentsresponse.h \
    puttracesegmentsresponse_p.h \
    updategrouprequest.h \
    updategrouprequest_p.h \
    updategroupresponse.h \
    updategroupresponse_p.h \
    updatesamplingrulerequest.h \
    updatesamplingrulerequest_p.h \
    updatesamplingruleresponse.h \
    updatesamplingruleresponse_p.h \
    xrayclient.h \
    xrayclient_p.h \
    xrayrequest.h \
    xrayrequest_p.h \
    xrayresponse.h \
    xrayresponse_p.h \

SOURCES += \
    batchgettracesrequest.cpp \
    batchgettracesresponse.cpp \
    creategrouprequest.cpp \
    creategroupresponse.cpp \
    createsamplingrulerequest.cpp \
    createsamplingruleresponse.cpp \
    deletegrouprequest.cpp \
    deletegroupresponse.cpp \
    deletesamplingrulerequest.cpp \
    deletesamplingruleresponse.cpp \
    getencryptionconfigrequest.cpp \
    getencryptionconfigresponse.cpp \
    getgrouprequest.cpp \
    getgroupresponse.cpp \
    getgroupsrequest.cpp \
    getgroupsresponse.cpp \
    getsamplingrulesrequest.cpp \
    getsamplingrulesresponse.cpp \
    getsamplingstatisticsummariesrequest.cpp \
    getsamplingstatisticsummariesresponse.cpp \
    getsamplingtargetsrequest.cpp \
    getsamplingtargetsresponse.cpp \
    getservicegraphrequest.cpp \
    getservicegraphresponse.cpp \
    gettimeseriesservicestatisticsrequest.cpp \
    gettimeseriesservicestatisticsresponse.cpp \
    gettracegraphrequest.cpp \
    gettracegraphresponse.cpp \
    gettracesummariesrequest.cpp \
    gettracesummariesresponse.cpp \
    putencryptionconfigrequest.cpp \
    putencryptionconfigresponse.cpp \
    puttelemetryrecordsrequest.cpp \
    puttelemetryrecordsresponse.cpp \
    puttracesegmentsrequest.cpp \
    puttracesegmentsresponse.cpp \
    updategrouprequest.cpp \
    updategroupresponse.cpp \
    updatesamplingrulerequest.cpp \
    updatesamplingruleresponse.cpp \
    xrayclient.cpp \
    xrayrequest.cpp \
    xrayresponse.cpp \

win32:CONFIG += skip_target_version_ext
