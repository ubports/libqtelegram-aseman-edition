// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_USERSTATUS_OBJECT
#define LQTG_TYPE_USERSTATUS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/userstatus.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT UserStatusObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(UserStatusClassType)
    Q_PROPERTY(qint32 expires READ expires WRITE setExpires NOTIFY expiresChanged)
    Q_PROPERTY(qint32 wasOnline READ wasOnline WRITE setWasOnline NOTIFY wasOnlineChanged)
    Q_PROPERTY(UserStatus core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum UserStatusClassType {
        TypeUserStatusEmpty,
        TypeUserStatusOnline,
        TypeUserStatusOffline,
        TypeUserStatusRecently,
        TypeUserStatusLastWeek,
        TypeUserStatusLastMonth
    };

    UserStatusObject(const UserStatus &core, QObject *parent = 0);
    UserStatusObject(QObject *parent = 0);
    virtual ~UserStatusObject();

    void setExpires(qint32 expires);
    qint32 expires() const;

    void setWasOnline(qint32 wasOnline);
    qint32 wasOnline() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const UserStatus &core);
    UserStatus core() const;

    UserStatusObject &operator =(const UserStatus &b);
    bool operator ==(const UserStatus &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void expiresChanged();
    void wasOnlineChanged();

private Q_SLOTS:

private:
    UserStatus m_core;
};

inline UserStatusObject::UserStatusObject(const UserStatus &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline UserStatusObject::UserStatusObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline UserStatusObject::~UserStatusObject() {
}

inline void UserStatusObject::setExpires(qint32 expires) {
    if(m_core.expires() == expires) return;
    m_core.setExpires(expires);
    Q_EMIT expiresChanged();
    Q_EMIT coreChanged();
}

inline qint32 UserStatusObject::expires() const {
    return m_core.expires();
}

inline void UserStatusObject::setWasOnline(qint32 wasOnline) {
    if(m_core.wasOnline() == wasOnline) return;
    m_core.setWasOnline(wasOnline);
    Q_EMIT wasOnlineChanged();
    Q_EMIT coreChanged();
}

inline qint32 UserStatusObject::wasOnline() const {
    return m_core.wasOnline();
}

inline UserStatusObject &UserStatusObject::operator =(const UserStatus &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT expiresChanged();
    Q_EMIT wasOnlineChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool UserStatusObject::operator ==(const UserStatus &b) const {
    return m_core == b;
}

inline void UserStatusObject::setClassType(quint32 classType) {
    UserStatus::UserStatusClassType result;
    switch(classType) {
    case TypeUserStatusEmpty:
        result = UserStatus::typeUserStatusEmpty;
        break;
    case TypeUserStatusOnline:
        result = UserStatus::typeUserStatusOnline;
        break;
    case TypeUserStatusOffline:
        result = UserStatus::typeUserStatusOffline;
        break;
    case TypeUserStatusRecently:
        result = UserStatus::typeUserStatusRecently;
        break;
    case TypeUserStatusLastWeek:
        result = UserStatus::typeUserStatusLastWeek;
        break;
    case TypeUserStatusLastMonth:
        result = UserStatus::typeUserStatusLastMonth;
        break;
    default:
        result = UserStatus::typeUserStatusEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 UserStatusObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UserStatus::typeUserStatusEmpty:
        result = TypeUserStatusEmpty;
        break;
    case UserStatus::typeUserStatusOnline:
        result = TypeUserStatusOnline;
        break;
    case UserStatus::typeUserStatusOffline:
        result = TypeUserStatusOffline;
        break;
    case UserStatus::typeUserStatusRecently:
        result = TypeUserStatusRecently;
        break;
    case UserStatus::typeUserStatusLastWeek:
        result = TypeUserStatusLastWeek;
        break;
    case UserStatus::typeUserStatusLastMonth:
        result = TypeUserStatusLastMonth;
        break;
    default:
        result = TypeUserStatusEmpty;
        break;
    }

    return result;
}

inline void UserStatusObject::setCore(const UserStatus &core) {
    operator =(core);
}

inline UserStatus UserStatusObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_USERSTATUS_OBJECT
