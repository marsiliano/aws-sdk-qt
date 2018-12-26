include(../../common.pri)

TARGET = QtAwsSageMaker
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    createalgorithmrequest.h \
    createalgorithmrequest_p.h \
    createalgorithmresponse.h \
    createalgorithmresponse_p.h \
    createcoderepositoryrequest.h \
    createcoderepositoryrequest_p.h \
    createcoderepositoryresponse.h \
    createcoderepositoryresponse_p.h \
    createcompilationjobrequest.h \
    createcompilationjobrequest_p.h \
    createcompilationjobresponse.h \
    createcompilationjobresponse_p.h \
    createendpointconfigrequest.h \
    createendpointconfigrequest_p.h \
    createendpointconfigresponse.h \
    createendpointconfigresponse_p.h \
    createendpointrequest.h \
    createendpointrequest_p.h \
    createendpointresponse.h \
    createendpointresponse_p.h \
    createhyperparametertuningjobrequest.h \
    createhyperparametertuningjobrequest_p.h \
    createhyperparametertuningjobresponse.h \
    createhyperparametertuningjobresponse_p.h \
    createlabelingjobrequest.h \
    createlabelingjobrequest_p.h \
    createlabelingjobresponse.h \
    createlabelingjobresponse_p.h \
    createmodelpackagerequest.h \
    createmodelpackagerequest_p.h \
    createmodelpackageresponse.h \
    createmodelpackageresponse_p.h \
    createmodelrequest.h \
    createmodelrequest_p.h \
    createmodelresponse.h \
    createmodelresponse_p.h \
    createnotebookinstancelifecycleconfigrequest.h \
    createnotebookinstancelifecycleconfigrequest_p.h \
    createnotebookinstancelifecycleconfigresponse.h \
    createnotebookinstancelifecycleconfigresponse_p.h \
    createnotebookinstancerequest.h \
    createnotebookinstancerequest_p.h \
    createnotebookinstanceresponse.h \
    createnotebookinstanceresponse_p.h \
    createpresignednotebookinstanceurlrequest.h \
    createpresignednotebookinstanceurlrequest_p.h \
    createpresignednotebookinstanceurlresponse.h \
    createpresignednotebookinstanceurlresponse_p.h \
    createtrainingjobrequest.h \
    createtrainingjobrequest_p.h \
    createtrainingjobresponse.h \
    createtrainingjobresponse_p.h \
    createtransformjobrequest.h \
    createtransformjobrequest_p.h \
    createtransformjobresponse.h \
    createtransformjobresponse_p.h \
    createworkteamrequest.h \
    createworkteamrequest_p.h \
    createworkteamresponse.h \
    createworkteamresponse_p.h \
    deletealgorithmrequest.h \
    deletealgorithmrequest_p.h \
    deletealgorithmresponse.h \
    deletealgorithmresponse_p.h \
    deletecoderepositoryrequest.h \
    deletecoderepositoryrequest_p.h \
    deletecoderepositoryresponse.h \
    deletecoderepositoryresponse_p.h \
    deleteendpointconfigrequest.h \
    deleteendpointconfigrequest_p.h \
    deleteendpointconfigresponse.h \
    deleteendpointconfigresponse_p.h \
    deleteendpointrequest.h \
    deleteendpointrequest_p.h \
    deleteendpointresponse.h \
    deleteendpointresponse_p.h \
    deletemodelpackagerequest.h \
    deletemodelpackagerequest_p.h \
    deletemodelpackageresponse.h \
    deletemodelpackageresponse_p.h \
    deletemodelrequest.h \
    deletemodelrequest_p.h \
    deletemodelresponse.h \
    deletemodelresponse_p.h \
    deletenotebookinstancelifecycleconfigrequest.h \
    deletenotebookinstancelifecycleconfigrequest_p.h \
    deletenotebookinstancelifecycleconfigresponse.h \
    deletenotebookinstancelifecycleconfigresponse_p.h \
    deletenotebookinstancerequest.h \
    deletenotebookinstancerequest_p.h \
    deletenotebookinstanceresponse.h \
    deletenotebookinstanceresponse_p.h \
    deletetagsrequest.h \
    deletetagsrequest_p.h \
    deletetagsresponse.h \
    deletetagsresponse_p.h \
    deleteworkteamrequest.h \
    deleteworkteamrequest_p.h \
    deleteworkteamresponse.h \
    deleteworkteamresponse_p.h \
    describealgorithmrequest.h \
    describealgorithmrequest_p.h \
    describealgorithmresponse.h \
    describealgorithmresponse_p.h \
    describecoderepositoryrequest.h \
    describecoderepositoryrequest_p.h \
    describecoderepositoryresponse.h \
    describecoderepositoryresponse_p.h \
    describecompilationjobrequest.h \
    describecompilationjobrequest_p.h \
    describecompilationjobresponse.h \
    describecompilationjobresponse_p.h \
    describeendpointconfigrequest.h \
    describeendpointconfigrequest_p.h \
    describeendpointconfigresponse.h \
    describeendpointconfigresponse_p.h \
    describeendpointrequest.h \
    describeendpointrequest_p.h \
    describeendpointresponse.h \
    describeendpointresponse_p.h \
    describehyperparametertuningjobrequest.h \
    describehyperparametertuningjobrequest_p.h \
    describehyperparametertuningjobresponse.h \
    describehyperparametertuningjobresponse_p.h \
    describelabelingjobrequest.h \
    describelabelingjobrequest_p.h \
    describelabelingjobresponse.h \
    describelabelingjobresponse_p.h \
    describemodelpackagerequest.h \
    describemodelpackagerequest_p.h \
    describemodelpackageresponse.h \
    describemodelpackageresponse_p.h \
    describemodelrequest.h \
    describemodelrequest_p.h \
    describemodelresponse.h \
    describemodelresponse_p.h \
    describenotebookinstancelifecycleconfigrequest.h \
    describenotebookinstancelifecycleconfigrequest_p.h \
    describenotebookinstancelifecycleconfigresponse.h \
    describenotebookinstancelifecycleconfigresponse_p.h \
    describenotebookinstancerequest.h \
    describenotebookinstancerequest_p.h \
    describenotebookinstanceresponse.h \
    describenotebookinstanceresponse_p.h \
    describesubscribedworkteamrequest.h \
    describesubscribedworkteamrequest_p.h \
    describesubscribedworkteamresponse.h \
    describesubscribedworkteamresponse_p.h \
    describetrainingjobrequest.h \
    describetrainingjobrequest_p.h \
    describetrainingjobresponse.h \
    describetrainingjobresponse_p.h \
    describetransformjobrequest.h \
    describetransformjobrequest_p.h \
    describetransformjobresponse.h \
    describetransformjobresponse_p.h \
    describeworkteamrequest.h \
    describeworkteamrequest_p.h \
    describeworkteamresponse.h \
    describeworkteamresponse_p.h \
    getsearchsuggestionsrequest.h \
    getsearchsuggestionsrequest_p.h \
    getsearchsuggestionsresponse.h \
    getsearchsuggestionsresponse_p.h \
    listalgorithmsrequest.h \
    listalgorithmsrequest_p.h \
    listalgorithmsresponse.h \
    listalgorithmsresponse_p.h \
    listcoderepositoriesrequest.h \
    listcoderepositoriesrequest_p.h \
    listcoderepositoriesresponse.h \
    listcoderepositoriesresponse_p.h \
    listcompilationjobsrequest.h \
    listcompilationjobsrequest_p.h \
    listcompilationjobsresponse.h \
    listcompilationjobsresponse_p.h \
    listendpointconfigsrequest.h \
    listendpointconfigsrequest_p.h \
    listendpointconfigsresponse.h \
    listendpointconfigsresponse_p.h \
    listendpointsrequest.h \
    listendpointsrequest_p.h \
    listendpointsresponse.h \
    listendpointsresponse_p.h \
    listhyperparametertuningjobsrequest.h \
    listhyperparametertuningjobsrequest_p.h \
    listhyperparametertuningjobsresponse.h \
    listhyperparametertuningjobsresponse_p.h \
    listlabelingjobsforworkteamrequest.h \
    listlabelingjobsforworkteamrequest_p.h \
    listlabelingjobsforworkteamresponse.h \
    listlabelingjobsforworkteamresponse_p.h \
    listlabelingjobsrequest.h \
    listlabelingjobsrequest_p.h \
    listlabelingjobsresponse.h \
    listlabelingjobsresponse_p.h \
    listmodelpackagesrequest.h \
    listmodelpackagesrequest_p.h \
    listmodelpackagesresponse.h \
    listmodelpackagesresponse_p.h \
    listmodelsrequest.h \
    listmodelsrequest_p.h \
    listmodelsresponse.h \
    listmodelsresponse_p.h \
    listnotebookinstancelifecycleconfigsrequest.h \
    listnotebookinstancelifecycleconfigsrequest_p.h \
    listnotebookinstancelifecycleconfigsresponse.h \
    listnotebookinstancelifecycleconfigsresponse_p.h \
    listnotebookinstancesrequest.h \
    listnotebookinstancesrequest_p.h \
    listnotebookinstancesresponse.h \
    listnotebookinstancesresponse_p.h \
    listsubscribedworkteamsrequest.h \
    listsubscribedworkteamsrequest_p.h \
    listsubscribedworkteamsresponse.h \
    listsubscribedworkteamsresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    listtrainingjobsforhyperparametertuningjobrequest.h \
    listtrainingjobsforhyperparametertuningjobrequest_p.h \
    listtrainingjobsforhyperparametertuningjobresponse.h \
    listtrainingjobsforhyperparametertuningjobresponse_p.h \
    listtrainingjobsrequest.h \
    listtrainingjobsrequest_p.h \
    listtrainingjobsresponse.h \
    listtrainingjobsresponse_p.h \
    listtransformjobsrequest.h \
    listtransformjobsrequest_p.h \
    listtransformjobsresponse.h \
    listtransformjobsresponse_p.h \
    listworkteamsrequest.h \
    listworkteamsrequest_p.h \
    listworkteamsresponse.h \
    listworkteamsresponse_p.h \
    renderuitemplaterequest.h \
    renderuitemplaterequest_p.h \
    renderuitemplateresponse.h \
    renderuitemplateresponse_p.h \
    sagemakerclient.h \
    sagemakerclient_p.h \
    sagemakerrequest.h \
    sagemakerrequest_p.h \
    sagemakerresponse.h \
    sagemakerresponse_p.h \
    searchrequest.h \
    searchrequest_p.h \
    searchresponse.h \
    searchresponse_p.h \
    startnotebookinstancerequest.h \
    startnotebookinstancerequest_p.h \
    startnotebookinstanceresponse.h \
    startnotebookinstanceresponse_p.h \
    stopcompilationjobrequest.h \
    stopcompilationjobrequest_p.h \
    stopcompilationjobresponse.h \
    stopcompilationjobresponse_p.h \
    stophyperparametertuningjobrequest.h \
    stophyperparametertuningjobrequest_p.h \
    stophyperparametertuningjobresponse.h \
    stophyperparametertuningjobresponse_p.h \
    stoplabelingjobrequest.h \
    stoplabelingjobrequest_p.h \
    stoplabelingjobresponse.h \
    stoplabelingjobresponse_p.h \
    stopnotebookinstancerequest.h \
    stopnotebookinstancerequest_p.h \
    stopnotebookinstanceresponse.h \
    stopnotebookinstanceresponse_p.h \
    stoptrainingjobrequest.h \
    stoptrainingjobrequest_p.h \
    stoptrainingjobresponse.h \
    stoptrainingjobresponse_p.h \
    stoptransformjobrequest.h \
    stoptransformjobrequest_p.h \
    stoptransformjobresponse.h \
    stoptransformjobresponse_p.h \
    updatecoderepositoryrequest.h \
    updatecoderepositoryrequest_p.h \
    updatecoderepositoryresponse.h \
    updatecoderepositoryresponse_p.h \
    updateendpointrequest.h \
    updateendpointrequest_p.h \
    updateendpointresponse.h \
    updateendpointresponse_p.h \
    updateendpointweightsandcapacitiesrequest.h \
    updateendpointweightsandcapacitiesrequest_p.h \
    updateendpointweightsandcapacitiesresponse.h \
    updateendpointweightsandcapacitiesresponse_p.h \
    updatenotebookinstancelifecycleconfigrequest.h \
    updatenotebookinstancelifecycleconfigrequest_p.h \
    updatenotebookinstancelifecycleconfigresponse.h \
    updatenotebookinstancelifecycleconfigresponse_p.h \
    updatenotebookinstancerequest.h \
    updatenotebookinstancerequest_p.h \
    updatenotebookinstanceresponse.h \
    updatenotebookinstanceresponse_p.h \
    updateworkteamrequest.h \
    updateworkteamrequest_p.h \
    updateworkteamresponse.h \
    updateworkteamresponse_p.h \

