/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-01:13-22-43.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#include "Std_Types.h"
#include "Dcm.h"
#include "Dcm_Internal.h"
#if defined(USE_PDUR)
#include "PduR.h"
#endif

#define DCM_SECURITY_EOL_INDEX 2
#define DCM_SESSION_EOL_INDEX 4
#define DCM_DID_LIST_EOL_INDEX 1

extern Std_ReturnType vDid_1_ReadDataLength_Cbk(uint16 *didLength);
extern Std_ReturnType vDid_1_ConditionCheckRead_Cbk(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType vDid_1_ReadData_Cbk(uint8 *data);
extern Std_ReturnType vDid_1_ConditionCheckWrite_Cbk(Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType vDid_1_WriteData_Cbk(uint8 *data, uint16 dataLength, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType vDid_1_GetScalingInfo_Cbk(uint8 *scalingInfo, Dcm_NegativeResponseCodeType *errorCode);
/* --------------------------------------------------------- */

extern Std_ReturnType vSecurityLevel_1_GetSeed (uint8 *securityAccessDataRecord, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType vSecurityLevel_1_CompKey (uint8 *key);
extern Std_ReturnType vSecurityLevel_Locked_GetSeed (uint8 *securityAccessDataRecord, uint8 *seed, Dcm_NegativeResponseCodeType *errorCode);
extern Std_ReturnType vSecurityLevel_Locked_CompKey (uint8 *key);
extern Std_ReturnType vRequestService_1_Start (Dcm_ProtocolType protocolID);
extern Std_ReturnType vRequestService_1_Stop (Dcm_ProtocolType protocolID);
extern Std_ReturnType vRequestService_1_Indication(uint8 *requestData, uint16 dataSize);

extern Std_ReturnType vSessionControl_1_GetSesChgPer(Dcm_SesCtrlType sesCtrlTypeActive, Dcm_SesCtrlType sesCtrlTypeNew);
const Dcm_DspSecurityRowType DspSecurityList[] = {
	{ // vSecurityLevel_1
		/* DspSecurityLevel = */ 1,
		/* DspSecurityDelayTimeOnBoot = */ 0,/* Value is not configurable */
		/* DspSecurityNumAttDelay = */ 0, 	/* Value is not configurable */
		/* DspSecurityDelayTime = */ 0, 	/* Value is not configurable */
		/* DspSecurityNumAttLock = */ 0, 	/* Value is not configurable */
		/* DspSecurityADRSize = */ 0,
		/* DspSecuritySeedSize = */ 1,
		/* DspSecurityKeySize = */ 1,
		/* GetSeed = */ vSecurityLevel_1_GetSeed,
		/* CompareKey = */ vSecurityLevel_1_CompKey,
		/* Arc_EOL = */ FALSE
	},
	{ // vSecurityLevel_Locked
		/* DspSecurityLevel = */ 0,
		/* DspSecurityDelayTimeOnBoot = */ 0,/* Value is not configurable */
		/* DspSecurityNumAttDelay = */ 0, 	/* Value is not configurable */
		/* DspSecurityDelayTime = */ 0, 	/* Value is not configurable */
		/* DspSecurityNumAttLock = */ 0, 	/* Value is not configurable */
		/* DspSecurityADRSize = */ 0,
		/* DspSecuritySeedSize = */ 1,
		/* DspSecurityKeySize = */ 1,
		/* GetSeed = */ vSecurityLevel_Locked_GetSeed,
		/* CompareKey = */ vSecurityLevel_Locked_CompKey,
		/* Arc_EOL = */ FALSE
	},
	{ // Dummy For EOL
		/* DspSecurityLevel = */ 0xBD,
		/* DspSecurityDelayTimeOnBoot = */ 0,/* Value is not configurable */
		/* DspSecurityNumAttDelay = */ 0, 	/* Value is not configurable */
		/* DspSecurityDelayTime = */ 0, 	/* Value is not configurable */
		/* DspSecurityNumAttLock = */ 0, 	/* Value is not configurable */
		/* DspSecurityADRSize = */ 0xBD,
		/* DspSecuritySeedSize = */ 0xBD,
		/* DspSecurityKeySize = */ 0xBD,
		/* GetSeed = */ NULL,
		/* CompareKey = */ NULL,
		/* Arc_EOL = */ TRUE
	}
};

const Dcm_DspSecurityType DspSecurity = {
    /* DspSecurityRow = */ DspSecurityList
};
const Dcm_DspSessionRowType DspSessionList[] = {
	{ //vSession_default
		/* DspSessionLevel = */ 1,
		/* DspSessionP2ServerMax = */ 10,
		/* DspSessionP2StarServerMax = */ 10,
		/* Arc_EOL = */ FALSE
	},
	{ //vSession_program
		/* DspSessionLevel = */ 2,
		/* DspSessionP2ServerMax = */ 10,
		/* DspSessionP2StarServerMax = */ 10,
		/* Arc_EOL = */ FALSE
	},
	{ //vSession_extended
		/* DspSessionLevel = */ 3,
		/* DspSessionP2ServerMax = */ 10,
		/* DspSessionP2StarServerMax = */ 10,
		/* Arc_EOL = */ FALSE
	},
	{ //vSession_safety_system
		/* DspSessionLevel = */ 4,
		/* DspSessionP2ServerMax = */ 10,
		/* DspSessionP2StarServerMax = */ 10,
		/* Arc_EOL = */ FALSE
	},
	{ //Dummy Session For EOL
		/* DspSessionLevel = */ 0xBD,
		/* DspSessionP2ServerMax = */ 0xBD,
		/* DspSessionP2StarServerMax = */ 0xBD,
		/* Arc_EOL = */ TRUE
	},
};

const Dcm_DspSessionType DspSession = {
    /* DspSessionRow = */ DspSessionList,
};

const Dcm_DspSecurityRowType *vServiceTable_1_vService0_SecurityList[] = {
	&DspSecurityList[0],//vSecurityLevel_1
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspSecurityRowType *vServiceTable_1_vService1_SecurityList[] = {
	&DspSecurityList[1],//vSecurityLevel_Locked
	&DspSecurityList[0],//vSecurityLevel_1
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspSessionRowType *vServiceTable_1_vService0_SessionList[] = {
	&DspSessionList[0],//vSession_default
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSessionRowType *vServiceTable_1_vService1_SessionList[] = {
	&DspSessionList[0],//vSession_default
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};

const Dcm_DspSecurityRowType *vDcmDidInfo_1_read_securityRefList[] = {
	&DspSecurityList[1],//vSecurityLevel_Locked
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspDidReadType vDcmDidInfo_1_didRead = {
    /* DspDidReadSessionRef = */ NULL,
    /* DspDidReadSecurityLevelRef = */ vDcmDidInfo_1_read_securityRefList
};

const Dcm_DspSessionRowType *vDcmDidInfo_1_write_sessionRefList[] = {
	&DspSessionList[0],//vSession_default
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSecurityRowType *vDcmDidInfo_1_write_securityRefList[] = {
	&DspSecurityList[1],//vSecurityLevel_Locked
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspDidWriteType vDcmDidInfo_1_didWrite = {
    /* DspDidReadSessionRef = */ vDcmDidInfo_1_write_sessionRefList,
    /* DspDidReadSecurityLevelRef = */ vDcmDidInfo_1_write_securityRefList
};

const Dcm_DspSecurityRowType *vDcmDidInfo_1_control_securityRefList[] = {
	&DspSecurityList[1],//vSecurityLevel_Locked
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspDidControlType vDcmDidInfo_1_didControl = {
    /* DspDidReadSessionRef = */ NULL,
    /* DspDidReadSecurityLevelRef = */ vDcmDidInfo_1_control_securityRefList,
    /* DspDidFreezeCurrentState = */ NULL,
    /* DspDidResetToDefault = */ NULL,
    /* DspDidReturnControlToEcu = */ NULL,
    /* DspDidShortTermAdjustment = */ NULL
};

const Dcm_DspDidInfoType DspDidInfoList[] = {
	{ // vDcmDidInfo_1
		 /* DspDidDynamicllyDefined = */ FALSE,
		 /* DspDidFixedLength = */ TRUE,
		 /* DspDidScalingInfoSize = */ 8,
		{ // DspDidAccess
			 /* DspDidRead */ &vDcmDidInfo_1_didRead,
			 /* DspDidWrite */ &vDcmDidInfo_1_didWrite,
			 /* DspDidControl */ &vDcmDidInfo_1_didControl,
		}
	}, 
};

const Dcm_DspDidType DspDidList[] = { 
	{ // vDid_1,
		/* DspDidUsePort = */ FALSE,/* Value is not configurable */
		/* DspDidIdentifier = */ 0x1,
		/* DspDidInfoRef = */ &DspDidInfoList[0], //vDcmDidInfo_1
		/* DspDidRef = */ NULL, //I cann't understand
		/* DspDidSize = */ 64,
		/* /* DspDidReadDataLengthFnc = */ vDid_1_ReadDataLength_Cbk,
		/* /* DspDidConditionCheckReadFnc = */ vDid_1_ConditionCheckRead_Cbk,
		/* /* DspDidReadDataFnc = */ vDid_1_ReadData_Cbk,
		/* /* DspDidConditionCheckWriteFnc = */ vDid_1_ConditionCheckWrite_Cbk,
		/* /* DspDidWriteDataFnc = */ vDid_1_WriteData_Cbk,
		/* /* DspDidGetScalingInfoFnc = */ vDid_1_GetScalingInfo_Cbk,
		/* /* DspDidFreezeCurrentStateFnc = */ NULL,
		/* /* DspDidResetToDefaultFnc = */ NULL,
		/* /* DspDidReturnControlToEcuFnc = */ NULL,
		/* /* DspDidShortTermAdjustmentFnc = */ NULL,
		/* /* DspDidControlRecordSize = */ NULL,
		/* Arc_EOL = */ FALSE
	},
	{ // Dummy for EOL,
		/* DspDidUsePort = */ FALSE,/* Value is not configurable */
		/* DspDidIdentifier = */ 0xDB,
		/* DspDidInfoRef = */ NULL,
		/* DspDidRef = */ NULL, //I cann't understand
		/* DspDidSize = */ 0xDB,
		/* DspDidReadDataLengthFnc = */ NULL,
        /* DspDidConditionCheckReadFnc = */ NULL,
        /* DspDidReadDataFnc = */ NULL,
        /* DspDidConditionCheckWriteFnc = */ NULL,
        /* DspDidWriteDataFnc = */ NULL,
        /* DspDidGetScalingInfoFnc = */ NULL,
        /* DspDidFreezeCurrentStateFnc = */ NULL,	
        /* DspDidResetToDefaultFnc = */ NULL,
        /* DspDidReturnControlToEcuFnc = */ NULL,
        /* DspDidShortTermAdjustmentFnc = */ NULL,
        /* DspDidControlRecordSize = */ NULL,
		/* Arc_EOL = */ TRUE
	}
};

/************************************************************************
 *							Routine control								*
 ************************************************************************/

const Dcm_DspStartRoutineType vDcmRoutineInfo_1_start = {
    /* DspStartRoutineCtrlOptRecSize = */ 5,
    /* DspStartRoutineStsOptRecSize = */ 5
};
const Dcm_DspSessionRowType *vDcmRoutineInfo_1_sessionRefList[] = {
	&DspSessionList[0],//vSession_default
	&DspSessionList[DCM_SESSION_EOL_INDEX]
};
const Dcm_DspSecurityRowType *vDcmRoutineInfo_1_securityRefList[] = {
	&DspSecurityList[0],//vSecurityLevel_1
	&DspSecurityList[DCM_SECURITY_EOL_INDEX]
};
const Dcm_DspRoutineInfoType DspRoutineInfoList[] = {
	{//vDcmRoutineInfo_1
		{//DspRoutineAuthorization
			 /* DspRoutineSessionRef = */ &vDcmRoutineInfo_1_sessionRefList,
			 /* DspRoutineSecurityLevelRef = */ &vDcmRoutineInfo_1_securityRefList,
		},
		 /* DspStartRoutine = */ &vDcmRoutineInfo_1_start,
		 /* DspRoutineStop = */ NULL,
		 /* DspRoutineRequestRes = */ NULL
	},
};

const Dcm_DspRoutineType  DspRoutineList[] = {
	{//vRoutine_1
		 /* DspRoutineUsePort = */ FALSE,
		 /* DspRoutineIdentifier = */ 0x1,
		 /* DspRoutineInfoRef = */ &DspRoutineInfoList[0],//vDcmRoutineInfo_1
		 /* DspStartRoutineFnc = */ NULL,
		 /* DspStopRoutineFnc = */ NULL,
		 /* DspRequestResultRoutineFnc = */ NULL,
		 /* Arc_EOL */ FALSE
	},
	{//Dummy For EOL
		 /* DspRoutineUsePort = */ FALSE,
		 /* DspRoutineIdentifier = */ 0xDB,
		 /* DspRoutineInfoRef = */ NULL,
		 /* DspStartRoutineFnc = */ NULL,
		 /* DspStopRoutineFnc = */ NULL,
		 /* DspRequestResultRoutineFnc = */ NULL,
		 /* Arc_EOL */ TRUE
	}
};

/************************************************************************
 *							Memory Info             					*
 ************************************************************************/

const Dcm_DspType Dsp = {
    /* DspMaxDidToRead = */ 0x99,//????
    /* DspDid = */ DspDidList,
    /* DspDidInfo = */ DspDidInfoList,
    /* DspEcuReset = */ NULL,
    /* DspPid = */ NULL,
    /* DspReadDTC = */ NULL,
    /* DspRequestControl = */ NULL,
    /* DspRoutine = */ DspRoutineList,
    /* DspRoutineInfo = */ DspRoutineInfoList,
    /* DspSecurity = */ &DspSecurity,
    /* DspSession = */ &DspSession,
    /* DspTestResultByObdmid = */ NULL,
    /* DspVehInfo = */ NULL
};

/************************************************************************
 *									DSD									*
 ************************************************************************/

const Dcm_DsdServiceType vServiceTable_1_serviceList[] = {
	{ // vService0
		 /* DsdSidTabServiceId =*/ SID_DIAGNOSTIC_SESSION_CONTROL,
		 /* DsdSidTabSubfuncAvail =*/ FALSE,
		 /* DsdSidTabSecurityLevelRef =*/ vServiceTable_1_vService0_SecurityList,
		 /* DsdSidTabSessionLevelRef =*/ vServiceTable_1_vService0_SessionList,
		 /* Arc_EOL = */ FALSE
	},
	{ // vService1
		 /* DsdSidTabServiceId =*/ SID_SECURITY_ACCESS,
		 /* DsdSidTabSubfuncAvail =*/ FALSE,
		 /* DsdSidTabSecurityLevelRef =*/ vServiceTable_1_vService1_SecurityList,
		 /* DsdSidTabSessionLevelRef =*/ vServiceTable_1_vService1_SessionList,
		 /* Arc_EOL = */ FALSE
	},
	{ // Dummy For EOL
		 /* DsdSidTabServiceId =*/ 0xDB,
		 /* DsdSidTabSubfuncAvail =*/ FALSE,
		 /* DsdSidTabSecurityLevelRef =*/ NULL,
		 /* DsdSidTabSessionLevelRef =*/ NULL,
		 /* Arc_EOL = */ TRUE
	}
};

const Dcm_DsdServiceTableType DsdServiceTable[] = {	
	{ // vServiceTable_1
		 /* DsdSidTabId = */ 0,
		 /* DsdService = */ vServiceTable_1_serviceList,
		 /* Arc_EOL = */ FALSE
	},
	{ // Dummy For EOL 
		 /* DsdSidTabId = */ 0xDB,
		 /* DsdService = */ NULL,
		 /* Arc_EOL = */ TRUE
	}
};

const Dcm_DsdType Dsd = {
    /* DsdServiceTable = */ DsdServiceTable
};

/************************************************************************
 *									DSL									*
 ************************************************************************/

uint8 vDcmBuffer_1_RX[8];
Dcm_DslBufferRuntimeType rxBufferParams_vDcmBuffer_1_RX =
{
	/* status = */ NOT_IN_USE
};
uint8 vDcmBuffer_1_TX[8];
Dcm_DslBufferRuntimeType rxBufferParams_vDcmBuffer_1_TX =
{
	/* status = */ NOT_IN_USE
};
const Dcm_DslBufferType DcmDslBufferList[DCM_DSL_BUFFER_LIST_LENGTH] = {
	{ // vDcmBuffer_1_RX
		/* DslBufferID = */ 0,//? I am not that clear.
		/* DslBufferSize = */ 8,/* ?Value is not configurable */
		{ /* pduInfo */
			/* SduDataPtr = */ vDcmBuffer_1_RX,
			/* SduLength = */ 8,
		},
		/* externalBufferRuntimeData = */ &rxBufferParams_vDcmBuffer_1_RX
	},
	{ // vDcmBuffer_1_TX
		/* DslBufferID = */ 1,//? I am not that clear.
		/* DslBufferSize = */ 8,/* ?Value is not configurable */
		{ /* pduInfo */
			/* SduDataPtr = */ vDcmBuffer_1_TX,
			/* SduLength = */ 8,
		},
		/* externalBufferRuntimeData = */ &rxBufferParams_vDcmBuffer_1_TX
	},
};

const Dcm_DslCallbackDCMRequestServiceType DCMRequestServiceList[] = {
	{ // vRequestService_1
		/* StartProtocol = */ vRequestService_1_Start,
		/* StopProtocol = */ vRequestService_1_Stop,
		/* Arc_EOL = */ FALSE
	},
	{ // Dummy For EOL
		/* StartProtocol = */ NULL,
		/* StopProtocol = */ NULL,
		/* Arc_EOL = */ TRUE
	}
};

const Dcm_DslServiceRequestIndicationType DCMServiceRequestIndicationList[] = {
	{ // vRequestService_1
		/* Indication = */ vRequestService_1_Indication,
		/* Arc_EOL = */ FALSE
	},
	{ // Dummy For EOL
		/* Indication = */ NULL,
		/* Arc_EOL = */ TRUE
	}
};

extern const Dcm_DslMainConnectionType DslMainConnectionList[];

const Dcm_DslProtocolRxType DcmDslProtocolRxList[] = {
	{// vProtocol_1->vConnection0->vRxChannel0
		/* DslMainConnectionParent = */ &DslMainConnectionList[0],
		/* DslProtocolAddrType = */ DCM_PROTOCOL_PHYSICAL_ADDR_TYPE,
		/* DcmDslProtocolRxPduId = */ PDUR_RX_vEcuC_Pdu_1,
		/* DcmDslProtocolRxTesterSourceAddr_v4 = */ 0,		/* Value is not configurable */
		/* DcmDslProtocolRxChannelId_v4 = */ 0,				/* Value is not configurable */
		/* Arc_EOL = */ FALSE
	},
	{// Dummy for EOL
		/* DslMainConnectionParent = */ NULL,
		/* DslProtocolAddrType = */ 0xDB,
		/* DcmDslProtocolRxPduId = */ 0xDB,
		/* DcmDslProtocolRxTesterSourceAddr_v4 = */ 0,		/* Value is not configurable */
		/* DcmDslProtocolRxChannelId_v4 = */ 0,				/* Value is not configurable */
		/* Arc_EOL = */ TRUE
	}
};

const Dcm_DslProtocolTxType DcmDslProtocolTxList[] = {
	{// vProtocol_1->vConnection0->vTxChannel0
		/* DslMainConnectionParent = */ &DslMainConnectionList[0],
		/* DcmDslProtocolTxPduId = */ PDUR_TX_vEcuC_Pdu_1,
		/* Arc_EOL = */ FALSE
	},
	{// Dummy for EOL
		/* DslMainConnectionParent = */ NULL,
		/* DcmDslProtocolTxPduId = */ 0xDB,
		/* Arc_EOL = */ TRUE
	}
};

extern const Dcm_DslConnectionType DslConnectionList[];

const Dcm_DslMainConnectionType DslMainConnectionList[] = {
	{//vProtocol_1->vConnection0
		/* DslConnectionParent = */ &DslConnectionList[0],
		/* DslPeriodicTransmissionConRef = */ NULL,		/* Value is not configurable */
		/* DslROEConnectionRef = */ NULL,				/* Value is not configurable */
		/* DslProtocolRx = */ NULL,						/* Value is not configurable */
		/* DslProtocolTx = */ &DcmDslProtocolTxList[0],
	},
};

extern const Dcm_DslProtocolRowType DslProtocolRowList[];

const Dcm_DslConnectionType DslConnectionList[] = {
	{//vProtocol_1->vConnection0
		/* DslProtocolRow = */ &DslProtocolRowList[0],
		/* DslMainConnection = */ &DslMainConnectionList[0],
		/* DslPeriodicTransmission = */ NULL,	/* Value is not configurable */
		/* DslResponseOnEvent = */ NULL,	/* Value is not configurable */
		/* Arc_EOL = */ FALSE
	},
	{//Dummy For EOL
		/* DslProtocolRow = */ NULL,
		/* DslMainConnection = */ NULL,
		/* DslPeriodicTransmission = */ NULL,
		/* DslResponseOnEvent = */ NULL,
		/* Arc_EOL = */ TRUE
	}
};

extern const Dcm_DslProtocolTimingRowType ProtocolTimingList[];

Dcm_DslRunTimeProtocolParametersType dcmDslRuntimeVariables[1];
const Dcm_DslProtocolRowType DslProtocolRowList[]= {
	{//vProtocol_1
		/* DslProtocolID = */ DCM_UDS_ON_CAN,
		/* DslProtocolIsParallelExecutab = */ FALSE, // not supported
		/* DslProtocolPreemptTimeout = */ 0,	// not supported
		/* DslProtocolPriority = */ 0,	// not supported
		/* DslProtocolTransType = */ DCM_PROTOCOL_TRANS_TYPE_1,
		/* DslProtocolRxBufferID = */ &DcmDslBufferList[0],//vDcmBuffer_1_RX
		/* DslProtocolTxBufferID = */ &DcmDslBufferList[1],//vDcmBuffer_1_TX
		/* DslProtocolSIDTable = */ &DsdServiceTable[0],//vServiceTable_1
		/* DslProtocolTimeLimit = */ &ProtocolTimingList[0],//vTiming_1
		/* DslConnection = */ DslConnectionList,
		/* DslRunTimeProtocolParameters = */ &dcmDslRuntimeVariables[0],
		/* Arc_EOL = */ FALSE
	},
	{//Dummy for EOL
		/* DslProtocolID = */ 0xDB,
		/* DslProtocolIsParallelExecutab = */ FALSE, // not supported
		/* DslProtocolPreemptTimeout = */ 0,	// not supported
		/* DslProtocolPriority = */ 0,	// not supported
		/* DslProtocolTransType = */ 0xDB,
		/* DslProtocolRxBufferID = */ NULL,
		/* DslProtocolTxBufferID = */ NULL,
		/* DslProtocolSIDTable = */ NULL,
		/* DslProtocolTimeLimit = */ NULL,
		/* DslConnection = */ NULL,
		/* DslRunTimeProtocolParameters = */ NULL,
		/* Arc_EOL = */ TRUE
	}
};

const Dcm_DslProtocolType DslProtocol = {
    /* DslProtocolRxGlobalList = */ DcmDslProtocolRxList,
    /* DslProtocolTxGlobalList = */ DcmDslProtocolTxList,
    /* DslProtocolRowList = */ DslProtocolRowList
};

const Dcm_DslProtocolTimingRowType ProtocolTimingList[] = {
	{//vTiming_1
		/* TimStrP2ServerMax = */ 10,
		/* TimStrP2ServerMin = */ 5,
		/* TimStrP2StarServerMax = */ 0,		/* Value is not configurable */
		/* TimStrP2StarServerMin = */ 0,		/* Value is not configurable */
		/* TimStrS3Server = */ 10,
		/* Arc_EOL = */ FALSE
	},
	{//Dummy For EOL
		/* TimStrP2ServerMax = */ 0,
		/* TimStrP2ServerMin = */ 0,
		/* TimStrP2StarServerMax = */ 0,		/* Value is not configurable */
		/* TimStrP2StarServerMin = */ 0,		/* Value is not configurable */
		/* TimStrS3Server = */ 0,
		/* Arc_EOL = */ TRUE
	},
};

const Dcm_DslProtocolTimingType ProtocolTiming = {
    /* DslProtocolTimingRow = */ ProtocolTimingList
};

const Dcm_DslSessionControlType SessionControlList[] = {
	{//vSessionControl_1
		 /* GetSesChgPermission = */ vSessionControl_1_GetSesChgPer,
		 /* ChangeIndication = */ NULL,
		 /* ConfirmationRespPend = */ NULL,
		 /* Arc_EOL = */ FALSE
	},
	{//Dummy For EOL
		 /* GetSesChgPermission = */ NULL,
		 /* ChangeIndication = */ NULL,
		 /* ConfirmationRespPend = */ NULL,
		 /* Arc_EOL = */ TRUE
	}
};

const Dcm_DslDiagRespType DiagResp = {
    /* DslDiagRespForceRespPendEn = */ TRUE,
    /* DslDiagRespMaxNumRespPend = */ 10
};

const Dcm_DslType Dsl = {
    /* DslBuffer = */ DcmDslBufferList,
    /* DslCallbackDCMRequestService = */ DCMRequestServiceList,
    /* DslDiagResp = */ &DiagResp,
    /* DslProtocol = */ &DslProtocol,
    /* DslProtocolTiming = */ &ProtocolTiming,
    /* DslServiceRequestIndication = */ DCMServiceRequestIndicationList,
    /* DslSessionControl = */ SessionControlList
};

const Dcm_ConfigType DCM_Config = {
    /* Dsp = */ &Dsp,
    /* Dsd = */ &Dsd,
    /* Dsl = */ &Dsl
};
