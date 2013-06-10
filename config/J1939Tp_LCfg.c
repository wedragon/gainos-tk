/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-10:18-00-24.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#include "J1939Tp.h"
#include "CanIf.h"
#include "PduR.h"
extern const J1939Tp_PgType J1939Tp_Pgs[J1939TP_PG_COUNT];
const J1939Tp_PgType* vTxChannel_0_Pgs[J1939TP_vTxChannel_0_PG_COUNT] = {
	&J1939Tp_Pgs[0],//vTxPg0
};

const J1939Tp_PgType* vRxChannel_0_Pgs[J1939TP_vRxChannel_0_PG_COUNT] = {
	&J1939Tp_Pgs[1],//vRxPg0
};

const J1939Tp_ChannelType J1939Tp_Channels[J1939TP_CHANNEL_COUNT] = {
	{	/* vTxChannel_0 */
		/* .Protocol = */ J1939TP_PROTOCOL_CMDT,
		/* .DtNPdu = */ CANIF_TX_vEcuC_Pdu_1,
		/* .CmNPdu = */ CANIF_TX_vEcuC_Pdu_1,
		/* .FcNPdu = */ CANIF_RX_vEcuC_Pdu_1,
		/* .Direction = */ J1939TP_TX,
		/* .PgCount = */ J1939TP_vTxChannel_0_PG_COUNT,
		/* .Pgs = */ vTxChannel_0_Pgs
	},
	{	/* vRxChannel_0 */
		/* .Protocol = */ J1939TP_PROTOCOL_CMDT,
		/* .DtNPdu = */ CANIF_RX_vEcuC_Pdu_0,
		/* .CmNPdu = */ CANIF_RX_vEcuC_Pdu_0,
		/* .FcNPdu = */ CANIF_TX_vEcuC_Pdu_0,
		/* .Direction = */ J1939TP_RX,
		/* .PgCount = */ J1939TP_vRxChannel_0_PG_COUNT,
		/* .Pgs = */ vRxChannel_0_Pgs
	},
};

const J1939Tp_PgType J1939Tp_Pgs[J1939TP_PG_COUNT] = {
	{	//PG: vTxPg0
		/* .DynLength = */ FALSE,
		/* .Pgn = */ 0x1,
		/* .DirectNPdu = */ CANIF_TX_vEcuC_Pdu_1,
		/* .NSdu = */ PDUR_RX_vEcuC_Pdu_1,
		/* .Channel = */ &J1939Tp_Channels[0] /* parent channel: vTxChannel_0 */
	},
	{	//PG: vRxPg0
		/* .DynLength = */ FALSE,
		/* .Pgn = */ 0x0,
		/* .DirectNPdu = */ CANIF_RX_vEcuC_Pdu_1,
		/* .NSdu = */ PDUR_TX_vEcuC_Pdu_1,
		/* .Channel = */ &J1939Tp_Channels[1] /* parent channel: vRxChannel_0 */
	},
};

const J1939Tp_RxPduInfoType J1939Tp_RxPdus[J1939TP_RX_PDU_COUNT] = {
	{//vTxChannel_0
		/* .PacketType = */ J1939TP_CM,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ NULL
	},
	{//vTxChannel_0
		/* .PacketType = */ J1939TP_DT,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ NULL
	},
	{//vTxChannel_0
		/* .PacketType = */ J1939TP_REVERSE_CM,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ NULL
	},
	{//vTxChannel_0
		/* .PacketType = */ J1939TP_DIRECT,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ &J1939Tp_Pgs[0]
	},
	{//vRxChannel_0
		/* .PacketType = */ J1939TP_CM,
		/* .ChannelIndex = */ 1,
		/* .PgPtr = */ NULL
	},
	{//vRxChannel_0
		/* .PacketType = */ J1939TP_DT,
		/* .ChannelIndex = */ 1,
		/* .PgPtr = */ NULL
	},
	{//vRxChannel_0
		/* .PacketType = */ J1939TP_DIRECT,
		/* .ChannelIndex = */ 1,
		/* .PgPtr = */ &J1939Tp_Pgs[1]
	},
};

const J1939Tp_RxPduInfoType* RxPduRelations_PDUR_TX_vEcuC_Pdu_1[] = {
	&J1939Tp_RxPdus[0],//J1939TP_CM
	&J1939Tp_RxPdus[1],//J1939TP_DT
	&J1939Tp_RxPdus[2],//J1939TP_REVERSE_CM
	&J1939Tp_RxPdus[3],//J1939TP_DIRECT
};

const J1939Tp_RxPduInfoType* RxPduRelations_PDUR_RX_vEcuC_Pdu_0[] = {
	&J1939Tp_RxPdus[4],//J1939TP_CM
	&J1939Tp_RxPdus[5],//J1939TP_DT
	&J1939Tp_RxPdus[6],//J1939TP_DIRECT
};

const J1939Tp_RxPduInfoRelationsType J1939Tp_RxPduRelations[J1939TP_CHANNEL_COUNT/*J1939TP_RX_PDU_COUNT*/] = {
	{//vTxChannel_0
		/* .RxPdus = */ RxPduRelations_PDUR_TX_vEcuC_Pdu_1,
		/* .RxPduCount = */ 4,
	},
	{//vRxChannel_0
		/* .RxPdus = */ RxPduRelations_PDUR_RX_vEcuC_Pdu_0,
		/* .RxPduCount = */ 3,
	},
};

const J1939Tp_ConfigType J1939Tp_Config = {
    /* .RxPduRelations = */ J1939Tp_RxPduRelations,
    /* .Channels = */ J1939Tp_Channels,
    /* .Pgs = */ J1939Tp_Pgs   
};