SOURCES += \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    createalgorithmrequest.cpp \
    createalgorithmresponse.cpp \
    createcoderepositoryrequest.cpp \
    createcoderepositoryresponse.cpp \
    createcompilationjobrequest.cpp \
    createcompilationjobresponse.cpp \
    createendpointconfigrequest.cpp \
    createendpointconfigresponse.cpp \
    createendpointrequest.cpp \
    createendpointresponse.cpp \
    createhyperparametertuningjobrequest.cpp \
    createhyperparametertuningjobresponse.cpp \
    createlabelingjobrequest.cpp \
    createlabelingjobresponse.cpp \
    createmodelpackagerequest.cpp \
    createmodelpackageresponse.cpp \
    createmodelrequest.cpp \
    createmodelresponse.cpp \
    createnotebookinstancelifecycleconfigrequest.cpp \
    createnotebookinstancelifecycleconfigresponse.cpp \
    createnotebookinstancerequest.cpp \
    createnotebookinstanceresponse.cpp \
    createpresignednotebookinstanceurlrequest.cpp \
    createpresignednotebookinstanceurlresponse.cpp \
    createtrainingjobrequest.cpp \
    createtrainingjobresponse.cpp \
    createtransformjobrequest.cpp \
    createtransformjobresponse.cpp \
    createworkteamrequest.cpp \
    createworkteamresponse.cpp \
    deletealgorithmrequest.cpp \
    deletealgorithmresponse.cpp \
    deletecoderepositoryrequest.cpp \
    deletecoderepositoryresponse.cpp \
    deleteendpointconfigrequest.cpp \
    deleteendpointconfigresponse.cpp \
    deleteendpointrequest.cpp \
    deleteendpointresponse.cpp \
    deletemodelpackagerequest.cpp \
    deletemodelpackageresponse.cpp \
    deletemodelrequest.cpp \
    deletemodelresponse.cpp \
    deletenotebookinstancelifecycleconfigrequest.cpp \
    deletenotebookinstancelifecycleconfigresponse.cpp \
    deletenotebookinstancerequest.cpp \
    deletenotebookinstanceresponse.cpp \
    deletetagsrequest.cpp \
    deletetagsresponse.cpp \
    deleteworkteamrequest.cpp \
    deleteworkteamresponse.cpp \
    describealgorithmrequest.cpp \
    describealgorithmresponse.cpp \
    describecoderepositoryrequest.cpp \
    describecoderepositoryresponse.cpp \
    describecompilationjobrequest.cpp \
    describecompilationjobresponse.cpp \
    describeendpointconfigrequest.cpp \
    describeendpointconfigresponse.cpp \
    describeendpointrequest.cpp \
    describeendpointresponse.cpp \
    describehyperparametertuningjobrequest.cpp \
    describehyperparametertuningjobresponse.cpp \
    describelabelingjobrequest.cpp \
    describelabelingjobresponse.cpp \
    describemodelpackagerequest.cpp \
    describemodelpackageresponse.cpp \
    describemodelrequest.cpp \
    describemodelresponse.cpp \
    describenotebookinstancelifecycleconfigrequest.cpp \
    describenotebookinstancelifecycleconfigresponse.cpp \
    describenotebookinstancerequest.cpp \
    describenotebookinstanceresponse.cpp \
    describesubscribedworkteamrequest.cpp \
    describesubscribedworkteamresponse.cpp \
    describetrainingjobrequest.cpp \
    describetrainingjobresponse.cpp \
    describetransformjobrequest.cpp \
    describetransformjobresponse.cpp \
    describeworkteamrequest.cpp \
    describeworkteamresponse.cpp \
    getsearchsuggestionsrequest.cpp \
    getsearchsuggestionsresponse.cpp \
    listalgorithmsrequest.cpp \
    listalgorithmsresponse.cpp \
    listcoderepositoriesrequest.cpp \
    listcoderepositoriesresponse.cpp \
    listcompilationjobsrequest.cpp \
    listcompilationjobsresponse.cpp \
    listendpointconfigsrequest.cpp \
    listendpointconfigsresponse.cpp \
    listendpointsrequest.cpp \
    listendpointsresponse.cpp \
    listhyperparametertuningjobsrequest.cpp \
    listhyperparametertuningjobsresponse.cpp \
    listlabelingjobsforworkteamrequest.cpp \
    listlabelingjobsforworkteamresponse.cpp \
    listlabelingjobsrequest.cpp \
    listlabelingjobsresponse.cpp \
    listmodelpackagesrequest.cpp \
    listmodelpackagesresponse.cpp \
    listmodelsrequest.cpp \
    listmodelsresponse.cpp \
    listnotebookinstancelifecycleconfigsrequest.cpp \
    listnotebookinstancelifecycleconfigsresponse.cpp \
    listnotebookinstancesrequest.cpp \
    listnotebookinstancesresponse.cpp \
    listsubscribedworkteamsrequest.cpp \
    listsubscribedworkteamsresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    listtrainingjobsforhyperparametertuningjobrequest.cpp \
    listtrainingjobsforhyperparametertuningjobresponse.cpp \
    listtrainingjobsrequest.cpp \
    listtrainingjobsresponse.cpp \
    listtransformjobsrequest.cpp \
    listtransformjobsresponse.cpp \
    listworkteamsrequest.cpp \
    listworkteamsresponse.cpp \
    renderuitemplaterequest.cpp \
    renderuitemplateresponse.cpp \
    sagemakerclient.cpp \
    sagemakerrequest.cpp \
    sagemakerresponse.cpp \
    searchrequest.cpp \
    searchresponse.cpp \
    startnotebookinstancerequest.cpp \
    startnotebookinstanceresponse.cpp \
    stopcompilationjobrequest.cpp \
    stopcompilationjobresponse.cpp \
    stophyperparametertuningjobrequest.cpp \
    stophyperparametertuningjobresponse.cpp \
    stoplabelingjobrequest.cpp \
    stoplabelingjobresponse.cpp \
    stopnotebookinstancerequest.cpp \
    stopnotebookinstanceresponse.cpp \
    stoptrainingjobrequest.cpp \
    stoptrainingjobresponse.cpp \
    stoptransformjobrequest.cpp \
    stoptransformjobresponse.cpp \
    updatecoderepositoryrequest.cpp \
    updatecoderepositoryresponse.cpp \
    updateendpointrequest.cpp \
    updateendpointresponse.cpp \
    updateendpointweightsandcapacitiesrequest.cpp \
    updateendpointweightsandcapacitiesresponse.cpp \
    updatenotebookinstancelifecycleconfigrequest.cpp \
    updatenotebookinstancelifecycleconfigresponse.cpp \
    updatenotebookinstancerequest.cpp \
    updatenotebookinstanceresponse.cpp \
    updateworkteamrequest.cpp \
    updateworkteamresponse.cpp \

win32:CONFIG += skip_target_version_ext
