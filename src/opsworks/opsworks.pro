include(../../common.pri)

TARGET = QtAwsOpsWorks
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    assigninstancerequest.h \
    assigninstancerequest_p.h \
    assigninstanceresponse.h \
    assigninstanceresponse_p.h \
    assignvolumerequest.h \
    assignvolumerequest_p.h \
    assignvolumeresponse.h \
    assignvolumeresponse_p.h \
    associateelasticiprequest.h \
    associateelasticiprequest_p.h \
    associateelasticipresponse.h \
    associateelasticipresponse_p.h \
    attachelasticloadbalancerrequest.h \
    attachelasticloadbalancerrequest_p.h \
    attachelasticloadbalancerresponse.h \
    attachelasticloadbalancerresponse_p.h \
    clonestackrequest.h \
    clonestackrequest_p.h \
    clonestackresponse.h \
    clonestackresponse_p.h \
    createapprequest.h \
    createapprequest_p.h \
    createappresponse.h \
    createappresponse_p.h \
    createdeploymentrequest.h \
    createdeploymentrequest_p.h \
    createdeploymentresponse.h \
    createdeploymentresponse_p.h \
    createinstancerequest.h \
    createinstancerequest_p.h \
    createinstanceresponse.h \
    createinstanceresponse_p.h \
    createlayerrequest.h \
    createlayerrequest_p.h \
    createlayerresponse.h \
    createlayerresponse_p.h \
    createstackrequest.h \
    createstackrequest_p.h \
    createstackresponse.h \
    createstackresponse_p.h \
    createuserprofilerequest.h \
    createuserprofilerequest_p.h \
    createuserprofileresponse.h \
    createuserprofileresponse_p.h \
    deleteapprequest.h \
    deleteapprequest_p.h \
    deleteappresponse.h \
    deleteappresponse_p.h \
    deleteinstancerequest.h \
    deleteinstancerequest_p.h \
    deleteinstanceresponse.h \
    deleteinstanceresponse_p.h \
    deletelayerrequest.h \
    deletelayerrequest_p.h \
    deletelayerresponse.h \
    deletelayerresponse_p.h \
    deletestackrequest.h \
    deletestackrequest_p.h \
    deletestackresponse.h \
    deletestackresponse_p.h \
    deleteuserprofilerequest.h \
    deleteuserprofilerequest_p.h \
    deleteuserprofileresponse.h \
    deleteuserprofileresponse_p.h \
    deregisterecsclusterrequest.h \
    deregisterecsclusterrequest_p.h \
    deregisterecsclusterresponse.h \
    deregisterecsclusterresponse_p.h \
    deregisterelasticiprequest.h \
    deregisterelasticiprequest_p.h \
    deregisterelasticipresponse.h \
    deregisterelasticipresponse_p.h \
    deregisterinstancerequest.h \
    deregisterinstancerequest_p.h \
    deregisterinstanceresponse.h \
    deregisterinstanceresponse_p.h \
    deregisterrdsdbinstancerequest.h \
    deregisterrdsdbinstancerequest_p.h \
    deregisterrdsdbinstanceresponse.h \
    deregisterrdsdbinstanceresponse_p.h \
    deregistervolumerequest.h \
    deregistervolumerequest_p.h \
    deregistervolumeresponse.h \
    deregistervolumeresponse_p.h \
    describeagentversionsrequest.h \
    describeagentversionsrequest_p.h \
    describeagentversionsresponse.h \
    describeagentversionsresponse_p.h \
    describeappsrequest.h \
    describeappsrequest_p.h \
    describeappsresponse.h \
    describeappsresponse_p.h \
    describecommandsrequest.h \
    describecommandsrequest_p.h \
    describecommandsresponse.h \
    describecommandsresponse_p.h \
    describedeploymentsrequest.h \
    describedeploymentsrequest_p.h \
    describedeploymentsresponse.h \
    describedeploymentsresponse_p.h \
    describeecsclustersrequest.h \
    describeecsclustersrequest_p.h \
    describeecsclustersresponse.h \
    describeecsclustersresponse_p.h \
    describeelasticipsrequest.h \
    describeelasticipsrequest_p.h \
    describeelasticipsresponse.h \
    describeelasticipsresponse_p.h \
    describeelasticloadbalancersrequest.h \
    describeelasticloadbalancersrequest_p.h \
    describeelasticloadbalancersresponse.h \
    describeelasticloadbalancersresponse_p.h \
    describeinstancesrequest.h \
    describeinstancesrequest_p.h \
    describeinstancesresponse.h \
    describeinstancesresponse_p.h \
    describelayersrequest.h \
    describelayersrequest_p.h \
    describelayersresponse.h \
    describelayersresponse_p.h \
    describeloadbasedautoscalingrequest.h \
    describeloadbasedautoscalingrequest_p.h \
    describeloadbasedautoscalingresponse.h \
    describeloadbasedautoscalingresponse_p.h \
    describemyuserprofilerequest.h \
    describemyuserprofilerequest_p.h \
    describemyuserprofileresponse.h \
    describemyuserprofileresponse_p.h \
    describeoperatingsystemsrequest.h \
    describeoperatingsystemsrequest_p.h \
    describeoperatingsystemsresponse.h \
    describeoperatingsystemsresponse_p.h \
    describepermissionsrequest.h \
    describepermissionsrequest_p.h \
    describepermissionsresponse.h \
    describepermissionsresponse_p.h \
    describeraidarraysrequest.h \
    describeraidarraysrequest_p.h \
    describeraidarraysresponse.h \
    describeraidarraysresponse_p.h \
    describerdsdbinstancesrequest.h \
    describerdsdbinstancesrequest_p.h \
    describerdsdbinstancesresponse.h \
    describerdsdbinstancesresponse_p.h \
    describeserviceerrorsrequest.h \
    describeserviceerrorsrequest_p.h \
    describeserviceerrorsresponse.h \
    describeserviceerrorsresponse_p.h \
    describestackprovisioningparametersrequest.h \
    describestackprovisioningparametersrequest_p.h \
    describestackprovisioningparametersresponse.h \
    describestackprovisioningparametersresponse_p.h \
    describestacksrequest.h \
    describestacksrequest_p.h \
    describestacksresponse.h \
    describestacksresponse_p.h \
    describestacksummaryrequest.h \
    describestacksummaryrequest_p.h \
    describestacksummaryresponse.h \
    describestacksummaryresponse_p.h \
    describetimebasedautoscalingrequest.h \
    describetimebasedautoscalingrequest_p.h \
    describetimebasedautoscalingresponse.h \
    describetimebasedautoscalingresponse_p.h \
    describeuserprofilesrequest.h \
    describeuserprofilesrequest_p.h \
    describeuserprofilesresponse.h \
    describeuserprofilesresponse_p.h \
    describevolumesrequest.h \
    describevolumesrequest_p.h \
    describevolumesresponse.h \
    describevolumesresponse_p.h \
    detachelasticloadbalancerrequest.h \
    detachelasticloadbalancerrequest_p.h \
    detachelasticloadbalancerresponse.h \
    detachelasticloadbalancerresponse_p.h \
    disassociateelasticiprequest.h \
    disassociateelasticiprequest_p.h \
    disassociateelasticipresponse.h \
    disassociateelasticipresponse_p.h \
    gethostnamesuggestionrequest.h \
    gethostnamesuggestionrequest_p.h \
    gethostnamesuggestionresponse.h \
    gethostnamesuggestionresponse_p.h \
    grantaccessrequest.h \
    grantaccessrequest_p.h \
    grantaccessresponse.h \
    grantaccessresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    opsworksclient.h \
    opsworksclient_p.h \
    opsworksrequest.h \
    opsworksrequest_p.h \
    opsworksresponse.h \
    opsworksresponse_p.h \
    rebootinstancerequest.h \
    rebootinstancerequest_p.h \
    rebootinstanceresponse.h \
    rebootinstanceresponse_p.h \
    registerecsclusterrequest.h \
    registerecsclusterrequest_p.h \
    registerecsclusterresponse.h \
    registerecsclusterresponse_p.h \
    registerelasticiprequest.h \
    registerelasticiprequest_p.h \
    registerelasticipresponse.h \
    registerelasticipresponse_p.h \
    registerinstancerequest.h \
    registerinstancerequest_p.h \
    registerinstanceresponse.h \
    registerinstanceresponse_p.h \
    registerrdsdbinstancerequest.h \
    registerrdsdbinstancerequest_p.h \
    registerrdsdbinstanceresponse.h \
    registerrdsdbinstanceresponse_p.h \
    registervolumerequest.h \
    registervolumerequest_p.h \
    registervolumeresponse.h \
    registervolumeresponse_p.h \
    setloadbasedautoscalingrequest.h \
    setloadbasedautoscalingrequest_p.h \
    setloadbasedautoscalingresponse.h \
    setloadbasedautoscalingresponse_p.h \
    setpermissionrequest.h \
    setpermissionrequest_p.h \
    setpermissionresponse.h \
    setpermissionresponse_p.h \
    settimebasedautoscalingrequest.h \
    settimebasedautoscalingrequest_p.h \
    settimebasedautoscalingresponse.h \
    settimebasedautoscalingresponse_p.h \
    startinstancerequest.h \
    startinstancerequest_p.h \
    startinstanceresponse.h \
    startinstanceresponse_p.h \
    startstackrequest.h \
    startstackrequest_p.h \
    startstackresponse.h \
    startstackresponse_p.h \
    stopinstancerequest.h \
    stopinstancerequest_p.h \
    stopinstanceresponse.h \
    stopinstanceresponse_p.h \
    stopstackrequest.h \
    stopstackrequest_p.h \
    stopstackresponse.h \
    stopstackresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    unassigninstancerequest.h \
    unassigninstancerequest_p.h \
    unassigninstanceresponse.h \
    unassigninstanceresponse_p.h \
    unassignvolumerequest.h \
    unassignvolumerequest_p.h \
    unassignvolumeresponse.h \
    unassignvolumeresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateapprequest.h \
    updateapprequest_p.h \
    updateappresponse.h \
    updateappresponse_p.h \
    updateelasticiprequest.h \
    updateelasticiprequest_p.h \
    updateelasticipresponse.h \
    updateelasticipresponse_p.h \
    updateinstancerequest.h \
    updateinstancerequest_p.h \
    updateinstanceresponse.h \
    updateinstanceresponse_p.h \
    updatelayerrequest.h \
    updatelayerrequest_p.h \
    updatelayerresponse.h \
    updatelayerresponse_p.h \
    updatemyuserprofilerequest.h \
    updatemyuserprofilerequest_p.h \
    updatemyuserprofileresponse.h \
    updatemyuserprofileresponse_p.h \
    updaterdsdbinstancerequest.h \
    updaterdsdbinstancerequest_p.h \
    updaterdsdbinstanceresponse.h \
    updaterdsdbinstanceresponse_p.h \
    updatestackrequest.h \
    updatestackrequest_p.h \
    updatestackresponse.h \
    updatestackresponse_p.h \
    updateuserprofilerequest.h \
    updateuserprofilerequest_p.h \
    updateuserprofileresponse.h \
    updateuserprofileresponse_p.h \
    updatevolumerequest.h \
    updatevolumerequest_p.h \
    updatevolumeresponse.h \
    updatevolumeresponse_p.h \

