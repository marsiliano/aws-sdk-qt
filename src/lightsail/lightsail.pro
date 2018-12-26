include(../../common.pri)

TARGET = QtAwsLightsail
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    allocatestaticiprequest.h \
    allocatestaticiprequest_p.h \
    allocatestaticipresponse.h \
    allocatestaticipresponse_p.h \
    attachdiskrequest.h \
    attachdiskrequest_p.h \
    attachdiskresponse.h \
    attachdiskresponse_p.h \
    attachinstancestoloadbalancerrequest.h \
    attachinstancestoloadbalancerrequest_p.h \
    attachinstancestoloadbalancerresponse.h \
    attachinstancestoloadbalancerresponse_p.h \
    attachloadbalancertlscertificaterequest.h \
    attachloadbalancertlscertificaterequest_p.h \
    attachloadbalancertlscertificateresponse.h \
    attachloadbalancertlscertificateresponse_p.h \
    attachstaticiprequest.h \
    attachstaticiprequest_p.h \
    attachstaticipresponse.h \
    attachstaticipresponse_p.h \
    closeinstancepublicportsrequest.h \
    closeinstancepublicportsrequest_p.h \
    closeinstancepublicportsresponse.h \
    closeinstancepublicportsresponse_p.h \
    copysnapshotrequest.h \
    copysnapshotrequest_p.h \
    copysnapshotresponse.h \
    copysnapshotresponse_p.h \
    createcloudformationstackrequest.h \
    createcloudformationstackrequest_p.h \
    createcloudformationstackresponse.h \
    createcloudformationstackresponse_p.h \
    creatediskfromsnapshotrequest.h \
    creatediskfromsnapshotrequest_p.h \
    creatediskfromsnapshotresponse.h \
    creatediskfromsnapshotresponse_p.h \
    creatediskrequest.h \
    creatediskrequest_p.h \
    creatediskresponse.h \
    creatediskresponse_p.h \
    createdisksnapshotrequest.h \
    createdisksnapshotrequest_p.h \
    createdisksnapshotresponse.h \
    createdisksnapshotresponse_p.h \
    createdomainentryrequest.h \
    createdomainentryrequest_p.h \
    createdomainentryresponse.h \
    createdomainentryresponse_p.h \
    createdomainrequest.h \
    createdomainrequest_p.h \
    createdomainresponse.h \
    createdomainresponse_p.h \
    createinstancesfromsnapshotrequest.h \
    createinstancesfromsnapshotrequest_p.h \
    createinstancesfromsnapshotresponse.h \
    createinstancesfromsnapshotresponse_p.h \
    createinstancesnapshotrequest.h \
    createinstancesnapshotrequest_p.h \
    createinstancesnapshotresponse.h \
    createinstancesnapshotresponse_p.h \
    createinstancesrequest.h \
    createinstancesrequest_p.h \
    createinstancesresponse.h \
    createinstancesresponse_p.h \
    createkeypairrequest.h \
    createkeypairrequest_p.h \
    createkeypairresponse.h \
    createkeypairresponse_p.h \
    createloadbalancerrequest.h \
    createloadbalancerrequest_p.h \
    createloadbalancerresponse.h \
    createloadbalancerresponse_p.h \
    createloadbalancertlscertificaterequest.h \
    createloadbalancertlscertificaterequest_p.h \
    createloadbalancertlscertificateresponse.h \
    createloadbalancertlscertificateresponse_p.h \
    createrelationaldatabasefromsnapshotrequest.h \
    createrelationaldatabasefromsnapshotrequest_p.h \
    createrelationaldatabasefromsnapshotresponse.h \
    createrelationaldatabasefromsnapshotresponse_p.h \
    createrelationaldatabaserequest.h \
    createrelationaldatabaserequest_p.h \
    createrelationaldatabaseresponse.h \
    createrelationaldatabaseresponse_p.h \
    createrelationaldatabasesnapshotrequest.h \
    createrelationaldatabasesnapshotrequest_p.h \
    createrelationaldatabasesnapshotresponse.h \
    createrelationaldatabasesnapshotresponse_p.h \
    deletediskrequest.h \
    deletediskrequest_p.h \
    deletediskresponse.h \
    deletediskresponse_p.h \
    deletedisksnapshotrequest.h \
    deletedisksnapshotrequest_p.h \
    deletedisksnapshotresponse.h \
    deletedisksnapshotresponse_p.h \
    deletedomainentryrequest.h \
    deletedomainentryrequest_p.h \
    deletedomainentryresponse.h \
    deletedomainentryresponse_p.h \
    deletedomainrequest.h \
    deletedomainrequest_p.h \
    deletedomainresponse.h \
    deletedomainresponse_p.h \
    deleteinstancerequest.h \
    deleteinstancerequest_p.h \
    deleteinstanceresponse.h \
    deleteinstanceresponse_p.h \
    deleteinstancesnapshotrequest.h \
    deleteinstancesnapshotrequest_p.h \
    deleteinstancesnapshotresponse.h \
    deleteinstancesnapshotresponse_p.h \
    deletekeypairrequest.h \
    deletekeypairrequest_p.h \
    deletekeypairresponse.h \
    deletekeypairresponse_p.h \
    deleteloadbalancerrequest.h \
    deleteloadbalancerrequest_p.h \
    deleteloadbalancerresponse.h \
    deleteloadbalancerresponse_p.h \
    deleteloadbalancertlscertificaterequest.h \
    deleteloadbalancertlscertificaterequest_p.h \
    deleteloadbalancertlscertificateresponse.h \
    deleteloadbalancertlscertificateresponse_p.h \
    deleterelationaldatabaserequest.h \
    deleterelationaldatabaserequest_p.h \
    deleterelationaldatabaseresponse.h \
    deleterelationaldatabaseresponse_p.h \
    deleterelationaldatabasesnapshotrequest.h \
    deleterelationaldatabasesnapshotrequest_p.h \
    deleterelationaldatabasesnapshotresponse.h \
    deleterelationaldatabasesnapshotresponse_p.h \
    detachdiskrequest.h \
    detachdiskrequest_p.h \
    detachdiskresponse.h \
    detachdiskresponse_p.h \
    detachinstancesfromloadbalancerrequest.h \
    detachinstancesfromloadbalancerrequest_p.h \
    detachinstancesfromloadbalancerresponse.h \
    detachinstancesfromloadbalancerresponse_p.h \
    detachstaticiprequest.h \
    detachstaticiprequest_p.h \
    detachstaticipresponse.h \
    detachstaticipresponse_p.h \
    downloaddefaultkeypairrequest.h \
    downloaddefaultkeypairrequest_p.h \
    downloaddefaultkeypairresponse.h \
    downloaddefaultkeypairresponse_p.h \
    exportsnapshotrequest.h \
    exportsnapshotrequest_p.h \
    exportsnapshotresponse.h \
    exportsnapshotresponse_p.h \
    getactivenamesrequest.h \
    getactivenamesrequest_p.h \
    getactivenamesresponse.h \
    getactivenamesresponse_p.h \
    getblueprintsrequest.h \
    getblueprintsrequest_p.h \
    getblueprintsresponse.h \
    getblueprintsresponse_p.h \
    getbundlesrequest.h \
    getbundlesrequest_p.h \
    getbundlesresponse.h \
    getbundlesresponse_p.h \
    getcloudformationstackrecordsrequest.h \
    getcloudformationstackrecordsrequest_p.h \
    getcloudformationstackrecordsresponse.h \
    getcloudformationstackrecordsresponse_p.h \
    getdiskrequest.h \
    getdiskrequest_p.h \
    getdiskresponse.h \
    getdiskresponse_p.h \
    getdisksnapshotrequest.h \
    getdisksnapshotrequest_p.h \
    getdisksnapshotresponse.h \
    getdisksnapshotresponse_p.h \
    getdisksnapshotsrequest.h \
    getdisksnapshotsrequest_p.h \
    getdisksnapshotsresponse.h \
    getdisksnapshotsresponse_p.h \
    getdisksrequest.h \
    getdisksrequest_p.h \
    getdisksresponse.h \
    getdisksresponse_p.h \
    getdomainrequest.h \
    getdomainrequest_p.h \
    getdomainresponse.h \
    getdomainresponse_p.h \
    getdomainsrequest.h \
    getdomainsrequest_p.h \
    getdomainsresponse.h \
    getdomainsresponse_p.h \
    getexportsnapshotrecordsrequest.h \
    getexportsnapshotrecordsrequest_p.h \
    getexportsnapshotrecordsresponse.h \
    getexportsnapshotrecordsresponse_p.h \
    getinstanceaccessdetailsrequest.h \
    getinstanceaccessdetailsrequest_p.h \
    getinstanceaccessdetailsresponse.h \
    getinstanceaccessdetailsresponse_p.h \
    getinstancemetricdatarequest.h \
    getinstancemetricdatarequest_p.h \
    getinstancemetricdataresponse.h \
    getinstancemetricdataresponse_p.h \
    getinstanceportstatesrequest.h \
    getinstanceportstatesrequest_p.h \
    getinstanceportstatesresponse.h \
    getinstanceportstatesresponse_p.h \
    getinstancerequest.h \
    getinstancerequest_p.h \
    getinstanceresponse.h \
    getinstanceresponse_p.h \
    getinstancesnapshotrequest.h \
    getinstancesnapshotrequest_p.h \
    getinstancesnapshotresponse.h \
    getinstancesnapshotresponse_p.h \
    getinstancesnapshotsrequest.h \
    getinstancesnapshotsrequest_p.h \
    getinstancesnapshotsresponse.h \
    getinstancesnapshotsresponse_p.h \
    getinstancesrequest.h \
    getinstancesrequest_p.h \
    getinstancesresponse.h \
    getinstancesresponse_p.h \
    getinstancestaterequest.h \
    getinstancestaterequest_p.h \
    getinstancestateresponse.h \
    getinstancestateresponse_p.h \
    getkeypairrequest.h \
    getkeypairrequest_p.h \
    getkeypairresponse.h \
    getkeypairresponse_p.h \
    getkeypairsrequest.h \
    getkeypairsrequest_p.h \
    getkeypairsresponse.h \
    getkeypairsresponse_p.h \
    getloadbalancermetricdatarequest.h \
    getloadbalancermetricdatarequest_p.h \
    getloadbalancermetricdataresponse.h \
    getloadbalancermetricdataresponse_p.h \
    getloadbalancerrequest.h \
    getloadbalancerrequest_p.h \
    getloadbalancerresponse.h \
    getloadbalancerresponse_p.h \
    getloadbalancersrequest.h \
    getloadbalancersrequest_p.h \
    getloadbalancersresponse.h \
    getloadbalancersresponse_p.h \
    getloadbalancertlscertificatesrequest.h \
    getloadbalancertlscertificatesrequest_p.h \
    getloadbalancertlscertificatesresponse.h \
    getloadbalancertlscertificatesresponse_p.h \
    getoperationrequest.h \
    getoperationrequest_p.h \
    getoperationresponse.h \
    getoperationresponse_p.h \
    getoperationsforresourcerequest.h \
    getoperationsforresourcerequest_p.h \
    getoperationsforresourceresponse.h \
    getoperationsforresourceresponse_p.h \
    getoperationsrequest.h \
    getoperationsrequest_p.h \
    getoperationsresponse.h \
    getoperationsresponse_p.h \
    getregionsrequest.h \
    getregionsrequest_p.h \
    getregionsresponse.h \
    getregionsresponse_p.h \
    getrelationaldatabaseblueprintsrequest.h \
    getrelationaldatabaseblueprintsrequest_p.h \
    getrelationaldatabaseblueprintsresponse.h \
    getrelationaldatabaseblueprintsresponse_p.h \
    getrelationaldatabasebundlesrequest.h \
    getrelationaldatabasebundlesrequest_p.h \
    getrelationaldatabasebundlesresponse.h \
    getrelationaldatabasebundlesresponse_p.h \
    getrelationaldatabaseeventsrequest.h \
    getrelationaldatabaseeventsrequest_p.h \
    getrelationaldatabaseeventsresponse.h \
    getrelationaldatabaseeventsresponse_p.h \
    getrelationaldatabaselogeventsrequest.h \
    getrelationaldatabaselogeventsrequest_p.h \
    getrelationaldatabaselogeventsresponse.h \
    getrelationaldatabaselogeventsresponse_p.h \
    getrelationaldatabaselogstreamsrequest.h \
    getrelationaldatabaselogstreamsrequest_p.h \
    getrelationaldatabaselogstreamsresponse.h \
    getrelationaldatabaselogstreamsresponse_p.h \
    getrelationaldatabasemasteruserpasswordrequest.h \
    getrelationaldatabasemasteruserpasswordrequest_p.h \
    getrelationaldatabasemasteruserpasswordresponse.h \
    getrelationaldatabasemasteruserpasswordresponse_p.h \
    getrelationaldatabasemetricdatarequest.h \
    getrelationaldatabasemetricdatarequest_p.h \
    getrelationaldatabasemetricdataresponse.h \
    getrelationaldatabasemetricdataresponse_p.h \
    getrelationaldatabaseparametersrequest.h \
    getrelationaldatabaseparametersrequest_p.h \
    getrelationaldatabaseparametersresponse.h \
    getrelationaldatabaseparametersresponse_p.h \
    getrelationaldatabaserequest.h \
    getrelationaldatabaserequest_p.h \
    getrelationaldatabaseresponse.h \
    getrelationaldatabaseresponse_p.h \
    getrelationaldatabasesnapshotrequest.h \
    getrelationaldatabasesnapshotrequest_p.h \
    getrelationaldatabasesnapshotresponse.h \
    getrelationaldatabasesnapshotresponse_p.h \
    getrelationaldatabasesnapshotsrequest.h \
    getrelationaldatabasesnapshotsrequest_p.h \
    getrelationaldatabasesnapshotsresponse.h \
    getrelationaldatabasesnapshotsresponse_p.h \
    getrelationaldatabasesrequest.h \
    getrelationaldatabasesrequest_p.h \
    getrelationaldatabasesresponse.h \
    getrelationaldatabasesresponse_p.h \
    getstaticiprequest.h \
    getstaticiprequest_p.h \
    getstaticipresponse.h \
    getstaticipresponse_p.h \
    getstaticipsrequest.h \
    getstaticipsrequest_p.h \
    getstaticipsresponse.h \
    getstaticipsresponse_p.h \
    importkeypairrequest.h \
    importkeypairrequest_p.h \
    importkeypairresponse.h \
    importkeypairresponse_p.h \
    isvpcpeeredrequest.h \
    isvpcpeeredrequest_p.h \
    isvpcpeeredresponse.h \
    isvpcpeeredresponse_p.h \
    lightsailclient.h \
    lightsailclient_p.h \
    lightsailrequest.h \
    lightsailrequest_p.h \
    lightsailresponse.h \
    lightsailresponse_p.h \
    openinstancepublicportsrequest.h \
    openinstancepublicportsrequest_p.h \
    openinstancepublicportsresponse.h \
    openinstancepublicportsresponse_p.h \
    peervpcrequest.h \
    peervpcrequest_p.h \
    peervpcresponse.h \
    peervpcresponse_p.h \
    putinstancepublicportsrequest.h \
    putinstancepublicportsrequest_p.h \
    putinstancepublicportsresponse.h \
    putinstancepublicportsresponse_p.h \
    rebootinstancerequest.h \
    rebootinstancerequest_p.h \
    rebootinstanceresponse.h \
    rebootinstanceresponse_p.h \
    rebootrelationaldatabaserequest.h \
    rebootrelationaldatabaserequest_p.h \
    rebootrelationaldatabaseresponse.h \
    rebootrelationaldatabaseresponse_p.h \
    releasestaticiprequest.h \
    releasestaticiprequest_p.h \
    releasestaticipresponse.h \
    releasestaticipresponse_p.h \
    startinstancerequest.h \
    startinstancerequest_p.h \
    startinstanceresponse.h \
    startinstanceresponse_p.h \
    startrelationaldatabaserequest.h \
    startrelationaldatabaserequest_p.h \
    startrelationaldatabaseresponse.h \
    startrelationaldatabaseresponse_p.h \
    stopinstancerequest.h \
    stopinstancerequest_p.h \
    stopinstanceresponse.h \
    stopinstanceresponse_p.h \
    stoprelationaldatabaserequest.h \
    stoprelationaldatabaserequest_p.h \
    stoprelationaldatabaseresponse.h \
    stoprelationaldatabaseresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    unpeervpcrequest.h \
    unpeervpcrequest_p.h \
    unpeervpcresponse.h \
    unpeervpcresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatedomainentryrequest.h \
    updatedomainentryrequest_p.h \
    updatedomainentryresponse.h \
    updatedomainentryresponse_p.h \
    updateloadbalancerattributerequest.h \
    updateloadbalancerattributerequest_p.h \
    updateloadbalancerattributeresponse.h \
    updateloadbalancerattributeresponse_p.h \
    updaterelationaldatabaseparametersrequest.h \
    updaterelationaldatabaseparametersrequest_p.h \
    updaterelationaldatabaseparametersresponse.h \
    updaterelationaldatabaseparametersresponse_p.h \
    updaterelationaldatabaserequest.h \
    updaterelationaldatabaserequest_p.h \
    updaterelationaldatabaseresponse.h \
    updaterelationaldatabaseresponse_p.h \

