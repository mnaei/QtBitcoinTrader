// Copyright (C) 2013 July IGHOR.
// I want to create trading application that can be configured for any rule and strategy.
// If you want to help me please Donate: 1d6iMwjjNo8ZGYeJBZKXgcgVk9o7fXcjc
// For any questions please use contact form https://sourceforge.net/projects/bitcointrader/
// Or send e-mail directly to julyighor@gmail.com
//
// You may use, distribute and copy the Qt Bitcion Trader under the terms of
// GNU General Public License version 3

#ifndef MAIN_H
#define MAIN_H
//#include <QDebug>////////////
//#define showDebug(text) qDebug()<<QTime::currentTime().toString(localTimeFormat)+"> "+text//////////

#include "qtbitcointrader.h"
#include "logthread.h"
#include "julytranslator.h"
#include <QFontMetrics>

#define USE_QTMULTIMEDIA

#define julyTr julyTranslator->translateString
#define hmacSha512(key, baseString) QByteArray(reinterpret_cast<const char *>(HMAC(EVP_sha512(),key.constData(), key.size(), reinterpret_cast<const unsigned char *>(baseString.constData()), baseString.size(), 0, 0)),64)
#define hmacSha256(key, baseString) QByteArray(reinterpret_cast<const char *>(HMAC(EVP_sha256(),key.constData(), key.size(), reinterpret_cast<const unsigned char *>(baseString.constData()), baseString.size(), 0, 0)),32)
#define hmacSha1(key, baseString) QByteArray(reinterpret_cast<const char *>(HMAC(EVP_sha1(),key.constData(), key.size(), reinterpret_cast<const unsigned char *>(baseString.constData()), baseString.size(), 0, 0)),20)
#define restKey (*restKey_)
#define restSign (*restSign_)
#define mainWindow (*mainWindow_)
#define iniFileName (*iniFileName_)
#define logFileName (*logFileName_)
#define appVerReal (*appVerReal_)
#define appVerLastReal (*appVerLastReal_)
#define appVerIsBeta (*appVerIsBeta_)
#define appVerStr (*appVerStr_)
#define currencyRequestPair (*currencyRequest_)
#define currencySymbol (*currencySymbol_)
#define currencyAStr (*currencyAStr_)
#define currencyBStr (*currencyBStr_)
#define currencyAStrLow (*currencyAStrLow_)
#define currencyBStrLow (*currencyBStrLow_)
#define currencyBSign (*currencyBSign_)
#define currencyASign (*currencyASign_)
#define appDataDir (*appDataDir_)
#define defaultLangFile (*defaultLangFile_)
#define localDateTimeFormat (*dateTimeFormat_)
#define localTimeFormat (*timeFormat_)
#define exchangeName (*exchangeName_)
#define btcDecimals (*btcDecimals_)
#define usdDecimals (*usdDecimals_)
#define btcBalanceDecimals (*btcBalanceDecimals_)
#define usdBalanceDecimals (*usdBalanceDecimals_)
#define priceDecimals (*priceDecimals_)
#define priceMinimumValue (*priceMinimumValue_)
#define minTradeVolume (*minTradeVolume_)
#define minTradePrice (*minTradePrice_)
#define httpRequestInterval (*httpRequestInterval_)
#define httpRequestTimeout (*httpRequestTimeout_)
#define httpSplitPackets (*httpSplitPackets_)
#define httpRetryCount (*httpRetryCount_)
#define depthCountLimit (*depthCountLimit_)
#define depthCountLimitStr (*depthCountLimitStr_)
#define uiUpdateInterval (*uiUpdateInterval_)
#define apiDownCount (*apiDownCount_)
#define textFontWidth(text) fontMetrics_->width(text)
#define groupPriceValue (*groupPriceValue_)
#define depthRefreshBlocked (*depthRefreshBlocked_)
#define defaultSectionSize (*defaultSectionSize_)
#define highResolutionDisplay (*highResolutionDisplay_)
#define supportsUtfUI (*supportsUtfUI_)
#define debugLevel (*debugLevel_)

extern int *debugLevel_;//0: Disabled; 1: Debug; 2: Log
extern bool *supportsUtfUI_;
extern bool *highResolutionDisplay_;
extern QByteArray *currencySymbol_;
extern double *priceMinimumValue_;
extern int *defaultSectionSize_;
extern bool *depthRefreshBlocked_;
extern double *groupPriceValue_;
extern QFontMetrics *fontMetrics_;
extern int *apiDownCount_;
extern int *uiUpdateInterval_;
extern QByteArray *depthCountLimitStr_;
extern int *depthCountLimit_;
extern int *httpRetryCount_ ;
extern bool *httpSplitPackets_;
extern int *httpRequestInterval_;
extern int *httpRequestTimeout_;
extern double *minTradeVolume_;
extern double *minTradePrice_;
extern int *btcDecimals_;
extern int *usdDecimals_;
extern int *btcBalanceDecimals_;
extern int *usdBalanceDecimals_;
extern int *priceDecimals_;
extern QByteArray *currencyRequest_;
extern QString *exchangeName_;
extern QString *timeFormat_;
extern QString *dateTimeFormat_;
extern QString *defaultLangFile_;
extern JulyTranslator *julyTranslator;
extern QByteArray *appDataDir_;
extern QByteArray *currencyAStr_;
extern QByteArray *currencyBStr_;
extern QByteArray *currencyAStrLow_;
extern QByteArray *currencyBStrLow_;
extern QByteArray *currencyASign_;
extern QByteArray *currencyBSign_;
extern QByteArray *appVerStr_;
extern LogThread *logThread;
extern QByteArray *restKey_;
extern QByteArray *restSign_;
extern QtBitcoinTrader *mainWindow_;
extern QString *logFileName_;
extern QString *iniFileName_;
extern double *appVerReal_;
extern double *appVerLastReal_;
extern bool *appVerIsBeta_;
extern QMap<QByteArray,QByteArray> *currencySignMap;
extern QMap<QByteArray,QByteArray> *currencyNamesMap;
#endif // MAIN_H
