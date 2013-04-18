/////////////////////////////////////////////////////////////////////////
///@system Level2����API
///@company �Ϻ��ڻ���Ϣ�������޹�˾
///@file ThostFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
///20060106	�Ժ��		�������ļ�
/////////////////////////////////////////////////////////////////////////
#ifndef THOST_FTDCLEVEL2STRUCT_H
#define THOST_FTDCLEVEL2STRUCT_H

#include "ThostFtdcLevel2UserApiDataType.h"

_LEVEL2_NS_BEGIN_

///��Ӧ��Ϣ
struct CThostFtdcRspInfoField
{
	///�������
	TThostFtdcErrorIDType	ErrorID;
	///������Ϣ
	TThostFtdcErrorMsgType	ErrorMsg;
};

///��Ϣ�ַ�
struct CThostFtdcDisseminationField
{
	///����ϵ�к�
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TThostFtdcSequenceNoType	SequenceNo;
};

///�û���¼����
struct CThostFtdcReqUserLoginField
{
	///������
	TThostFtdcDateType	TradingDay;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����
	TThostFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///Mac��ַ
	TThostFtdcMacAddressType	MacAddress;
	///��̬����
	TThostFtdcPasswordType	OneTimePassword;
	///�ն�IP��ַ
	TThostFtdcIPAddressType	ClientIPAddress;
};

///�û���¼Ӧ��
struct CThostFtdcRspUserLoginField
{
	///������
	TThostFtdcDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TThostFtdcTimeType	LoginTime;
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///����ϵͳ����
	TThostFtdcSystemNameType	SystemName;
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
	///��֤��ʱ��
	TThostFtdcTimeType	SSETime;
	///��֤��ʱ��
	TThostFtdcTimeType	SZETime;
};

///�û��ǳ�����
struct CThostFtdcUserLogoutField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
};

///�û��Ự
struct CThostFtdcUserSessionRefField
{
	///ǰ�ñ��
	TThostFtdcFrontIDType	FrontID;
	///�Ự���
	TThostFtdcSessionIDType	SessionID;
};

///�ͻ�����֤����
struct CThostFtdcReqAuthenticateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///��֤��
	TThostFtdcAuthCodeType	AuthCode;
};

///�ͻ�����֤��Ӧ
struct CThostFtdcRspAuthenticateField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
};

///�ͻ�����֤��Ϣ
struct CThostFtdcAuthenticationInfoField
{
	///���͹�˾����
	TThostFtdcBrokerIDType	BrokerID;
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û��˲�Ʒ��Ϣ
	TThostFtdcProductInfoType	UserProductInfo;
	///��֤��Ϣ
	TThostFtdcAuthInfoType	AuthInfo;
	///�Ƿ�Ϊ��֤���
	TThostFtdcBoolType	IsResult;
};

///�û���Ϣ
struct CThostFtdcLevel2UserField
{
	///�û�����
	TThostFtdcUserIDType	UserID;
	///�û�����
	TThostFtdcUserNameType	UserName;
	///����
	TThostFtdcPasswordType	Password;
	///��������
	TThostFtdcDateType	EffectiveDate;
};

///ָ����֤ȯ
struct CThostFtdcSpecificSecurityField
{
	///֤ȯ����
	TThostFtdcSecurityIDType	SecurityID;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
};