SOURCES += \
    allocatestaticiprequest.cpp \
    allocatestaticipresponse.cpp \
    attachdiskrequest.cpp \
    attachdiskresponse.cpp \
    attachinstancestoloadbalancerrequest.cpp \
    attachinstancestoloadbalancerresponse.cpp \
    attachloadbalancertlscertificaterequest.cpp \
    attachloadbalancertlscertificateresponse.cpp \
    attachstaticiprequest.cpp \
    attachstaticipresponse.cpp \
    closeinstancepublicportsrequest.cpp \
    closeinstancepublicportsresponse.cpp \
    copysnapshotrequest.cpp \
    copysnapshotresponse.cpp \
    createcloudformationstackrequest.cpp \
    createcloudformationstackresponse.cpp \
    creatediskfromsnapshotrequest.cpp \
    creatediskfromsnapshotresponse.cpp \
    creatediskrequest.cpp \
    creatediskresponse.cpp \
    createdisksnapshotrequest.cpp \
    createdisksnapshotresponse.cpp \
    createdomainentryrequest.cpp \
    createdomainentryresponse.cpp \
    createdomainrequest.cpp \
    createdomainresponse.cpp \
    createinstancesfromsnapshotrequest.cpp \
    createinstancesfromsnapshotresponse.cpp \
    createinstancesnapshotrequest.cpp \
    createinstancesnapshotresponse.cpp \
    createinstancesrequest.cpp \
    createinstancesresponse.cpp \
    createkeypairrequest.cpp \
    createkeypairresponse.cpp \
    createloadbalancerrequest.cpp \
    createloadbalancerresponse.cpp \
    createloadbalancertlscertificaterequest.cpp \
    createloadbalancertlscertificateresponse.cpp \
    createrelationaldatabasefromsnapshotrequest.cpp \
    createrelationaldatabasefromsnapshotresponse.cpp \
    createrelationaldatabaserequest.cpp \
    createrelationaldatabaseresponse.cpp \
    createrelationaldatabasesnapshotrequest.cpp \
    createrelationaldatabasesnapshotresponse.cpp \
    deletediskrequest.cpp \
    deletediskresponse.cpp \
    deletedisksnapshotrequest.cpp \
    deletedisksnapshotresponse.cpp \
    deletedomainentryrequest.cpp \
    deletedomainentryresponse.cpp \
    deletedomainrequest.cpp \
    deletedomainresponse.cpp \
    deleteinstancerequest.cpp \
    deleteinstanceresponse.cpp \
    deleteinstancesnapshotrequest.cpp \
    deleteinstancesnapshotresponse.cpp \
    deletekeypairrequest.cpp \
    deletekeypairresponse.cpp \
    deleteloadbalancerrequest.cpp \
    deleteloadbalancerresponse.cpp \
    deleteloadbalancertlscertificaterequest.cpp \
    deleteloadbalancertlscertificateresponse.cpp \
    deleterelationaldatabaserequest.cpp \
    deleterelationaldatabaseresponse.cpp \
    deleterelationaldatabasesnapshotrequest.cpp \
    deleterelationaldatabasesnapshotresponse.cpp \
    detachdiskrequest.cpp \
    detachdiskresponse.cpp \
    detachinstancesfromloadbalancerrequest.cpp \
    detachinstancesfromloadbalancerresponse.cpp \
    detachstaticiprequest.cpp \
    detachstaticipresponse.cpp \
    downloaddefaultkeypairrequest.cpp \
    downloaddefaultkeypairresponse.cpp \
    exportsnapshotrequest.cpp \
    exportsnapshotresponse.cpp \
    getactivenamesrequest.cpp \
    getactivenamesresponse.cpp \
    getblueprintsrequest.cpp \
    getblueprintsresponse.cpp \
    getbundlesrequest.cpp \
    getbundlesresponse.cpp \
    getcloudformationstackrecordsrequest.cpp \
    getcloudformationstackrecordsresponse.cpp \
    getdiskrequest.cpp \
    getdiskresponse.cpp \
    getdisksnapshotrequest.cpp \
    getdisksnapshotresponse.cpp \
    getdisksnapshotsrequest.cpp \
    getdisksnapshotsresponse.cpp \
    getdisksrequest.cpp \
    getdisksresponse.cpp \
    getdomainrequest.cpp \
    getdomainresponse.cpp \
    getdomainsrequest.cpp \
    getdomainsresponse.cpp \
    getexportsnapshotrecordsrequest.cpp \
    getexportsnapshotrecordsresponse.cpp \
    getinstanceaccessdetailsrequest.cpp \
    getinstanceaccessdetailsresponse.cpp \
    getinstancemetricdatarequest.cpp \
    getinstancemetricdataresponse.cpp \
    getinstanceportstatesrequest.cpp \
    getinstanceportstatesresponse.cpp \
    getinstancerequest.cpp \
    getinstanceresponse.cpp \
    getinstancesnapshotrequest.cpp \
    getinstancesnapshotresponse.cpp \
    getinstancesnapshotsrequest.cpp \
    getinstancesnapshotsresponse.cpp \
    getinstancesrequest.cpp \
    getinstancesresponse.cpp \
    getinstancestaterequest.cpp \
    getinstancestateresponse.cpp \
    getkeypairrequest.cpp \
    getkeypairresponse.cpp \
    getkeypairsrequest.cpp \
    getkeypairsresponse.cpp \
    getloadbalancermetricdatarequest.cpp \
    getloadbalancermetricdataresponse.cpp \
    getloadbalancerrequest.cpp \
    getloadbalancerresponse.cpp \
    getloadbalancersrequest.cpp \
    getloadbalancersresponse.cpp \
    getloadbalancertlscertificatesrequest.cpp \
    getloadbalancertlscertificatesresponse.cpp \
    getoperationrequest.cpp \
    getoperationresponse.cpp \
    getoperationsforresourcerequest.cpp \
    getoperationsforresourceresponse.cpp \
    getoperationsrequest.cpp \
    getoperationsresponse.cpp \
    getregionsrequest.cpp \
    getregionsresponse.cpp \
    getrelationaldatabaseblueprintsrequest.cpp \
    getrelationaldatabaseblueprintsresponse.cpp \
    getrelationaldatabasebundlesrequest.cpp \
    getrelationaldatabasebundlesresponse.cpp \
    getrelationaldatabaseeventsrequest.cpp \
    getrelationaldatabaseeventsresponse.cpp \
    getrelationaldatabaselogeventsrequest.cpp \
    getrelationaldatabaselogeventsresponse.cpp \
    getrelationaldatabaselogstreamsrequest.cpp \
    getrelationaldatabaselogstreamsresponse.cpp \
    getrelationaldatabasemasteruserpasswordrequest.cpp \
    getrelationaldatabasemasteruserpasswordresponse.cpp \
    getrelationaldatabasemetricdatarequest.cpp \
    getrelationaldatabasemetricdataresponse.cpp \
    getrelationaldatabaseparametersrequest.cpp \
    getrelationaldatabaseparametersresponse.cpp \
    getrelationaldatabaserequest.cpp \
    getrelationaldatabaseresponse.cpp \
    getrelationaldatabasesnapshotrequest.cpp \
    getrelationaldatabasesnapshotresponse.cpp \
    getrelationaldatabasesnapshotsrequest.cpp \
    getrelationaldatabasesnapshotsresponse.cpp \
    getrelationaldatabasesrequest.cpp \
    getrelationaldatabasesresponse.cpp \
    getstaticiprequest.cpp \
    getstaticipresponse.cpp \
    getstaticipsrequest.cpp \
    getstaticipsresponse.cpp \
    importkeypairrequest.cpp \
    importkeypairresponse.cpp \
    isvpcpeeredrequest.cpp \
    isvpcpeeredresponse.cpp \
    lightsailclient.cpp \
    lightsailrequest.cpp \
    lightsailresponse.cpp \
    openinstancepublicportsrequest.cpp \
    openinstancepublicportsresponse.cpp \
    peervpcrequest.cpp \
    peervpcresponse.cpp \
    putinstancepublicportsrequest.cpp \
    putinstancepublicportsresponse.cpp \
    rebootinstancerequest.cpp \
    rebootinstanceresponse.cpp \
    rebootrelationaldatabaserequest.cpp \
    rebootrelationaldatabaseresponse.cpp \
    releasestaticiprequest.cpp \
    releasestaticipresponse.cpp \
    startinstancerequest.cpp \
    startinstanceresponse.cpp \
    startrelationaldatabaserequest.cpp \
    startrelationaldatabaseresponse.cpp \
    stopinstancerequest.cpp \
    stopinstanceresponse.cpp \
    stoprelationaldatabaserequest.cpp \
    stoprelationaldatabaseresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    unpeervpcrequest.cpp \
    unpeervpcresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatedomainentryrequest.cpp \
    updatedomainentryresponse.cpp \
    updateloadbalancerattributerequest.cpp \
    updateloadbalancerattributeresponse.cpp \
    updaterelationaldatabaseparametersrequest.cpp \
    updaterelationaldatabaseparametersresponse.cpp \
    updaterelationaldatabaserequest.cpp \
    updaterelationaldatabaseresponse.cpp \

win32:CONFIG += skip_target_version_ext
