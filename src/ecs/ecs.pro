include(../../common.pri)

TARGET = QtAwsEcs
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createclusterrequest.h \
    createclusterrequest_p.h \
    createclusterresponse.h \
    createclusterresponse_p.h \
    createservicerequest.h \
    createservicerequest_p.h \
    createserviceresponse.h \
    createserviceresponse_p.h \
    createtasksetrequest.h \
    createtasksetrequest_p.h \
    createtasksetresponse.h \
    createtasksetresponse_p.h \
    deleteaccountsettingrequest.h \
    deleteaccountsettingrequest_p.h \
    deleteaccountsettingresponse.h \
    deleteaccountsettingresponse_p.h \
    deleteattributesrequest.h \
    deleteattributesrequest_p.h \
    deleteattributesresponse.h \
    deleteattributesresponse_p.h \
    deleteclusterrequest.h \
    deleteclusterrequest_p.h \
    deleteclusterresponse.h \
    deleteclusterresponse_p.h \
    deleteservicerequest.h \
    deleteservicerequest_p.h \
    deleteserviceresponse.h \
    deleteserviceresponse_p.h \
    deletetasksetrequest.h \
    deletetasksetrequest_p.h \
    deletetasksetresponse.h \
    deletetasksetresponse_p.h \
    deregistercontainerinstancerequest.h \
    deregistercontainerinstancerequest_p.h \
    deregistercontainerinstanceresponse.h \
    deregistercontainerinstanceresponse_p.h \
    deregistertaskdefinitionrequest.h \
    deregistertaskdefinitionrequest_p.h \
    deregistertaskdefinitionresponse.h \
    deregistertaskdefinitionresponse_p.h \
    describeclustersrequest.h \
    describeclustersrequest_p.h \
    describeclustersresponse.h \
    describeclustersresponse_p.h \
    describecontainerinstancesrequest.h \
    describecontainerinstancesrequest_p.h \
    describecontainerinstancesresponse.h \
    describecontainerinstancesresponse_p.h \
    describeservicesrequest.h \
    describeservicesrequest_p.h \
    describeservicesresponse.h \
    describeservicesresponse_p.h \
    describetaskdefinitionrequest.h \
    describetaskdefinitionrequest_p.h \
    describetaskdefinitionresponse.h \
    describetaskdefinitionresponse_p.h \
    describetasksetsrequest.h \
    describetasksetsrequest_p.h \
    describetasksetsresponse.h \
    describetasksetsresponse_p.h \
    describetasksrequest.h \
    describetasksrequest_p.h \
    describetasksresponse.h \
    describetasksresponse_p.h \
    discoverpollendpointrequest.h \
    discoverpollendpointrequest_p.h \
    discoverpollendpointresponse.h \
    discoverpollendpointresponse_p.h \
    ecsclient.h \
    ecsclient_p.h \
    ecsrequest.h \
    ecsrequest_p.h \
    ecsresponse.h \
    ecsresponse_p.h \
    listaccountsettingsrequest.h \
    listaccountsettingsrequest_p.h \
    listaccountsettingsresponse.h \
    listaccountsettingsresponse_p.h \
    listattributesrequest.h \
    listattributesrequest_p.h \
    listattributesresponse.h \
    listattributesresponse_p.h \
    listclustersrequest.h \
    listclustersrequest_p.h \
    listclustersresponse.h \
    listclustersresponse_p.h \
    listcontainerinstancesrequest.h \
    listcontainerinstancesrequest_p.h \
    listcontainerinstancesresponse.h \
    listcontainerinstancesresponse_p.h \
    listservicesrequest.h \
    listservicesrequest_p.h \
    listservicesresponse.h \
    listservicesresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listtaskdefinitionfamiliesrequest.h \
    listtaskdefinitionfamiliesrequest_p.h \
    listtaskdefinitionfamiliesresponse.h \
    listtaskdefinitionfamiliesresponse_p.h \
    listtaskdefinitionsrequest.h \
    listtaskdefinitionsrequest_p.h \
    listtaskdefinitionsresponse.h \
    listtaskdefinitionsresponse_p.h \
    listtasksrequest.h \
    listtasksrequest_p.h \
    listtasksresponse.h \
    listtasksresponse_p.h \
    putaccountsettingdefaultrequest.h \
    putaccountsettingdefaultrequest_p.h \
    putaccountsettingdefaultresponse.h \
    putaccountsettingdefaultresponse_p.h \
    putaccountsettingrequest.h \
    putaccountsettingrequest_p.h \
    putaccountsettingresponse.h \
    putaccountsettingresponse_p.h \
    putattributesrequest.h \
    putattributesrequest_p.h \
    putattributesresponse.h \
    putattributesresponse_p.h \
    registercontainerinstancerequest.h \
    registercontainerinstancerequest_p.h \
    registercontainerinstanceresponse.h \
    registercontainerinstanceresponse_p.h \
    registertaskdefinitionrequest.h \
    registertaskdefinitionrequest_p.h \
    registertaskdefinitionresponse.h \
    registertaskdefinitionresponse_p.h \
    runtaskrequest.h \
    runtaskrequest_p.h \
    runtaskresponse.h \
    runtaskresponse_p.h \
    starttaskrequest.h \
    starttaskrequest_p.h \
    starttaskresponse.h \
    starttaskresponse_p.h \
    stoptaskrequest.h \
    stoptaskrequest_p.h \
    stoptaskresponse.h \
    stoptaskresponse_p.h \
    submitattachmentstatechangesrequest.h \
    submitattachmentstatechangesrequest_p.h \
    submitattachmentstatechangesresponse.h \
    submitattachmentstatechangesresponse_p.h \
    submitcontainerstatechangerequest.h \
    submitcontainerstatechangerequest_p.h \
    submitcontainerstatechangeresponse.h \
    submitcontainerstatechangeresponse_p.h \
    submittaskstatechangerequest.h \
    submittaskstatechangerequest_p.h \
    submittaskstatechangeresponse.h \
    submittaskstatechangeresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatecontaineragentrequest.h \
    updatecontaineragentrequest_p.h \
    updatecontaineragentresponse.h \
    updatecontaineragentresponse_p.h \
    updatecontainerinstancesstaterequest.h \
    updatecontainerinstancesstaterequest_p.h \
    updatecontainerinstancesstateresponse.h \
    updatecontainerinstancesstateresponse_p.h \
    updateserviceprimarytasksetrequest.h \
    updateserviceprimarytasksetrequest_p.h \
    updateserviceprimarytasksetresponse.h \
    updateserviceprimarytasksetresponse_p.h \
    updateservicerequest.h \
    updateservicerequest_p.h \
    updateserviceresponse.h \
    updateserviceresponse_p.h \
    updatetasksetrequest.h \
    updatetasksetrequest_p.h \
    updatetasksetresponse.h \
    updatetasksetresponse_p.h \