///Level2����
struct CThostFtdcLevel2MarketDataField
{
	///������
	TThostFtdcDateType	TradingDay;
	///ʱ���
	TThostFtdcTimeType	DataTimeStamp;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///֤ȯ����
	TThostFtdcSecurityIDType	SecurityID;
	///�����̼�
	TThostFtdcPriceType	PreClosePx;
	///���̼�
	TThostFtdcPriceType	OpenPx;
	///��߼�
	TThostFtdcPriceType	HighPx;
	///��ͼ�
	TThostFtdcPriceType	LowPx;
	///�ּ�
	TThostFtdcPriceType	LastPx;
	///���̼�
	TThostFtdcPriceType	ClosePx;
	///�ɽ�����
	TThostFtdcVolumeType	NumTrades;
	///�ɽ�����
	TThostFtdcLargeVolumeType	TotalVolumeTrade;
	///�ɽ��ܽ��
	TThostFtdcMoneyType	TotalValueTrade;
	///ί����������
	TThostFtdcLargeVolumeType	TotalBidQty;
	///��Ȩƽ��ί���
	TThostFtdcPriceType	WeightedAvgBidPx;
	///ծȯ��Ȩƽ��ί���
	TThostFtdcPriceType	AltWeightedAvgBidPx;
	///ί����������
	TThostFtdcLargeVolumeType	TotalOfferQty;
	///��Ȩƽ��ί����
	TThostFtdcPriceType	WeightedAvgOfferPx;
	///ծȯ��Ȩƽ��ί���۸�
	TThostFtdcPriceType	AltWeightedAvgOfferPx;
	///��ֵ��ֵ
	TThostFtdcPriceType	IOPV;
	///����������
	TThostFtdcRatioType	YieldToMaturity;
	///Ȩִ֤��������
	TThostFtdcLargeVolumeType	TotalWarrantExecQty;
	///Ȩ֤��ͣ�۸�
	TThostFtdcPriceType	WarLowerPx;
	///Ȩ֤��ͣ�۸�
	TThostFtdcPriceType	WarUpperPx;
	///������
	TThostFtdcPriceLevelType	BidPriceLevel;
	///�����һ
	TThostFtdcPriceType	BidPx1;
	///������һ
	TThostFtdcVolumeType	BidOrderQty1;
	///ʵ������ί�б���һ
	TThostFtdcVolumeType	BidNumOrder1;
	///����۶�
	TThostFtdcPriceType	BidPx2;
	///��������
	TThostFtdcVolumeType	BidOrderQty2;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder2;
	///�������
	TThostFtdcPriceType	BidPx3;
	///��������
	TThostFtdcVolumeType	BidOrderQty3;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder3;
	///�������
	TThostFtdcPriceType	BidPx4;
	///��������
	TThostFtdcVolumeType	BidOrderQty4;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder4;
	///�������
	TThostFtdcPriceType	BidPx5;
	///��������
	TThostFtdcVolumeType	BidOrderQty5;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder5;
	///�������
	TThostFtdcPriceType	BidPx6;
	///��������
	TThostFtdcVolumeType	BidOrderQty6;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder6;
	///�������
	TThostFtdcPriceType	BidPx7;
	///��������
	TThostFtdcVolumeType	BidOrderQty7;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder7;
	///����۰�
	TThostFtdcPriceType	BidPx8;
	///��������
	TThostFtdcVolumeType	BidOrderQty8;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder8;
	///����۾�
	TThostFtdcPriceType	BidPx9;
	///��������
	TThostFtdcVolumeType	BidOrderQty9;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder9;
	///�����ʮ
	TThostFtdcPriceType	BidPxA;
	///������ʮ
	TThostFtdcVolumeType	BidOrderQtyA;
	///ʵ������ί�б���ʮ
	TThostFtdcVolumeType	BidNumOrderA;
	///�������
	TThostFtdcPriceLevelType	OfferPriceLevel;
	///������һ
	TThostFtdcPriceType	OfferPx1;
	///������һ
	TThostFtdcVolumeType	OfferOrderQty1;
	///ʵ������ί�б���һ
	TThostFtdcVolumeType	OfferNumOrder1;
	///�����۶�
	TThostFtdcPriceType	OfferPx2;
	///��������
	TThostFtdcVolumeType	OfferOrderQty2;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder2;
	///��������
	TThostFtdcPriceType	OfferPx3;
	///��������
	TThostFtdcVolumeType	OfferOrderQty3;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder3;
	///��������
	TThostFtdcPriceType	OfferPx4;
	///��������
	TThostFtdcVolumeType	OfferOrderQty4;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder4;
	///��������
	TThostFtdcPriceType	OfferPx5;
	///��������
	TThostFtdcVolumeType	OfferOrderQty5;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder5;
	///��������
	TThostFtdcPriceType	OfferPx6;
	///��������
	TThostFtdcVolumeType	OfferOrderQty6;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder6;
	///��������
	TThostFtdcPriceType	OfferPx7;
	///��������
	TThostFtdcVolumeType	OfferOrderQty7;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder7;
	///�����۰�
	TThostFtdcPriceType	OfferPx8;
	///��������
	TThostFtdcVolumeType	OfferOrderQty8;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder8;
	///�����۾�
	TThostFtdcPriceType	OfferPx9;
	///��������
	TThostFtdcVolumeType	OfferOrderQty9;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder9;
	///������ʮ
	TThostFtdcPriceType	OfferPxA;
	///������ʮ
	TThostFtdcVolumeType	OfferOrderQtyA;
	///ʵ������ί�б���ʮ
	TThostFtdcVolumeType	OfferNumOrderA;
};

