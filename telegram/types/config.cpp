// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include <sstream>


#include "config.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

Config::Config(ConfigType classType, InboundPkt *in) :
    m_broadcastSizeMax(0),
    m_chatBigSize(0),
    m_chatSizeMax(0),
    m_date(0),
    m_expires(0),
    m_forwardedCountMax(0),
    m_notifyCloudDelayMs(0),
    m_notifyDefaultDelayMs(0),
    m_offlineBlurTimeoutMs(0),
    m_offlineIdleTimeoutMs(0),
    m_onlineCloudTimeoutMs(0),
    m_onlineUpdatePeriodMs(0),
    m_pushChatLimit(0),
    m_pushChatPeriodMs(0),
    m_testMode(false),
    m_thisDc(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Config::Config(InboundPkt *in) :
    m_broadcastSizeMax(0),
    m_chatBigSize(0),
    m_chatSizeMax(0),
    m_date(0),
    m_expires(0),
    m_forwardedCountMax(0),
    m_notifyCloudDelayMs(0),
    m_notifyDefaultDelayMs(0),
    m_offlineBlurTimeoutMs(0),
    m_offlineIdleTimeoutMs(0),
    m_onlineCloudTimeoutMs(0),
    m_onlineUpdatePeriodMs(0),
    m_pushChatLimit(0),
    m_pushChatPeriodMs(0),
    m_testMode(false),
    m_thisDc(0),
    m_classType(typeConfig)
{
    fetch(in);
}

Config::~Config() {
}

void Config::setBroadcastSizeMax(qint32 broadcastSizeMax) {
    m_broadcastSizeMax = broadcastSizeMax;
}

qint32 Config::broadcastSizeMax() const {
    return m_broadcastSizeMax;
}

void Config::setChatBigSize(qint32 chatBigSize) {
    m_chatBigSize = chatBigSize;
}

qint32 Config::chatBigSize() const {
    return m_chatBigSize;
}

void Config::setChatSizeMax(qint32 chatSizeMax) {
    m_chatSizeMax = chatSizeMax;
}

qint32 Config::chatSizeMax() const {
    return m_chatSizeMax;
}

void Config::setDate(qint32 date) {
    m_date = date;
}

qint32 Config::date() const {
    return m_date;
}

void Config::setDcOptions(const QList<DcOption> &dcOptions) {
    m_dcOptions = dcOptions;
}

QList<DcOption> Config::dcOptions() const {
    return m_dcOptions;
}

void Config::setDisabledFeatures(const QList<DisabledFeature> &disabledFeatures) {
    m_disabledFeatures = disabledFeatures;
}

QList<DisabledFeature> Config::disabledFeatures() const {
    return m_disabledFeatures;
}

void Config::setExpires(qint32 expires) {
    m_expires = expires;
}

qint32 Config::expires() const {
    return m_expires;
}

void Config::setForwardedCountMax(qint32 forwardedCountMax) {
    m_forwardedCountMax = forwardedCountMax;
}

qint32 Config::forwardedCountMax() const {
    return m_forwardedCountMax;
}

void Config::setNotifyCloudDelayMs(qint32 notifyCloudDelayMs) {
    m_notifyCloudDelayMs = notifyCloudDelayMs;
}

qint32 Config::notifyCloudDelayMs() const {
    return m_notifyCloudDelayMs;
}

void Config::setNotifyDefaultDelayMs(qint32 notifyDefaultDelayMs) {
    m_notifyDefaultDelayMs = notifyDefaultDelayMs;
}

qint32 Config::notifyDefaultDelayMs() const {
    return m_notifyDefaultDelayMs;
}

void Config::setOfflineBlurTimeoutMs(qint32 offlineBlurTimeoutMs) {
    m_offlineBlurTimeoutMs = offlineBlurTimeoutMs;
}

qint32 Config::offlineBlurTimeoutMs() const {
    return m_offlineBlurTimeoutMs;
}

void Config::setOfflineIdleTimeoutMs(qint32 offlineIdleTimeoutMs) {
    m_offlineIdleTimeoutMs = offlineIdleTimeoutMs;
}

qint32 Config::offlineIdleTimeoutMs() const {
    return m_offlineIdleTimeoutMs;
}

void Config::setOnlineCloudTimeoutMs(qint32 onlineCloudTimeoutMs) {
    m_onlineCloudTimeoutMs = onlineCloudTimeoutMs;
}

qint32 Config::onlineCloudTimeoutMs() const {
    return m_onlineCloudTimeoutMs;
}

void Config::setOnlineUpdatePeriodMs(qint32 onlineUpdatePeriodMs) {
    m_onlineUpdatePeriodMs = onlineUpdatePeriodMs;
}

qint32 Config::onlineUpdatePeriodMs() const {
    return m_onlineUpdatePeriodMs;
}

void Config::setPushChatLimit(qint32 pushChatLimit) {
    m_pushChatLimit = pushChatLimit;
}

qint32 Config::pushChatLimit() const {
    return m_pushChatLimit;
}

void Config::setPushChatPeriodMs(qint32 pushChatPeriodMs) {
    m_pushChatPeriodMs = pushChatPeriodMs;
}

qint32 Config::pushChatPeriodMs() const {
    return m_pushChatPeriodMs;
}

void Config::setTestMode(bool testMode) {
    m_testMode = testMode;
}

bool Config::testMode() const {
    return m_testMode;
}

void Config::setThisDc(qint32 thisDc) {
    m_thisDc = thisDc;
}

qint32 Config::thisDc() const {
    return m_thisDc;
}

bool Config::operator ==(const Config &b) {
    return m_broadcastSizeMax == b.m_broadcastSizeMax &&
           m_chatBigSize == b.m_chatBigSize &&
           m_chatSizeMax == b.m_chatSizeMax &&
           m_date == b.m_date &&
           m_dcOptions == b.m_dcOptions &&
           m_disabledFeatures == b.m_disabledFeatures &&
           m_expires == b.m_expires &&
           m_forwardedCountMax == b.m_forwardedCountMax &&
           m_notifyCloudDelayMs == b.m_notifyCloudDelayMs &&
           m_notifyDefaultDelayMs == b.m_notifyDefaultDelayMs &&
           m_offlineBlurTimeoutMs == b.m_offlineBlurTimeoutMs &&
           m_offlineIdleTimeoutMs == b.m_offlineIdleTimeoutMs &&
           m_onlineCloudTimeoutMs == b.m_onlineCloudTimeoutMs &&
           m_onlineUpdatePeriodMs == b.m_onlineUpdatePeriodMs &&
           m_pushChatLimit == b.m_pushChatLimit &&
           m_pushChatPeriodMs == b.m_pushChatPeriodMs &&
           m_testMode == b.m_testMode &&
           m_thisDc == b.m_thisDc;
}

void Config::setClassType(Config::ConfigType classType) {
    m_classType = classType;
}

Config::ConfigType Config::classType() const {
    return m_classType;
}

bool Config::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeConfig: {
        m_date = in->fetchInt();
        m_expires = in->fetchInt();
        m_testMode = in->fetchBool();
        m_thisDc = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_dcOptions_length = in->fetchInt();
        m_dcOptions.clear();
        for (qint32 i = 0; i < m_dcOptions_length; i++) {
            DcOption type;
            type.fetch(in);
            m_dcOptions.append(type);
        }
        m_chatSizeMax = in->fetchInt();
        m_broadcastSizeMax = in->fetchInt();
        m_forwardedCountMax = in->fetchInt();
        m_onlineUpdatePeriodMs = in->fetchInt();
        m_offlineBlurTimeoutMs = in->fetchInt();
        m_offlineIdleTimeoutMs = in->fetchInt();
        m_onlineCloudTimeoutMs = in->fetchInt();
        m_notifyCloudDelayMs = in->fetchInt();
        m_notifyDefaultDelayMs = in->fetchInt();
        m_chatBigSize = in->fetchInt();
        m_pushChatPeriodMs = in->fetchInt();
        m_pushChatLimit = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_disabledFeatures_length = in->fetchInt();
        m_disabledFeatures.clear();
        for (qint32 i = 0; i < m_disabledFeatures_length; i++) {
            DisabledFeature type;
            type.fetch(in);
            m_disabledFeatures.append(type);
        }
        m_classType = static_cast<ConfigType>(x);
        return true;
    }
        break;
    
    default:
        std::stringstream error; error << "FATAL: Unknown message received. API ID: " << x; LQTG_FETCH_ASSERT(error.str().c_str());
        return false;
    }
}

bool Config::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeConfig: {
        out->appendInt(m_date);
        out->appendInt(m_expires);
        out->appendBool(m_testMode);
        out->appendInt(m_thisDc);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_dcOptions.count());
        for (qint32 i = 0; i < m_dcOptions.count(); i++) {
            m_dcOptions[i].push(out);
        }
        out->appendInt(m_chatSizeMax);
        out->appendInt(m_broadcastSizeMax);
        out->appendInt(m_forwardedCountMax);
        out->appendInt(m_onlineUpdatePeriodMs);
        out->appendInt(m_offlineBlurTimeoutMs);
        out->appendInt(m_offlineIdleTimeoutMs);
        out->appendInt(m_onlineCloudTimeoutMs);
        out->appendInt(m_notifyCloudDelayMs);
        out->appendInt(m_notifyDefaultDelayMs);
        out->appendInt(m_chatBigSize);
        out->appendInt(m_pushChatPeriodMs);
        out->appendInt(m_pushChatLimit);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_disabledFeatures.count());
        for (qint32 i = 0; i < m_disabledFeatures.count(); i++) {
            m_disabledFeatures[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

