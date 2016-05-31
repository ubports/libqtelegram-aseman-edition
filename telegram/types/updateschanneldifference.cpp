// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "updateschanneldifference.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

UpdatesChannelDifference::UpdatesChannelDifference(UpdatesChannelDifferenceClassType classType, InboundPkt *in) :
    m_flags(0),
    m_pts(0),
    m_readInboxMaxId(0),
    m_timeout(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

UpdatesChannelDifference::UpdatesChannelDifference(InboundPkt *in) :
    m_flags(0),
    m_pts(0),
    m_readInboxMaxId(0),
    m_timeout(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(typeUpdatesChannelDifferenceEmpty)
{
    fetch(in);
}

UpdatesChannelDifference::UpdatesChannelDifference(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_pts(0),
    m_readInboxMaxId(0),
    m_timeout(0),
    m_topImportantMessage(0),
    m_topMessage(0),
    m_unreadCount(0),
    m_unreadImportantCount(0),
    m_classType(typeUpdatesChannelDifferenceEmpty)
{
}

UpdatesChannelDifference::~UpdatesChannelDifference() {
}

void UpdatesChannelDifference::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> UpdatesChannelDifference::chats() const {
    return m_chats;
}

void UpdatesChannelDifference::setFinal(bool final) {
    if(final) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool UpdatesChannelDifference::final() const {
    return (m_flags & 1<<0);
}

void UpdatesChannelDifference::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 UpdatesChannelDifference::flags() const {
    return m_flags;
}

void UpdatesChannelDifference::setMessages(const QList<Message> &messages) {
    m_messages = messages;
}

QList<Message> UpdatesChannelDifference::messages() const {
    return m_messages;
}

void UpdatesChannelDifference::setNewMessages(const QList<Message> &newMessages) {
    m_newMessages = newMessages;
}

QList<Message> UpdatesChannelDifference::newMessages() const {
    return m_newMessages;
}

void UpdatesChannelDifference::setOtherUpdates(const QList<Update> &otherUpdates) {
    m_otherUpdates = otherUpdates;
}

QList<Update> UpdatesChannelDifference::otherUpdates() const {
    return m_otherUpdates;
}

void UpdatesChannelDifference::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 UpdatesChannelDifference::pts() const {
    return m_pts;
}

void UpdatesChannelDifference::setReadInboxMaxId(qint32 readInboxMaxId) {
    m_readInboxMaxId = readInboxMaxId;
}

qint32 UpdatesChannelDifference::readInboxMaxId() const {
    return m_readInboxMaxId;
}

void UpdatesChannelDifference::setTimeout(qint32 timeout) {
    m_timeout = timeout;
}

qint32 UpdatesChannelDifference::timeout() const {
    return m_timeout;
}

void UpdatesChannelDifference::setTopImportantMessage(qint32 topImportantMessage) {
    m_topImportantMessage = topImportantMessage;
}

qint32 UpdatesChannelDifference::topImportantMessage() const {
    return m_topImportantMessage;
}

void UpdatesChannelDifference::setTopMessage(qint32 topMessage) {
    m_topMessage = topMessage;
}

qint32 UpdatesChannelDifference::topMessage() const {
    return m_topMessage;
}

void UpdatesChannelDifference::setUnreadCount(qint32 unreadCount) {
    m_unreadCount = unreadCount;
}

qint32 UpdatesChannelDifference::unreadCount() const {
    return m_unreadCount;
}

void UpdatesChannelDifference::setUnreadImportantCount(qint32 unreadImportantCount) {
    m_unreadImportantCount = unreadImportantCount;
}

qint32 UpdatesChannelDifference::unreadImportantCount() const {
    return m_unreadImportantCount;
}

void UpdatesChannelDifference::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> UpdatesChannelDifference::users() const {
    return m_users;
}

bool UpdatesChannelDifference::operator ==(const UpdatesChannelDifference &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_flags == b.m_flags &&
           m_messages == b.m_messages &&
           m_newMessages == b.m_newMessages &&
           m_otherUpdates == b.m_otherUpdates &&
           m_pts == b.m_pts &&
           m_readInboxMaxId == b.m_readInboxMaxId &&
           m_timeout == b.m_timeout &&
           m_topImportantMessage == b.m_topImportantMessage &&
           m_topMessage == b.m_topMessage &&
           m_unreadCount == b.m_unreadCount &&
           m_unreadImportantCount == b.m_unreadImportantCount &&
           m_users == b.m_users;
}

void UpdatesChannelDifference::setClassType(UpdatesChannelDifference::UpdatesChannelDifferenceClassType classType) {
    m_classType = classType;
}

UpdatesChannelDifference::UpdatesChannelDifferenceClassType UpdatesChannelDifference::classType() const {
    return m_classType;
}

bool UpdatesChannelDifference::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUpdatesChannelDifferenceEmpty: {
        m_flags = in->fetchInt();
        m_pts = in->fetchInt();
        if(m_flags & 1<<1) {
            m_timeout = in->fetchInt();
        }
        m_classType = static_cast<UpdatesChannelDifferenceClassType>(x);
        return true;
    }
        break;
    
    case typeUpdatesChannelDifferenceTooLong: {
        m_flags = in->fetchInt();
        m_pts = in->fetchInt();
        if(m_flags & 1<<1) {
            m_timeout = in->fetchInt();
        }
        m_topMessage = in->fetchInt();
        m_topImportantMessage = in->fetchInt();
        m_readInboxMaxId = in->fetchInt();
        m_unreadCount = in->fetchInt();
        m_unreadImportantCount = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
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
        m_classType = static_cast<UpdatesChannelDifferenceClassType>(x);
        return true;
    }
        break;
    
    case typeUpdatesChannelDifference: {
        m_flags = in->fetchInt();
        m_pts = in->fetchInt();
        if(m_flags & 1<<1) {
            m_timeout = in->fetchInt();
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newMessages_length = in->fetchInt();
        m_newMessages.clear();
        for (qint32 i = 0; i < m_newMessages_length; i++) {
            Message type;
            type.fetch(in);
            m_newMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_otherUpdates_length = in->fetchInt();
        m_otherUpdates.clear();
        for (qint32 i = 0; i < m_otherUpdates_length; i++) {
            Update type;
            type.fetch(in);
            m_otherUpdates.append(type);
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
        m_classType = static_cast<UpdatesChannelDifferenceClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool UpdatesChannelDifference::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUpdatesChannelDifferenceEmpty: {
        out->appendInt(m_flags);
        out->appendInt(m_pts);
        out->appendInt(m_timeout);
        return true;
    }
        break;
    
    case typeUpdatesChannelDifferenceTooLong: {
        out->appendInt(m_flags);
        out->appendInt(m_pts);
        out->appendInt(m_timeout);
        out->appendInt(m_topMessage);
        out->appendInt(m_topImportantMessage);
        out->appendInt(m_readInboxMaxId);
        out->appendInt(m_unreadCount);
        out->appendInt(m_unreadImportantCount);
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
    
    case typeUpdatesChannelDifference: {
        out->appendInt(m_flags);
        out->appendInt(m_pts);
        out->appendInt(m_timeout);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newMessages.count());
        for (qint32 i = 0; i < m_newMessages.count(); i++) {
            m_newMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_otherUpdates.count());
        for (qint32 i = 0; i < m_otherUpdates.count(); i++) {
            m_otherUpdates[i].push(out);
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

QMap<QString, QVariant> UpdatesChannelDifference::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeUpdatesChannelDifferenceEmpty: {
        result["classType"] = "UpdatesChannelDifference::typeUpdatesChannelDifferenceEmpty";
        result["final"] = QVariant::fromValue<bool>(final());
        result["pts"] = QVariant::fromValue<qint32>(pts());
        result["timeout"] = QVariant::fromValue<qint32>(timeout());
        return result;
    }
        break;
    
    case typeUpdatesChannelDifferenceTooLong: {
        result["classType"] = "UpdatesChannelDifference::typeUpdatesChannelDifferenceTooLong";
        result["final"] = QVariant::fromValue<bool>(final());
        result["pts"] = QVariant::fromValue<qint32>(pts());
        result["timeout"] = QVariant::fromValue<qint32>(timeout());
        result["topMessage"] = QVariant::fromValue<qint32>(topMessage());
        result["topImportantMessage"] = QVariant::fromValue<qint32>(topImportantMessage());
        result["readInboxMaxId"] = QVariant::fromValue<qint32>(readInboxMaxId());
        result["unreadCount"] = QVariant::fromValue<qint32>(unreadCount());
        result["unreadImportantCount"] = QVariant::fromValue<qint32>(unreadImportantCount());
        QList<QVariant> _messages;
        Q_FOREACH(const Message &m__type, m_messages)
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
    
    case typeUpdatesChannelDifference: {
        result["classType"] = "UpdatesChannelDifference::typeUpdatesChannelDifference";
        result["final"] = QVariant::fromValue<bool>(final());
        result["pts"] = QVariant::fromValue<qint32>(pts());
        result["timeout"] = QVariant::fromValue<qint32>(timeout());
        QList<QVariant> _newMessages;
        Q_FOREACH(const Message &m__type, m_newMessages)
            _newMessages << m__type.toMap();
        result["newMessages"] = _newMessages;
        QList<QVariant> _otherUpdates;
        Q_FOREACH(const Update &m__type, m_otherUpdates)
            _otherUpdates << m__type.toMap();
        result["otherUpdates"] = _otherUpdates;
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

UpdatesChannelDifference UpdatesChannelDifference::fromMap(const QMap<QString, QVariant> &map) {
    UpdatesChannelDifference result;
    if(map.value("classType").toString() == "UpdatesChannelDifference::typeUpdatesChannelDifferenceEmpty") {
        result.setClassType(typeUpdatesChannelDifferenceEmpty);
        result.setFinal( map.value("final").value<bool>() );
        result.setPts( map.value("pts").value<qint32>() );
        result.setTimeout( map.value("timeout").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "UpdatesChannelDifference::typeUpdatesChannelDifferenceTooLong") {
        result.setClassType(typeUpdatesChannelDifferenceTooLong);
        result.setFinal( map.value("final").value<bool>() );
        result.setPts( map.value("pts").value<qint32>() );
        result.setTimeout( map.value("timeout").value<qint32>() );
        result.setTopMessage( map.value("topMessage").value<qint32>() );
        result.setTopImportantMessage( map.value("topImportantMessage").value<qint32>() );
        result.setReadInboxMaxId( map.value("readInboxMaxId").value<qint32>() );
        result.setUnreadCount( map.value("unreadCount").value<qint32>() );
        result.setUnreadImportantCount( map.value("unreadImportantCount").value<qint32>() );
        QList<QVariant> map_messages = map["messages"].toList();
        QList<Message> _messages;
        Q_FOREACH(const QVariant &var, map_messages)
            _messages << Message::fromMap(var.toMap());
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
    if(map.value("classType").toString() == "UpdatesChannelDifference::typeUpdatesChannelDifference") {
        result.setClassType(typeUpdatesChannelDifference);
        result.setFinal( map.value("final").value<bool>() );
        result.setPts( map.value("pts").value<qint32>() );
        result.setTimeout( map.value("timeout").value<qint32>() );
        QList<QVariant> map_newMessages = map["newMessages"].toList();
        QList<Message> _newMessages;
        Q_FOREACH(const QVariant &var, map_newMessages)
            _newMessages << Message::fromMap(var.toMap());
        result.setNewMessages(_newMessages);
        QList<QVariant> map_otherUpdates = map["otherUpdates"].toList();
        QList<Update> _otherUpdates;
        Q_FOREACH(const QVariant &var, map_otherUpdates)
            _otherUpdates << Update::fromMap(var.toMap());
        result.setOtherUpdates(_otherUpdates);
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

QByteArray UpdatesChannelDifference::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const UpdatesChannelDifference &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case UpdatesChannelDifference::typeUpdatesChannelDifferenceEmpty:
        stream << item.flags();
        stream << item.pts();
        stream << item.timeout();
        break;
    case UpdatesChannelDifference::typeUpdatesChannelDifferenceTooLong:
        stream << item.flags();
        stream << item.pts();
        stream << item.timeout();
        stream << item.topMessage();
        stream << item.topImportantMessage();
        stream << item.readInboxMaxId();
        stream << item.unreadCount();
        stream << item.unreadImportantCount();
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    case UpdatesChannelDifference::typeUpdatesChannelDifference:
        stream << item.flags();
        stream << item.pts();
        stream << item.timeout();
        stream << item.newMessages();
        stream << item.otherUpdates();
        stream << item.chats();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, UpdatesChannelDifference &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<UpdatesChannelDifference::UpdatesChannelDifferenceClassType>(type));
    switch(type) {
    case UpdatesChannelDifference::typeUpdatesChannelDifferenceEmpty: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_pts;
        stream >> m_pts;
        item.setPts(m_pts);
        qint32 m_timeout;
        stream >> m_timeout;
        item.setTimeout(m_timeout);
    }
        break;
    case UpdatesChannelDifference::typeUpdatesChannelDifferenceTooLong: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_pts;
        stream >> m_pts;
        item.setPts(m_pts);
        qint32 m_timeout;
        stream >> m_timeout;
        item.setTimeout(m_timeout);
        qint32 m_top_message;
        stream >> m_top_message;
        item.setTopMessage(m_top_message);
        qint32 m_top_important_message;
        stream >> m_top_important_message;
        item.setTopImportantMessage(m_top_important_message);
        qint32 m_read_inbox_max_id;
        stream >> m_read_inbox_max_id;
        item.setReadInboxMaxId(m_read_inbox_max_id);
        qint32 m_unread_count;
        stream >> m_unread_count;
        item.setUnreadCount(m_unread_count);
        qint32 m_unread_important_count;
        stream >> m_unread_important_count;
        item.setUnreadImportantCount(m_unread_important_count);
        QList<Message> m_messages;
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
    case UpdatesChannelDifference::typeUpdatesChannelDifference: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_pts;
        stream >> m_pts;
        item.setPts(m_pts);
        qint32 m_timeout;
        stream >> m_timeout;
        item.setTimeout(m_timeout);
        QList<Message> m_new_messages;
        stream >> m_new_messages;
        item.setNewMessages(m_new_messages);
        QList<Update> m_other_updates;
        stream >> m_other_updates;
        item.setOtherUpdates(m_other_updates);
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

