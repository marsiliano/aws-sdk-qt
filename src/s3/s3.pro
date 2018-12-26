include(../../common.pri)

TARGET = QtAwsS3
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
    completemultipartuploadrequest.h \
    completemultipartuploadrequest_p.h \
    completemultipartuploadresponse.h \
    completemultipartuploadresponse_p.h \
    copyobjectrequest.h \
    copyobjectrequest_p.h \
    copyobjectresponse.h \
    copyobjectresponse_p.h \
    createbucketrequest.h \
    createbucketrequest_p.h \
    createbucketresponse.h \
    createbucketresponse_p.h \
    createmultipartuploadrequest.h \
    createmultipartuploadrequest_p.h \
    createmultipartuploadresponse.h \
    createmultipartuploadresponse_p.h \
    deletebucketanalyticsconfigurationrequest.h \
    deletebucketanalyticsconfigurationrequest_p.h \
    deletebucketanalyticsconfigurationresponse.h \
    deletebucketanalyticsconfigurationresponse_p.h \
    deletebucketcorsrequest.h \
    deletebucketcorsrequest_p.h \
    deletebucketcorsresponse.h \
    deletebucketcorsresponse_p.h \
    deletebucketencryptionrequest.h \
    deletebucketencryptionrequest_p.h \
    deletebucketencryptionresponse.h \
    deletebucketencryptionresponse_p.h \
    deletebucketinventoryconfigurationrequest.h \
    deletebucketinventoryconfigurationrequest_p.h \
    deletebucketinventoryconfigurationresponse.h \
    deletebucketinventoryconfigurationresponse_p.h \
    deletebucketlifecyclerequest.h \
    deletebucketlifecyclerequest_p.h \
    deletebucketlifecycleresponse.h \
    deletebucketlifecycleresponse_p.h \
    deletebucketmetricsconfigurationrequest.h \
    deletebucketmetricsconfigurationrequest_p.h \
    deletebucketmetricsconfigurationresponse.h \
    deletebucketmetricsconfigurationresponse_p.h \
    deletebucketpolicyrequest.h \
    deletebucketpolicyrequest_p.h \
    deletebucketpolicyresponse.h \
    deletebucketpolicyresponse_p.h \
    deletebucketreplicationrequest.h \
    deletebucketreplicationrequest_p.h \
    deletebucketreplicationresponse.h \
    deletebucketreplicationresponse_p.h \
    deletebucketrequest.h \
    deletebucketrequest_p.h \
    deletebucketresponse.h \
    deletebucketresponse_p.h \
    deletebuckettaggingrequest.h \
    deletebuckettaggingrequest_p.h \
    deletebuckettaggingresponse.h \
    deletebuckettaggingresponse_p.h \
    deletebucketwebsiterequest.h \
    deletebucketwebsiterequest_p.h \
    deletebucketwebsiteresponse.h \
    deletebucketwebsiteresponse_p.h \
    deleteobjectrequest.h \
    deleteobjectrequest_p.h \
    deleteobjectresponse.h \
    deleteobjectresponse_p.h \
    deleteobjectsrequest.h \
    deleteobjectsrequest_p.h \
    deleteobjectsresponse.h \
    deleteobjectsresponse_p.h \
    deleteobjecttaggingrequest.h \
    deleteobjecttaggingrequest_p.h \
    deleteobjecttaggingresponse.h \
    deleteobjecttaggingresponse_p.h \
    deletepublicaccessblockrequest.h \
    deletepublicaccessblockrequest_p.h \
    deletepublicaccessblockresponse.h \
    deletepublicaccessblockresponse_p.h \
    getbucketaccelerateconfigurationrequest.h \
    getbucketaccelerateconfigurationrequest_p.h \
    getbucketaccelerateconfigurationresponse.h \
    getbucketaccelerateconfigurationresponse_p.h \
    getbucketaclrequest.h \
    getbucketaclrequest_p.h \
    getbucketaclresponse.h \
    getbucketaclresponse_p.h \
    getbucketanalyticsconfigurationrequest.h \
    getbucketanalyticsconfigurationrequest_p.h \
    getbucketanalyticsconfigurationresponse.h \
    getbucketanalyticsconfigurationresponse_p.h \
    getbucketcorsrequest.h \
    getbucketcorsrequest_p.h \
    getbucketcorsresponse.h \
    getbucketcorsresponse_p.h \
    getbucketencryptionrequest.h \
    getbucketencryptionrequest_p.h \
    getbucketencryptionresponse.h \
    getbucketencryptionresponse_p.h \
    getbucketinventoryconfigurationrequest.h \
    getbucketinventoryconfigurationrequest_p.h \
    getbucketinventoryconfigurationresponse.h \
    getbucketinventoryconfigurationresponse_p.h \
    getbucketlifecycleconfigurationrequest.h \
    getbucketlifecycleconfigurationrequest_p.h \
    getbucketlifecycleconfigurationresponse.h \
    getbucketlifecycleconfigurationresponse_p.h \
    getbucketlifecyclerequest.h \
    getbucketlifecyclerequest_p.h \
    getbucketlifecycleresponse.h \
    getbucketlifecycleresponse_p.h \
    getbucketlocationrequest.h \
    getbucketlocationrequest_p.h \
    getbucketlocationresponse.h \
    getbucketlocationresponse_p.h \
    getbucketloggingrequest.h \
    getbucketloggingrequest_p.h \
    getbucketloggingresponse.h \
    getbucketloggingresponse_p.h \
    getbucketmetricsconfigurationrequest.h \
    getbucketmetricsconfigurationrequest_p.h \
    getbucketmetricsconfigurationresponse.h \
    getbucketmetricsconfigurationresponse_p.h \
    getbucketnotificationconfigurationrequest.h \
    getbucketnotificationconfigurationrequest_p.h \
    getbucketnotificationconfigurationresponse.h \
    getbucketnotificationconfigurationresponse_p.h \
    getbucketnotificationrequest.h \
    getbucketnotificationrequest_p.h \
    getbucketnotificationresponse.h \
    getbucketnotificationresponse_p.h \
    getbucketpolicyrequest.h \
    getbucketpolicyrequest_p.h \
    getbucketpolicyresponse.h \
    getbucketpolicyresponse_p.h \
    getbucketpolicystatusrequest.h \
    getbucketpolicystatusrequest_p.h \
    getbucketpolicystatusresponse.h \
    getbucketpolicystatusresponse_p.h \
    getbucketreplicationrequest.h \
    getbucketreplicationrequest_p.h \
    getbucketreplicationresponse.h \
    getbucketreplicationresponse_p.h \
    getbucketrequestpaymentrequest.h \
    getbucketrequestpaymentrequest_p.h \
    getbucketrequestpaymentresponse.h \
    getbucketrequestpaymentresponse_p.h \
    getbuckettaggingrequest.h \
    getbuckettaggingrequest_p.h \
    getbuckettaggingresponse.h \
    getbuckettaggingresponse_p.h \
    getbucketversioningrequest.h \
    getbucketversioningrequest_p.h \
    getbucketversioningresponse.h \
    getbucketversioningresponse_p.h \
    getbucketwebsiterequest.h \
    getbucketwebsiterequest_p.h \
    getbucketwebsiteresponse.h \
    getbucketwebsiteresponse_p.h \
    getobjectaclrequest.h \
    getobjectaclrequest_p.h \
    getobjectaclresponse.h \
    getobjectaclresponse_p.h \
    getobjectlegalholdrequest.h \
    getobjectlegalholdrequest_p.h \
    getobjectlegalholdresponse.h \
    getobjectlegalholdresponse_p.h \
    getobjectlockconfigurationrequest.h \
    getobjectlockconfigurationrequest_p.h \
    getobjectlockconfigurationresponse.h \
    getobjectlockconfigurationresponse_p.h \
    getobjectrequest.h \
    getobjectrequest_p.h \
    getobjectresponse.h \
    getobjectresponse_p.h \
    getobjectretentionrequest.h \
    getobjectretentionrequest_p.h \
    getobjectretentionresponse.h \
    getobjectretentionresponse_p.h \
    getobjecttaggingrequest.h \
    getobjecttaggingrequest_p.h \
    getobjecttaggingresponse.h \
    getobjecttaggingresponse_p.h \
    getobjecttorrentrequest.h \
    getobjecttorrentrequest_p.h \
    getobjecttorrentresponse.h \
    getobjecttorrentresponse_p.h \
    getpublicaccessblockrequest.h \
    getpublicaccessblockrequest_p.h \
    getpublicaccessblockresponse.h \
    getpublicaccessblockresponse_p.h \
    headbucketrequest.h \
    headbucketrequest_p.h \
    headbucketresponse.h \
    headbucketresponse_p.h \
    headobjectrequest.h \
    headobjectrequest_p.h \
    headobjectresponse.h \
    headobjectresponse_p.h \
    listbucketanalyticsconfigurationsrequest.h \
    listbucketanalyticsconfigurationsrequest_p.h \
    listbucketanalyticsconfigurationsresponse.h \
    listbucketanalyticsconfigurationsresponse_p.h \
    listbucketinventoryconfigurationsrequest.h \
    listbucketinventoryconfigurationsrequest_p.h \
    listbucketinventoryconfigurationsresponse.h \
    listbucketinventoryconfigurationsresponse_p.h \
    listbucketmetricsconfigurationsrequest.h \
    listbucketmetricsconfigurationsrequest_p.h \
    listbucketmetricsconfigurationsresponse.h \
    listbucketmetricsconfigurationsresponse_p.h \
    listbucketsrequest.h \
    listbucketsrequest_p.h \
    listbucketsresponse.h \
    listbucketsresponse_p.h \
    listmultipartuploadsrequest.h \
    listmultipartuploadsrequest_p.h \
    listmultipartuploadsresponse.h \
    listmultipartuploadsresponse_p.h \
    listobjectsrequest.h \
    listobjectsrequest_p.h \
    listobjectsresponse.h \
    listobjectsresponse_p.h \
    listobjectsv2request.h \
    listobjectsv2request_p.h \
    listobjectsv2response.h \
    listobjectsv2response_p.h \
    listobjectversionsrequest.h \
    listobjectversionsrequest_p.h \
    listobjectversionsresponse.h \
    listobjectversionsresponse_p.h \
    listpartsrequest.h \
    listpartsrequest_p.h \
    listpartsresponse.h \
    listpartsresponse_p.h \
    putbucketaccelerateconfigurationrequest.h \
    putbucketaccelerateconfigurationrequest_p.h \
    putbucketaccelerateconfigurationresponse.h \
    putbucketaccelerateconfigurationresponse_p.h \
    putbucketaclrequest.h \
    putbucketaclrequest_p.h \
    putbucketaclresponse.h \
    putbucketaclresponse_p.h \
    putbucketanalyticsconfigurationrequest.h \
    putbucketanalyticsconfigurationrequest_p.h \
    putbucketanalyticsconfigurationresponse.h \
    putbucketanalyticsconfigurationresponse_p.h \
    putbucketcorsrequest.h \
    putbucketcorsrequest_p.h \
    putbucketcorsresponse.h \
    putbucketcorsresponse_p.h \
    putbucketencryptionrequest.h \
    putbucketencryptionrequest_p.h \
    putbucketencryptionresponse.h \
    putbucketencryptionresponse_p.h \
    putbucketinventoryconfigurationrequest.h \
    putbucketinventoryconfigurationrequest_p.h \
    putbucketinventoryconfigurationresponse.h \
    putbucketinventoryconfigurationresponse_p.h \
    putbucketlifecycleconfigurationrequest.h \
    putbucketlifecycleconfigurationrequest_p.h \
    putbucketlifecycleconfigurationresponse.h \
    putbucketlifecycleconfigurationresponse_p.h \
    putbucketlifecyclerequest.h \
    putbucketlifecyclerequest_p.h \
    putbucketlifecycleresponse.h \
    putbucketlifecycleresponse_p.h \
    putbucketloggingrequest.h \
    putbucketloggingrequest_p.h \
    putbucketloggingresponse.h \
    putbucketloggingresponse_p.h \
    putbucketmetricsconfigurationrequest.h \
    putbucketmetricsconfigurationrequest_p.h \
    putbucketmetricsconfigurationresponse.h \
    putbucketmetricsconfigurationresponse_p.h \
    putbucketnotificationconfigurationrequest.h \
    putbucketnotificationconfigurationrequest_p.h \
    putbucketnotificationconfigurationresponse.h \
    putbucketnotificationconfigurationresponse_p.h \
    putbucketnotificationrequest.h \
    putbucketnotificationrequest_p.h \
    putbucketnotificationresponse.h \
    putbucketnotificationresponse_p.h \
    putbucketpolicyrequest.h \
    putbucketpolicyrequest_p.h \
    putbucketpolicyresponse.h \
    putbucketpolicyresponse_p.h \
    putbucketreplicationrequest.h \
    putbucketreplicationrequest_p.h \
    putbucketreplicationresponse.h \
    putbucketreplicationresponse_p.h \
    putbucketrequestpaymentrequest.h \
    putbucketrequestpaymentrequest_p.h \
    putbucketrequestpaymentresponse.h \
    putbucketrequestpaymentresponse_p.h \
    putbuckettaggingrequest.h \
    putbuckettaggingrequest_p.h \
    putbuckettaggingresponse.h \
    putbuckettaggingresponse_p.h \
    putbucketversioningrequest.h \
    putbucketversioningrequest_p.h \
    putbucketversioningresponse.h \
    putbucketversioningresponse_p.h \
    putbucketwebsiterequest.h \
    putbucketwebsiterequest_p.h \
    putbucketwebsiteresponse.h \
    putbucketwebsiteresponse_p.h \
    putobjectaclrequest.h \
    putobjectaclrequest_p.h \
    putobjectaclresponse.h \
    putobjectaclresponse_p.h \
    putobjectlegalholdrequest.h \
    putobjectlegalholdrequest_p.h \
    putobjectlegalholdresponse.h \
    putobjectlegalholdresponse_p.h \
    putobjectlockconfigurationrequest.h \
    putobjectlockconfigurationrequest_p.h \
    putobjectlockconfigurationresponse.h \
    putobjectlockconfigurationresponse_p.h \
    putobjectrequest.h \
    putobjectrequest_p.h \
    putobjectresponse.h \
    putobjectresponse_p.h \
    putobjectretentionrequest.h \
    putobjectretentionrequest_p.h \
    putobjectretentionresponse.h \
    putobjectretentionresponse_p.h \
    putobjecttaggingrequest.h \
    putobjecttaggingrequest_p.h \
    putobjecttaggingresponse.h \
    putobjecttaggingresponse_p.h \
    putpublicaccessblockrequest.h \
    putpublicaccessblockrequest_p.h \
    putpublicaccessblockresponse.h \
    putpublicaccessblockresponse_p.h \
    restoreobjectrequest.h \
    restoreobjectrequest_p.h \
    restoreobjectresponse.h \
    restoreobjectresponse_p.h \
    s3client.h \
    s3client_p.h \
    s3request.h \
    s3request_p.h \
    s3response.h \
    s3response_p.h \
    selectobjectcontentrequest.h \
    selectobjectcontentrequest_p.h \
    selectobjectcontentresponse.h \
    selectobjectcontentresponse_p.h \
    uploadpartcopyrequest.h \
    uploadpartcopyrequest_p.h \
    uploadpartcopyresponse.h \
    uploadpartcopyresponse_p.h \
    uploadpartrequest.h \
    uploadpartrequest_p.h \
    uploadpartresponse.h \
    uploadpartresponse_p.h \

