// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_DECRYPTEDMESSAGE
#define LQTG_TYPE_DECRYPTEDMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include "decryptedmessageaction.h"
#include "decryptedmessagemedia.h"
#include <QString>
#include <QByteArray>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT DecryptedMessage : public TelegramTypeObject
{
public:
    enum DecryptedMessageClassType {
        typeDecryptedMessageSecret8 = 0x1f814f1f,
        typeDecryptedMessageServiceSecret8 = 0xaa48327d,
        typeDecryptedMessageSecret17 = 0x204d3878,
        typeDecryptedMessageServiceSecret17 = 0x73164160
    };

    DecryptedMessage(DecryptedMessageClassType classType = typeDecryptedMessageSecret8, InboundPkt *in = 0);
    DecryptedMessage(InboundPkt *in);
    DecryptedMessage(const Null&);
    virtual ~DecryptedMessage();

    void setAction(const DecryptedMessageAction &action);
    DecryptedMessageAction action() const;

    void setMedia(const DecryptedMessageMedia &media);
    DecryptedMessageMedia media() const;

    void setMessage(const QString &message);
    QString message() const;

    void setRandomBytes(const QByteArray &randomBytes);
    QByteArray randomBytes() const;

    void setRandomId(qint64 randomId);
    qint64 randomId() const;

    void setTtl(qint32 ttl);
    qint32 ttl() const;

    void setClassType(DecryptedMessageClassType classType);
    DecryptedMessageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static DecryptedMessage fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const DecryptedMessage &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    DecryptedMessageAction m_action;
    DecryptedMessageMedia m_media;
    QString m_message;
    QByteArray m_randomBytes;
    qint64 m_randomId;
    qint32 m_ttl;
    DecryptedMessageClassType m_classType;
};

Q_DECLARE_METATYPE(DecryptedMessage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const DecryptedMessage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, DecryptedMessage &item);

