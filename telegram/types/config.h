// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONFIG
#define LQTG_TYPE_CONFIG

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QList>
#include "dcoption.h"
#include "disabledfeature.h"

class LIBQTELEGRAMSHARED_EXPORT Config : public TelegramTypeObject
{
public:
    enum ConfigClassType {
        typeConfig = 0xc9411388
    };

    Config(ConfigClassType classType = typeConfig, InboundPkt *in = 0);
    Config(InboundPkt *in);
    Config(const Null&);
    virtual ~Config();

    void setChatBigSize(qint32 chatBigSize);
    qint32 chatBigSize() const;

    void setChatSizeMax(qint32 chatSizeMax);
    qint32 chatSizeMax() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcOptions(const QList<DcOption> &dcOptions);
    QList<DcOption> dcOptions() const;

    void setDisabledFeatures(const QList<DisabledFeature> &disabledFeatures);
    QList<DisabledFeature> disabledFeatures() const;

    void setEditTimeLimit(qint32 editTimeLimit);
    qint32 editTimeLimit() const;

    void setExpires(qint32 expires);
    qint32 expires() const;

    void setForwardedCountMax(qint32 forwardedCountMax);
    qint32 forwardedCountMax() const;

    void setMegagroupSizeMax(qint32 megagroupSizeMax);
    qint32 megagroupSizeMax() const;

    void setNotifyCloudDelayMs(qint32 notifyCloudDelayMs);
    qint32 notifyCloudDelayMs() const;

    void setNotifyDefaultDelayMs(qint32 notifyDefaultDelayMs);
    qint32 notifyDefaultDelayMs() const;

    void setOfflineBlurTimeoutMs(qint32 offlineBlurTimeoutMs);
    qint32 offlineBlurTimeoutMs() const;

    void setOfflineIdleTimeoutMs(qint32 offlineIdleTimeoutMs);
    qint32 offlineIdleTimeoutMs() const;

    void setOnlineCloudTimeoutMs(qint32 onlineCloudTimeoutMs);
    qint32 onlineCloudTimeoutMs() const;

    void setOnlineUpdatePeriodMs(qint32 onlineUpdatePeriodMs);
    qint32 onlineUpdatePeriodMs() const;

    void setPushChatLimit(qint32 pushChatLimit);
    qint32 pushChatLimit() const;

    void setPushChatPeriodMs(qint32 pushChatPeriodMs);
    qint32 pushChatPeriodMs() const;

    void setRatingEDecay(qint32 ratingEDecay);
    qint32 ratingEDecay() const;

    void setSavedGifsLimit(qint32 savedGifsLimit);
    qint32 savedGifsLimit() const;

    void setTestMode(bool testMode);
    bool testMode() const;

    void setThisDc(qint32 thisDc);
    qint32 thisDc() const;

    void setClassType(ConfigClassType classType);
    ConfigClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Config fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const Config &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_chatBigSize;
    qint32 m_chatSizeMax;
    qint32 m_date;
    QList<DcOption> m_dcOptions;
    QList<DisabledFeature> m_disabledFeatures;
    qint32 m_editTimeLimit;
    qint32 m_expires;
    qint32 m_forwardedCountMax;
    qint32 m_megagroupSizeMax;
    qint32 m_notifyCloudDelayMs;
    qint32 m_notifyDefaultDelayMs;
    qint32 m_offlineBlurTimeoutMs;
    qint32 m_offlineIdleTimeoutMs;
    qint32 m_onlineCloudTimeoutMs;
    qint32 m_onlineUpdatePeriodMs;
    qint32 m_pushChatLimit;
    qint32 m_pushChatPeriodMs;
    qint32 m_ratingEDecay;
    qint32 m_savedGifsLimit;
    bool m_testMode;
    qint32 m_thisDc;
    ConfigClassType m_classType;
};

Q_DECLARE_METATYPE(Config)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Config &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Config &item);

