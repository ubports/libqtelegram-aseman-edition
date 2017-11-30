// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPAPPUPDATE
#define LQTG_TYPE_HELPAPPUPDATE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT HelpAppUpdate : public TelegramTypeObject
{
public:
    enum HelpAppUpdateClassType {
        typeHelpAppUpdate = 0x8987f311,
        typeHelpNoAppUpdate = 0xc45a6536
    };

    HelpAppUpdate(HelpAppUpdateClassType classType = typeHelpAppUpdate, InboundPkt *in = 0);
    HelpAppUpdate(InboundPkt *in);
    HelpAppUpdate(const Null&);
    virtual ~HelpAppUpdate();

    void setCritical(bool critical);
    bool critical() const;

    void setId(qint32 id);
    qint32 id() const;

    void setText(const QString &text);
    QString text() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(HelpAppUpdateClassType classType);
    HelpAppUpdateClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static HelpAppUpdate fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const HelpAppUpdate &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    bool m_critical;
    qint32 m_id;
    QString m_text;
    QString m_url;
    HelpAppUpdateClassType m_classType;
};

Q_DECLARE_METATYPE(HelpAppUpdate)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const HelpAppUpdate &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, HelpAppUpdate &item);

inline HelpAppUpdate::HelpAppUpdate(HelpAppUpdateClassType classType, InboundPkt *in) :
    m_critical(false),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline HelpAppUpdate::HelpAppUpdate(InboundPkt *in) :
    m_critical(false),
    m_id(0),
    m_classType(typeHelpAppUpdate)
{
    fetch(in);
}

inline HelpAppUpdate::HelpAppUpdate(const Null &null) :
    TelegramTypeObject(null),
    m_critical(false),
    m_id(0),
    m_classType(typeHelpAppUpdate)
{
}

inline HelpAppUpdate::~HelpAppUpdate() {
}

inline void HelpAppUpdate::setCritical(bool critical) {
    m_critical = critical;
}

inline bool HelpAppUpdate::critical() const {
    return m_critical;
}

inline void HelpAppUpdate::setId(qint32 id) {
    m_id = id;
}

inline qint32 HelpAppUpdate::id() const {
    return m_id;
}

inline void HelpAppUpdate::setText(const QString &text) {
    m_text = text;
}

inline QString HelpAppUpdate::text() const {
    return m_text;
}

inline void HelpAppUpdate::setUrl(const QString &url) {
    m_url = url;
}

inline QString HelpAppUpdate::url() const {
    return m_url;
}

inline bool HelpAppUpdate::operator ==(const HelpAppUpdate &b) const {
    return m_classType == b.m_classType &&
           m_critical == b.m_critical &&
           m_id == b.m_id &&
           m_text == b.m_text &&
           m_url == b.m_url;
}

inline void HelpAppUpdate::setClassType(HelpAppUpdate::HelpAppUpdateClassType classType) {
    m_classType = classType;
}

inline HelpAppUpdate::HelpAppUpdateClassType HelpAppUpdate::classType() const {
    return m_classType;
}

inline bool HelpAppUpdate::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpAppUpdate: {
        m_id = in->fetchInt();
        m_critical = in->fetchBool();
        m_url = in->fetchQString();
        m_text = in->fetchQString();
        m_classType = static_cast<HelpAppUpdateClassType>(x);
        return true;
    }
        break;
    
    case typeHelpNoAppUpdate: {
        m_classType = static_cast<HelpAppUpdateClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool HelpAppUpdate::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpAppUpdate: {
        out->appendInt(m_id);
        out->appendBool(m_critical);
        out->appendQString(m_url);
        out->appendQString(m_text);
        return true;
    }
        break;
    
    case typeHelpNoAppUpdate: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> HelpAppUpdate::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeHelpAppUpdate: {
        result["classType"] = "HelpAppUpdate::typeHelpAppUpdate";
        result["id"] = QVariant::fromValue<qint32>(id());
        result["critical"] = QVariant::fromValue<bool>(critical());
        result["url"] = QVariant::fromValue<QString>(url());
        result["text"] = QVariant::fromValue<QString>(text());
        return result;
    }
        break;
    
    case typeHelpNoAppUpdate: {
        result["classType"] = "HelpAppUpdate::typeHelpNoAppUpdate";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline HelpAppUpdate HelpAppUpdate::fromMap(const QMap<QString, QVariant> &map) {
    HelpAppUpdate result;
    if(map.value("classType").toString() == "HelpAppUpdate::typeHelpAppUpdate") {
        result.setClassType(typeHelpAppUpdate);
        result.setId( map.value("id").value<qint32>() );
        result.setCritical( map.value("critical").value<bool>() );
        result.setUrl( map.value("url").value<QString>() );
        result.setText( map.value("text").value<QString>() );
        return result;
    }
    if(map.value("classType").toString() == "HelpAppUpdate::typeHelpNoAppUpdate") {
        result.setClassType(typeHelpNoAppUpdate);
        return result;
    }
    return result;
}

inline QByteArray HelpAppUpdate::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const HelpAppUpdate &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case HelpAppUpdate::typeHelpAppUpdate:
        stream << item.id();
        stream << item.critical();
        stream << item.url();
        stream << item.text();
        break;
    case HelpAppUpdate::typeHelpNoAppUpdate:
        
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, HelpAppUpdate &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<HelpAppUpdate::HelpAppUpdateClassType>(type));
    switch(type) {
    case HelpAppUpdate::typeHelpAppUpdate: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        bool m_critical;
        stream >> m_critical;
        item.setCritical(m_critical);
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        QString m_text;
        stream >> m_text;
        item.setText(m_text);
    }
        break;
    case HelpAppUpdate::typeHelpNoAppUpdate: {
        
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_HELPAPPUPDATE
