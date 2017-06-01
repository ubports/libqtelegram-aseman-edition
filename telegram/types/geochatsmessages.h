// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_GEOCHATSMESSAGES
#define LQTG_TYPE_GEOCHATSMESSAGES

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "chat.h"
#include <QtGlobal>
#include "geochatmessage.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT GeochatsMessages : public TelegramTypeObject
{
public:
    enum GeochatsMessagesClassType {
        typeGeochatsMessages = 0xd1526db1,
        typeGeochatsMessagesSlice = 0xbc5863e8
    };

    GeochatsMessages(GeochatsMessagesClassType classType = typeGeochatsMessages, InboundPkt *in = 0);
    GeochatsMessages(InboundPkt *in);
    GeochatsMessages(const Null&);
    virtual ~GeochatsMessages();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setMessages(const QList<GeoChatMessage> &messages);
    QList<GeoChatMessage> messages() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(GeochatsMessagesClassType classType);
    GeochatsMessagesClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static GeochatsMessages fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const GeochatsMessages &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Chat> m_chats;
    qint32 m_count;
    QList<GeoChatMessage> m_messages;
    QList<User> m_users;
    GeochatsMessagesClassType m_classType;
};

Q_DECLARE_METATYPE(GeochatsMessages)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const GeochatsMessages &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, GeochatsMessages &item);

inline GeochatsMessages::GeochatsMessages(GeochatsMessagesClassType classType, InboundPkt *in) :
    m_count(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline GeochatsMessages::GeochatsMessages(InboundPkt *in) :
    m_count(0),
    m_classType(typeGeochatsMessages)
{
    fetch(in);
}

inline GeochatsMessages::GeochatsMessages(const Null &null) :
    TelegramTypeObject(null),
    m_count(0),
    m_classType(typeGeochatsMessages)
{
}

inline GeochatsMessages::~GeochatsMessages() {
}

inline void GeochatsMessages::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

inline QList<Chat> GeochatsMessages::chats() const {
    return m_chats;
}

inline void GeochatsMessages::setCount(qint32 count) {
    m_count = count;
}

inline qint32 GeochatsMessages::count() const {
    return m_count;
}

inline void GeochatsMessages::setMessages(const QList<GeoChatMessage> &messages) {
    m_messages = messages;
}

inline QList<GeoChatMessage> GeochatsMessages::messages() const {
    return m_messages;
}

inline void GeochatsMessages::setUsers(const QList<User> &users) {
    m_users = users;
}

inline QList<User> GeochatsMessages::users() const {
    return m_users;
}

inline bool GeochatsMessages::operator ==(const GeochatsMessages &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_count == b.m_count &&
           m_messages == b.m_messages &&
           m_users == b.m_users;
}

inline void GeochatsMessages::setClassType(GeochatsMessages::GeochatsMessagesClassType classType) {
    m_classType = classType;
}

inline GeochatsMessages::GeochatsMessagesClassType GeochatsMessages::classType() const {
    return m_classType;
}

inline bool GeochatsMessages::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeGeochatsMessages: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            GeoChatMessage type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<GeochatsMessagesClassType>(x);
        return true;
    }
        break;
    
    case typeGeochatsMessagesSlice: {
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            GeoChatMessage type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<GeochatsMessagesClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool GeochatsMessages::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGeochatsMessages: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typeGeochatsMessagesSlice: {
        out->appendInt(m_count);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> GeochatsMessages::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeGeochatsMessages: {
        result["classType"] = "GeochatsMessages::typeGeochatsMessages";
        QList<QVariant> _messages;
        Q_FOREACH(const GeoChatMessage &m__type, m_messages)
            _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        Q_FOREACH(const Chat &m__type, m_chats)
            _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        Q_FOREACH(const User &m__type, m_users)
            _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeGeochatsMessagesSlice: {
        result["classType"] = "GeochatsMessages::typeGeochatsMessagesSlice";
        result["count"] = QVariant::fromValue<qint32>(count());
        QList<QVariant> _messages;
        Q_FOREACH(const GeoChatMessage &m__type, m_messages)
            _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        Q_FOREACH(const Chat &m__type, m_chats)
            _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        Q_FOREACH(const User &m__type, m_users)
            _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline GeochatsMessages GeochatsMessages::fromMap(const QMap<QString, QVariant> &map) {
    GeochatsMessages result;
    if(map.value("classType").toString() == "GeochatsMessages::typeGeochatsMessages") {
        result.setClassType(typeGeochatsMessages);
        QList<QVariant> map_messages = map["messages"].toList();
        QList<GeoChatMessage> _messages;
        Q_FOREACH(const QVariant &var, map_messages)
            _messages << GeoChatMessage::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        Q_FOREACH(const QVariant &var, map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        Q_FOREACH(const QVariant &var, map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "GeochatsMessages::typeGeochatsMessagesSlice") {
        result.setClassType(typeGeochatsMessagesSlice);
        result.setCount( map.value("count").value<qint32>() );
        QList<QVariant> map_messages = map["messages"].toList();
        QList<GeoChatMessage> _messages;
        Q_FOREACH(const QVariant &var, map_messages)
            _messages << GeoChatMessage::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        Q_FOREACH(const QVariant &var, map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        Q_FOREACH(const QVariant &var, map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    return result;
}

inline QByteArray GeochatsMessages::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const GeochatsMessages &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case GeochatsMessages::typeGeochatsMessages:
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    case GeochatsMessages::typeGeochatsMessagesSlice:
        stream << item.count();
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, GeochatsMessages &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<GeochatsMessages::GeochatsMessagesClassType>(type));
    switch(type) {
    case GeochatsMessages::typeGeochatsMessages: {
        QList<GeoChatMessage> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case GeochatsMessages::typeGeochatsMessagesSlice: {
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        QList<GeoChatMessage> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_GEOCHATSMESSAGES