inline Config::Config(ConfigClassType classType, InboundPkt *in) :
    m_chatBigSize(0),
    m_chatSizeMax(0),
    m_date(0),
    m_editTimeLimit(0),
    m_expires(0),
    m_forwardedCountMax(0),
    m_megagroupSizeMax(0),
    m_notifyCloudDelayMs(0),
    m_notifyDefaultDelayMs(0),
    m_offlineBlurTimeoutMs(0),
    m_offlineIdleTimeoutMs(0),
    m_onlineCloudTimeoutMs(0),
    m_onlineUpdatePeriodMs(0),
    m_pushChatLimit(0),
    m_pushChatPeriodMs(0),
    m_ratingEDecay(0),
    m_savedGifsLimit(0),
    m_testMode(false),
    m_thisDc(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline Config::Config(InboundPkt *in) :
    m_chatBigSize(0),
    m_chatSizeMax(0),
    m_date(0),
    m_editTimeLimit(0),
    m_expires(0),
    m_forwardedCountMax(0),
    m_megagroupSizeMax(0),
    m_notifyCloudDelayMs(0),
    m_notifyDefaultDelayMs(0),
    m_offlineBlurTimeoutMs(0),
    m_offlineIdleTimeoutMs(0),
    m_onlineCloudTimeoutMs(0),
    m_onlineUpdatePeriodMs(0),
    m_pushChatLimit(0),
    m_pushChatPeriodMs(0),
    m_ratingEDecay(0),
    m_savedGifsLimit(0),
    m_testMode(false),
    m_thisDc(0),
    m_classType(typeConfig)
{
    fetch(in);
}

inline Config::Config(const Null &null) :
    TelegramTypeObject(null),
    m_chatBigSize(0),
    m_chatSizeMax(0),
    m_date(0),
    m_editTimeLimit(0),
    m_expires(0),
    m_forwardedCountMax(0),
    m_megagroupSizeMax(0),
    m_notifyCloudDelayMs(0),
    m_notifyDefaultDelayMs(0),
    m_offlineBlurTimeoutMs(0),
    m_offlineIdleTimeoutMs(0),
    m_onlineCloudTimeoutMs(0),
    m_onlineUpdatePeriodMs(0),
    m_pushChatLimit(0),
    m_pushChatPeriodMs(0),
    m_ratingEDecay(0),
    m_savedGifsLimit(0),
    m_testMode(false),
    m_thisDc(0),
    m_classType(typeConfig)
{
}

inline Config::~Config() {
}

inline void Config::setChatBigSize(qint32 chatBigSize) {
    m_chatBigSize = chatBigSize;
}

inline qint32 Config::chatBigSize() const {
    return m_chatBigSize;
}

inline void Config::setChatSizeMax(qint32 chatSizeMax) {
    m_chatSizeMax = chatSizeMax;
}

inline qint32 Config::chatSizeMax() const {
    return m_chatSizeMax;
}

inline void Config::setDate(qint32 date) {
    m_date = date;
}

inline qint32 Config::date() const {
    return m_date;
}

inline void Config::setDcOptions(const QList<DcOption> &dcOptions) {
    m_dcOptions = dcOptions;
}

inline QList<DcOption> Config::dcOptions() const {
    return m_dcOptions;
}

inline void Config::setDisabledFeatures(const QList<DisabledFeature> &disabledFeatures) {
    m_disabledFeatures = disabledFeatures;
}

inline QList<DisabledFeature> Config::disabledFeatures() const {
    return m_disabledFeatures;
}

inline void Config::setEditTimeLimit(qint32 editTimeLimit) {
    m_editTimeLimit = editTimeLimit;
}

inline qint32 Config::editTimeLimit() const {
    return m_editTimeLimit;
}

inline void Config::setExpires(qint32 expires) {
    m_expires = expires;
}

inline qint32 Config::expires() const {
    return m_expires;
}

inline void Config::setForwardedCountMax(qint32 forwardedCountMax) {
    m_forwardedCountMax = forwardedCountMax;
}

inline qint32 Config::forwardedCountMax() const {
    return m_forwardedCountMax;
}

inline void Config::setMegagroupSizeMax(qint32 megagroupSizeMax) {
    m_megagroupSizeMax = megagroupSizeMax;
}

inline qint32 Config::megagroupSizeMax() const {
    return m_megagroupSizeMax;
}

inline void Config::setNotifyCloudDelayMs(qint32 notifyCloudDelayMs) {
    m_notifyCloudDelayMs = notifyCloudDelayMs;
}

inline qint32 Config::notifyCloudDelayMs() const {
    return m_notifyCloudDelayMs;
}

inline void Config::setNotifyDefaultDelayMs(qint32 notifyDefaultDelayMs) {
    m_notifyDefaultDelayMs = notifyDefaultDelayMs;
}

inline qint32 Config::notifyDefaultDelayMs() const {
    return m_notifyDefaultDelayMs;
}

inline void Config::setOfflineBlurTimeoutMs(qint32 offlineBlurTimeoutMs) {
    m_offlineBlurTimeoutMs = offlineBlurTimeoutMs;
}

inline qint32 Config::offlineBlurTimeoutMs() const {
    return m_offlineBlurTimeoutMs;
}

inline void Config::setOfflineIdleTimeoutMs(qint32 offlineIdleTimeoutMs) {
    m_offlineIdleTimeoutMs = offlineIdleTimeoutMs;
}

inline qint32 Config::offlineIdleTimeoutMs() const {
    return m_offlineIdleTimeoutMs;
}

inline void Config::setOnlineCloudTimeoutMs(qint32 onlineCloudTimeoutMs) {
    m_onlineCloudTimeoutMs = onlineCloudTimeoutMs;
}

inline qint32 Config::onlineCloudTimeoutMs() const {
    return m_onlineCloudTimeoutMs;
}

inline void Config::setOnlineUpdatePeriodMs(qint32 onlineUpdatePeriodMs) {
    m_onlineUpdatePeriodMs = onlineUpdatePeriodMs;
}

inline qint32 Config::onlineUpdatePeriodMs() const {
    return m_onlineUpdatePeriodMs;
}

inline void Config::setPushChatLimit(qint32 pushChatLimit) {
    m_pushChatLimit = pushChatLimit;
}

inline qint32 Config::pushChatLimit() const {
    return m_pushChatLimit;
}

inline void Config::setPushChatPeriodMs(qint32 pushChatPeriodMs) {
    m_pushChatPeriodMs = pushChatPeriodMs;
}

inline qint32 Config::pushChatPeriodMs() const {
    return m_pushChatPeriodMs;
}

inline void Config::setRatingEDecay(qint32 ratingEDecay) {
    m_ratingEDecay = ratingEDecay;
}

inline qint32 Config::ratingEDecay() const {
    return m_ratingEDecay;
}

inline void Config::setSavedGifsLimit(qint32 savedGifsLimit) {
    m_savedGifsLimit = savedGifsLimit;
}

inline qint32 Config::savedGifsLimit() const {
    return m_savedGifsLimit;
}

inline void Config::setTestMode(bool testMode) {
    m_testMode = testMode;
}

inline bool Config::testMode() const {
    return m_testMode;
}

inline void Config::setThisDc(qint32 thisDc) {
    m_thisDc = thisDc;
}

inline qint32 Config::thisDc() const {
    return m_thisDc;
}

inline bool Config::operator ==(const Config &b) const {
    return m_classType == b.m_classType &&
           m_chatBigSize == b.m_chatBigSize &&
           m_chatSizeMax == b.m_chatSizeMax &&
           m_date == b.m_date &&
           m_dcOptions == b.m_dcOptions &&
           m_disabledFeatures == b.m_disabledFeatures &&
           m_editTimeLimit == b.m_editTimeLimit &&
           m_expires == b.m_expires &&
           m_forwardedCountMax == b.m_forwardedCountMax &&
           m_megagroupSizeMax == b.m_megagroupSizeMax &&
           m_notifyCloudDelayMs == b.m_notifyCloudDelayMs &&
           m_notifyDefaultDelayMs == b.m_notifyDefaultDelayMs &&
           m_offlineBlurTimeoutMs == b.m_offlineBlurTimeoutMs &&
           m_offlineIdleTimeoutMs == b.m_offlineIdleTimeoutMs &&
           m_onlineCloudTimeoutMs == b.m_onlineCloudTimeoutMs &&
           m_onlineUpdatePeriodMs == b.m_onlineUpdatePeriodMs &&
           m_pushChatLimit == b.m_pushChatLimit &&
           m_pushChatPeriodMs == b.m_pushChatPeriodMs &&
           m_ratingEDecay == b.m_ratingEDecay &&
           m_savedGifsLimit == b.m_savedGifsLimit &&
           m_testMode == b.m_testMode &&
           m_thisDc == b.m_thisDc;
}

inline void Config::setClassType(Config::ConfigClassType classType) {
    m_classType = classType;
}

inline Config::ConfigClassType Config::classType() const {
    return m_classType;
}

inline bool Config::fetch(InboundPkt *in) {
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
        m_megagroupSizeMax = in->fetchInt();
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
        m_savedGifsLimit = in->fetchInt();
        m_editTimeLimit = in->fetchInt();
        m_ratingEDecay = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_disabledFeatures_length = in->fetchInt();
        m_disabledFeatures.clear();
        for (qint32 i = 0; i < m_disabledFeatures_length; i++) {
            DisabledFeature type;
            type.fetch(in);
            m_disabledFeatures.append(type);
        }
        m_classType = static_cast<ConfigClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool Config::push(OutboundPkt *out) const {
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
        out->appendInt(m_megagroupSizeMax);
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
        out->appendInt(m_savedGifsLimit);
        out->appendInt(m_editTimeLimit);
        out->appendInt(m_ratingEDecay);
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

inline QMap<QString, QVariant> Config::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeConfig: {
        result["classType"] = "Config::typeConfig";
        result["date"] = QVariant::fromValue<qint32>(date());
        result["expires"] = QVariant::fromValue<qint32>(expires());
        result["testMode"] = QVariant::fromValue<bool>(testMode());
        result["thisDc"] = QVariant::fromValue<qint32>(thisDc());
        QList<QVariant> _dcOptions;
        Q_FOREACH(const DcOption &m__type, m_dcOptions)
            _dcOptions << m__type.toMap();
        result["dcOptions"] = _dcOptions;
        result["chatSizeMax"] = QVariant::fromValue<qint32>(chatSizeMax());
        result["megagroupSizeMax"] = QVariant::fromValue<qint32>(megagroupSizeMax());
        result["forwardedCountMax"] = QVariant::fromValue<qint32>(forwardedCountMax());
        result["onlineUpdatePeriodMs"] = QVariant::fromValue<qint32>(onlineUpdatePeriodMs());
        result["offlineBlurTimeoutMs"] = QVariant::fromValue<qint32>(offlineBlurTimeoutMs());
        result["offlineIdleTimeoutMs"] = QVariant::fromValue<qint32>(offlineIdleTimeoutMs());
        result["onlineCloudTimeoutMs"] = QVariant::fromValue<qint32>(onlineCloudTimeoutMs());
        result["notifyCloudDelayMs"] = QVariant::fromValue<qint32>(notifyCloudDelayMs());
        result["notifyDefaultDelayMs"] = QVariant::fromValue<qint32>(notifyDefaultDelayMs());
        result["chatBigSize"] = QVariant::fromValue<qint32>(chatBigSize());
        result["pushChatPeriodMs"] = QVariant::fromValue<qint32>(pushChatPeriodMs());
        result["pushChatLimit"] = QVariant::fromValue<qint32>(pushChatLimit());
        result["savedGifsLimit"] = QVariant::fromValue<qint32>(savedGifsLimit());
        result["editTimeLimit"] = QVariant::fromValue<qint32>(editTimeLimit());
        result["ratingEDecay"] = QVariant::fromValue<qint32>(ratingEDecay());
        QList<QVariant> _disabledFeatures;
        Q_FOREACH(const DisabledFeature &m__type, m_disabledFeatures)
            _disabledFeatures << m__type.toMap();
        result["disabledFeatures"] = _disabledFeatures;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline Config Config::fromMap(const QMap<QString, QVariant> &map) {
    Config result;
    if(map.value("classType").toString() == "Config::typeConfig") {
        result.setClassType(typeConfig);
        result.setDate( map.value("date").value<qint32>() );
        result.setExpires( map.value("expires").value<qint32>() );
        result.setTestMode( map.value("testMode").value<bool>() );
        result.setThisDc( map.value("thisDc").value<qint32>() );
        QList<QVariant> map_dcOptions = map["dcOptions"].toList();
        QList<DcOption> _dcOptions;
        Q_FOREACH(const QVariant &var, map_dcOptions)
            _dcOptions << DcOption::fromMap(var.toMap());
        result.setDcOptions(_dcOptions);
        result.setChatSizeMax( map.value("chatSizeMax").value<qint32>() );
        result.setMegagroupSizeMax( map.value("megagroupSizeMax").value<qint32>() );
        result.setForwardedCountMax( map.value("forwardedCountMax").value<qint32>() );
        result.setOnlineUpdatePeriodMs( map.value("onlineUpdatePeriodMs").value<qint32>() );
        result.setOfflineBlurTimeoutMs( map.value("offlineBlurTimeoutMs").value<qint32>() );
        result.setOfflineIdleTimeoutMs( map.value("offlineIdleTimeoutMs").value<qint32>() );
        result.setOnlineCloudTimeoutMs( map.value("onlineCloudTimeoutMs").value<qint32>() );
        result.setNotifyCloudDelayMs( map.value("notifyCloudDelayMs").value<qint32>() );
        result.setNotifyDefaultDelayMs( map.value("notifyDefaultDelayMs").value<qint32>() );
        result.setChatBigSize( map.value("chatBigSize").value<qint32>() );
        result.setPushChatPeriodMs( map.value("pushChatPeriodMs").value<qint32>() );
        result.setPushChatLimit( map.value("pushChatLimit").value<qint32>() );
        result.setSavedGifsLimit( map.value("savedGifsLimit").value<qint32>() );
        result.setEditTimeLimit( map.value("editTimeLimit").value<qint32>() );
        result.setRatingEDecay( map.value("ratingEDecay").value<qint32>() );
        QList<QVariant> map_disabledFeatures = map["disabledFeatures"].toList();
        QList<DisabledFeature> _disabledFeatures;
        Q_FOREACH(const QVariant &var, map_disabledFeatures)
            _disabledFeatures << DisabledFeature::fromMap(var.toMap());
        result.setDisabledFeatures(_disabledFeatures);
        return result;
    }
    return result;
}

inline QByteArray Config::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const Config &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Config::typeConfig:
        stream << item.date();
        stream << item.expires();
        stream << item.testMode();
        stream << item.thisDc();
        stream << item.dcOptions();
        stream << item.chatSizeMax();
        stream << item.megagroupSizeMax();
        stream << item.forwardedCountMax();
        stream << item.onlineUpdatePeriodMs();
        stream << item.offlineBlurTimeoutMs();
        stream << item.offlineIdleTimeoutMs();
        stream << item.onlineCloudTimeoutMs();
        stream << item.notifyCloudDelayMs();
        stream << item.notifyDefaultDelayMs();
        stream << item.chatBigSize();
        stream << item.pushChatPeriodMs();
        stream << item.pushChatLimit();
        stream << item.savedGifsLimit();
        stream << item.editTimeLimit();
        stream << item.ratingEDecay();
        stream << item.disabledFeatures();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, Config &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Config::ConfigClassType>(type));
    switch(type) {
    case Config::typeConfig: {
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_expires;
        stream >> m_expires;
        item.setExpires(m_expires);
        bool m_test_mode;
        stream >> m_test_mode;
        item.setTestMode(m_test_mode);
        qint32 m_this_dc;
        stream >> m_this_dc;
        item.setThisDc(m_this_dc);
        QList<DcOption> m_dc_options;
        stream >> m_dc_options;
        item.setDcOptions(m_dc_options);
        qint32 m_chat_size_max;
        stream >> m_chat_size_max;
        item.setChatSizeMax(m_chat_size_max);
        qint32 m_megagroup_size_max;
        stream >> m_megagroup_size_max;
        item.setMegagroupSizeMax(m_megagroup_size_max);
        qint32 m_forwarded_count_max;
        stream >> m_forwarded_count_max;
        item.setForwardedCountMax(m_forwarded_count_max);
        qint32 m_online_update_period_ms;
        stream >> m_online_update_period_ms;
        item.setOnlineUpdatePeriodMs(m_online_update_period_ms);
        qint32 m_offline_blur_timeout_ms;
        stream >> m_offline_blur_timeout_ms;
        item.setOfflineBlurTimeoutMs(m_offline_blur_timeout_ms);
        qint32 m_offline_idle_timeout_ms;
        stream >> m_offline_idle_timeout_ms;
        item.setOfflineIdleTimeoutMs(m_offline_idle_timeout_ms);
        qint32 m_online_cloud_timeout_ms;
        stream >> m_online_cloud_timeout_ms;
        item.setOnlineCloudTimeoutMs(m_online_cloud_timeout_ms);
        qint32 m_notify_cloud_delay_ms;
        stream >> m_notify_cloud_delay_ms;
        item.setNotifyCloudDelayMs(m_notify_cloud_delay_ms);
        qint32 m_notify_default_delay_ms;
        stream >> m_notify_default_delay_ms;
        item.setNotifyDefaultDelayMs(m_notify_default_delay_ms);
        qint32 m_chat_big_size;
        stream >> m_chat_big_size;
        item.setChatBigSize(m_chat_big_size);
        qint32 m_push_chat_period_ms;
        stream >> m_push_chat_period_ms;
        item.setPushChatPeriodMs(m_push_chat_period_ms);
        qint32 m_push_chat_limit;
        stream >> m_push_chat_limit;
        item.setPushChatLimit(m_push_chat_limit);
        qint32 m_saved_gifs_limit;
        stream >> m_saved_gifs_limit;
        item.setSavedGifsLimit(m_saved_gifs_limit);
        qint32 m_edit_time_limit;
        stream >> m_edit_time_limit;
        item.setEditTimeLimit(m_edit_time_limit);
        qint32 m_rating_e_decay;
        stream >> m_rating_e_decay;
        item.setRatingEDecay(m_rating_e_decay);
        QList<DisabledFeature> m_disabled_features;
        stream >> m_disabled_features;
        item.setDisabledFeatures(m_disabled_features);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_CONFIG
