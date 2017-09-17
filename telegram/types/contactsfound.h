// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSFOUND
#define LQTG_TYPE_CONTACTSFOUND

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "chat.h"
#include "peer.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT ContactsFound : public TelegramTypeObject
{
public:
    enum ContactsFoundClassType {
        typeContactsFound = 0x1aa1f784
    };

    ContactsFound(ContactsFoundClassType classType = typeContactsFound, InboundPkt *in = 0);
    ContactsFound(InboundPkt *in);
    ContactsFound(const Null&);
    virtual ~ContactsFound();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setResults(const QList<Peer> &results);
    QList<Peer> results() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ContactsFoundClassType classType);
    ContactsFoundClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ContactsFound fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const ContactsFound &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Chat> m_chats;
    QList<Peer> m_results;
    QList<User> m_users;
    ContactsFoundClassType m_classType;
};

Q_DECLARE_METATYPE(ContactsFound)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ContactsFound &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ContactsFound &item);

inline ContactsFound::ContactsFound(ContactsFoundClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline ContactsFound::ContactsFound(InboundPkt *in) :
    m_classType(typeContactsFound)
{
    fetch(in);
}

inline ContactsFound::ContactsFound(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeContactsFound)
{
}

inline ContactsFound::~ContactsFound() {
}

inline void ContactsFound::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

inline QList<Chat> ContactsFound::chats() const {
    return m_chats;
}

inline void ContactsFound::setResults(const QList<Peer> &results) {
    m_results = results;
}

inline QList<Peer> ContactsFound::results() const {
    return m_results;
}

inline void ContactsFound::setUsers(const QList<User> &users) {
    m_users = users;
}

inline QList<User> ContactsFound::users() const {
    return m_users;
}

inline bool ContactsFound::operator ==(const ContactsFound &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_results == b.m_results &&
           m_users == b.m_users;
}

inline void ContactsFound::setClassType(ContactsFound::ContactsFoundClassType classType) {
    m_classType = classType;
}

inline ContactsFound::ContactsFoundClassType ContactsFound::classType() const {
    return m_classType;
}

inline bool ContactsFound::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactsFound: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_results_length = in->fetchInt();
        m_results.clear();
        for (qint32 i = 0; i < m_results_length; i++) {
            Peer type;
            type.fetch(in);
            m_results.append(type);
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
        m_classType = static_cast<ContactsFoundClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool ContactsFound::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactsFound: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_results.count());
        for (qint32 i = 0; i < m_results.count(); i++) {
            m_results[i].push(out);
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

inline QMap<QString, QVariant> ContactsFound::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeContactsFound: {
        result["classType"] = "ContactsFound::typeContactsFound";
        QList<QVariant> _results;
        Q_FOREACH(const Peer &m__type, m_results)
            _results << m__type.toMap();
        result["results"] = _results;
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

inline ContactsFound ContactsFound::fromMap(const QMap<QString, QVariant> &map) {
    ContactsFound result;
    if(map.value("classType").toString() == "ContactsFound::typeContactsFound") {
        result.setClassType(typeContactsFound);
        QList<QVariant> map_results = map["results"].toList();
        QList<Peer> _results;
        Q_FOREACH(const QVariant &var, map_results)
            _results << Peer::fromMap(var.toMap());
        result.setResults(_results);
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

inline QByteArray ContactsFound::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const ContactsFound &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ContactsFound::typeContactsFound:
        stream << item.results();
        stream << item.chats();
        stream << item.users();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, ContactsFound &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ContactsFound::ContactsFoundClassType>(type));
    switch(type) {
    case ContactsFound::typeContactsFound: {
        QList<Peer> m_results;
        stream >> m_results;
        item.setResults(m_results);
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


#endif // LQTG_TYPE_CONTACTSFOUND