inline DecryptedMessage::DecryptedMessage(DecryptedMessageClassType classType, InboundPkt *in) :
    m_randomId(0),
    m_ttl(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline DecryptedMessage::DecryptedMessage(InboundPkt *in) :
    m_randomId(0),
    m_ttl(0),
    m_classType(typeDecryptedMessageSecret8)
{
    fetch(in);
}

inline DecryptedMessage::DecryptedMessage(const Null &null) :
    TelegramTypeObject(null),
    m_randomId(0),
    m_ttl(0),
    m_classType(typeDecryptedMessageSecret8)
{
}

inline DecryptedMessage::~DecryptedMessage() {
}

inline void DecryptedMessage::setAction(const DecryptedMessageAction &action) {
    m_action = action;
}

inline DecryptedMessageAction DecryptedMessage::action() const {
    return m_action;
}

inline void DecryptedMessage::setMedia(const DecryptedMessageMedia &media) {
    m_media = media;
}

inline DecryptedMessageMedia DecryptedMessage::media() const {
    return m_media;
}

inline void DecryptedMessage::setMessage(const QString &message) {
    m_message = message;
}

inline QString DecryptedMessage::message() const {
    return m_message;
}

inline void DecryptedMessage::setRandomBytes(const QByteArray &randomBytes) {
    m_randomBytes = randomBytes;
}

inline QByteArray DecryptedMessage::randomBytes() const {
    return m_randomBytes;
}

inline void DecryptedMessage::setRandomId(qint64 randomId) {
    m_randomId = randomId;
}

inline qint64 DecryptedMessage::randomId() const {
    return m_randomId;
}

inline void DecryptedMessage::setTtl(qint32 ttl) {
    m_ttl = ttl;
}

inline qint32 DecryptedMessage::ttl() const {
    return m_ttl;
}

inline bool DecryptedMessage::operator ==(const DecryptedMessage &b) const {
    return m_classType == b.m_classType &&
           m_action == b.m_action &&
           m_media == b.m_media &&
           m_message == b.m_message &&
           m_randomBytes == b.m_randomBytes &&
           m_randomId == b.m_randomId &&
           m_ttl == b.m_ttl;
}

inline void DecryptedMessage::setClassType(DecryptedMessage::DecryptedMessageClassType classType) {
    m_classType = classType;
}

inline DecryptedMessage::DecryptedMessageClassType DecryptedMessage::classType() const {
    return m_classType;
}

inline bool DecryptedMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDecryptedMessageSecret8: {
        m_randomId = in->fetchLong();
        m_randomBytes = in->fetchBytes();
        m_message = in->fetchQString();
        m_media.fetch(in);
        m_classType = static_cast<DecryptedMessageClassType>(x);
        return true;
    }
        break;
    
    case typeDecryptedMessageServiceSecret8: {
        m_randomId = in->fetchLong();
        m_randomBytes = in->fetchBytes();
        m_action.fetch(in);
        m_classType = static_cast<DecryptedMessageClassType>(x);
        return true;
    }
        break;
    
    case typeDecryptedMessageSecret17: {
        m_randomId = in->fetchLong();
        m_ttl = in->fetchInt();
        m_message = in->fetchQString();
        m_media.fetch(in);
        m_classType = static_cast<DecryptedMessageClassType>(x);
        return true;
    }
        break;
    
    case typeDecryptedMessageServiceSecret17: {
        m_randomId = in->fetchLong();
        m_action.fetch(in);
        m_classType = static_cast<DecryptedMessageClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool DecryptedMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDecryptedMessageSecret8: {
        out->appendLong(m_randomId);
        out->appendBytes(m_randomBytes);
        out->appendQString(m_message);
        m_media.push(out);
        return true;
    }
        break;
    
    case typeDecryptedMessageServiceSecret8: {
        out->appendLong(m_randomId);
        out->appendBytes(m_randomBytes);
        m_action.push(out);
        return true;
    }
        break;
    
    case typeDecryptedMessageSecret17: {
        out->appendLong(m_randomId);
        out->appendInt(m_ttl);
        out->appendQString(m_message);
        m_media.push(out);
        return true;
    }
        break;
    
    case typeDecryptedMessageServiceSecret17: {
        out->appendLong(m_randomId);
        m_action.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> DecryptedMessage::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeDecryptedMessageSecret8: {
        result["classType"] = "DecryptedMessage::typeDecryptedMessageSecret8";
        result["randomId"] = QVariant::fromValue<qint64>(randomId());
        result["randomBytes"] = QVariant::fromValue<QByteArray>(randomBytes());
        result["message"] = QVariant::fromValue<QString>(message());
        result["media"] = m_media.toMap();
        return result;
    }
        break;
    
    case typeDecryptedMessageServiceSecret8: {
        result["classType"] = "DecryptedMessage::typeDecryptedMessageServiceSecret8";
        result["randomId"] = QVariant::fromValue<qint64>(randomId());
        result["randomBytes"] = QVariant::fromValue<QByteArray>(randomBytes());
        result["action"] = m_action.toMap();
        return result;
    }
        break;
    
    case typeDecryptedMessageSecret17: {
        result["classType"] = "DecryptedMessage::typeDecryptedMessageSecret17";
        result["randomId"] = QVariant::fromValue<qint64>(randomId());
        result["ttl"] = QVariant::fromValue<qint32>(ttl());
        result["message"] = QVariant::fromValue<QString>(message());
        result["media"] = m_media.toMap();
        return result;
    }
        break;
    
    case typeDecryptedMessageServiceSecret17: {
        result["classType"] = "DecryptedMessage::typeDecryptedMessageServiceSecret17";
        result["randomId"] = QVariant::fromValue<qint64>(randomId());
        result["action"] = m_action.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline DecryptedMessage DecryptedMessage::fromMap(const QMap<QString, QVariant> &map) {
    DecryptedMessage result;
    if(map.value("classType").toString() == "DecryptedMessage::typeDecryptedMessageSecret8") {
        result.setClassType(typeDecryptedMessageSecret8);
        result.setRandomId( map.value("randomId").value<qint64>() );
        result.setRandomBytes( map.value("randomBytes").value<QByteArray>() );
        result.setMessage( map.value("message").value<QString>() );
        result.setMedia( DecryptedMessageMedia::fromMap(map.value("media").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "DecryptedMessage::typeDecryptedMessageServiceSecret8") {
        result.setClassType(typeDecryptedMessageServiceSecret8);
        result.setRandomId( map.value("randomId").value<qint64>() );
        result.setRandomBytes( map.value("randomBytes").value<QByteArray>() );
        result.setAction( DecryptedMessageAction::fromMap(map.value("action").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "DecryptedMessage::typeDecryptedMessageSecret17") {
        result.setClassType(typeDecryptedMessageSecret17);
        result.setRandomId( map.value("randomId").value<qint64>() );
        result.setTtl( map.value("ttl").value<qint32>() );
        result.setMessage( map.value("message").value<QString>() );
        result.setMedia( DecryptedMessageMedia::fromMap(map.value("media").toMap()) );
        return result;
    }
    if(map.value("classType").toString() == "DecryptedMessage::typeDecryptedMessageServiceSecret17") {
        result.setClassType(typeDecryptedMessageServiceSecret17);
        result.setRandomId( map.value("randomId").value<qint64>() );
        result.setAction( DecryptedMessageAction::fromMap(map.value("action").toMap()) );
        return result;
    }
    return result;
}

inline QByteArray DecryptedMessage::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const DecryptedMessage &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case DecryptedMessage::typeDecryptedMessageSecret8:
        stream << item.randomId();
        stream << item.randomBytes();
        stream << item.message();
        stream << item.media();
        break;
    case DecryptedMessage::typeDecryptedMessageServiceSecret8:
        stream << item.randomId();
        stream << item.randomBytes();
        stream << item.action();
        break;
    case DecryptedMessage::typeDecryptedMessageSecret17:
        stream << item.randomId();
        stream << item.ttl();
        stream << item.message();
        stream << item.media();
        break;
    case DecryptedMessage::typeDecryptedMessageServiceSecret17:
        stream << item.randomId();
        stream << item.action();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, DecryptedMessage &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<DecryptedMessage::DecryptedMessageClassType>(type));
    switch(type) {
    case DecryptedMessage::typeDecryptedMessageSecret8: {
        qint64 m_random_id;
        stream >> m_random_id;
        item.setRandomId(m_random_id);
        QByteArray m_random_bytes;
        stream >> m_random_bytes;
        item.setRandomBytes(m_random_bytes);
        QString m_message;
        stream >> m_message;
        item.setMessage(m_message);
        DecryptedMessageMedia m_media;
        stream >> m_media;
        item.setMedia(m_media);
    }
        break;
    case DecryptedMessage::typeDecryptedMessageServiceSecret8: {
        qint64 m_random_id;
        stream >> m_random_id;
        item.setRandomId(m_random_id);
        QByteArray m_random_bytes;
        stream >> m_random_bytes;
        item.setRandomBytes(m_random_bytes);
        DecryptedMessageAction m_action;
        stream >> m_action;
        item.setAction(m_action);
    }
        break;
    case DecryptedMessage::typeDecryptedMessageSecret17: {
        qint64 m_random_id;
        stream >> m_random_id;
        item.setRandomId(m_random_id);
        qint32 m_ttl;
        stream >> m_ttl;
        item.setTtl(m_ttl);
        QString m_message;
        stream >> m_message;
        item.setMessage(m_message);
        DecryptedMessageMedia m_media;
        stream >> m_media;
        item.setMedia(m_media);
    }
        break;
    case DecryptedMessage::typeDecryptedMessageServiceSecret17: {
        qint64 m_random_id;
        stream >> m_random_id;
        item.setRandomId(m_random_id);
        DecryptedMessageAction m_action;
        stream >> m_action;
        item.setAction(m_action);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_DECRYPTEDMESSAGE