///Level2�������ʱ������
struct CThostFtdcL2MarketDataUpdateTimeField
{
	///������
	TThostFtdcDateType	TradingDay;
	///ʱ���
	TThostFtdcTimeType	DataTimeStamp;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///֤ȯ����
	TThostFtdcSecurityIDType	SecurityID;
};

///Level2��������һ����
struct CThostFtdcL2MarketDataBid1Field
{
	///�����һ
	TThostFtdcPriceType	BidPx1;
	///������һ
	TThostFtdcVolumeType	BidOrderQty1;
	///ʵ������ί�б���һ
	TThostFtdcVolumeType	BidNumOrder1;
};

///Level2��������һ����
struct CThostFtdcL2MarketDataOffer1Field
{
	///������һ
	TThostFtdcPriceType	OfferPx1;
	///������һ
	TThostFtdcVolumeType	OfferOrderQty1;
	///ʵ������ί�б���һ
	TThostFtdcVolumeType	OfferNumOrder1;
};

///Level2�������������
struct CThostFtdcL2MarketDataBid2Field
{
	///����۶�
	TThostFtdcPriceType	BidPx2;
	///��������
	TThostFtdcVolumeType	BidOrderQty2;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder2;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer2Field
{
	///�����۶�
	TThostFtdcPriceType	OfferPx2;
	///��������
	TThostFtdcVolumeType	OfferOrderQty2;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder2;
};

///Level2��������������
struct CThostFtdcL2MarketDataBid3Field
{
	///�������
	TThostFtdcPriceType	BidPx3;
	///��������
	TThostFtdcVolumeType	BidOrderQty3;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder3;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer3Field
{
	///��������
	TThostFtdcPriceType	OfferPx3;
	///��������
	TThostFtdcVolumeType	OfferOrderQty3;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder3;
};

///Level2��������������
struct CThostFtdcL2MarketDataBid4Field
{
	///�������
	TThostFtdcPriceType	BidPx4;
	///��������
	TThostFtdcVolumeType	BidOrderQty4;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder4;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer4Field
{
	///��������
	TThostFtdcPriceType	OfferPx4;
	///��������
	TThostFtdcVolumeType	OfferOrderQty4;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder4;
};

///Level2��������������
struct CThostFtdcL2MarketDataBid5Field
{
	///�������
	TThostFtdcPriceType	BidPx5;
	///��������
	TThostFtdcVolumeType	BidOrderQty5;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder5;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer5Field
{
	///��������
	TThostFtdcPriceType	OfferPx5;
	///��������
	TThostFtdcVolumeType	OfferOrderQty5;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder5;
};

///Level2��������������
struct CThostFtdcL2MarketDataBid6Field
{
	///�������
	TThostFtdcPriceType	BidPx6;
	///��������
	TThostFtdcVolumeType	BidOrderQty6;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder6;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer6Field
{
	///��������
	TThostFtdcPriceType	OfferPx6;
	///��������
	TThostFtdcVolumeType	OfferOrderQty6;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder6;
};

///Level2��������������
struct CThostFtdcL2MarketDataBid7Field
{
	///�������
	TThostFtdcPriceType	BidPx7;
	///��������
	TThostFtdcVolumeType	BidOrderQty7;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder7;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer7Field
{
	///��������
	TThostFtdcPriceType	OfferPx7;
	///��������
	TThostFtdcVolumeType	OfferOrderQty7;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder7;
};

///Level2�������������
struct CThostFtdcL2MarketDataBid8Field
{
	///����۰�
	TThostFtdcPriceType	BidPx8;
	///��������
	TThostFtdcVolumeType	BidOrderQty8;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder8;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer8Field
{
	///�����۰�
	TThostFtdcPriceType	OfferPx8;
	///��������
	TThostFtdcVolumeType	OfferOrderQty8;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder8;
};

///Level2�������������
struct CThostFtdcL2MarketDataBid9Field
{
	///����۾�
	TThostFtdcPriceType	BidPx9;
	///��������
	TThostFtdcVolumeType	BidOrderQty9;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	BidNumOrder9;
};

///Level2��������������
struct CThostFtdcL2MarketDataOffer9Field
{
	///�����۾�
	TThostFtdcPriceType	OfferPx9;
	///��������
	TThostFtdcVolumeType	OfferOrderQty9;
	///ʵ������ί�б�����
	TThostFtdcVolumeType	OfferNumOrder9;
};

///Level2��������ʮ����
struct CThostFtdcL2MarketDataBidAField
{
	///�����ʮ
	TThostFtdcPriceType	BidPxA;
	///������ʮ
	TThostFtdcVolumeType	BidOrderQtyA;
	///ʵ������ί�б���ʮ
	TThostFtdcVolumeType	BidNumOrderA;
};

///Level2��������ʮ����
struct CThostFtdcL2MarketDataOfferAField
{
	///������ʮ
	TThostFtdcPriceType	OfferPxA;
	///������ʮ
	TThostFtdcVolumeType	OfferOrderQtyA;
	///ʵ������ί�б���ʮ
	TThostFtdcVolumeType	OfferNumOrderA;
};

///Level2�ɽ���Ϣ
struct CThostFtdcL2MarketDataTradedField
{
	///�ɽ�����
	TThostFtdcVolumeType	NumTrades;
	///�ɽ�����
	TThostFtdcLargeVolumeType	TotalVolumeTrade;
	///�ɽ��ܽ��
	TThostFtdcMoneyType	TotalValueTrade;
};

///Level2ί����Ϣ
struct CThostFtdcL2MarketDataBidOrderField
{
	///ί����������
	TThostFtdcLargeVolumeType	TotalBidQty;
	///��Ȩƽ��ί���
	TThostFtdcPriceType	WeightedAvgBidPx;
	///ծȯ��Ȩƽ��ί���
	TThostFtdcPriceType	AltWeightedAvgBidPx;
};

///Level2ί����Ϣ
struct CThostFtdcL2MarketDataOfferOrderField
{
	///ί����������
	TThostFtdcLargeVolumeType	TotalOfferQty;
	///��Ȩƽ��ί����
	TThostFtdcPriceType	WeightedAvgOfferPx;
	///ծȯ��Ȩƽ��ί���۸�
	TThostFtdcPriceType	AltWeightedAvgOfferPx;
};

///Level2Ȩ֤��Ϣ
struct CThostFtdcL2MarketDataWarrantField
{
	///Ȩִ֤��������
	TThostFtdcLargeVolumeType	TotalWarrantExecQty;
	///Ȩ֤��ͣ�۸�
	TThostFtdcPriceType	WarLowerPx;
	///Ȩ֤��ͣ�۸�
	TThostFtdcPriceType	WarUpperPx;
};

///Level2���������Ϣ
struct CThostFtdcL2MarketDataBaseField
{
	///�ּ�
	TThostFtdcPriceType	LastPx;
};

///Level2���龲̬����
struct CThostFtdcL2MarketDataStaticField
{
	///�����̼�
	TThostFtdcPriceType	PreClosePx;
	///���̼�
	TThostFtdcPriceType	OpenPx;
	///���̼�
	TThostFtdcPriceType	ClosePx;
	///��߼�
	TThostFtdcPriceType	HighPx;
	///��ͼ�
	TThostFtdcPriceType	LowPx;
	///��ֵ��ֵ
	TThostFtdcPriceType	IOPV;
	///����������
	TThostFtdcRatioType	YieldToMaturity;
};

///Level2�۸��������
struct CThostFtdcL2MarketDataPriceLevelField
{
	///������
	TThostFtdcPriceLevelType	BidPriceLevel;
	///�������
	TThostFtdcPriceLevelType	OfferPriceLevel;
};

///Level2ָ������
struct CThostFtdcNGTSIndexField
{
	///������
	TThostFtdcDateType	TradingDay;
	///����ʱ�䣨�룩
	TThostFtdcTimeType	TimeStamp;
	///����������
	TThostFtdcExchangeIDType	ExchangeID;
	///ָ������
	TThostFtdcSecurityIDType	SecurityID;
	///ǰ����ָ��
	TThostFtdcIndexType	PreCloseIndex;
	///����ָ��
	TThostFtdcIndexType	OpenIndex;
	///���������Ӧָ���ĳɽ���Ԫ��
	TThostFtdcMoneyType	TurnOver;
	///���ָ��
	TThostFtdcIndexType	HighIndex;
	///���ָ��
	TThostFtdcIndexType	LowIndex;
	///����ָ��
	TThostFtdcIndexType	LastIndex;
	///��������ָ��
	TThostFtdcIndexType	CloseIndex;
	///�ɽ�ʱ��
	TThostFtdcTimeType	TradeTime;
	///���������Ӧָ���Ľ����������֣�
	TThostFtdcLargeVolumeType	TotalVolumeTraded;
};


_LEVEL2_NS_END_

#endif
