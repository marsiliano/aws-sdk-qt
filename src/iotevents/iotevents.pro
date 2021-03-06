include(../../common.pri)

TARGET = QtAwsIoTEvents
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createdetectormodelrequest.h \
    createdetectormodelrequest_p.h \
    createdetectormodelresponse.h \
    createdetectormodelresponse_p.h \
    createinputrequest.h \
    createinputrequest_p.h \
    createinputresponse.h \
    createinputresponse_p.h \
    deletedetectormodelrequest.h \
    deletedetectormodelrequest_p.h \
    deletedetectormodelresponse.h \
    deletedetectormodelresponse_p.h \
    deleteinputrequest.h \
    deleteinputrequest_p.h \
    deleteinputresponse.h \
    deleteinputresponse_p.h \
    describedetectormodelrequest.h \
    describedetectormodelrequest_p.h \
    describedetectormodelresponse.h \
    describedetectormodelresponse_p.h \
    describeinputrequest.h \
    describeinputrequest_p.h \
    describeinputresponse.h \
    describeinputresponse_p.h \
    describeloggingoptionsrequest.h \
    describeloggingoptionsrequest_p.h \
    describeloggingoptionsresponse.h \
    describeloggingoptionsresponse_p.h \
    ioteventsclient.h \
    ioteventsclient_p.h \
    ioteventsrequest.h \
    ioteventsrequest_p.h \
    ioteventsresponse.h \
    ioteventsresponse_p.h \
    listdetectormodelsrequest.h \
    listdetectormodelsrequest_p.h \
    listdetectormodelsresponse.h \
    listdetectormodelsresponse_p.h \
    listdetectormodelversionsrequest.h \
    listdetectormodelversionsrequest_p.h \
    listdetectormodelversionsresponse.h \
    listdetectormodelversionsresponse_p.h \
    listinputsrequest.h \
    listinputsrequest_p.h \
    listinputsresponse.h \
    listinputsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    putloggingoptionsrequest.h \
    putloggingoptionsrequest_p.h \
    putloggingoptionsresponse.h \
    putloggingoptionsresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatedetectormodelrequest.h \
    updatedetectormodelrequest_p.h \
    updatedetectormodelresponse.h \
    updatedetectormodelresponse_p.h \
    updateinputrequest.h \
    updateinputrequest_p.h \
    updateinputresponse.h \
    updateinputresponse_p.h \

SOURCES += \
    createdetectormodelrequest.cpp \
    createdetectormodelresponse.cpp \
    createinputrequest.cpp \
    createinputresponse.cpp \
    deletedetectormodelrequest.cpp \
    deletedetectormodelresponse.cpp \
    deleteinputrequest.cpp \
    deleteinputresponse.cpp \
    describedetectormodelrequest.cpp \
    describedetectormodelresponse.cpp \
    describeinputrequest.cpp \
    describeinputresponse.cpp \
    describeloggingoptionsrequest.cpp \
    describeloggingoptionsresponse.cpp \
    ioteventsclient.cpp \
    ioteventsrequest.cpp \
    ioteventsresponse.cpp \
    listdetectormodelsrequest.cpp \
    listdetectormodelsresponse.cpp \
    listdetectormodelversionsrequest.cpp \
    listdetectormodelversionsresponse.cpp \
    listinputsrequest.cpp \
    listinputsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    putloggingoptionsrequest.cpp \
    putloggingoptionsresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatedetectormodelrequest.cpp \
    updatedetectormodelresponse.cpp \
    updateinputrequest.cpp \
    updateinputresponse.cpp \

win32:CONFIG += skip_target_version_ext
