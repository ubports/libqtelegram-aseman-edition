// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTUSER
#define LQTG_TYPE_INPUTUSER

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputUser : public TelegramTypeObject
{
public:
    enum InputUserClassType {
        typeInputUserEmpty = 0xb98886cf,
        typeInputUserSelf = 0xf7c1b13f,
        typeInputUser = 0xd8292816
    };

    InputUser(InputUserClassType classType = typeInputUserEmpty, InboundPkt *in = 0);
    InputUser(InboundPkt *in);
    InputUser(const Null&);
    virtual ~InputUser();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(InputUserClassType classType);
    InputUserClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputUser fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const InputUser &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    qint32 m_userId;
    InputUserClassType m_classType;
};

Q_DECLARE_METATYPE(InputUser)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputUser &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputUser &item);

inline InputUser::InputUser(InputUserClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline InputUser::InputUser(InboundPkt *in) :
    m_accessHash(0),
    m_userId(0),
    m_classType(typeInputUserEmpty)
{
    fetch(in);
}

inline InputUser::InputUser(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_userId(0),
    m_classType(typeInputUserEmpty)
{
}

inline InputUser::~InputUser() {
}

inline void InputUser::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

inline qint64 InputUser::accessHash() const {
    return m_accessHash;
}

inline void InputUser::setUserId(qint32 userId) {
    m_userId = userId;
}

inline qint32 InputUser::userId() const {
    return m_userId;
}

inline bool InputUser::operator ==(const InputUser &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_userId == b.m_userId;
}

inline void InputUser::setClassType(InputUser::InputUserClassType classType) {
    m_classType = classType;
}

inline InputUser::InputUserClassType InputUser::classType() const {
    return m_classType;
}

inline bool InputUser::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputUserEmpty: {
        m_classType = static_cast<InputUserClassType>(x);
        return true;
    }
        break;
    
    case typeInputUserSelf: {
        m_classType = static_cast<InputUserClassType>(x);
        return true;
    }
        break;
    
    case typeInputUser: {
        m_userId = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputUserClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool InputUser::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputUserEmpty: {
        return true;
    }
        break;
    
    case typeInputUserSelf: {
        return true;
    }
        break;
    
    case typeInputUser: {
        out->appendInt(m_userId);
        out->appendLong(m_accessHash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> InputUser::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputUserEmpty: {
        result["classType"] = "InputUser::typeInputUserEmpty";
        return result;
    }
        break;
    
    case typeInputUserSelf: {
        result["classType"] = "InputUser::typeInputUserSelf";
        return result;
    }
        break;
    
    case typeInputUser: {
        result["classType"] = "InputUser::typeInputUser";
        result["userId"] = QVariant::fromValue<qint32>(userId());
        result["accessHash"] = QVariant::fromValue<qint64>(accessHash());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline InputUser InputUser::fromMap(const QMap<QString, QVariant> &map) {
    InputUser result;
    if(map.value("classType").toString() == "InputUser::typeInputUserEmpty") {
        result.setClassType(typeInputUserEmpty);
        return result;
    }
    if(map.value("classType").toString() == "InputUser::typeInputUserSelf") {
        result.setClassType(typeInputUserSelf);
        return result;
    }
    if(map.value("classType").toString() == "InputUser::typeInputUser") {
        result.setClassType(typeInputUser);
        result.setUserId( map.value("userId").value<qint32>() );
        result.setAccessHash( map.value("accessHash").value<qint64>() );
        return result;
    }
    return result;
}

inline QByteArray InputUser::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const InputUser &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputUser::typeInputUserEmpty:
        
        break;
    case InputUser::typeInputUserSelf:
        
        break;
    case InputUser::typeInputUser:
        stream << item.userId();
        stream << item.accessHash();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, InputUser &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputUser::InputUserClassType>(type));
    switch(type) {
    case InputUser::typeInputUserEmpty: {
        
    }
        break;
    case InputUser::typeInputUserSelf: {
        
    }
        break;
    case InputUser::typeInputUser: {
        qint32 m_user_id;
        stream >> m_user_id;
        item.setUserId(m_user_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_INPUTUSER
