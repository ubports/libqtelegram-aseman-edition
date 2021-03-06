// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEACTION
#define LQTG_TYPE_MESSAGEACTION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include "photo.h"
#include <QString>
#include <QList>

class LIBQTELEGRAMSHARED_EXPORT MessageAction : public TelegramTypeObject
{
public:
    enum MessageActionClassType {
        typeMessageActionEmpty = 0xb6aef7b0,
        typeMessageActionChatCreate = 0xa6638b9a,
        typeMessageActionChatEditTitle = 0xb5a1ce5a,
        typeMessageActionChatEditPhoto = 0x7fcb13a8,
        typeMessageActionChatDeletePhoto = 0x95e3fbef,
        typeMessageActionChatAddUser = 0x488a7337,
        typeMessageActionChatDeleteUser = 0xb2ae9b0c,
        typeMessageActionChatJoinedByLink = 0xf89cf5e8,
        typeMessageActionChannelCreate = 0x95d2ac92,
        typeMessageActionChatMigrateTo = 0x51bdb021,
        typeMessageActionChannelMigrateFrom = 0xb055eaee,
        typeMessageActionPinMessage = 0x94bd38ed,
        typeMessageActionHistoryClear = 0x9fbab604
    };

    MessageAction(MessageActionClassType classType = typeMessageActionEmpty, InboundPkt *in = 0);
    MessageAction(InboundPkt *in);
    MessageAction(const Null&);
    virtual ~MessageAction();

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setPhoto(const Photo &photo);
    Photo photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<qint32> &users);
    QList<qint32> users() const;

    void setClassType(MessageActionClassType classType);
    MessageActionClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessageAction fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const MessageAction &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_channelId;
    qint32 m_chatId;
    qint32 m_inviterId;
    Photo m_photo;
    QString m_title;
    qint32 m_userId;
    QList<qint32> m_users;
    MessageActionClassType m_classType;
};

Q_DECLARE_METATYPE(MessageAction)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessageAction &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessageAction &item);

