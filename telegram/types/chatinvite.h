// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHATINVITE
#define LQTG_TYPE_CHATINVITE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include "chat.h"
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT ChatInvite : public TelegramTypeObject
{
public:
    enum ChatInviteClassType {
        typeChatInviteAlready = 0x5a686d7c,
        typeChatInvite = 0x93e99b60
    };

    ChatInvite(ChatInviteClassType classType = typeChatInviteAlready, InboundPkt *in = 0);
    ChatInvite(InboundPkt *in);
    ChatInvite(const Null&);
    virtual ~ChatInvite();

    void setBroadcast(bool broadcast);
    bool broadcast() const;

    void setChannel(bool channel);
    bool channel() const;

    void setChat(const Chat &chat);
    Chat chat() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMegagroup(bool megagroup);
    bool megagroup() const;

    void setPublicValue(bool publicValue);
    bool publicValue() const;

    void setTitle(const QString &title);
    QString title() const;

    void setClassType(ChatInviteClassType classType);
    ChatInviteClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ChatInvite fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const ChatInvite &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    Chat m_chat;
    qint32 m_flags;
    QString m_title;
    ChatInviteClassType m_classType;
};

Q_DECLARE_METATYPE(ChatInvite)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChatInvite &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChatInvite &item);

inline ChatInvite::ChatInvite(ChatInviteClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline ChatInvite::ChatInvite(InboundPkt *in) :
    m_flags(0),
    m_classType(typeChatInviteAlready)
{
    fetch(in);
}

inline ChatInvite::ChatInvite(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeChatInviteAlready)
{
}

inline ChatInvite::~ChatInvite() {
}

inline void ChatInvite::setBroadcast(bool broadcast) {
    if(broadcast) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

inline bool ChatInvite::broadcast() const {
    return (m_flags & 1<<1);
}

inline void ChatInvite::setChannel(bool channel) {
    if(channel) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

inline bool ChatInvite::channel() const {
    return (m_flags & 1<<0);
}

inline void ChatInvite::setChat(const Chat &chat) {
    m_chat = chat;
}

inline Chat ChatInvite::chat() const {
    return m_chat;
}

inline void ChatInvite::setFlags(qint32 flags) {
    m_flags = flags;
}

inline qint32 ChatInvite::flags() const {
    return m_flags;
}

inline void ChatInvite::setMegagroup(bool megagroup) {
    if(megagroup) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
}

inline bool ChatInvite::megagroup() const {
    return (m_flags & 1<<3);
}

inline void ChatInvite::setPublicValue(bool publicValue) {
    if(publicValue) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
}

inline bool ChatInvite::publicValue() const {
    return (m_flags & 1<<2);
}

inline void ChatInvite::setTitle(const QString &title) {
    m_title = title;
}

inline QString ChatInvite::title() const {
    return m_title;
}

inline bool ChatInvite::operator ==(const ChatInvite &b) const {
    return m_classType == b.m_classType &&
           m_chat == b.m_chat &&
           m_flags == b.m_flags &&
           m_title == b.m_title;
}

inline void ChatInvite::setClassType(ChatInvite::ChatInviteClassType classType) {
    m_classType = classType;
}

inline ChatInvite::ChatInviteClassType ChatInvite::classType() const {
    return m_classType;
}

inline bool ChatInvite::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatInviteAlready: {
        m_chat.fetch(in);
        m_classType = static_cast<ChatInviteClassType>(x);
        return true;
    }
        break;
    
    case typeChatInvite: {
        m_flags = in->fetchInt();
        m_title = in->fetchQString();
        m_classType = static_cast<ChatInviteClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool ChatInvite::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatInviteAlready: {
        m_chat.push(out);
        return true;
    }
        break;
    
    case typeChatInvite: {
        out->appendInt(m_flags);
        out->appendQString(m_title);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> ChatInvite::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeChatInviteAlready: {
        result["classType"] = "ChatInvite::typeChatInviteAlready";
        result["chat"] = m_chat.toMap();
        return result;
    }
        break;
    
    case typeChatInvite: {
        result["classType"] = "ChatInvite::typeChatInvite";
        result["channel"] = QVariant::fromValue<bool>(channel());
        result["broadcast"] = QVariant::fromValue<bool>(broadcast());
        result["publicValue"] = QVariant::fromValue<bool>(publicValue());
        result["megagroup"] = QVariant::fromValue<bool>(megagroup());
        result["title"] = QVariant::fromValue<QString>(title());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline ChatInvite ChatInvite::fromMap(const QMap<QString, QVariant> &map) {
    ChatInvite result;
    if(map.value("classType").toString() == "ChatInvite::typeChatInviteAlready") {
        result.setClassType(typeChatInviteAlready);
        result.setChat( Chat::fromMap(map.value("chat").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "ChatInvite::typeChatInvite") {
        result.setClassType(typeChatInvite);
        result.setChannel( map.value("channel").value<bool>() );
        result.setBroadcast( map.value("broadcast").value<bool>() );
        result.setPublicValue( map.value("publicValue").value<bool>() );
        result.setMegagroup( map.value("megagroup").value<bool>() );
        result.setTitle( map.value("title").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray ChatInvite::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const ChatInvite &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ChatInvite::typeChatInviteAlready:
        stream << item.chat();
        break;
    case ChatInvite::typeChatInvite:
        stream << item.flags();
        stream << item.title();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, ChatInvite &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ChatInvite::ChatInviteClassType>(type));
    switch(type) {
    case ChatInvite::typeChatInviteAlready: {
        Chat m_chat;
        stream >> m_chat;
        item.setChat(m_chat);
    }
        break;
    case ChatInvite::typeChatInvite: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_CHATINVITE