SOURCES += \
    assigninstancerequest.cpp \
    assigninstanceresponse.cpp \
    assignvolumerequest.cpp \
    assignvolumeresponse.cpp \
    associateelasticiprequest.cpp \
    associateelasticipresponse.cpp \
    attachelasticloadbalancerrequest.cpp \
    attachelasticloadbalancerresponse.cpp \
    clonestackrequest.cpp \
    clonestackresponse.cpp \
    createapprequest.cpp \
    createappresponse.cpp \
    createdeploymentrequest.cpp \
    createdeploymentresponse.cpp \
    createinstancerequest.cpp \
    createinstanceresponse.cpp \
    createlayerrequest.cpp \
    createlayerresponse.cpp \
    createstackrequest.cpp \
    createstackresponse.cpp \
    createuserprofilerequest.cpp \
    createuserprofileresponse.cpp \
    deleteapprequest.cpp \
    deleteappresponse.cpp \
    deleteinstancerequest.cpp \
    deleteinstanceresponse.cpp \
    deletelayerrequest.cpp \
    deletelayerresponse.cpp \
    deletestackrequest.cpp \
    deletestackresponse.cpp \
    deleteuserprofilerequest.cpp \
    deleteuserprofileresponse.cpp \
    deregisterecsclusterrequest.cpp \
    deregisterecsclusterresponse.cpp \
    deregisterelasticiprequest.cpp \
    deregisterelasticipresponse.cpp \
    deregisterinstancerequest.cpp \
    deregisterinstanceresponse.cpp \
    deregisterrdsdbinstancerequest.cpp \
    deregisterrdsdbinstanceresponse.cpp \
    deregistervolumerequest.cpp \
    deregistervolumeresponse.cpp \
    describeagentversionsrequest.cpp \
    describeagentversionsresponse.cpp \
    describeappsrequest.cpp \
    describeappsresponse.cpp \
    describecommandsrequest.cpp \
    describecommandsresponse.cpp \
    describedeploymentsrequest.cpp \
    describedeploymentsresponse.cpp \
    describeecsclustersrequest.cpp \
    describeecsclustersresponse.cpp \
    describeelasticipsrequest.cpp \
    describeelasticipsresponse.cpp \
    describeelasticloadbalancersrequest.cpp \
    describeelasticloadbalancersresponse.cpp \
    describeinstancesrequest.cpp \
    describeinstancesresponse.cpp \
    describelayersrequest.cpp \
    describelayersresponse.cpp \
    describeloadbasedautoscalingrequest.cpp \
    describeloadbasedautoscalingresponse.cpp \
    describemyuserprofilerequest.cpp \
    describemyuserprofileresponse.cpp \
    describeoperatingsystemsrequest.cpp \
    describeoperatingsystemsresponse.cpp \
    describepermissionsrequest.cpp \
    describepermissionsresponse.cpp \
    describeraidarraysrequest.cpp \
    describeraidarraysresponse.cpp \
    describerdsdbinstancesrequest.cpp \
    describerdsdbinstancesresponse.cpp \
    describeserviceerrorsrequest.cpp \
    describeserviceerrorsresponse.cpp \
    describestackprovisioningparametersrequest.cpp \
    describestackprovisioningparametersresponse.cpp \
    describestacksrequest.cpp \
    describestacksresponse.cpp \
    describestacksummaryrequest.cpp \
    describestacksummaryresponse.cpp \
    describetimebasedautoscalingrequest.cpp \
    describetimebasedautoscalingresponse.cpp \
    describeuserprofilesrequest.cpp \
    describeuserprofilesresponse.cpp \
    describevolumesrequest.cpp \
    describevolumesresponse.cpp \
    detachelasticloadbalancerrequest.cpp \
    detachelasticloadbalancerresponse.cpp \
    disassociateelasticiprequest.cpp \
    disassociateelasticipresponse.cpp \
    gethostnamesuggestionrequest.cpp \
    gethostnamesuggestionresponse.cpp \
    grantaccessrequest.cpp \
    grantaccessresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    opsworksclient.cpp \
    opsworksrequest.cpp \
    opsworksresponse.cpp \
    rebootinstancerequest.cpp \
    rebootinstanceresponse.cpp \
    registerecsclusterrequest.cpp \
    registerecsclusterresponse.cpp \
    registerelasticiprequest.cpp \
    registerelasticipresponse.cpp \
    registerinstancerequest.cpp \
    registerinstanceresponse.cpp \
    registerrdsdbinstancerequest.cpp \
    registerrdsdbinstanceresponse.cpp \
    registervolumerequest.cpp \
    registervolumeresponse.cpp \
    setloadbasedautoscalingrequest.cpp \
    setloadbasedautoscalingresponse.cpp \
    setpermissionrequest.cpp \
    setpermissionresponse.cpp \
    settimebasedautoscalingrequest.cpp \
    settimebasedautoscalingresponse.cpp \
    startinstancerequest.cpp \
    startinstanceresponse.cpp \
    startstackrequest.cpp \
    startstackresponse.cpp \
    stopinstancerequest.cpp \
    stopinstanceresponse.cpp \
    stopstackrequest.cpp \
    stopstackresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    unassigninstancerequest.cpp \
    unassigninstanceresponse.cpp \
    unassignvolumerequest.cpp \
    unassignvolumeresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateapprequest.cpp \
    updateappresponse.cpp \
    updateelasticiprequest.cpp \
    updateelasticipresponse.cpp \
    updateinstancerequest.cpp \
    updateinstanceresponse.cpp \
    updatelayerrequest.cpp \
    updatelayerresponse.cpp \
    updatemyuserprofilerequest.cpp \
    updatemyuserprofileresponse.cpp \
    updaterdsdbinstancerequest.cpp \
    updaterdsdbinstanceresponse.cpp \
    updatestackrequest.cpp \
    updatestackresponse.cpp \
    updateuserprofilerequest.cpp \
    updateuserprofileresponse.cpp \
    updatevolumerequest.cpp \
    updatevolumeresponse.cpp \

win32:CONFIG += skip_target_version_ext