SOURCES += \
    abortmultipartuploadrequest.cpp \
    abortmultipartuploadresponse.cpp \
    completemultipartuploadrequest.cpp \
    completemultipartuploadresponse.cpp \
    copyobjectrequest.cpp \
    copyobjectresponse.cpp \
    createbucketrequest.cpp \
    createbucketresponse.cpp \
    createmultipartuploadrequest.cpp \
    createmultipartuploadresponse.cpp \
    deletebucketanalyticsconfigurationrequest.cpp \
    deletebucketanalyticsconfigurationresponse.cpp \
    deletebucketcorsrequest.cpp \
    deletebucketcorsresponse.cpp \
    deletebucketencryptionrequest.cpp \
    deletebucketencryptionresponse.cpp \
    deletebucketinventoryconfigurationrequest.cpp \
    deletebucketinventoryconfigurationresponse.cpp \
    deletebucketlifecyclerequest.cpp \
    deletebucketlifecycleresponse.cpp \
    deletebucketmetricsconfigurationrequest.cpp \
    deletebucketmetricsconfigurationresponse.cpp \
    deletebucketpolicyrequest.cpp \
    deletebucketpolicyresponse.cpp \
    deletebucketreplicationrequest.cpp \
    deletebucketreplicationresponse.cpp \
    deletebucketrequest.cpp \
    deletebucketresponse.cpp \
    deletebuckettaggingrequest.cpp \
    deletebuckettaggingresponse.cpp \
    deletebucketwebsiterequest.cpp \
    deletebucketwebsiteresponse.cpp \
    deleteobjectrequest.cpp \
    deleteobjectresponse.cpp \
    deleteobjectsrequest.cpp \
    deleteobjectsresponse.cpp \
    deleteobjecttaggingrequest.cpp \
    deleteobjecttaggingresponse.cpp \
    deletepublicaccessblockrequest.cpp \
    deletepublicaccessblockresponse.cpp \
    getbucketaccelerateconfigurationrequest.cpp \
    getbucketaccelerateconfigurationresponse.cpp \
    getbucketaclrequest.cpp \
    getbucketaclresponse.cpp \
    getbucketanalyticsconfigurationrequest.cpp \
    getbucketanalyticsconfigurationresponse.cpp \
    getbucketcorsrequest.cpp \
    getbucketcorsresponse.cpp \
    getbucketencryptionrequest.cpp \
    getbucketencryptionresponse.cpp \
    getbucketinventoryconfigurationrequest.cpp \
    getbucketinventoryconfigurationresponse.cpp \
    getbucketlifecycleconfigurationrequest.cpp \
    getbucketlifecycleconfigurationresponse.cpp \
    getbucketlifecyclerequest.cpp \
    getbucketlifecycleresponse.cpp \
    getbucketlocationrequest.cpp \
    getbucketlocationresponse.cpp \
    getbucketloggingrequest.cpp \
    getbucketloggingresponse.cpp \
    getbucketmetricsconfigurationrequest.cpp \
    getbucketmetricsconfigurationresponse.cpp \
    getbucketnotificationconfigurationrequest.cpp \
    getbucketnotificationconfigurationresponse.cpp \
    getbucketnotificationrequest.cpp \
    getbucketnotificationresponse.cpp \
    getbucketpolicyrequest.cpp \
    getbucketpolicyresponse.cpp \
    getbucketpolicystatusrequest.cpp \
    getbucketpolicystatusresponse.cpp \
    getbucketreplicationrequest.cpp \
    getbucketreplicationresponse.cpp \
    getbucketrequestpaymentrequest.cpp \
    getbucketrequestpaymentresponse.cpp \
    getbuckettaggingrequest.cpp \
    getbuckettaggingresponse.cpp \
    getbucketversioningrequest.cpp \
    getbucketversioningresponse.cpp \
    getbucketwebsiterequest.cpp \
    getbucketwebsiteresponse.cpp \
    getobjectaclrequest.cpp \
    getobjectaclresponse.cpp \
    getobjectlegalholdrequest.cpp \
    getobjectlegalholdresponse.cpp \
    getobjectlockconfigurationrequest.cpp \
    getobjectlockconfigurationresponse.cpp \
    getobjectrequest.cpp \
    getobjectresponse.cpp \
    getobjectretentionrequest.cpp \
    getobjectretentionresponse.cpp \
    getobjecttaggingrequest.cpp \
    getobjecttaggingresponse.cpp \
    getobjecttorrentrequest.cpp \
    getobjecttorrentresponse.cpp \
    getpublicaccessblockrequest.cpp \
    getpublicaccessblockresponse.cpp \
    headbucketrequest.cpp \
    headbucketresponse.cpp \
    headobjectrequest.cpp \
    headobjectresponse.cpp \
    listbucketanalyticsconfigurationsrequest.cpp \
    listbucketanalyticsconfigurationsresponse.cpp \
    listbucketinventoryconfigurationsrequest.cpp \
    listbucketinventoryconfigurationsresponse.cpp \
    listbucketmetricsconfigurationsrequest.cpp \
    listbucketmetricsconfigurationsresponse.cpp \
    listbucketsrequest.cpp \
    listbucketsresponse.cpp \
    listmultipartuploadsrequest.cpp \
    listmultipartuploadsresponse.cpp \
    listobjectsrequest.cpp \
    listobjectsresponse.cpp \
    listobjectsv2request.cpp \
    listobjectsv2response.cpp \
    listobjectversionsrequest.cpp \
    listobjectversionsresponse.cpp \
    listpartsrequest.cpp \
    listpartsresponse.cpp \
    putbucketaccelerateconfigurationrequest.cpp \
    putbucketaccelerateconfigurationresponse.cpp \
    putbucketaclrequest.cpp \
    putbucketaclresponse.cpp \
    putbucketanalyticsconfigurationrequest.cpp \
    putbucketanalyticsconfigurationresponse.cpp \
    putbucketcorsrequest.cpp \
    putbucketcorsresponse.cpp \
    putbucketencryptionrequest.cpp \
    putbucketencryptionresponse.cpp \
    putbucketinventoryconfigurationrequest.cpp \
    putbucketinventoryconfigurationresponse.cpp \
    putbucketlifecycleconfigurationrequest.cpp \
    putbucketlifecycleconfigurationresponse.cpp \
    putbucketlifecyclerequest.cpp \
    putbucketlifecycleresponse.cpp \
    putbucketloggingrequest.cpp \
    putbucketloggingresponse.cpp \
    putbucketmetricsconfigurationrequest.cpp \
    putbucketmetricsconfigurationresponse.cpp \
    putbucketnotificationconfigurationrequest.cpp \
    putbucketnotificationconfigurationresponse.cpp \
    putbucketnotificationrequest.cpp \
    putbucketnotificationresponse.cpp \
    putbucketpolicyrequest.cpp \
    putbucketpolicyresponse.cpp \
    putbucketreplicationrequest.cpp \
    putbucketreplicationresponse.cpp \
    putbucketrequestpaymentrequest.cpp \
    putbucketrequestpaymentresponse.cpp \
    putbuckettaggingrequest.cpp \
    putbuckettaggingresponse.cpp \
    putbucketversioningrequest.cpp \
    putbucketversioningresponse.cpp \
    putbucketwebsiterequest.cpp \
    putbucketwebsiteresponse.cpp \
    putobjectaclrequest.cpp \
    putobjectaclresponse.cpp \
    putobjectlegalholdrequest.cpp \
    putobjectlegalholdresponse.cpp \
    putobjectlockconfigurationrequest.cpp \
    putobjectlockconfigurationresponse.cpp \
    putobjectrequest.cpp \
    putobjectresponse.cpp \
    putobjectretentionrequest.cpp \
    putobjectretentionresponse.cpp \
    putobjecttaggingrequest.cpp \
    putobjecttaggingresponse.cpp \
    putpublicaccessblockrequest.cpp \
    putpublicaccessblockresponse.cpp \
    restoreobjectrequest.cpp \
    restoreobjectresponse.cpp \
    s3client.cpp \
    s3request.cpp \
    s3response.cpp \
    selectobjectcontentrequest.cpp \
    selectobjectcontentresponse.cpp \
    uploadpartcopyrequest.cpp \
    uploadpartcopyresponse.cpp \
    uploadpartrequest.cpp \
    uploadpartresponse.cpp \

win32:CONFIG += skip_target_version_ext
