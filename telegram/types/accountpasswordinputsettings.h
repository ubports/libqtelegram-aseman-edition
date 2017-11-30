// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTPASSWORDINPUTSETTINGS
#define LQTG_TYPE_ACCOUNTPASSWORDINPUTSETTINGS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include <QtGlobal>
#include <QByteArray>

class LIBQTELEGRAMSHARED_EXPORT AccountPasswordInputSettings : public TelegramTypeObject
{
public:
    enum AccountPasswordInputSettingsClassType {
        typeAccountPasswordInputSettings = 0xbcfc532c
    };

    AccountPasswordInputSettings(AccountPasswordInputSettingsClassType classType = typeAccountPasswordInputSettings, InboundPkt *in = 0);
    AccountPasswordInputSettings(InboundPkt *in);
    AccountPasswordInputSettings(const Null&);
    virtual ~AccountPasswordInputSettings();

    void setEmail(const QString &email);
    QString email() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setHint(const QString &hint);
    QString hint() const;

    void setNewPasswordHash(const QByteArray &newPasswordHash);
    QByteArray newPasswordHash() const;

    void setNewSalt(const QByteArray &newSalt);
    QByteArray newSalt() const;

    void setClassType(AccountPasswordInputSettingsClassType classType);
    AccountPasswordInputSettingsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static AccountPasswordInputSettings fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const AccountPasswordInputSettings &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_email;
    qint32 m_flags;
    QString m_hint;
    QByteArray m_newPasswordHash;
    QByteArray m_newSalt;
    AccountPasswordInputSettingsClassType m_classType;
};

Q_DECLARE_METATYPE(AccountPasswordInputSettings)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const AccountPasswordInputSettings &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, AccountPasswordInputSettings &item);

inline AccountPasswordInputSettings::AccountPasswordInputSettings(AccountPasswordInputSettingsClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline AccountPasswordInputSettings::AccountPasswordInputSettings(InboundPkt *in) :
    m_flags(0),
    m_classType(typeAccountPasswordInputSettings)
{
    fetch(in);
}

inline AccountPasswordInputSettings::AccountPasswordInputSettings(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeAccountPasswordInputSettings)
{
}

inline AccountPasswordInputSettings::~AccountPasswordInputSettings() {
}

inline void AccountPasswordInputSettings::setEmail(const QString &email) {
    m_email = email;
}

inline QString AccountPasswordInputSettings::email() const {
    return m_email;
}

inline void AccountPasswordInputSettings::setFlags(qint32 flags) {
    m_flags = flags;
}

inline qint32 AccountPasswordInputSettings::flags() const {
    return m_flags;
}

inline void AccountPasswordInputSettings::setHint(const QString &hint) {
    m_hint = hint;
}

inline QString AccountPasswordInputSettings::hint() const {
    return m_hint;
}

inline void AccountPasswordInputSettings::setNewPasswordHash(const QByteArray &newPasswordHash) {
    m_newPasswordHash = newPasswordHash;
}

inline QByteArray AccountPasswordInputSettings::newPasswordHash() const {
    return m_newPasswordHash;
}

inline void AccountPasswordInputSettings::setNewSalt(const QByteArray &newSalt) {
    m_newSalt = newSalt;
}

inline QByteArray AccountPasswordInputSettings::newSalt() const {
    return m_newSalt;
}

inline bool AccountPasswordInputSettings::operator ==(const AccountPasswordInputSettings &b) const {
    return m_classType == b.m_classType &&
           m_email == b.m_email &&
           m_flags == b.m_flags &&
           m_hint == b.m_hint &&
           m_newPasswordHash == b.m_newPasswordHash &&
           m_newSalt == b.m_newSalt;
}

inline void AccountPasswordInputSettings::setClassType(AccountPasswordInputSettings::AccountPasswordInputSettingsClassType classType) {
    m_classType = classType;
}

inline AccountPasswordInputSettings::AccountPasswordInputSettingsClassType AccountPasswordInputSettings::classType() const {
    return m_classType;
}

inline bool AccountPasswordInputSettings::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAccountPasswordInputSettings: {
        m_flags = in->fetchInt();
        if(m_flags & 1<<0) {
            m_newSalt = in->fetchBytes();
        }
        if(m_flags & 1<<0) {
            m_newPasswordHash = in->fetchBytes();
        }
        if(m_flags & 1<<0) {
            m_hint = in->fetchQString();
        }
        if(m_flags & 1<<1) {
            m_email = in->fetchQString();
        }
        m_classType = static_cast<AccountPasswordInputSettingsClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool AccountPasswordInputSettings::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountPasswordInputSettings: {
        out->appendInt(m_flags);
        out->appendBytes(m_newSalt);
        out->appendBytes(m_newPasswordHash);
        out->appendQString(m_hint);
        out->appendQString(m_email);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> AccountPasswordInputSettings::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeAccountPasswordInputSettings: {
        result["classType"] = "AccountPasswordInputSettings::typeAccountPasswordInputSettings";
        result["newSalt"] = QVariant::fromValue<QByteArray>(newSalt());
        result["newPasswordHash"] = QVariant::fromValue<QByteArray>(newPasswordHash());
        result["hint"] = QVariant::fromValue<QString>(hint());
        result["email"] = QVariant::fromValue<QString>(email());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline AccountPasswordInputSettings AccountPasswordInputSettings::fromMap(const QMap<QString, QVariant> &map) {
    AccountPasswordInputSettings result;
    if(map.value("classType").toString() == "AccountPasswordInputSettings::typeAccountPasswordInputSettings") {
        result.setClassType(typeAccountPasswordInputSettings);
        result.setNewSalt( map.value("newSalt").value<QByteArray>() );
        result.setNewPasswordHash( map.value("newPasswordHash").value<QByteArray>() );
        result.setHint( map.value("hint").value<QString>() );
        result.setEmail( map.value("email").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray AccountPasswordInputSettings::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const AccountPasswordInputSettings &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case AccountPasswordInputSettings::typeAccountPasswordInputSettings:
        stream << item.flags();
        stream << item.newSalt();
        stream << item.newPasswordHash();
        stream << item.hint();
        stream << item.email();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, AccountPasswordInputSettings &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<AccountPasswordInputSettings::AccountPasswordInputSettingsClassType>(type));
    switch(type) {
    case AccountPasswordInputSettings::typeAccountPasswordInputSettings: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QByteArray m_new_salt;
        stream >> m_new_salt;
        item.setNewSalt(m_new_salt);
        QByteArray m_new_password_hash;
        stream >> m_new_password_hash;
        item.setNewPasswordHash(m_new_password_hash);
        QString m_hint;
        stream >> m_hint;
        item.setHint(m_hint);
        QString m_email;
        stream >> m_email;
        item.setEmail(m_email);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_ACCOUNTPASSWORDINPUTSETTINGS
