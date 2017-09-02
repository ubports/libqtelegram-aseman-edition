// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHAT
#define LQTG_TYPE_CHAT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include "chatphoto.h"
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT Chat : public TelegramTypeObject
{
public:
    enum ChatClassType {
        typeChatEmpty = 0x9ba2d800,
        typeChat = 0x6e9c9bc7,
        typeChatForbidden = 0xfb0ccc41
    };

    Chat(ChatClassType classType = typeChatEmpty, InboundPkt *in = 0);
    Chat(InboundPkt *in);
    Chat(const Null&);
    virtual ~Chat();

    void setDate(qint32 date);
    qint32 date() const;

    void setId(qint32 id);
    qint32 id() const;

    void setLeft(bool left);
    bool left() const;

    void setParticipantsCount(qint32 participantsCount);
    qint32 participantsCount() const;

    void setPhoto(const ChatPhoto &photo);
    ChatPhoto photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(ChatClassType classType);
    ChatClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Chat fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const Chat &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_date;
    qint32 m_id;
    bool m_left;
    qint32 m_participantsCount;
    ChatPhoto m_photo;
    QString m_title;
    qint32 m_version;
    ChatClassType m_classType;
};

Q_DECLARE_METATYPE(Chat)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Chat &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Chat &item);

inline Chat::Chat(ChatClassType classType, InboundPkt *in) :
    m_date(0),
    m_id(0),
    m_left(false),
    m_participantsCount(0),
    m_version(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline Chat::Chat(InboundPkt *in) :
    m_date(0),
    m_id(0),
    m_left(false),
    m_participantsCount(0),
    m_version(0),
    m_classType(typeChatEmpty)
{
    fetch(in);
}

inline Chat::Chat(const Null &null) :
    TelegramTypeObject(null),
    m_date(0),
    m_id(0),
    m_left(false),
    m_participantsCount(0),
    m_version(0),
    m_classType(typeChatEmpty)
{
}

inline Chat::~Chat() {
}

inline void Chat::setDate(qint32 date) {
    m_date = date;
}

inline qint32 Chat::date() const {
    return m_date;
}

inline void Chat::setId(qint32 id) {
    m_id = id;
}

inline qint32 Chat::id() const {
    return m_id;
}

inline void Chat::setLeft(bool left) {
    m_left = left;
}

inline bool Chat::left() const {
    return m_left;
}

inline void Chat::setParticipantsCount(qint32 participantsCount) {
    m_participantsCount = participantsCount;
}

inline qint32 Chat::participantsCount() const {
    return m_participantsCount;
}

inline void Chat::setPhoto(const ChatPhoto &photo) {
    m_photo = photo;
}

inline ChatPhoto Chat::photo() const {
    return m_photo;
}

inline void Chat::setTitle(const QString &title) {
    m_title = title;
}

inline QString Chat::title() const {
    return m_title;
}

inline void Chat::setVersion(qint32 version) {
    m_version = version;
}

inline qint32 Chat::version() const {
    return m_version;
}

inline bool Chat::operator ==(const Chat &b) const {
    return m_classType == b.m_classType &&
           m_date == b.m_date &&
           m_id == b.m_id &&
           m_left == b.m_left &&
           m_participantsCount == b.m_participantsCount &&
           m_photo == b.m_photo &&
           m_title == b.m_title &&
           m_version == b.m_version;
}

inline void Chat::setClassType(Chat::ChatClassType classType) {
    m_classType = classType;
}

inline Chat::ChatClassType Chat::classType() const {
    return m_classType;
}

inline bool Chat::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatEmpty: {
        m_id = in->fetchInt();
        m_classType = static_cast<ChatClassType>(x);
        return true;
    }
        break;
    
    case typeChat: {
        m_id = in->fetchInt();
        m_title = in->fetchQString();
        m_photo.fetch(in);
        m_participantsCount = in->fetchInt();
        m_date = in->fetchInt();
        m_left = in->fetchBool();
        m_version = in->fetchInt();
        m_classType = static_cast<ChatClassType>(x);
        return true;
    }
        break;
    
    case typeChatForbidden: {
        m_id = in->fetchInt();
        m_title = in->fetchQString();
        m_date = in->fetchInt();
        m_classType = static_cast<ChatClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool Chat::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatEmpty: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    case typeChat: {
        out->appendInt(m_id);
        out->appendQString(m_title);
        m_photo.push(out);
        out->appendInt(m_participantsCount);
        out->appendInt(m_date);
        out->appendBool(m_left);
        out->appendInt(m_version);
        return true;
    }
        break;
    
    case typeChatForbidden: {
        out->appendInt(m_id);
        out->appendQString(m_title);
        out->appendInt(m_date);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> Chat::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeChatEmpty: {
        result["classType"] = "Chat::typeChatEmpty";
        result["id"] = QVariant::fromValue<qint32>(id());
        return result;
    }
        break;
    
    case typeChat: {
        result["classType"] = "Chat::typeChat";
        result["id"] = QVariant::fromValue<qint32>(id());
        result["title"] = QVariant::fromValue<QString>(title());
        result["photo"] = m_photo.toMap();
        result["participantsCount"] = QVariant::fromValue<qint32>(participantsCount());
        result["date"] = QVariant::fromValue<qint32>(date());
        result["left"] = QVariant::fromValue<bool>(left());
        result["version"] = QVariant::fromValue<qint32>(version());
        return result;
    }
        break;
    
    case typeChatForbidden: {
        result["classType"] = "Chat::typeChatForbidden";
        result["id"] = QVariant::fromValue<qint32>(id());
        result["title"] = QVariant::fromValue<QString>(title());
        result["date"] = QVariant::fromValue<qint32>(date());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline Chat Chat::fromMap(const QMap<QString, QVariant> &map) {
    Chat result;
    if(map.value("classType").toString() == "Chat::typeChatEmpty") {
        result.setClassType(typeChatEmpty);
        result.setId( map.value("id").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "Chat::typeChat") {
        result.setClassType(typeChat);
        result.setId( map.value("id").value<qint32>() );
        result.setTitle( map.value("title").value<QString>() );
        result.setPhoto( ChatPhoto::fromMap(map.value("photo").toMap()) );
        result.setParticipantsCount( map.value("participantsCount").value<qint32>() );
        result.setDate( map.value("date").value<qint32>() );
        result.setLeft( map.value("left").value<bool>() );
        result.setVersion( map.value("version").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "Chat::typeChatForbidden") {
        result.setClassType(typeChatForbidden);
        result.setId( map.value("id").value<qint32>() );
        result.setTitle( map.value("title").value<QString>() );
        result.setDate( map.value("date").value<qint32>() );
        return result;
    }
    return result;
}

inline QByteArray Chat::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const Chat &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Chat::typeChatEmpty:
        stream << item.id();
        break;
    case Chat::typeChat:
        stream << item.id();
        stream << item.title();
        stream << item.photo();
        stream << item.participantsCount();
        stream << item.date();
        stream << item.left();
        stream << item.version();
        break;
    case Chat::typeChatForbidden:
        stream << item.id();
        stream << item.title();
        stream << item.date();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, Chat &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Chat::ChatClassType>(type));
    switch(type) {
    case Chat::typeChatEmpty: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case Chat::typeChat: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        ChatPhoto m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        qint32 m_participants_count;
        stream >> m_participants_count;
        item.setParticipantsCount(m_participants_count);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        bool m_left;
        stream >> m_left;
        item.setLeft(m_left);
        qint32 m_version;
        stream >> m_version;
        item.setVersion(m_version);
    }
        break;
    case Chat::typeChatForbidden: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_CHAT