SOURCES += \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    createservicerequest.cpp \
    createserviceresponse.cpp \
    createtasksetrequest.cpp \
    createtasksetresponse.cpp \
    deleteaccountsettingrequest.cpp \
    deleteaccountsettingresponse.cpp \
    deleteattributesrequest.cpp \
    deleteattributesresponse.cpp \
    deleteclusterrequest.cpp \
    deleteclusterresponse.cpp \
    deleteservicerequest.cpp \
    deleteserviceresponse.cpp \
    deletetasksetrequest.cpp \
    deletetasksetresponse.cpp \
    deregistercontainerinstancerequest.cpp \
    deregistercontainerinstanceresponse.cpp \
    deregistertaskdefinitionrequest.cpp \
    deregistertaskdefinitionresponse.cpp \
    describeclustersrequest.cpp \
    describeclustersresponse.cpp \
    describecontainerinstancesrequest.cpp \
    describecontainerinstancesresponse.cpp \
    describeservicesrequest.cpp \
    describeservicesresponse.cpp \
    describetaskdefinitionrequest.cpp \
    describetaskdefinitionresponse.cpp \
    describetasksetsrequest.cpp \
    describetasksetsresponse.cpp \
    describetasksrequest.cpp \
    describetasksresponse.cpp \
    discoverpollendpointrequest.cpp \
    discoverpollendpointresponse.cpp \
    ecsclient.cpp \
    ecsrequest.cpp \
    ecsresponse.cpp \
    listaccountsettingsrequest.cpp \
    listaccountsettingsresponse.cpp \
    listattributesrequest.cpp \
    listattributesresponse.cpp \
    listclustersrequest.cpp \
    listclustersresponse.cpp \
    listcontainerinstancesrequest.cpp \
    listcontainerinstancesresponse.cpp \
    listservicesrequest.cpp \
    listservicesresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listtaskdefinitionfamiliesrequest.cpp \
    listtaskdefinitionfamiliesresponse.cpp \
    listtaskdefinitionsrequest.cpp \
    listtaskdefinitionsresponse.cpp \
    listtasksrequest.cpp \
    listtasksresponse.cpp \
    putaccountsettingdefaultrequest.cpp \
    putaccountsettingdefaultresponse.cpp \
    putaccountsettingrequest.cpp \
    putaccountsettingresponse.cpp \
    putattributesrequest.cpp \
    putattributesresponse.cpp \
    registercontainerinstancerequest.cpp \
    registercontainerinstanceresponse.cpp \
    registertaskdefinitionrequest.cpp \
    registertaskdefinitionresponse.cpp \
    runtaskrequest.cpp \
    runtaskresponse.cpp \
    starttaskrequest.cpp \
    starttaskresponse.cpp \
    stoptaskrequest.cpp \
    stoptaskresponse.cpp \
    submitattachmentstatechangesrequest.cpp \
    submitattachmentstatechangesresponse.cpp \
    submitcontainerstatechangerequest.cpp \
    submitcontainerstatechangeresponse.cpp \
    submittaskstatechangerequest.cpp \
    submittaskstatechangeresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatecontaineragentrequest.cpp \
    updatecontaineragentresponse.cpp \
    updatecontainerinstancesstaterequest.cpp \
    updatecontainerinstancesstateresponse.cpp \
    updateserviceprimarytasksetrequest.cpp \
    updateserviceprimarytasksetresponse.cpp \
    updateservicerequest.cpp \
    updateserviceresponse.cpp \
    updatetasksetrequest.cpp \
    updatetasksetresponse.cpp \

win32:CONFIG += skip_target_version_ext
