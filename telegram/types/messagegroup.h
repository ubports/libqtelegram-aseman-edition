// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEGROUP
#define LQTG_TYPE_MESSAGEGROUP

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT MessageGroup : public TelegramTypeObject
{
public:
    enum MessageGroupClassType {
        typeMessageGroup = 0xe8346f53
    };

    MessageGroup(MessageGroupClassType classType = typeMessageGroup, InboundPkt *in = 0);
    MessageGroup(InboundPkt *in);
    MessageGroup(const Null&);
    virtual ~MessageGroup();

    void setCount(qint32 count);
    qint32 count() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMinId(qint32 minId);
    qint32 minId() const;

    void setClassType(MessageGroupClassType classType);
    MessageGroupClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessageGroup fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const MessageGroup &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_count;
    qint32 m_date;
    qint32 m_maxId;
    qint32 m_minId;
    MessageGroupClassType m_classType;
};

Q_DECLARE_METATYPE(MessageGroup)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessageGroup &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessageGroup &item);

inline MessageGroup::MessageGroup(MessageGroupClassType classType, InboundPkt *in) :
    m_count(0),
    m_date(0),
    m_maxId(0),
    m_minId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline MessageGroup::MessageGroup(InboundPkt *in) :
    m_count(0),
    m_date(0),
    m_maxId(0),
    m_minId(0),
    m_classType(typeMessageGroup)
{
    fetch(in);
}

inline MessageGroup::MessageGroup(const Null &null) :
    TelegramTypeObject(null),
    m_count(0),
    m_date(0),
    m_maxId(0),
    m_minId(0),
    m_classType(typeMessageGroup)
{
}

inline MessageGroup::~MessageGroup() {
}

inline void MessageGroup::setCount(qint32 count) {
    m_count = count;
}

inline qint32 MessageGroup::count() const {
    return m_count;
}

inline void MessageGroup::setDate(qint32 date) {
    m_date = date;
}

inline qint32 MessageGroup::date() const {
    return m_date;
}

inline void MessageGroup::setMaxId(qint32 maxId) {
    m_maxId = maxId;
}

inline qint32 MessageGroup::maxId() const {
    return m_maxId;
}

inline void MessageGroup::setMinId(qint32 minId) {
    m_minId = minId;
}

inline qint32 MessageGroup::minId() const {
    return m_minId;
}

inline bool MessageGroup::operator ==(const MessageGroup &b) const {
    return m_classType == b.m_classType &&
           m_count == b.m_count &&
           m_date == b.m_date &&
           m_maxId == b.m_maxId &&
           m_minId == b.m_minId;
}

inline void MessageGroup::setClassType(MessageGroup::MessageGroupClassType classType) {
    m_classType = classType;
}

inline MessageGroup::MessageGroupClassType MessageGroup::classType() const {
    return m_classType;
}

inline bool MessageGroup::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessageGroup: {
        m_minId = in->fetchInt();
        m_maxId = in->fetchInt();
        m_count = in->fetchInt();
        m_date = in->fetchInt();
        m_classType = static_cast<MessageGroupClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool MessageGroup::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessageGroup: {
        out->appendInt(m_minId);
        out->appendInt(m_maxId);
        out->appendInt(m_count);
        out->appendInt(m_date);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> MessageGroup::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessageGroup: {
        result["classType"] = "MessageGroup::typeMessageGroup";
        result["minId"] = QVariant::fromValue<qint32>(minId());
        result["maxId"] = QVariant::fromValue<qint32>(maxId());
        result["count"] = QVariant::fromValue<qint32>(count());
        result["date"] = QVariant::fromValue<qint32>(date());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline MessageGroup MessageGroup::fromMap(const QMap<QString, QVariant> &map) {
    MessageGroup result;
    if(map.value("classType").toString() == "MessageGroup::typeMessageGroup") {
        result.setClassType(typeMessageGroup);
        result.setMinId( map.value("minId").value<qint32>() );
        result.setMaxId( map.value("maxId").value<qint32>() );
        result.setCount( map.value("count").value<qint32>() );
        result.setDate( map.value("date").value<qint32>() );
        return result;
    }
    return result;
}

inline QByteArray MessageGroup::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const MessageGroup &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessageGroup::typeMessageGroup:
        stream << item.minId();
        stream << item.maxId();
        stream << item.count();
        stream << item.date();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, MessageGroup &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessageGroup::MessageGroupClassType>(type));
    switch(type) {
    case MessageGroup::typeMessageGroup: {
        qint32 m_min_id;
        stream >> m_min_id;
        item.setMinId(m_min_id);
        qint32 m_max_id;
        stream >> m_max_id;
        item.setMaxId(m_max_id);
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_MESSAGEGROUP