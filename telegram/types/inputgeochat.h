// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTGEOCHAT
#define LQTG_TYPE_INPUTGEOCHAT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputGeoChat : public TelegramTypeObject
{
public:
    enum InputGeoChatClassType {
        typeInputGeoChat = 0x74d456fa
    };

    InputGeoChat(InputGeoChatClassType classType = typeInputGeoChat, InboundPkt *in = 0);
    InputGeoChat(InboundPkt *in);
    InputGeoChat(const Null&);
    virtual ~InputGeoChat();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setClassType(InputGeoChatClassType classType);
    InputGeoChatClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputGeoChat fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const InputGeoChat &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    qint32 m_chatId;
    InputGeoChatClassType m_classType;
};

Q_DECLARE_METATYPE(InputGeoChat)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputGeoChat &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputGeoChat &item);

inline InputGeoChat::InputGeoChat(InputGeoChatClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_chatId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline InputGeoChat::InputGeoChat(InboundPkt *in) :
    m_accessHash(0),
    m_chatId(0),
    m_classType(typeInputGeoChat)
{
    fetch(in);
}

inline InputGeoChat::InputGeoChat(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_chatId(0),
    m_classType(typeInputGeoChat)
{
}

inline InputGeoChat::~InputGeoChat() {
}

inline void InputGeoChat::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

inline qint64 InputGeoChat::accessHash() const {
    return m_accessHash;
}

inline void InputGeoChat::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

inline qint32 InputGeoChat::chatId() const {
    return m_chatId;
}

inline bool InputGeoChat::operator ==(const InputGeoChat &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_chatId == b.m_chatId;
}

inline void InputGeoChat::setClassType(InputGeoChat::InputGeoChatClassType classType) {
    m_classType = classType;
}

inline InputGeoChat::InputGeoChatClassType InputGeoChat::classType() const {
    return m_classType;
}

inline bool InputGeoChat::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputGeoChat: {
        m_chatId = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputGeoChatClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool InputGeoChat::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputGeoChat: {
        out->appendInt(m_chatId);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> InputGeoChat::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputGeoChat: {
        result["classType"] = "InputGeoChat::typeInputGeoChat";
        result["chatId"] = QVariant::fromValue<qint32>(chatId());
        result["accessHash"] = QVariant::fromValue<qint64>(accessHash());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline InputGeoChat InputGeoChat::fromMap(const QMap<QString, QVariant> &map) {
    InputGeoChat result;
    if(map.value("classType").toString() == "InputGeoChat::typeInputGeoChat") {
        result.setClassType(typeInputGeoChat);
        result.setChatId( map.value("chatId").value<qint32>() );
        result.setAccessHash( map.value("accessHash").value<qint64>() );
        return result;
    }
    return result;
}

inline QByteArray InputGeoChat::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const InputGeoChat &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputGeoChat::typeInputGeoChat:
        stream << item.chatId();
        stream << item.accessHash();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, InputGeoChat &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputGeoChat::InputGeoChatClassType>(type));
    switch(type) {
    case InputGeoChat::typeInputGeoChat: {
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_INPUTGEOCHAT