inline MessageAction::MessageAction(MessageActionClassType classType, InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline MessageAction::MessageAction(InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(typeMessageActionEmpty)
{
    fetch(in);
}

inline MessageAction::MessageAction(const Null &null) :
    TelegramTypeObject(null),
    m_channelId(0),
    m_chatId(0),
    m_inviterId(0),
    m_userId(0),
    m_classType(typeMessageActionEmpty)
{
}

inline MessageAction::~MessageAction() {
}

inline void MessageAction::setChannelId(qint32 channelId) {
    m_channelId = channelId;
}

inline qint32 MessageAction::channelId() const {
    return m_channelId;
}

inline void MessageAction::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

inline qint32 MessageAction::chatId() const {
    return m_chatId;
}

inline void MessageAction::setInviterId(qint32 inviterId) {
    m_inviterId = inviterId;
}

inline qint32 MessageAction::inviterId() const {
    return m_inviterId;
}

inline void MessageAction::setPhoto(const Photo &photo) {
    m_photo = photo;
}

inline Photo MessageAction::photo() const {
    return m_photo;
}

inline void MessageAction::setTitle(const QString &title) {
    m_title = title;
}

inline QString MessageAction::title() const {
    return m_title;
}

inline void MessageAction::setUserId(qint32 userId) {
    m_userId = userId;
}

inline qint32 MessageAction::userId() const {
    return m_userId;
}

inline void MessageAction::setUsers(const QList<qint32> &users) {
    m_users = users;
}

inline QList<qint32> MessageAction::users() const {
    return m_users;
}

inline bool MessageAction::operator ==(const MessageAction &b) const {
    return m_classType == b.m_classType &&
           m_channelId == b.m_channelId &&
           m_chatId == b.m_chatId &&
           m_inviterId == b.m_inviterId &&
           m_photo == b.m_photo &&
           m_title == b.m_title &&
           m_userId == b.m_userId &&
           m_users == b.m_users;
}

inline void MessageAction::setClassType(MessageAction::MessageActionClassType classType) {
    m_classType = classType;
}

inline MessageAction::MessageActionClassType MessageAction::classType() const {
    return m_classType;
}

inline bool MessageAction::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessageActionEmpty: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatCreate: {
        m_title = in->fetchQString();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            qint32 type;
            type = in->fetchInt();
            m_users.append(type);
        }
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatEditTitle: {
        m_title = in->fetchQString();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatEditPhoto: {
        m_photo.fetch(in);
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatDeletePhoto: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatAddUser: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            qint32 type;
            type = in->fetchInt();
            m_users.append(type);
        }
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatDeleteUser: {
        m_userId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatJoinedByLink: {
        m_inviterId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChannelCreate: {
        m_title = in->fetchQString();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChatMigrateTo: {
        m_channelId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionChannelMigrateFrom: {
        m_title = in->fetchQString();
        m_chatId = in->fetchInt();
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionPinMessage: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    case typeMessageActionHistoryClear: {
        m_classType = static_cast<MessageActionClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool MessageAction::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessageActionEmpty: {
        return true;
    }
        break;
    
    case typeMessageActionChatCreate: {
        out->appendQString(m_title);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            out->appendInt(m_users[i]);
        }
        return true;
    }
        break;
    
    case typeMessageActionChatEditTitle: {
        out->appendQString(m_title);
        return true;
    }
        break;
    
    case typeMessageActionChatEditPhoto: {
        m_photo.push(out);
        return true;
    }
        break;
    
    case typeMessageActionChatDeletePhoto: {
        return true;
    }
        break;
    
    case typeMessageActionChatAddUser: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            out->appendInt(m_users[i]);
        }
        return true;
    }
        break;
    
    case typeMessageActionChatDeleteUser: {
        out->appendInt(m_userId);
        return true;
    }
        break;
    
    case typeMessageActionChatJoinedByLink: {
        out->appendInt(m_inviterId);
        return true;
    }
        break;
    
    case typeMessageActionChannelCreate: {
        out->appendQString(m_title);
        return true;
    }
        break;
    
    case typeMessageActionChatMigrateTo: {
        out->appendInt(m_channelId);
        return true;
    }
        break;
    
    case typeMessageActionChannelMigrateFrom: {
        out->appendQString(m_title);
        out->appendInt(m_chatId);
        return true;
    }
        break;
    
    case typeMessageActionPinMessage: {
        return true;
    }
        break;
    
    case typeMessageActionHistoryClear: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> MessageAction::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessageActionEmpty: {
        result["classType"] = "MessageAction::typeMessageActionEmpty";
        return result;
    }
        break;
    
    case typeMessageActionChatCreate: {
        result["classType"] = "MessageAction::typeMessageActionChatCreate";
        result["title"] = QVariant::fromValue<QString>(title());
        QList<QVariant> _users;
        Q_FOREACH(const qint32 &m__type, m_users)
            _users << QVariant::fromValue<qint32>(m__type);
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeMessageActionChatEditTitle: {
        result["classType"] = "MessageAction::typeMessageActionChatEditTitle";
        result["title"] = QVariant::fromValue<QString>(title());
        return result;
    }
        break;
    
    case typeMessageActionChatEditPhoto: {
        result["classType"] = "MessageAction::typeMessageActionChatEditPhoto";
        result["photo"] = m_photo.toMap();
        return result;
    }
        break;
    
    case typeMessageActionChatDeletePhoto: {
        result["classType"] = "MessageAction::typeMessageActionChatDeletePhoto";
        return result;
    }
        break;
    
    case typeMessageActionChatAddUser: {
        result["classType"] = "MessageAction::typeMessageActionChatAddUser";
        QList<QVariant> _users;
        Q_FOREACH(const qint32 &m__type, m_users)
            _users << QVariant::fromValue<qint32>(m__type);
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeMessageActionChatDeleteUser: {
        result["classType"] = "MessageAction::typeMessageActionChatDeleteUser";
        result["userId"] = QVariant::fromValue<qint32>(userId());
        return result;
    }
        break;
    
    case typeMessageActionChatJoinedByLink: {
        result["classType"] = "MessageAction::typeMessageActionChatJoinedByLink";
        result["inviterId"] = QVariant::fromValue<qint32>(inviterId());
        return result;
    }
        break;
    
    case typeMessageActionChannelCreate: {
        result["classType"] = "MessageAction::typeMessageActionChannelCreate";
        result["title"] = QVariant::fromValue<QString>(title());
        return result;
    }
        break;
    
    case typeMessageActionChatMigrateTo: {
        result["classType"] = "MessageAction::typeMessageActionChatMigrateTo";
        result["channelId"] = QVariant::fromValue<qint32>(channelId());
        return result;
    }
        break;
    
    case typeMessageActionChannelMigrateFrom: {
        result["classType"] = "MessageAction::typeMessageActionChannelMigrateFrom";
        result["title"] = QVariant::fromValue<QString>(title());
        result["chatId"] = QVariant::fromValue<qint32>(chatId());
        return result;
    }
        break;
    
    case typeMessageActionPinMessage: {
        result["classType"] = "MessageAction::typeMessageActionPinMessage";
        return result;
    }
        break;
    
    case typeMessageActionHistoryClear: {
        result["classType"] = "MessageAction::typeMessageActionHistoryClear";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline MessageAction MessageAction::fromMap(const QMap<QString, QVariant> &map) {
    MessageAction result;
    if(map.value("classType").toString() == "MessageAction::typeMessageActionEmpty") {
        result.setClassType(typeMessageActionEmpty);
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatCreate") {
        result.setClassType(typeMessageActionChatCreate);
        result.setTitle( map.value("title").value<QString>() );
        QList<QVariant> map_users = map["users"].toList();
        QList<qint32> _users;
        Q_FOREACH(const QVariant &var, map_users)
            _users << var.value<qint32>();;
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatEditTitle") {
        result.setClassType(typeMessageActionChatEditTitle);
        result.setTitle( map.value("title").value<QString>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatEditPhoto") {
        result.setClassType(typeMessageActionChatEditPhoto);
        result.setPhoto( Photo::fromMap(map.value("photo").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatDeletePhoto") {
        result.setClassType(typeMessageActionChatDeletePhoto);
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatAddUser") {
        result.setClassType(typeMessageActionChatAddUser);
        QList<QVariant> map_users = map["users"].toList();
        QList<qint32> _users;
        Q_FOREACH(const QVariant &var, map_users)
            _users << var.value<qint32>();;
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatDeleteUser") {
        result.setClassType(typeMessageActionChatDeleteUser);
        result.setUserId( map.value("userId").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatJoinedByLink") {
        result.setClassType(typeMessageActionChatJoinedByLink);
        result.setInviterId( map.value("inviterId").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChannelCreate") {
        result.setClassType(typeMessageActionChannelCreate);
        result.setTitle( map.value("title").value<QString>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChatMigrateTo") {
        result.setClassType(typeMessageActionChatMigrateTo);
        result.setChannelId( map.value("channelId").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionChannelMigrateFrom") {
        result.setClassType(typeMessageActionChannelMigrateFrom);
        result.setTitle( map.value("title").value<QString>() );
        result.setChatId( map.value("chatId").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionPinMessage") {
        result.setClassType(typeMessageActionPinMessage);
        return result;
    }
    if(map.value("classType").toString() == "MessageAction::typeMessageActionHistoryClear") {
        result.setClassType(typeMessageActionHistoryClear);
        return result;
    }
    return result;
}

inline QByteArray MessageAction::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const MessageAction &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessageAction::typeMessageActionEmpty:
        
        break;
    case MessageAction::typeMessageActionChatCreate:
        stream << item.title();
        stream << item.users();
        break;
    case MessageAction::typeMessageActionChatEditTitle:
        stream << item.title();
        break;
    case MessageAction::typeMessageActionChatEditPhoto:
        stream << item.photo();
        break;
    case MessageAction::typeMessageActionChatDeletePhoto:
        
        break;
    case MessageAction::typeMessageActionChatAddUser:
        stream << item.users();
        break;
    case MessageAction::typeMessageActionChatDeleteUser:
        stream << item.userId();
        break;
    case MessageAction::typeMessageActionChatJoinedByLink:
        stream << item.inviterId();
        break;
    case MessageAction::typeMessageActionChannelCreate:
        stream << item.title();
        break;
    case MessageAction::typeMessageActionChatMigrateTo:
        stream << item.channelId();
        break;
    case MessageAction::typeMessageActionChannelMigrateFrom:
        stream << item.title();
        stream << item.chatId();
        break;
    case MessageAction::typeMessageActionPinMessage:
        
        break;
    case MessageAction::typeMessageActionHistoryClear:
        
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, MessageAction &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessageAction::MessageActionClassType>(type));
    switch(type) {
    case MessageAction::typeMessageActionEmpty: {
        
    }
        break;
    case MessageAction::typeMessageActionChatCreate: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QList<qint32> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessageAction::typeMessageActionChatEditTitle: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    case MessageAction::typeMessageActionChatEditPhoto: {
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
    }
        break;
    case MessageAction::typeMessageActionChatDeletePhoto: {
        
    }
        break;
    case MessageAction::typeMessageActionChatAddUser: {
        QList<qint32> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessageAction::typeMessageActionChatDeleteUser: {
        qint32 m_user_id;
        stream >> m_user_id;
        item.setUserId(m_user_id);
    }
        break;
    case MessageAction::typeMessageActionChatJoinedByLink: {
        qint32 m_inviter_id;
        stream >> m_inviter_id;
        item.setInviterId(m_inviter_id);
    }
        break;
    case MessageAction::typeMessageActionChannelCreate: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
    }
        break;
    case MessageAction::typeMessageActionChatMigrateTo: {
        qint32 m_channel_id;
        stream >> m_channel_id;
        item.setChannelId(m_channel_id);
    }
        break;
    case MessageAction::typeMessageActionChannelMigrateFrom: {
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
    }
        break;
    case MessageAction::typeMessageActionPinMessage: {
        
    }
        break;
    case MessageAction::typeMessageActionHistoryClear: {
        
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_MESSAGEACTION
