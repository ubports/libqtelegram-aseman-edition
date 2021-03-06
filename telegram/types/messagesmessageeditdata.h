// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESMESSAGEEDITDATA
#define LQTG_TYPE_MESSAGESMESSAGEEDITDATA

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT MessagesMessageEditData : public TelegramTypeObject
{
public:
    enum MessagesMessageEditDataClassType {
        typeMessagesMessageEditData = 0x26b5dde6
    };

    MessagesMessageEditData(MessagesMessageEditDataClassType classType = typeMessagesMessageEditData, InboundPkt *in = 0);
    MessagesMessageEditData(InboundPkt *in);
    MessagesMessageEditData(const Null&);
    virtual ~MessagesMessageEditData();

    void setCaption(bool caption);
    bool caption() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setClassType(MessagesMessageEditDataClassType classType);
    MessagesMessageEditDataClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessagesMessageEditData fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const MessagesMessageEditData &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_flags;
    MessagesMessageEditDataClassType m_classType;
};

Q_DECLARE_METATYPE(MessagesMessageEditData)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesMessageEditData &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesMessageEditData &item);

inline MessagesMessageEditData::MessagesMessageEditData(MessagesMessageEditDataClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline MessagesMessageEditData::MessagesMessageEditData(InboundPkt *in) :
    m_flags(0),
    m_classType(typeMessagesMessageEditData)
{
    fetch(in);
}

inline MessagesMessageEditData::MessagesMessageEditData(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeMessagesMessageEditData)
{
}

inline MessagesMessageEditData::~MessagesMessageEditData() {
}

inline void MessagesMessageEditData::setCaption(bool caption) {
    if(caption) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

inline bool MessagesMessageEditData::caption() const {
    return (m_flags & 1<<0);
}

inline void MessagesMessageEditData::setFlags(qint32 flags) {
    m_flags = flags;
}

inline qint32 MessagesMessageEditData::flags() const {
    return m_flags;
}

inline bool MessagesMessageEditData::operator ==(const MessagesMessageEditData &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags;
}

inline void MessagesMessageEditData::setClassType(MessagesMessageEditData::MessagesMessageEditDataClassType classType) {
    m_classType = classType;
}

inline MessagesMessageEditData::MessagesMessageEditDataClassType MessagesMessageEditData::classType() const {
    return m_classType;
}

inline bool MessagesMessageEditData::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesMessageEditData: {
        m_flags = in->fetchInt();
        m_classType = static_cast<MessagesMessageEditDataClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool MessagesMessageEditData::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesMessageEditData: {
        out->appendInt(m_flags);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> MessagesMessageEditData::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesMessageEditData: {
        result["classType"] = "MessagesMessageEditData::typeMessagesMessageEditData";
        result["caption"] = QVariant::fromValue<bool>(caption());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline MessagesMessageEditData MessagesMessageEditData::fromMap(const QMap<QString, QVariant> &map) {
    MessagesMessageEditData result;
    if(map.value("classType").toString() == "MessagesMessageEditData::typeMessagesMessageEditData") {
        result.setClassType(typeMessagesMessageEditData);
        result.setCaption( map.value("caption").value<bool>() );
        return result;
    }
    return result;
}

inline QByteArray MessagesMessageEditData::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const MessagesMessageEditData &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesMessageEditData::typeMessagesMessageEditData:
        stream << item.flags();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, MessagesMessageEditData &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesMessageEditData::MessagesMessageEditDataClassType>(type));
    switch(type) {
    case MessagesMessageEditData::typeMessagesMessageEditData: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_MESSAGESMESSAGEEDITDATA
